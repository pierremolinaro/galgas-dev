#include "all-declarations-18.h"
//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@assignmentInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_assignmentInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_assignmentInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 113)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@assignmentInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_assignmentInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GGS__5B_semanticInstructionForGeneration_5D_ & ioArgument_ioInstructionListForGeneration,
                                                                       GGS_localVarManager & ioArgument_ioVariableMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_receiverType_5104 ;
  {
  const GGS_assignmentInstructionAST temp_0 = this ;
  GGS_string joker_5118 ; // Joker input parameter
  GGS_string joker_5122 ; // Joker input parameter
  extensionSetter_neutralAccess (ioArgument_ioVariableMap, temp_0.readProperty_mTargetVariableName (), var_receiverType_5104, joker_5118, joker_5122, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 126)) ;
  }
  GGS_unifiedTypeMapEntry var_targetType_5134 = var_receiverType_5104 ;
  GGS_assignmentSupplementIR var_supplementIR_5192 ;
  const GGS_assignmentInstructionAST temp_1 = this ;
  switch (temp_1.readProperty_mSupplement ().enumValue ()) {
  case GGS_assignmentSupplementAST::Enumeration::invalid:
    break ;
  case GGS_assignmentSupplementAST::Enumeration::enum_none:
    {
      var_supplementIR_5192 = GGS_assignmentSupplementIR::class_func_none (SOURCE_FILE ("instruction-assignment.galgas4", 131)) ;
    }
    break ;
  case GGS_assignmentSupplementAST::Enumeration::enum_property:
    {
      GGS_lstring extractedValue_5295_propertyName_0 ;
      temp_1.readProperty_mSupplement ().getAssociatedValuesFor_property (extractedValue_5295_propertyName_0) ;
      var_supplementIR_5192 = GGS_assignmentSupplementIR::class_func_property (extractedValue_5295_propertyName_0.readProperty_string ()  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 133)) ;
      GGS_propertyMap var_propertyMap_5381 = extensionGetter_definition (var_targetType_5134, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 134)).readProperty_propertyMap () ;
      GGS_AccessControl var_accessControl_5477 ;
      GGS_bool var_isConstant_5497 ;
      var_propertyMap_5381.method_searchKey (extractedValue_5295_propertyName_0, var_accessControl_5477, var_isConstant_5497, var_targetType_5134, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 135)) ;
      extensionMethod_checkSetAccess (var_accessControl_5477, constinArgument_inAnalysisContext.readProperty_selfAvailability (), extractedValue_5295_propertyName_0.readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 136)) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = var_isConstant_5497.boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (extractedValue_5295_propertyName_0.readProperty_location (), GGS_string ("a constant property cannot be modified"), fixItArray3  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 138)) ;
        }
      }
    }
    break ;
  case GGS_assignmentSupplementAST::Enumeration::enum_subcript:
    {
      GGS__5B_actualOutputArgumentAST_5D_ extractedValue_5732_subcriptArgs_0 ;
      GGS_location extractedValue_5746_errorLocation_1 ;
      temp_1.readProperty_mSupplement ().getAssociatedValuesFor_subcript (extractedValue_5732_subcriptArgs_0, extractedValue_5746_errorLocation_1) ;
      GGS_writeSubcriptMap var_writeSubcriptMap_5773 = extensionGetter_definition (var_targetType_5134, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 141)).readProperty_writeSubscriptMap () ;
      GGS_lstring var_lkey_5842 = GGS_lstring::init_21__21_ (extensionGetter_subcriptSignature (extractedValue_5732_subcriptArgs_0, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 142)), extractedValue_5746_errorLocation_1, inCompiler COMMA_HERE) ;
      GGS__5B_functionSignatureElement_5D_ var_formalArgs_5951 ;
      var_writeSubcriptMap_5773.method_searchKey (var_lkey_5842, var_formalArgs_5951, var_targetType_5134, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 143)) ;
      GGS__5B_collectionValueElementForGeneration_5D_ var_expressionListForGeneration_6025 ;
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = GGS_bool (ComparisonKind::notEqual, extractedValue_5732_subcriptArgs_0.getter_count (SOURCE_FILE ("instruction-assignment.galgas4", 145)).objectCompare (var_formalArgs_5951.getter_count (SOURCE_FILE ("instruction-assignment.galgas4", 145)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          GenericArray <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (extractedValue_5746_errorLocation_1, var_formalArgs_5951.getter_count (SOURCE_FILE ("instruction-assignment.galgas4", 146)).getter_string (SOURCE_FILE ("instruction-assignment.galgas4", 146)).add_operation (GGS_string ("arguments are required"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 146)), fixItArray5  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 146)) ;
          var_expressionListForGeneration_6025.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_4) {
        GGS__5B_collectionValueElementForGeneration_5D_ temp_6 = GGS__5B_collectionValueElementForGeneration_5D_::init (inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 148)) ;
        var_expressionListForGeneration_6025 = temp_6 ;
        UpEnumerator__5B_actualOutputArgumentAST_5D_ enumerator_6299 (extractedValue_5732_subcriptArgs_0) ;
        UpEnumerator__5B_functionSignatureElement_5D_ enumerator_6323 (var_formalArgs_5951) ;
        while (enumerator_6299.hasCurrentObject () && enumerator_6323.hasCurrentObject ()) {
          GGS_semanticExpressionForGeneration var_expressionForGeneration_6664 ;
          callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_6299.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_6323.current (HERE).readProperty_mFormalArgumentType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expressionForGeneration_6664, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 150)) ;
          {
          routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_6323.current (HERE).readProperty_mFormalArgumentType (), var_expressionForGeneration_6664.readProperty_mResultType (), enumerator_6299.current (HERE).readProperty_mEndOfExpressionLocation (), var_expressionForGeneration_6664, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 160)) ;
          }
          var_expressionListForGeneration_6025.plusPlusAssignOperation (GGS_collectionValueElementForGeneration::init_21__21_ (var_expressionForGeneration_6664, enumerator_6299.current (HERE).readProperty_mEndOfExpressionLocation (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 166)) ;
          enumerator_6299.gotoNextObject () ;
          enumerator_6323.gotoNextObject () ;
        }
      }
      var_supplementIR_5192 = GGS_assignmentSupplementIR::class_func_subcript (var_expressionListForGeneration_6025, extensionGetter_subcriptSignature (extractedValue_5732_subcriptArgs_0, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 169))  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 169)) ;
    }
    break ;
  }
  GGS_semanticExpressionForGeneration var_expression_7581 ;
  const GGS_assignmentInstructionAST temp_7 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_7.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_5134, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_7581, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 172)) ;
  {
  const GGS_assignmentInstructionAST temp_8 = this ;
  routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_targetType_5134, var_expression_7581.readProperty_mResultType (), temp_8.readProperty_mInstructionLocation (), var_expression_7581, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 182)) ;
  }
  GGS_string var_targetVariableCppName_7840 ;
  GGS_string var_nameForCheckingFormalParameterUsing_7878 ;
  const GGS_assignmentInstructionAST temp_9 = this ;
  switch (temp_9.readProperty_mSupplement ().enumValue ()) {
  case GGS_assignmentSupplementAST::Enumeration::invalid:
    break ;
  case GGS_assignmentSupplementAST::Enumeration::enum_none:
    {
      {
      const GGS_assignmentInstructionAST temp_10 = this ;
      GGS_unifiedTypeMapEntry joker_8045 ; // Joker input parameter
      extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, temp_10.readProperty_mTargetVariableName (), joker_8045, var_targetVariableCppName_7840, var_nameForCheckingFormalParameterUsing_7878, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 193)) ;
      }
    }
    break ;
  case GGS_assignmentSupplementAST::Enumeration::enum_property:
    {
      GGS_lstring extractedValue_8153__0 ;
      temp_9.readProperty_mSupplement ().getAssociatedValuesFor_property (extractedValue_8153__0) ;
      {
      const GGS_assignmentInstructionAST temp_11 = this ;
      GGS_unifiedTypeMapEntry joker_8249 ; // Joker input parameter
      extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_11.readProperty_mTargetVariableName (), joker_8249, var_targetVariableCppName_7840, var_nameForCheckingFormalParameterUsing_7878, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 200)) ;
      }
    }
    break ;
  case GGS_assignmentSupplementAST::Enumeration::enum_subcript:
    {
      GGS__5B_actualOutputArgumentAST_5D_ extractedValue_8357__0 ;
      GGS_location extractedValue_8360__1 ;
      temp_9.readProperty_mSupplement ().getAssociatedValuesFor_subcript (extractedValue_8357__0, extractedValue_8360__1) ;
      {
      const GGS_assignmentInstructionAST temp_12 = this ;
      GGS_unifiedTypeMapEntry joker_8456 ; // Joker input parameter
      extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_12.readProperty_mTargetVariableName (), joker_8456, var_targetVariableCppName_7840, var_nameForCheckingFormalParameterUsing_7878, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 207)) ;
      }
    }
    break ;
  }
  const GGS_assignmentInstructionAST temp_13 = this ;
  ioArgument_ioInstructionListForGeneration.plusPlusAssignOperation (GGS_assignmentInstructionForGeneration::init_21__21__21__21__21__21__21_ (var_receiverType_5104, var_targetType_5134, var_targetVariableCppName_7840, var_nameForCheckingFormalParameterUsing_7878, var_supplementIR_5192, var_expression_7581, temp_13.readProperty_mTargetVariableName ().readProperty_location (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 215)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@selfPropertyAssignmentInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_selfPropertyAssignmentInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_selfPropertyAssignmentInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 242)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@selfPropertyAssignmentInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_selfPropertyAssignmentInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                   GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                   const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                   GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   GGS__5B_semanticInstructionForGeneration_5D_ & ioArgument_ioInstructionListForGeneration,
                                                                                   GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_selfAvailability_2E_available var_selfAvailable_10269 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-assignment.galgas4", 254)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-assignment.galgas4", 254)).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = extensionGetter_propertiesAreMutable (var_selfAvailable_10269.readProperty_selfMutability (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 255)).operator_not (SOURCE_FILE ("instruction-assignment.galgas4", 255)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          const GGS_selfPropertyAssignmentInstructionAST temp_2 = this ;
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("'self' property not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 256)) ;
        }
      }
      GGS_propertyMap var_propertyMap_10514 = extensionGetter_definition (var_selfAvailable_10269.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 258)).readProperty_propertyMap () ;
      GGS_bool var_isConstant_10638 ;
      GGS_unifiedTypeMapEntry var_targetType_10655 ;
      const GGS_selfPropertyAssignmentInstructionAST temp_4 = this ;
      GGS_AccessControl joker_10629 ; // Joker input parameter
      var_propertyMap_10514.method_searchKey (temp_4.readProperty_mTargetSelfPropertyName (), joker_10629, var_isConstant_10638, var_targetType_10655, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 259)) ;
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = var_isConstant_10638.operator_and (var_selfAvailable_10269.readProperty_selfMutability ().getter_isInitializer (SOURCE_FILE ("instruction-assignment.galgas4", 260)).operator_not (SOURCE_FILE ("instruction-assignment.galgas4", 260)) COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 260)).boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          const GGS_selfPropertyAssignmentInstructionAST temp_6 = this ;
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mTargetSelfPropertyName ().readProperty_location (), GGS_string ("a constant property cannot be modified"), fixItArray7  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 261)) ;
        }
      }
      const GGS_selfPropertyAssignmentInstructionAST temp_8 = this ;
      GGS_string var_targetVariableCppName_10847 = constinArgument_inAnalysisContext.readProperty_selfObjectCppPrefixForAccessingProperty ().add_operation (GGS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 263)).add_operation (temp_8.readProperty_mTargetSelfPropertyName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-assignment.galgas4", 264)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 264)) ;
      GGS_assignmentSupplementIR var_supplementIR_11084 ;
      const GGS_selfPropertyAssignmentInstructionAST temp_9 = this ;
      switch (temp_9.readProperty_mSupplement ().enumValue ()) {
      case GGS_assignmentSupplementAST::Enumeration::invalid:
        break ;
      case GGS_assignmentSupplementAST::Enumeration::enum_none:
        {
          var_supplementIR_11084 = GGS_assignmentSupplementIR::class_func_none (SOURCE_FILE ("instruction-assignment.galgas4", 269)) ;
        }
        break ;
      case GGS_assignmentSupplementAST::Enumeration::enum_property:
        {
          GGS_lstring extractedValue_11195_propertyName_0 ;
          temp_9.readProperty_mSupplement ().getAssociatedValuesFor_property (extractedValue_11195_propertyName_0) ;
          var_supplementIR_11084 = GGS_assignmentSupplementIR::class_func_property (extractedValue_11195_propertyName_0.readProperty_string ()  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 271)) ;
          GGS_propertyMap var_propertyMap_11285 = extensionGetter_definition (var_targetType_10655, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 272)).readProperty_propertyMap () ;
          GGS_AccessControl var_accessControl_11383 ;
          GGS_bool var_isConstant_11403 ;
          var_propertyMap_11285.method_searchKey (extractedValue_11195_propertyName_0, var_accessControl_11383, var_isConstant_11403, var_targetType_10655, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 273)) ;
          extensionMethod_checkSetAccess (var_accessControl_11383, constinArgument_inAnalysisContext.readProperty_selfAvailability (), extractedValue_11195_propertyName_0.readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 274)) ;
          GalgasBool test_10 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_10) {
            test_10 = var_isConstant_11403.boolEnum () ;
            if (GalgasBool::boolTrue == test_10) {
              GenericArray <FixItDescription> fixItArray11 ;
              inCompiler->emitSemanticError (extractedValue_11195_propertyName_0.readProperty_location (), GGS_string ("a constant property cannot be modified"), fixItArray11  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 276)) ;
            }
          }
        }
        break ;
      case GGS_assignmentSupplementAST::Enumeration::enum_subcript:
        {
          GGS__5B_actualOutputArgumentAST_5D_ extractedValue_11657_subcriptArgs_0 ;
          GGS_location extractedValue_11671_errorLocation_1 ;
          temp_9.readProperty_mSupplement ().getAssociatedValuesFor_subcript (extractedValue_11657_subcriptArgs_0, extractedValue_11671_errorLocation_1) ;
          GGS_writeSubcriptMap var_writeSubcriptMap_11700 = extensionGetter_definition (var_targetType_10655, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 279)).readProperty_writeSubscriptMap () ;
          GGS_lstring var_lkey_11771 = GGS_lstring::init_21__21_ (extensionGetter_subcriptSignature (extractedValue_11657_subcriptArgs_0, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 280)), extractedValue_11671_errorLocation_1, inCompiler COMMA_HERE) ;
          GGS__5B_functionSignatureElement_5D_ var_formalArgs_11882 ;
          var_writeSubcriptMap_11700.method_searchKey (var_lkey_11771, var_formalArgs_11882, var_targetType_10655, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 281)) ;
          GGS__5B_collectionValueElementForGeneration_5D_ var_expressionListForGeneration_11958 ;
          GalgasBool test_12 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_12) {
            test_12 = GGS_bool (ComparisonKind::notEqual, extractedValue_11657_subcriptArgs_0.getter_count (SOURCE_FILE ("instruction-assignment.galgas4", 283)).objectCompare (var_formalArgs_11882.getter_count (SOURCE_FILE ("instruction-assignment.galgas4", 283)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_12) {
              GenericArray <FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (extractedValue_11671_errorLocation_1, var_formalArgs_11882.getter_count (SOURCE_FILE ("instruction-assignment.galgas4", 284)).getter_string (SOURCE_FILE ("instruction-assignment.galgas4", 284)).add_operation (GGS_string ("arguments are required"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 284)), fixItArray13  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 284)) ;
              var_expressionListForGeneration_11958.drop () ; // Release error dropped variable
            }
          }
          if (GalgasBool::boolFalse == test_12) {
            GGS__5B_collectionValueElementForGeneration_5D_ temp_14 = GGS__5B_collectionValueElementForGeneration_5D_::init (inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 286)) ;
            var_expressionListForGeneration_11958 = temp_14 ;
            UpEnumerator__5B_actualOutputArgumentAST_5D_ enumerator_12242 (extractedValue_11657_subcriptArgs_0) ;
            UpEnumerator__5B_functionSignatureElement_5D_ enumerator_12266 (var_formalArgs_11882) ;
            while (enumerator_12242.hasCurrentObject () && enumerator_12266.hasCurrentObject ()) {
              GGS_semanticExpressionForGeneration var_expressionForGeneration_12623 ;
              callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_12242.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_12266.current (HERE).readProperty_mFormalArgumentType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expressionForGeneration_12623, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 288)) ;
              {
              routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_12266.current (HERE).readProperty_mFormalArgumentType (), var_expressionForGeneration_12623.readProperty_mResultType (), enumerator_12242.current (HERE).readProperty_mEndOfExpressionLocation (), var_expressionForGeneration_12623, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 298)) ;
              }
              var_expressionListForGeneration_11958.plusPlusAssignOperation (GGS_collectionValueElementForGeneration::init_21__21_ (var_expressionForGeneration_12623, enumerator_12242.current (HERE).readProperty_mEndOfExpressionLocation (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 304)) ;
              enumerator_12242.gotoNextObject () ;
              enumerator_12266.gotoNextObject () ;
            }
          }
          var_supplementIR_11084 = GGS_assignmentSupplementIR::class_func_subcript (var_expressionListForGeneration_11958, extensionGetter_subcriptSignature (extractedValue_11657_subcriptArgs_0, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 307))  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 307)) ;
        }
        break ;
      }
      GGS_semanticExpressionForGeneration var_expression_13583 ;
      const GGS_selfPropertyAssignmentInstructionAST temp_15 = this ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_15.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_10655, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_13583, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 310)) ;
      {
      const GGS_selfPropertyAssignmentInstructionAST temp_16 = this ;
      const GGS_selfPropertyAssignmentInstructionAST temp_17 = this ;
      GGS_unifiedTypeMapEntry joker_13737_3 ; // Joker input parameter
      GGS_string joker_13737_2 ; // Joker input parameter
      GGS_string joker_13737_1 ; // Joker input parameter
      extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, GGS_lstring::init_21__21_ (GGS_string ("self.").add_operation (temp_16.readProperty_mTargetSelfPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 321)), temp_17.readProperty_mTargetSelfPropertyName ().readProperty_location (), inCompiler COMMA_HERE), joker_13737_3, joker_13737_2, joker_13737_1, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 320)) ;
      }
      {
      const GGS_selfPropertyAssignmentInstructionAST temp_18 = this ;
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_targetType_10655, var_expression_13583.readProperty_mResultType (), temp_18.readProperty_mInstructionLocation (), var_expression_13583, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 324)) ;
      }
      const GGS_selfPropertyAssignmentInstructionAST temp_19 = this ;
      ioArgument_ioInstructionListForGeneration.plusPlusAssignOperation (GGS_assignmentInstructionForGeneration::init_21__21__21__21__21__21__21_ (var_selfAvailable_10269.readProperty_type (), var_targetType_10655, var_targetVariableCppName_10847, constinArgument_inAnalysisContext.readProperty_selfObjectCppName (), var_supplementIR_11084, var_expression_13583, temp_19.readProperty_mTargetSelfPropertyName ().readProperty_location (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 326)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_selfPropertyAssignmentInstructionAST temp_20 = this ;
    GenericArray <FixItDescription> fixItArray21 ;
    inCompiler->emitSemanticError (temp_20.readProperty_mInstructionLocation (), GGS_string ("'self' not available in this context"), fixItArray21  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 336)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@assignmentInstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_assignmentInstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                          GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                          GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                          const GGS_bool /* constinArgument__5F_inGenerateSyntaxDirectedTranslationString */,
                                                                          GGS_string & ioArgument_ioGeneratedCode,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_sourceVar_16054 ;
  const GGS_assignmentInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_16054, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 372)) ;
  {
  const GGS_assignmentInstructionForGeneration temp_1 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_1.readProperty_mNameForCheckingFormalParameterUsing () COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 379)) ;
  }
  const GGS_assignmentInstructionForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mTargetType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 381)) ;
  const GGS_assignmentInstructionForGeneration temp_3 = this ;
  switch (temp_3.readProperty_mSupplement ().enumValue ()) {
  case GGS_assignmentSupplementIR::Enumeration::invalid:
    break ;
  case GGS_assignmentSupplementIR::Enumeration::enum_none:
    {
      const GGS_assignmentInstructionForGeneration temp_4 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(temp_4.readProperty_mTargetCppName ().add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 384)).add_operation (var_sourceVar_16054, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 384)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 384)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 384)) ;
    }
    break ;
  case GGS_assignmentSupplementIR::Enumeration::enum_property:
    {
      GGS_string extractedValue_16360_propertyName_0 ;
      temp_3.readProperty_mSupplement ().getAssociatedValuesFor_property (extractedValue_16360_propertyName_0) ;
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        const GGS_assignmentInstructionForGeneration temp_6 = this ;
        test_5 = extensionGetter_definition (temp_6.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 386)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("instruction-assignment.galgas4", 386)).boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          const GGS_assignmentInstructionForGeneration temp_7 = this ;
          ioArgument_ioGeneratedCode.plusAssignOperation(temp_7.readProperty_mTargetCppName ().add_operation (GGS_string (".setProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 387)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 387)) ;
          ioArgument_ioGeneratedCode.plusAssignOperation(extractedValue_16360_propertyName_0.getter_identifierRepresentation (SOURCE_FILE ("instruction-assignment.galgas4", 388)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 388)) ;
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" (").add_operation (var_sourceVar_16054, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 389)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 389)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 389)) ;
        }
      }
      if (GalgasBool::boolFalse == test_5) {
        const GGS_assignmentInstructionForGeneration temp_8 = this ;
        ioArgument_ioGeneratedCode.plusAssignOperation(temp_8.readProperty_mTargetCppName ().add_operation (GGS_string (".mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 391)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 391)) ;
        ioArgument_ioGeneratedCode.plusAssignOperation(extractedValue_16360_propertyName_0.getter_identifierRepresentation (SOURCE_FILE ("instruction-assignment.galgas4", 392)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 392)) ;
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" = ").add_operation (var_sourceVar_16054, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 393)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 393)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 393)) ;
      }
    }
    break ;
  case GGS_assignmentSupplementIR::Enumeration::enum_subcript:
    {
      GGS__5B_collectionValueElementForGeneration_5D_ extractedValue_16847_expressions_0 ;
      GGS_string extractedValue_16860_subcriptSignature_1 ;
      temp_3.readProperty_mSupplement ().getAssociatedValuesFor_subcript (extractedValue_16847_expressions_0, extractedValue_16860_subcriptSignature_1) ;
      GGS__5B_string_5D_ temp_9 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 396)) ;
      GGS__5B_string_5D_ var_cppVarNameList_16901 = temp_9 ;
      UpEnumerator__5B_collectionValueElementForGeneration_5D_ enumerator_16938 (extractedValue_16847_expressions_0) ;
      while (enumerator_16938.hasCurrentObject ()) {
        GGS_string var_cppVarName_17147 ;
        callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_16938.current (HERE).readProperty_expression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_cppVarName_17147, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 398)) ;
        var_cppVarNameList_16901.plusPlusAssignOperation (var_cppVarName_17147  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 405)) ;
        enumerator_16938.gotoNextObject () ;
      }
      var_cppVarNameList_16901.plusPlusAssignOperation (var_sourceVar_16054  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 407)) ;
      const GGS_assignmentInstructionForGeneration temp_10 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(temp_10.readProperty_mTargetCppName ().add_operation (GGS_string (".writeSubcript_"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 408)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 408)) ;
      ioArgument_ioGeneratedCode.plusAssignOperation(extractedValue_16860_subcriptSignature_1.getter_identifierRepresentation (SOURCE_FILE ("instruction-assignment.galgas4", 409)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 409)) ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 410)) ;
      UpEnumerator__5B_string_5D_ enumerator_17434 (var_cppVarNameList_16901) ;
      while (enumerator_17434.hasCurrentObject ()) {
        ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_17434.current (HERE).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 412)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 412)) ;
        enumerator_17434.gotoNextObject () ;
      }
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 414)) ;
      }
      ioArgument_ioGeneratedCode.plusAssignOperation(function_gCompilerCppName (inCompiler COMMA_HERE).add_operation (GGS_string (" COMMA_HERE) ; \n"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 415)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 415)) ;
    }
    break ;
  }
  {
  const GGS_assignmentInstructionForGeneration temp_11 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_11.readProperty_mTargetCppName () COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 417)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexiqueComponentAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexiqueComponentAST::getter_keyRepresentation (Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_lexiqueComponentAST temp_0 = this ;
  result = GGS_string ("lexique ").add_operation (temp_0.readProperty_mLexiqueComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 383)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexiqueComponentAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueComponentAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                               GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                               GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                               GGS_extensionMethodMapForBuildingContext & /* ioArgument__5F_ioExtensionMethodMapForBuildingContext */,
                                                               GGS_extensionGetterMapForBuildingContext & /* ioArgument__5F_ioExtensionGetterMapForBuildingContext */,
                                                               GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                               GGS__5B_semanticDeclarationAST_5D_ & /* ioArgument__5F_ioExtensionOverrideDefinitionList */,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexiqueComponentAST temp_0 = this ;
  const GGS_lexiqueComponentAST temp_1 = this ;
  GGS_lstring var_key_14727 = GGS_lstring::init_21__21_ (GGS_string ("lexique ").add_operation (temp_0.readProperty_mLexiqueComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 396)), temp_1.readProperty_mLexiqueComponentName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_lexiqueComponentAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_14727, temp_2, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 397)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexiqueComponentAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueComponentAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                         const GGS_extensionInitializerForBuildingContext /* constinArgument__5F_inExtensionInitializerMapForBuildingContext */,
                                                                         const GGS_extensionMethodMapForBuildingContext /* constinArgument__5F_inExtensionMethodMapForBuildingContext */,
                                                                         const GGS_extensionGetterMapForBuildingContext /* constinArgument__5F_inExtensionGetterMapForBuildingContext */,
                                                                         const GGS_extensionSetterMapForBuildingContext /* constinArgument__5F_inExtensionSetterMapForBuildingContext */,
                                                                         GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                         GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalTypeMap var_lexicalTypeMap_15619 = function_gLexicalTypeMap (inCompiler COMMA_HERE) ;
  GGS_lexicalAttributeMap var_lexicalAttributeMap_15681 = GGS_lexicalAttributeMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_lexiqueComponentAST temp_0 = this ;
  routine_buildLexicalAttributeMap_3F__3F__26_ (var_lexicalTypeMap_15619, temp_0.readProperty_mLexicalAttributeListAST (), var_lexicalAttributeMap_15681, inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas4", 413)) ;
  }
  GGS_terminalMap var_terminalMap_15892 = GGS_terminalMap::init (inCompiler COMMA_HERE) ;
  const GGS_lexiqueComponentAST temp_1 = this ;
  UpEnumerator__5B_terminalDeclarationAST_5D_ enumerator_15935 (temp_1.readProperty_mTerminalDeclarationListAST ()) ;
  while (enumerator_15935.hasCurrentObject ()) {
    GGS__5B_lexicalSentValue_5D_ var_argumentTypeList_15976 = GGS__5B_lexicalSentValue_5D_::init (inCompiler COMMA_HERE) ;
    UpEnumerator__5B_sentLexicalAttributeAST_5D_ enumerator_16046 (enumerator_15935.current (HERE).readProperty_mSentAttributeList ()) ;
    while (enumerator_16046.hasCurrentObject ()) {
      GGS_lexicalTypeEnum var_attributeLexicalType_16134 ;
      var_lexicalAttributeMap_15681.method_searchKey (enumerator_16046.current (HERE).readProperty_mAttributeName (), var_attributeLexicalType_16134, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 423)) ;
      var_argumentTypeList_15976.plusPlusAssignOperation (GGS_lexicalSentValue::init_21__21__21_ (enumerator_16046.current (HERE).readProperty_mFormalSelector (), enumerator_16046.current (HERE).readProperty_mAttributeName ().readProperty_string (), var_attributeLexicalType_16134, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas4", 424)) ;
      enumerator_16046.gotoNextObject () ;
    }
    {
    var_terminalMap_15892.setter_insertKey (enumerator_15935.current (HERE).readProperty_mName (), var_argumentTypeList_15976, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 426)) ;
    }
    enumerator_15935.gotoNextObject () ;
  }
  const GGS_lexiqueComponentAST temp_2 = this ;
  UpEnumerator__5B_lexicalListDeclarationAST_5D_ enumerator_16380 (temp_2.readProperty_mLexicalListDeclarationListAST ()) ;
  while (enumerator_16380.hasCurrentObject ()) {
    GGS__5B_lexicalSentValue_5D_ var_argumentTypeList_16424 = GGS__5B_lexicalSentValue_5D_::init (inCompiler COMMA_HERE) ;
    UpEnumerator__5B_sentLexicalAttributeAST_5D_ enumerator_16497 (enumerator_16380.current (HERE).readProperty_mSentAttributeList ()) ;
    while (enumerator_16497.hasCurrentObject ()) {
      GGS_lexicalTypeEnum var_attributeLexicalType_16585 ;
      var_lexicalAttributeMap_15681.method_searchKey (enumerator_16497.current (HERE).readProperty_mAttributeName (), var_attributeLexicalType_16585, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 432)) ;
      var_argumentTypeList_16424.plusPlusAssignOperation (GGS_lexicalSentValue::init_21__21__21_ (enumerator_16497.current (HERE).readProperty_mFormalSelector (), enumerator_16497.current (HERE).readProperty_mAttributeName ().readProperty_string (), var_attributeLexicalType_16585, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas4", 433)) ;
      enumerator_16497.gotoNextObject () ;
    }
    UpEnumerator__5B_lexicalListEntryAST_5D_ enumerator_16753 (enumerator_16380.current (HERE).readProperty_mEntryList ()) ;
    while (enumerator_16753.hasCurrentObject ()) {
      {
      var_terminalMap_15892.setter_insertKey (enumerator_16753.current (HERE).readProperty_mTerminalSpelling (), var_argumentTypeList_16424, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 436)) ;
      }
      enumerator_16753.gotoNextObject () ;
    }
    enumerator_16380.gotoNextObject () ;
  }
  {
  const GGS_lexiqueComponentAST temp_3 = this ;
  const GGS_lexiqueComponentAST temp_4 = this ;
  const GGS_lexiqueComponentAST temp_5 = this ;
  const GGS_lexiqueComponentAST temp_6 = this ;
  const GGS_lexiqueComponentAST temp_7 = this ;
  const GGS_lexiqueComponentAST temp_8 = this ;
  ioArgument_ioSemanticContext.mProperty_mLexiqueComponentMapForSemanticAnalysis.setter_insertKey (temp_3.readProperty_mLexiqueComponentName (), temp_4.readProperty_mIsTemplate (), var_terminalMap_15892, temp_5.readProperty_mIndexingListAST (), temp_6.readProperty_mTerminalDeclarationListAST (), temp_7.readProperty_mLexicalAttributeListAST (), temp_8.readProperty_mLexicalListDeclarationListAST (), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 440)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexiqueComponentAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueComponentAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & /* ioArgument__5F_ioUsefulnessRootEntities */,
                                                        GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                        const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                        const GGS_semanticContext constinArgument_inSemanticContext,
                                                        GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                        const GGS_predefinedTypes /* constinArgument__5F_inPredefinedTypes */,
                                                        GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexiqueComponentAST temp_0 = this ;
  GGS_lstring var_nameForUsefulness_17989 = function_lexiqueNameForUsefulEntitiesGraph (temp_0.readProperty_mLexiqueComponentName (), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 463)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_17989, var_nameForUsefulness_17989, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 464)) ;
  }
  GGS_lexicalTypeMap var_lexicalTypeMap_18246 = function_gLexicalTypeMap (inCompiler COMMA_HERE) ;
  GGS_lexicalRoutineMap var_lexicalRoutineMap_18381 ;
  {
  routine_buildLexicalRoutineMap_21_ (var_lexicalRoutineMap_18381, inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas4", 468)) ;
  }
  GGS_lexicalFunctionMap var_lexicalFunctionMap_18504 ;
  {
  routine_buildLexicalFunctionMap_21_ (var_lexicalFunctionMap_18504, inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas4", 470)) ;
  }
  GGS_stringset var_unicodeTestFunctions_18635 ;
  {
  routine_lexicalUnicodeTestFunctionAnalysis_21_ (var_unicodeTestFunctions_18635, inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas4", 472)) ;
  }
  const GGS_lexiqueComponentAST temp_1 = this ;
  GGS_lexiqueAnalysisContext var_lexiqueAnalysisContext_18732 = GGS_lexiqueAnalysisContext::init_21__21__21__21__21__21__21__21__21__21__21_ (temp_1.readProperty_mLexiqueComponentName ().readProperty_string (), var_lexicalRoutineMap_18381, var_lexicalFunctionMap_18504, GGS_lexicalMessageMap::init (inCompiler COMMA_HERE), GGS_terminalMap::init (inCompiler COMMA_HERE), GGS__5B_terminalAST_5D_::init (inCompiler COMMA_HERE), GGS_lexicalAttributeMap::init (inCompiler COMMA_HERE), GGS_lexicalExplicitTokenListMapMap::init (inCompiler COMMA_HERE), GGS_stringset::init (inCompiler COMMA_HERE), GGS__5B_templateDelimitorAST_5D_::init (inCompiler COMMA_HERE), var_unicodeTestFunctions_18635, inCompiler COMMA_HERE) ;
  {
  const GGS_lexiqueComponentAST temp_2 = this ;
  routine_buildLexicalAttributeMap_3F__3F__26_ (var_lexicalTypeMap_18246, temp_2.readProperty_mLexicalAttributeListAST (), var_lexiqueAnalysisContext_18732.mProperty_mLexicalAttributeMap, inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas4", 489)) ;
  }
  const GGS_lexiqueComponentAST temp_3 = this ;
  UpEnumerator__5B_terminalDeclarationAST_5D_ enumerator_19384 (temp_3.readProperty_mTerminalDeclarationListAST ()) ;
  while (enumerator_19384.hasCurrentObject ()) {
    GGS_u_33__32_ var_terminalStyleIndex_19430 = GGS_u_33__32_ (uint32_t (0U)) ;
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::greaterThan, enumerator_19384.current (HERE).readProperty_mStyle ().readProperty_string ().getter_count (SOURCE_FILE ("lexique-component.galgas4", 497)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        GGS_lstring joker_19583 ; // Joker input parameter
        constinArgument_inSemanticContext.readProperty_projectSettings ().readProperty_lexicalStyleMap ().method_search (enumerator_19384.current (HERE).readProperty_mStyle (), joker_19583, var_terminalStyleIndex_19430, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 498)) ;
      }
    }
    GGS__5B_lexicalSentValue_5D_ var_argumentTypeList_19628 = GGS__5B_lexicalSentValue_5D_::init (inCompiler COMMA_HERE) ;
    UpEnumerator__5B_sentLexicalAttributeAST_5D_ enumerator_19702 (enumerator_19384.current (HERE).readProperty_mSentAttributeList ()) ;
    while (enumerator_19702.hasCurrentObject ()) {
      GGS_lexicalTypeEnum var_attributeLexicalType_19818 ;
      var_lexiqueAnalysisContext_18732.readProperty_mLexicalAttributeMap ().method_searchKey (enumerator_19702.current (HERE).readProperty_mAttributeName (), var_attributeLexicalType_19818, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 502)) ;
      var_argumentTypeList_19628.plusPlusAssignOperation (GGS_lexicalSentValue::init_21__21__21_ (enumerator_19702.current (HERE).readProperty_mFormalSelector (), enumerator_19702.current (HERE).readProperty_mAttributeName ().readProperty_string (), var_attributeLexicalType_19818, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas4", 503)) ;
      enumerator_19702.gotoNextObject () ;
    }
    {
    var_lexiqueAnalysisContext_18732.mProperty_mTerminalMap.setter_insertKey (enumerator_19384.current (HERE).readProperty_mName (), var_argumentTypeList_19628, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 505)) ;
    }
    var_lexiqueAnalysisContext_18732.mProperty_mTerminalList.plusPlusAssignOperation (GGS_terminalAST::init_21__21__21__21_isEndOfTemplateMark_21_atomicSelection_21_ (enumerator_19384.current (HERE).readProperty_mName (), var_argumentTypeList_19628, enumerator_19384.current (HERE).readProperty_mSyntaxErrorMessage ().readProperty_string (), enumerator_19384.current (HERE).readProperty_isEndOfTemplateMark (), enumerator_19384.current (HERE).readProperty_nonAtomicSelection ().operator_not (SOURCE_FILE ("lexique-component.galgas4", 511)), var_terminalStyleIndex_19430, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas4", 506)) ;
    enumerator_19384.gotoNextObject () ;
  }
  const GGS_lexiqueComponentAST temp_5 = this ;
  UpEnumerator__5B_lexicalListDeclarationAST_5D_ enumerator_20384 (temp_5.readProperty_mLexicalListDeclarationListAST ()) ;
  while (enumerator_20384.hasCurrentObject ()) {
    GGS_u_33__32_ var_terminalStyleIndex_20433 = GGS_u_33__32_ (uint32_t (0U)) ;
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      test_6 = GGS_bool (ComparisonKind::greaterThan, enumerator_20384.current (HERE).readProperty_mStyle ().readProperty_string ().getter_count (SOURCE_FILE ("lexique-component.galgas4", 517)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        GGS_lstring joker_20586 ; // Joker input parameter
        constinArgument_inSemanticContext.readProperty_projectSettings ().readProperty_lexicalStyleMap ().method_search (enumerator_20384.current (HERE).readProperty_mStyle (), joker_20586, var_terminalStyleIndex_20433, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 518)) ;
      }
    }
    GGS__5B_lexicalSentValue_5D_ var_argumentTypeList_20631 = GGS__5B_lexicalSentValue_5D_::init (inCompiler COMMA_HERE) ;
    UpEnumerator__5B_sentLexicalAttributeAST_5D_ enumerator_20705 (enumerator_20384.current (HERE).readProperty_mSentAttributeList ()) ;
    while (enumerator_20705.hasCurrentObject ()) {
      GGS_lexicalTypeEnum var_attributeLexicalType_20821 ;
      var_lexiqueAnalysisContext_18732.readProperty_mLexicalAttributeMap ().method_searchKey (enumerator_20705.current (HERE).readProperty_mAttributeName (), var_attributeLexicalType_20821, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 522)) ;
      var_argumentTypeList_20631.plusPlusAssignOperation (GGS_lexicalSentValue::init_21__21__21_ (enumerator_20705.current (HERE).readProperty_mFormalSelector (), enumerator_20705.current (HERE).readProperty_mAttributeName ().readProperty_string (), var_attributeLexicalType_20821, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas4", 523)) ;
      enumerator_20705.gotoNextObject () ;
    }
    GGS_lexicalExplicitTokenListMap var_lexicalTokenListMap_21005 = GGS_lexicalExplicitTokenListMap::init (inCompiler COMMA_HERE) ;
    GGS_sortedTokenArray var_tokenSortedlist_21041 = GGS_sortedTokenArray::init (inCompiler COMMA_HERE) ;
    UpEnumerator__5B_lexicalListEntryAST_5D_ enumerator_21108 (enumerator_20384.current (HERE).readProperty_mEntryList ()) ;
    while (enumerator_21108.hasCurrentObject ()) {
      GGS_string var_syntaxErrorMessage_21134 = enumerator_20384.current (HERE).readProperty_mSyntaxErrorMessage ().readProperty_string ().getter_replacing (GGS_string ("%K"), enumerator_21108.current (HERE).readProperty_mTerminalSpelling ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 528)) ;
      var_lexiqueAnalysisContext_18732.mProperty_mTerminalList.plusPlusAssignOperation (GGS_terminalAST::init_21__21__21__21_isEndOfTemplateMark_21_atomicSelection_21_ (enumerator_21108.current (HERE).readProperty_mTerminalSpelling (), var_argumentTypeList_20631, var_syntaxErrorMessage_21134, enumerator_21108.current (HERE).readProperty_isEndOfTemplateMark (), enumerator_21108.current (HERE).readProperty_nonAtomicSelection ().operator_not (SOURCE_FILE ("lexique-component.galgas4", 534)), var_terminalStyleIndex_20433, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas4", 529)) ;
      {
      var_lexiqueAnalysisContext_18732.mProperty_mTerminalMap.setter_insertKey (enumerator_21108.current (HERE).readProperty_mTerminalSpelling (), var_argumentTypeList_20631, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 537)) ;
      }
      {
      var_lexicalTokenListMap_21005.setter_insertKey (enumerator_21108.current (HERE).readProperty_mEntrySpelling (), enumerator_21108.current (HERE).readProperty_mTerminalSpelling (), enumerator_21108.current (HERE).readProperty_nonAtomicSelection (), enumerator_21108.current (HERE).readProperty_isEndOfTemplateMark (), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 538)) ;
      }
      var_tokenSortedlist_21041.plusPlusAssignOperation (GGS_sortedToken::init_21__21__21_ (enumerator_21108.current (HERE).readProperty_mEntrySpelling ().readProperty_string ().getter_count (SOURCE_FILE ("lexique-component.galgas4", 544)), enumerator_21108.current (HERE).readProperty_mEntrySpelling ().readProperty_string (), enumerator_21108.current (HERE).readProperty_mTerminalSpelling ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas4", 544)) ;
      var_lexiqueAnalysisContext_18732.mProperty_mUnicodeStringToGenerate.plusPlusAssignOperation (enumerator_21108.current (HERE).readProperty_mEntrySpelling ().readProperty_string ()  COMMA_SOURCE_FILE ("lexique-component.galgas4", 545)) ;
      enumerator_21108.gotoNextObject () ;
    }
    {
    var_lexiqueAnalysisContext_18732.mProperty_mLexicalTokenListMap.setter_insertKey (enumerator_20384.current (HERE).readProperty_mName (), var_lexicalTokenListMap_21005, var_tokenSortedlist_21041, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 547)) ;
    }
    enumerator_20384.gotoNextObject () ;
  }
  const GGS_lexiqueComponentAST temp_7 = this ;
  UpEnumerator__5B_lexicalMessageDeclarationAST_5D_ enumerator_22325 (temp_7.readProperty_mLexicalMessageDeclarationListAST ()) ;
  while (enumerator_22325.hasCurrentObject ()) {
    {
    var_lexiqueAnalysisContext_18732.mProperty_mLexicalMessageMap.setter_insertKey (enumerator_22325.current (HERE).readProperty_mMessageName (), enumerator_22325.current (HERE).readProperty_mMessageValue (), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 551)) ;
    }
    enumerator_22325.gotoNextObject () ;
  }
  const GGS_lexiqueComponentAST temp_8 = this ;
  UpEnumerator__5B_abstractLexicalRuleAST_5D_ enumerator_22574 (temp_8.readProperty_mLexicalRuleListAST ()) ;
  while (enumerator_22574.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalRule ((cPtr_abstractLexicalRuleAST *) enumerator_22574.current (HERE).ptr (), var_lexiqueAnalysisContext_18732, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 555)) ;
    enumerator_22574.gotoNextObject () ;
  }
  UpEnumerator_lexicalMessageMap enumerator_22769 (var_lexiqueAnalysisContext_18732.readProperty_mLexicalMessageMap ()) ;
  while (enumerator_22769.hasCurrentObject ()) {
    GalgasBool test_9 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_9) {
      test_9 = enumerator_22769.current (HERE).readProperty_mMessageIsUsed ().operator_not (SOURCE_FILE ("lexique-component.galgas4", 559)).boolEnum () ;
      if (GalgasBool::boolTrue == test_9) {
        GenericArray <FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticWarning (enumerator_22769.current (HERE).readProperty_lkey ().readProperty_location (), GGS_string ("unused message"), fixItArray10  COMMA_SOURCE_FILE ("lexique-component.galgas4", 560)) ;
      }
    }
    enumerator_22769.gotoNextObject () ;
  }
  const GGS_lexiqueComponentAST temp_11 = this ;
  UpEnumerator__5B_templateDelimitor_32_AST_5D_ enumerator_22989 (temp_11.readProperty_mTemplateDelimitorListAST ()) ;
  while (enumerator_22989.hasCurrentObject ()) {
    var_lexiqueAnalysisContext_18732.mProperty_mUnicodeStringToGenerate.plusPlusAssignOperation (enumerator_22989.current (HERE).readProperty_mStartString ().readProperty_string ()  COMMA_SOURCE_FILE ("lexique-component.galgas4", 565)) ;
    var_lexiqueAnalysisContext_18732.mProperty_mUnicodeStringToGenerate.plusPlusAssignOperation (enumerator_22989.current (HERE).readProperty_mEndString ().readProperty_string ()  COMMA_SOURCE_FILE ("lexique-component.galgas4", 566)) ;
    var_lexiqueAnalysisContext_18732.mProperty_mTemplateDelimitorList.plusPlusAssignOperation (GGS_templateDelimitorAST::init_21__21__21_ (enumerator_22989.current (HERE).readProperty_mStartString (), enumerator_22989.current (HERE).readProperty_mEndString (), enumerator_22989.current (HERE).readProperty_mPreserved (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas4", 567)) ;
    enumerator_22989.gotoNextObject () ;
  }
  GGS_stringset var_indexNameSet_23382 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  const GGS_lexiqueComponentAST temp_12 = this ;
  UpEnumerator__5B_indexingAST_5D_ enumerator_23423 (temp_12.readProperty_mIndexingListAST ()) ;
  while (enumerator_23423.hasCurrentObject ()) {
    GalgasBool test_13 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_13) {
      test_13 = var_indexNameSet_23382.getter_contains (enumerator_23423.current (HERE).readProperty_mIndexName ().readProperty_string () COMMA_SOURCE_FILE ("lexique-component.galgas4", 571)).boolEnum () ;
      if (GalgasBool::boolTrue == test_13) {
        GenericArray <FixItDescription> fixItArray14 ;
        inCompiler->emitSemanticError (enumerator_23423.current (HERE).readProperty_mIndexName ().readProperty_location (), GGS_string ("the '").add_operation (enumerator_23423.current (HERE).readProperty_mIndexName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 572)).add_operation (GGS_string ("' index is already declared"), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 572)), fixItArray14  COMMA_SOURCE_FILE ("lexique-component.galgas4", 572)) ;
      }
    }
    var_indexNameSet_23382.plusPlusAssignOperation (enumerator_23423.current (HERE).readProperty_mIndexName ().readProperty_string ()  COMMA_SOURCE_FILE ("lexique-component.galgas4", 574)) ;
    enumerator_23423.gotoNextObject () ;
  }
  const GGS_lexiqueComponentAST temp_15 = this ;
  UpEnumerator__5B_templateReplacementAST_5D_ enumerator_23749 (temp_15.readProperty_mTemplateReplacementListAST ()) ;
  while (enumerator_23749.hasCurrentObject ()) {
    var_lexiqueAnalysisContext_18732.mProperty_mUnicodeStringToGenerate.plusPlusAssignOperation (enumerator_23749.current (HERE).readProperty_mMatchString ().readProperty_string ()  COMMA_SOURCE_FILE ("lexique-component.galgas4", 578)) ;
    var_lexiqueAnalysisContext_18732.mProperty_mUnicodeStringToGenerate.plusPlusAssignOperation (enumerator_23749.current (HERE).readProperty_mReplacementString ().readProperty_string ()  COMMA_SOURCE_FILE ("lexique-component.galgas4", 579)) ;
    enumerator_23749.gotoNextObject () ;
  }
  GalgasBool test_16 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_16) {
    test_16 = GGS_bool (ComparisonKind::equal, GGS_application::class_func_errorCount (SOURCE_FILE ("lexique-component.galgas4", 583)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_16) {
      const GGS_lexiqueComponentAST temp_17 = this ;
      const GGS_lexiqueComponentAST temp_18 = this ;
      const GGS_lexiqueComponentAST temp_19 = this ;
      const GGS_lexiqueComponentAST temp_20 = this ;
      GGS_string var_headerContents_24143 = GGS_lexiqueGenerationTemplates::class_func_headerZone_32_ (temp_17.readProperty_mLexiqueComponentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-component.galgas4", 586)), temp_18.readProperty_mLexicalListDeclarationListAST (), var_lexiqueAnalysisContext_18732, temp_19.readProperty_mTemplateDelimitorListAST (), temp_20.readProperty_mIndexingListAST (), inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas4", 585)) ;
      const GGS_lexiqueComponentAST temp_21 = this ;
      const GGS_lexiqueComponentAST temp_22 = this ;
      const GGS_lexiqueComponentAST temp_23 = this ;
      const GGS_lexiqueComponentAST temp_24 = this ;
      const GGS_lexiqueComponentAST temp_25 = this ;
      const GGS_lexiqueComponentAST temp_26 = this ;
      GGS_string var_cppContents_24449 = GGS_lexiqueGenerationTemplates::class_func_implementationZone_32_Galgas_33_ (temp_21.readProperty_mLexiqueComponentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-component.galgas4", 594)), extensionGetter_useLoopLocalVar (temp_22.readProperty_mLexicalRuleListAST (), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 595)), var_lexiqueAnalysisContext_18732.readProperty_mLexicalAttributeMap (), var_lexiqueAnalysisContext_18732.readProperty_mLexicalMessageMap (), var_lexiqueAnalysisContext_18732.readProperty_mTerminalList (), var_lexiqueAnalysisContext_18732.readProperty_mLexicalTokenListMap (), var_lexiqueAnalysisContext_18732.readProperty_mUnicodeStringToGenerate (), temp_23.readProperty_mLexicalRuleListAST (), var_lexiqueAnalysisContext_18732, temp_24.readProperty_mTemplateDelimitorListAST (), temp_25.readProperty_mLexiqueComponentName ().readProperty_string (), temp_26.readProperty_mTemplateReplacementListAST (), inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas4", 593)) ;
      const GGS_lexiqueComponentAST temp_27 = this ;
      const GGS_lexiqueComponentAST temp_28 = this ;
      const GGS_lexiqueComponentAST temp_29 = this ;
      const GGS_lexiqueComponentAST temp_30 = this ;
      const GGS_lexiqueComponentAST temp_31 = this ;
      const GGS_lexiqueComponentAST temp_32 = this ;
      GGS_string var_swiftUIImplementation_25139 = GGS_lexiqueGenerationTemplates::class_func_swiftUIImplementationZone_32_ (GGS_string ("lexique-").add_operation (temp_27.readProperty_mLexiqueComponentName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("lexique-component.galgas4", 609)), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 609)).add_operation (GGS_string ("-swiftui"), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 609)), temp_28.readProperty_mLexiqueComponentName ().readProperty_string (), var_lexiqueAnalysisContext_18732.readProperty_mLexicalAttributeMap (), var_lexiqueAnalysisContext_18732.readProperty_mLexicalMessageMap (), var_lexiqueAnalysisContext_18732.readProperty_mTerminalList (), var_lexiqueAnalysisContext_18732.readProperty_mUnicodeStringToGenerate (), temp_29.readProperty_mLexicalRuleListAST (), var_lexiqueAnalysisContext_18732, temp_30.readProperty_mTemplateReplacementListAST (), temp_31.readProperty_mIndexingListAST (), temp_32.readProperty_mTemplateDelimitorListAST (), constinArgument_inSemanticContext.readProperty_projectSettings ().readProperty_lexicalStyleMap ().getter_count (SOURCE_FILE ("lexique-component.galgas4", 620)), inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas4", 608)) ;
      const GGS_lexiqueComponentAST temp_33 = this ;
      const GGS_lexiqueComponentAST temp_34 = this ;
      ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_lexiqueDeclarationForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (GGS_string::makeEmptyString (), GGS_bool (true), GGS_string ("lexique-").add_operation (temp_33.readProperty_mLexiqueComponentName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("lexique-component.galgas4", 626)), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 626)), temp_34.readProperty_mLexiqueComponentName ().readProperty_string (), GGS_string::makeEmptyString (), var_headerContents_24143, var_cppContents_24449, var_swiftUIImplementation_25139, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas4", 623)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@onceFunctionDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_onceFunctionDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_onceFunctionDeclarationAST temp_0 = this ;
  result = GGS_string ("once function ").add_operation (temp_0.readProperty_mGlobalConstanteName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 112)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@onceFunctionDeclarationAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_onceFunctionDeclarationAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                                const GGS_extensionInitializerForBuildingContext /* constinArgument__5F_inExtensionInitializerMapForBuildingContext */,
                                                                                const GGS_extensionMethodMapForBuildingContext /* constinArgument__5F_inExtensionMethodMapForBuildingContext */,
                                                                                const GGS_extensionGetterMapForBuildingContext /* constinArgument__5F_inExtensionGetterMapForBuildingContext */,
                                                                                const GGS_extensionSetterMapForBuildingContext /* constinArgument__5F_inExtensionSetterMapForBuildingContext */,
                                                                                GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_resultType_5225 ;
  {
  const GGS_onceFunctionDeclarationAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_mResultTypeName (), var_resultType_5225, inCompiler COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 125)) ;
  }
  {
  const GGS_onceFunctionDeclarationAST temp_1 = this ;
  const GGS_onceFunctionDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticContext.mProperty_mGlobalConstantMap.setter_insert (temp_1.readProperty_mGlobalConstanteName (), var_resultType_5225, temp_2.readProperty_mIsPrivate (), inCompiler COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 128)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@onceFunctionDeclarationAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_onceFunctionDeclarationAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & /* ioArgument__5F_ioSemanticTypePrecedenceGraph */,
                                                                      GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                      GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                                      GGS_extensionMethodMapForBuildingContext & /* ioArgument__5F_ioExtensionMethodMapForBuildingContext */,
                                                                      GGS_extensionGetterMapForBuildingContext & /* ioArgument__5F_ioExtensionGetterMapForBuildingContext */,
                                                                      GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                                      GGS__5B_semanticDeclarationAST_5D_ & ioArgument_ioExtensionOverrideDefinitionList,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_onceFunctionDeclarationAST temp_0 = this ;
  ioArgument_ioExtensionOverrideDefinitionList.plusPlusAssignOperation (temp_0  COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 141)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@onceFunctionDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_onceFunctionDeclarationAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & ioArgument_ioUsefulnessRootEntities,
                                                               GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                               const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                               const GGS_semanticContext constinArgument_inSemanticContext,
                                                               GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                               const GGS_predefinedTypes constinArgument_inPredefinedTypes,
                                                               GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_onceFunctionDeclarationAST temp_0 = this ;
  GGS_lstring var_nameForUsefulness_6810 = function_functionNameForUsefulEntitiesGraph (temp_0.readProperty_mGlobalConstanteName (), inCompiler COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 155)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_6810, var_nameForUsefulness_6810, inCompiler COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 156)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_onceFunctionDeclarationAST temp_2 = this ;
    test_1 = temp_2.readProperty_mIsUsefull ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_nameForUsefulness_6810  COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 158)) ;
    }
  }
  GGS_analysisContext var_analysisContext_7095 = GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GGS_string::makeEmptyString (), GGS_selfAvailability::class_func_none (SOURCE_FILE ("declararation-global-constant.galgas4", 165)), GGS_string::makeEmptyString (), inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_returnType_7603 ;
  GGS_string var_resultVariableCppName_7626 ;
  GGS__5B_semanticInstructionForGeneration_5D_ var_semanticInstructionListForGeneration_7660 ;
  {
  const GGS_onceFunctionDeclarationAST temp_3 = this ;
  const GGS_onceFunctionDeclarationAST temp_4 = this ;
  const GGS_onceFunctionDeclarationAST temp_5 = this ;
  GGS__5B_formalInputParameterForGeneration_5D_ joker_7575 ; // Joker input parameter
  routine_analyzeFunctionBody_3F__26__3F__26__3F__3F__3F__3F__21_signatureIR_21__21__21_ (var_nameForUsefulness_6810, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_7095, ioArgument_ioTypeMap, GGS__5B_formalInputParameterAST_5D_::init (inCompiler COMMA_HERE), temp_3.readProperty_mFunctionInstructionList (), temp_4.readProperty_mResultTypeName (), temp_5.readProperty_mEndOfFunctionInstructionList (), joker_7575, var_returnType_7603, var_resultVariableCppName_7626, var_semanticInstructionListForGeneration_7660, inCompiler  COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 168)) ;
  }
  const GGS_onceFunctionDeclarationAST temp_6 = this ;
  const GGS_onceFunctionDeclarationAST temp_7 = this ;
  const GGS_onceFunctionDeclarationAST temp_8 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_onceFunctionDeclarationForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21__21__21_ (GGS_string ("global constant ").add_operation (temp_6.readProperty_mGlobalConstanteName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 184)), GGS_bool (true), GGS_string ("func-").add_operation (temp_7.readProperty_mGlobalConstanteName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declararation-global-constant.galgas4", 186)), inCompiler COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 186)), temp_8.readProperty_mGlobalConstanteName ().readProperty_string (), var_returnType_7603, var_resultVariableCppName_7626, var_semanticInstructionListForGeneration_7660, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 183)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Once function 'gSwiftLexicalStyleFileName'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_gSwiftLexicalStyleFileName (Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result ; // Returned variable
  result = GGS_string ("LexicalStyles.swift") ;
//---
  return result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_gSwiftLexicalStyleFileName = false ;
static GGS_string gOnceFunctionResult_gSwiftLexicalStyleFileName ;

//--------------------------------------------------------------------------------------------------

GGS_string function_gSwiftLexicalStyleFileName (Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_gSwiftLexicalStyleFileName) {
    gOnceFunctionResult_gSwiftLexicalStyleFileName = onceFunction_gSwiftLexicalStyleFileName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_gSwiftLexicalStyleFileName = true ;
  }
  return gOnceFunctionResult_gSwiftLexicalStyleFileName ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_gSwiftLexicalStyleFileName (void) {
  gOnceFunctionResult_gSwiftLexicalStyleFileName.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_gSwiftLexicalStyleFileName (nullptr,
                                                                      releaseOnceFunctionResult_gSwiftLexicalStyleFileName) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateGalgasCodeBlocksWindowsTarget??buildDirName???libpmPath??'
//
//--------------------------------------------------------------------------------------------------

void routine_generateGalgasCodeBlocksWindowsTarget_3F__3F_buildDirName_3F__3F__3F_libpmPath_3F__3F_ (const GGS_string constinArgument_inProjectDirectory,
                                                                                                     const GGS_string constinArgument_inBuildDirectoryName,
                                                                                                     const GGS_string constinArgument_inProjectName,
                                                                                                     const GGS__5B_string_5D_ constinArgument_inToolCppFileList,
                                                                                                     const GGS_string constinArgument_inLIBPMpath,
                                                                                                     const GGS__5B_string_5D_ constinArgument_inHandCodedSourceToolFileList,
                                                                                                     const GGS_string constinArgument_inHandCodedSourceDirectory,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_dir_2004 = constinArgument_inProjectDirectory.add_operation (GGS_string ("/project-codeblocks-windows"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 31)) ;
  var_dir_2004.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 32)) ;
  GGS_string var_s_2098 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_codeblocks_5F_project (constinArgument_inProjectName, constinArgument_inToolCppFileList, constinArgument_inLIBPMpath, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectory, GGS_bool (true), GGS_string ("Windows"), constinArgument_inBuildDirectoryName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 33)) ;
  GGS_bool joker_2447 ; // Joker input parameter
  var_s_2098.method_writeToFileWhenDifferentContents (var_dir_2004.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 43)).add_operation (constinArgument_inProjectName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 43)).add_operation (GGS_string (".cbp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 43)), joker_2447, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 43)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateGalgasCodeBlocksLinuxI686Target??buildDirName?????'
//
//--------------------------------------------------------------------------------------------------

void routine_generateGalgasCodeBlocksLinuxI_36__38__36_Target_3F__3F_buildDirName_3F__3F__3F__3F__3F_ (const GGS_string constinArgument_inProjectDirectory,
                                                                                                       const GGS_string constinArgument_inBuildDirectoryName,
                                                                                                       const GGS_string constinArgument_inProjectName,
                                                                                                       const GGS__5B_string_5D_ constinArgument_inToolCppFileList,
                                                                                                       const GGS_string constinArgument_inLIBPMpath,
                                                                                                       const GGS__5B_string_5D_ constinArgument_inHandCodedSourceToolFileList,
                                                                                                       const GGS_string constinArgument_inHandCodedSourceDirectory,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_dir_2894 = constinArgument_inProjectDirectory.add_operation (GGS_string ("/project-codeblocks-linux32"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 57)) ;
  var_dir_2894.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 58)) ;
  GGS_string var_s_2988 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_codeblocks_5F_project (constinArgument_inProjectName, constinArgument_inToolCppFileList, constinArgument_inLIBPMpath, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectory, GGS_bool (false), GGS_string ("Unix"), constinArgument_inBuildDirectoryName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 59)) ;
  GGS_bool joker_3335 ; // Joker input parameter
  var_s_2988.method_writeToFileWhenDifferentContents (var_dir_2894.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 69)).add_operation (constinArgument_inProjectName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 69)).add_operation (GGS_string (".cbp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 69)), joker_3335, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 69)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateGalgasCodeBlocksLinuxX86_64Target??buildDirName?????'
//
//--------------------------------------------------------------------------------------------------

void routine_generateGalgasCodeBlocksLinuxX_38__36__5F__36__34_Target_3F__3F_buildDirName_3F__3F__3F__3F__3F_ (const GGS_string constinArgument_inProjectDirectory,
                                                                                                               const GGS_string constinArgument_inBuildDirectoryName,
                                                                                                               const GGS_string constinArgument_inProjectName,
                                                                                                               const GGS__5B_string_5D_ constinArgument_inToolCppFileList,
                                                                                                               const GGS_string constinArgument_inLIBPMpath,
                                                                                                               const GGS__5B_string_5D_ constinArgument_inHandCodedSourceToolFileList,
                                                                                                               const GGS_string constinArgument_inHandCodedSourceDirectory,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_dir_3783 = constinArgument_inProjectDirectory.add_operation (GGS_string ("/project-codeblocks-linux64"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 83)) ;
  var_dir_3783.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 84)) ;
  GGS_string var_s_3877 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_codeblocks_5F_project (constinArgument_inProjectName, constinArgument_inToolCppFileList, constinArgument_inLIBPMpath, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectory, GGS_bool (false), GGS_string ("Unix"), constinArgument_inBuildDirectoryName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 85)) ;
  GGS_bool joker_4224 ; // Joker input parameter
  var_s_3877.method_writeToFileWhenDifferentContents (var_dir_3783.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 95)).add_operation (constinArgument_inProjectName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 95)).add_operation (GGS_string (".cbp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 95)), joker_4224, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 95)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateMakefileMinGWOnMacOSXTarget??buildDirName?'
//
//--------------------------------------------------------------------------------------------------

void routine_generateMakefileMinGWOnMacOSXTarget_3F__3F_buildDirName_3F_ (const GGS_string constinArgument_inProjectDirectory,
                                                                          const GGS_string constinArgument_inBuildDirectoryName,
                                                                          const GGS_string constinArgument_inProjectName,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_dir_4514 = constinArgument_inProjectDirectory.add_operation (GGS_string ("/makefile-win32-on-macosx"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 104)) ;
  var_dir_4514.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 105)) ;
  GGS_string var_s_31__4598 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_win_33__32__5F_on_5F_mac (constinArgument_inProjectName, constinArgument_inBuildDirectoryName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 106)) ;
  GGS_bool joker_4764 ; // Joker input parameter
  var_s_31__4598.method_writeToExecutableFileWhenDifferentContents (var_dir_4514.add_operation (GGS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 107)), joker_4764, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 107)) ;
  GGS_string var_s_32__4774 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_lto_5F_win_33__32__5F_on_5F_mac (inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 108)) ;
  GGS_bool joker_4912 ; // Joker input parameter
  var_s_32__4774.method_writeToExecutableFileWhenDifferentContents (var_dir_4514.add_operation (GGS_string ("/build+lto.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 109)), joker_4912, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 109)) ;
  GGS_string var_s_33__4922 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_debug_5F_win_33__32__5F_on_5F_mac (inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 110)) ;
  GGS_bool joker_5064 ; // Joker input parameter
  var_s_33__4922.method_writeToExecutableFileWhenDifferentContents (var_dir_4514.add_operation (GGS_string ("/build+debug.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 111)), joker_5064, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 111)) ;
  GGS_string var_s_34__5074 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_verbose_5F_win_33__32__5F_on_5F_mac (inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 112)) ;
  GGS_bool joker_5220 ; // Joker input parameter
  var_s_34__5074.method_writeToExecutableFileWhenDifferentContents (var_dir_4514.add_operation (GGS_string ("/verbose-build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 113)), joker_5220, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 113)) ;
  GGS_string var_s_35__5230 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_clean_5F_win_33__32__5F_on_5F_mac (constinArgument_inProjectName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 114)) ;
  GGS_bool joker_5382 ; // Joker input parameter
  var_s_35__5230.method_writeToExecutableFileWhenDifferentContents (var_dir_4514.add_operation (GGS_string ("/clean.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 116)), joker_5382, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 115)) ;
  {
  GGS_string::class_method_deleteFileIfExists (var_dir_4514.add_operation (GGS_string ("/makefile"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 119)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 119)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateMakefileUnixTarget??buildDirName?'
//
//--------------------------------------------------------------------------------------------------

void routine_generateMakefileUnixTarget_3F__3F_buildDirName_3F_ (const GGS_string constinArgument_inProjectDirectory,
                                                                 const GGS_string constinArgument_inBuildDirectoryName,
                                                                 const GGS_string constinArgument_inProjectName,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_dir_5715 = constinArgument_inProjectDirectory.add_operation (GGS_string ("/makefile-unix"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 128)) ;
  var_dir_5715.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 129)) ;
  GGS_string var_s_31__5788 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_unix (constinArgument_inProjectName, constinArgument_inBuildDirectoryName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 130)) ;
  GGS_bool joker_5945 ; // Joker input parameter
  var_s_31__5788.method_writeToExecutableFileWhenDifferentContents (var_dir_5715.add_operation (GGS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 131)), joker_5945, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 131)) ;
  GGS_string var_s_32__5955 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_release_5F_unix (inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 132)) ;
  GGS_bool joker_6093 ; // Joker input parameter
  var_s_32__5955.method_writeToExecutableFileWhenDifferentContents (var_dir_5715.add_operation (GGS_string ("/build+release.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 133)), joker_6093, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 133)) ;
  GGS_string var_s_33__6103 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_lto_5F_unix (inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 134)) ;
  GGS_bool joker_6233 ; // Joker input parameter
  var_s_33__6103.method_writeToExecutableFileWhenDifferentContents (var_dir_5715.add_operation (GGS_string ("/build+lto.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 135)), joker_6233, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 135)) ;
  GGS_string var_s_34__6243 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_debug_5F_unix (inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 136)) ;
  GGS_bool joker_6377 ; // Joker input parameter
  var_s_34__6243.method_writeToExecutableFileWhenDifferentContents (var_dir_5715.add_operation (GGS_string ("/build+debug.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 137)), joker_6377, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 137)) ;
  GGS_string var_s_35__6387 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_verbose_5F_unix (inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 138)) ;
  GGS_bool joker_6525 ; // Joker input parameter
  var_s_35__6387.method_writeToExecutableFileWhenDifferentContents (var_dir_5715.add_operation (GGS_string ("/verbose-build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 139)), joker_6525, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 139)) ;
  GGS_string var_s_36__6535 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_install_5F_unix (inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 140)) ;
  GGS_bool joker_6661 ; // Joker input parameter
  var_s_36__6535.method_writeToExecutableFileWhenDifferentContents (var_dir_5715.add_operation (GGS_string ("/install.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 141)), joker_6661, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 141)) ;
  GGS_string var_s_37__6671 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_clean_5F_unix (constinArgument_inProjectName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 142)) ;
  GGS_bool joker_6806 ; // Joker input parameter
  var_s_37__6671.method_writeToExecutableFileWhenDifferentContents (var_dir_5715.add_operation (GGS_string ("/clean.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 143)), joker_6806, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 143)) ;
  {
  GGS_string::class_method_deleteFileIfExists (var_dir_5715.add_operation (GGS_string ("/makefile"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 144)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 144)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateMakefileMacTarget??buildDirName?'
//
//--------------------------------------------------------------------------------------------------

void routine_generateMakefileMacTarget_3F__3F_buildDirName_3F_ (const GGS_string constinArgument_inProjectDirectory,
                                                                const GGS_string constinArgument_inBuildDirectoryName,
                                                                const GGS_string constinArgument_inProjectName,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_dir_7136 = constinArgument_inProjectDirectory.add_operation (GGS_string ("/makefile-macosx"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 153)) ;
  var_dir_7136.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 154)) ;
  GGS_string var_s_31__7211 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_macosx (constinArgument_inProjectName, constinArgument_inBuildDirectoryName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 155)) ;
  GGS_bool joker_7370 ; // Joker input parameter
  var_s_31__7211.method_writeToExecutableFileWhenDifferentContents (var_dir_7136.add_operation (GGS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 156)), joker_7370, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 156)) ;
  GGS_string var_s_32__7380 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_release_5F_macosx (inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 157)) ;
  GGS_bool joker_7520 ; // Joker input parameter
  var_s_32__7380.method_writeToExecutableFileWhenDifferentContents (var_dir_7136.add_operation (GGS_string ("/build+release.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 158)), joker_7520, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 158)) ;
  GGS_string var_s_33__7530 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_lto_5F_macosx (inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 159)) ;
  GGS_bool joker_7662 ; // Joker input parameter
  var_s_33__7530.method_writeToExecutableFileWhenDifferentContents (var_dir_7136.add_operation (GGS_string ("/build+lto.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 160)), joker_7662, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 160)) ;
  GGS_string var_s_34__7672 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_debug_5F_macosx (inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 161)) ;
  GGS_bool joker_7808 ; // Joker input parameter
  var_s_34__7672.method_writeToExecutableFileWhenDifferentContents (var_dir_7136.add_operation (GGS_string ("/build+debug.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 162)), joker_7808, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 162)) ;
  GGS_string var_s_35__7818 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_verbose_5F_macosx (inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 163)) ;
  GGS_bool joker_7958 ; // Joker input parameter
  var_s_35__7818.method_writeToExecutableFileWhenDifferentContents (var_dir_7136.add_operation (GGS_string ("/verbose-build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 164)), joker_7958, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 164)) ;
  GGS_string var_s_36__7968 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_clean_5F_macosx (constinArgument_inProjectName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 165)) ;
  GGS_bool joker_8105 ; // Joker input parameter
  var_s_36__7968.method_writeToExecutableFileWhenDifferentContents (var_dir_7136.add_operation (GGS_string ("/clean.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 166)), joker_8105, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 166)) ;
  {
  GGS_string::class_method_deleteFileIfExists (var_dir_7136.add_operation (GGS_string ("/makefile"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 167)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 167)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateMakefileLinux32OnMacOSXTarget??buildDirName?'
//
//--------------------------------------------------------------------------------------------------

void routine_generateMakefileLinux_33__32_OnMacOSXTarget_3F__3F_buildDirName_3F_ (const GGS_string constinArgument_inProjectDirectory,
                                                                                  const GGS_string constinArgument_inBuildDirectoryName,
                                                                                  const GGS_string constinArgument_inProjectName,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_dir_8447 = constinArgument_inProjectDirectory.add_operation (GGS_string ("/makefile-x86linux32-on-macosx"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 176)) ;
  var_dir_8447.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 177)) ;
  GGS_string var_s_31__8536 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_x_38__36_linux_33__32__5F_on_5F_mac (constinArgument_inProjectName, constinArgument_inBuildDirectoryName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 178)) ;
  GGS_bool joker_8706 ; // Joker input parameter
  var_s_31__8536.method_writeToExecutableFileWhenDifferentContents (var_dir_8447.add_operation (GGS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 179)), joker_8706, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 179)) ;
  GGS_string var_s_32__8716 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_release_5F_x_38__36_linux_33__32__5F_on_5F_mac (inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 180)) ;
  GGS_bool joker_8867 ; // Joker input parameter
  var_s_32__8716.method_writeToExecutableFileWhenDifferentContents (var_dir_8447.add_operation (GGS_string ("/build+release.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 181)), joker_8867, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 181)) ;
  GGS_string var_s_33__8877 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_lto_5F_x_38__36_linux_33__32__5F_on_5F_mac (inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 182)) ;
  GGS_bool joker_9020 ; // Joker input parameter
  var_s_33__8877.method_writeToExecutableFileWhenDifferentContents (var_dir_8447.add_operation (GGS_string ("/build+lto.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 183)), joker_9020, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 183)) ;
  GGS_string var_s_34__9030 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_debug_5F_x_38__36_linux_33__32__5F_on_5F_mac (inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 184)) ;
  GGS_bool joker_9177 ; // Joker input parameter
  var_s_34__9030.method_writeToExecutableFileWhenDifferentContents (var_dir_8447.add_operation (GGS_string ("/build+debug.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 185)), joker_9177, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 185)) ;
  GGS_string var_s_35__9187 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_verbose_5F_x_38__36_linux_33__32__5F_on_5F_mac (inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 186)) ;
  GGS_bool joker_9338 ; // Joker input parameter
  var_s_35__9187.method_writeToExecutableFileWhenDifferentContents (var_dir_8447.add_operation (GGS_string ("/verbose-build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 187)), joker_9338, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 187)) ;
  GGS_string var_s_36__9348 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_clean_5F_x_38__36_linux_33__32__5F_on_5F_mac (constinArgument_inProjectName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 188)) ;
  GGS_bool joker_9496 ; // Joker input parameter
  var_s_36__9348.method_writeToExecutableFileWhenDifferentContents (var_dir_8447.add_operation (GGS_string ("/clean.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 189)), joker_9496, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 189)) ;
  {
  GGS_string::class_method_deleteFileIfExists (var_dir_8447.add_operation (GGS_string ("/makefile"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 190)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 190)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateMakefileLinux64OnMacOSXTarget??buildDirName?'
//
//--------------------------------------------------------------------------------------------------

void routine_generateMakefileLinux_36__34_OnMacOSXTarget_3F__3F_buildDirName_3F_ (const GGS_string constinArgument_inProjectDirectory,
                                                                                  const GGS_string constinArgument_inBuildDirectoryName,
                                                                                  const GGS_string constinArgument_inProjectName,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_dir_9837 = constinArgument_inProjectDirectory.add_operation (GGS_string ("/makefile-x86linux64-on-macosx"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 199)) ;
  var_dir_9837.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 200)) ;
  GGS_string var_s_31__9926 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_x_38__36_linux_36__34__5F_on_5F_mac (constinArgument_inProjectName, constinArgument_inBuildDirectoryName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 201)) ;
  GGS_bool joker_10096 ; // Joker input parameter
  var_s_31__9926.method_writeToExecutableFileWhenDifferentContents (var_dir_9837.add_operation (GGS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 202)), joker_10096, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 202)) ;
  GGS_string var_s_32__10106 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_release_5F_x_38__36_linux_36__34__5F_on_5F_mac (inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 203)) ;
  GGS_bool joker_10257 ; // Joker input parameter
  var_s_32__10106.method_writeToExecutableFileWhenDifferentContents (var_dir_9837.add_operation (GGS_string ("/build+release.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 204)), joker_10257, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 204)) ;
  GGS_string var_s_33__10267 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_lto_5F_x_38__36_linux_36__34__5F_on_5F_mac (inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 205)) ;
  GGS_bool joker_10410 ; // Joker input parameter
  var_s_33__10267.method_writeToExecutableFileWhenDifferentContents (var_dir_9837.add_operation (GGS_string ("/build+lto.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 206)), joker_10410, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 206)) ;
  GGS_string var_s_34__10420 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_debug_5F_x_38__36_linux_36__34__5F_on_5F_mac (inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 207)) ;
  GGS_bool joker_10567 ; // Joker input parameter
  var_s_34__10420.method_writeToExecutableFileWhenDifferentContents (var_dir_9837.add_operation (GGS_string ("/build+debug.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 208)), joker_10567, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 208)) ;
  GGS_string var_s_35__10577 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_verbose_5F_x_38__36_linux_36__34__5F_on_5F_mac (inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 209)) ;
  GGS_bool joker_10728 ; // Joker input parameter
  var_s_35__10577.method_writeToExecutableFileWhenDifferentContents (var_dir_9837.add_operation (GGS_string ("/verbose-build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 210)), joker_10728, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 210)) ;
  GGS_string var_s_36__10738 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_clean_5F_x_38__36_linux_36__34__5F_on_5F_mac (constinArgument_inProjectName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 211)) ;
  GGS_bool joker_10886 ; // Joker input parameter
  var_s_36__10738.method_writeToExecutableFileWhenDifferentContents (var_dir_9837.add_operation (GGS_string ("/clean.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 212)), joker_10886, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 212)) ;
  {
  GGS_string::class_method_deleteFileIfExists (var_dir_9837.add_operation (GGS_string ("/makefile"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 213)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 213)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateArm64LinuxMakefileTarget??buildDirName?'
//
//--------------------------------------------------------------------------------------------------

void routine_generateArm_36__34_LinuxMakefileTarget_3F__3F_buildDirName_3F_ (const GGS_string constinArgument_inProjectDirectory,
                                                                             const GGS_string constinArgument_inBuildDirectoryName,
                                                                             const GGS_string constinArgument_inProjectName,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_dir_11308 = constinArgument_inProjectDirectory.add_operation (GGS_string ("/makefile-arm64-linux-on-macosx"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 221)) ;
  var_dir_11308.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 222)) ;
  GGS_string var_s_31__11398 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_arm_36__34__5F_linux_5F_on_5F_mac (constinArgument_inProjectName, constinArgument_inBuildDirectoryName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 223)) ;
  GGS_bool joker_11569 ; // Joker input parameter
  var_s_31__11398.method_writeToExecutableFileWhenDifferentContents (var_dir_11308.add_operation (GGS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 224)), joker_11569, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 224)) ;
  GGS_string var_s_32__11579 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_release_5F_arm_36__34__5F_linux_5F_on_5F_mac (inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 225)) ;
  GGS_bool joker_11731 ; // Joker input parameter
  var_s_32__11579.method_writeToExecutableFileWhenDifferentContents (var_dir_11308.add_operation (GGS_string ("/build+release.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 226)), joker_11731, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 226)) ;
  GGS_string var_s_33__11741 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_lto_5F_arm_36__34__5F_linux_5F_on_5F_mac (inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 227)) ;
  GGS_bool joker_11885 ; // Joker input parameter
  var_s_33__11741.method_writeToExecutableFileWhenDifferentContents (var_dir_11308.add_operation (GGS_string ("/build+lto.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 228)), joker_11885, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 228)) ;
  GGS_string var_s_34__11895 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_debug_5F_arm_36__34__5F_linux_5F_on_5F_mac (inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 229)) ;
  GGS_bool joker_12043 ; // Joker input parameter
  var_s_34__11895.method_writeToExecutableFileWhenDifferentContents (var_dir_11308.add_operation (GGS_string ("/build+debug.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 230)), joker_12043, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 230)) ;
  GGS_string var_s_35__12053 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_build_5F_verbose_5F_arm_36__34__5F_linux_5F_on_5F_mac (inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 231)) ;
  GGS_bool joker_12205 ; // Joker input parameter
  var_s_35__12053.method_writeToExecutableFileWhenDifferentContents (var_dir_11308.add_operation (GGS_string ("/verbose-build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 232)), joker_12205, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 232)) ;
  GGS_string var_s_36__12215 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_clean_5F_arm_36__34__5F_linux_5F_on_5F_mac (constinArgument_inProjectName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 233)) ;
  GGS_bool joker_12364 ; // Joker input parameter
  var_s_36__12215.method_writeToExecutableFileWhenDifferentContents (var_dir_11308.add_operation (GGS_string ("/clean.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 234)), joker_12364, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 234)) ;
  {
  GGS_string::class_method_deleteFileIfExists (var_dir_11308.add_operation (GGS_string ("/makefile"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 235)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 235)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'updateGalgasTargets?absoluteBuildDir?buildDirName?????appProductFileList?swiftAppProductFileList???&'
//
//--------------------------------------------------------------------------------------------------

void routine_updateGalgasTargets_3F_absoluteBuildDir_3F_buildDirName_3F__3F__3F__3F__3F_appProductFileList_3F_swiftAppProductFileList_3F__3F__3F__26_ (const GGS_string constinArgument_inAbsoluteBuildDirectory,
                                                                                                                                                       const GGS_string constinArgument_inBuildDirectoryName,
                                                                                                                                                       const GGS_string constinArgument_inProjectSourceFilePath,
                                                                                                                                                       const GGS_projectSettings constinArgument_inProjectSettings,
                                                                                                                                                       const GGS__5B_string_5D_ constinArgument_inToolCppFileList,
                                                                                                                                                       const GGS__5B_string_5D_ constinArgument_inToolHeaderFileList,
                                                                                                                                                       const GGS__5B_string_5D_ constinArgument_inAppProductFileList,
                                                                                                                                                       const GGS__5B_string_5D_ constinArgument_inSwiftAppProductFileList,
                                                                                                                                                       const GGS__5B_string_5D_ constinArgument_inHandCodedSourceToolFileList,
                                                                                                                                                       const GGS_string constinArgument_inHandCodedSourceDirectory,
                                                                                                                                                       const GGS_stringset constinArgument_inHandledExtensionSet,
                                                                                                                                                       GGS_stringset & ioArgument_ioAllProductFileSet,
                                                                                                                                                       Compiler * inCompiler
                                                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_versionString_13541 = constinArgument_inProjectSettings.readProperty_majorVersion ().getter_bigint (SOURCE_FILE ("galgasTargetGeneration.galgas4", 259)).getter_string (SOURCE_FILE ("galgasTargetGeneration.galgas4", 259)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 259)).add_operation (constinArgument_inProjectSettings.readProperty_minorVersion ().getter_bigint (SOURCE_FILE ("galgasTargetGeneration.galgas4", 260)).getter_string (SOURCE_FILE ("galgasTargetGeneration.galgas4", 260)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 260)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 260)).add_operation (constinArgument_inProjectSettings.readProperty_revision ().getter_bigint (SOURCE_FILE ("galgasTargetGeneration.galgas4", 261)).getter_string (SOURCE_FILE ("galgasTargetGeneration.galgas4", 261)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 261)) ;
  ioArgument_ioAllProductFileSet.plusAssignOperation(GGS_stringset::class_func_setWithStringArray (constinArgument_inSwiftAppProductFileList  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 262)), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 262)) ;
  GGS_string var_projectDirectory_13777 = constinArgument_inProjectSourceFilePath.getter_deletingLastPathComponent (SOURCE_FILE ("galgasTargetGeneration.galgas4", 263)) ;
  GGS_string var_s_31__13880 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_project_5F_header (var_versionString_13541, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 265)) ;
  GGS_bool joker_14055 ; // Joker input parameter
  var_s_31__13880.method_writeToFileWhenDifferentContents (constinArgument_inAbsoluteBuildDirectory.add_operation (GGS_string ("/output/project_header.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 267)), joker_14055, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 266)) ;
  ioArgument_ioAllProductFileSet.plusPlusAssignOperation (GGS_string ("project_header.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 270)) ;
  GGS_lstring var_macCodeSign_14195 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inProjectSettings.readProperty_macAppCodeSign ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_macCodeSign_14195 = constinArgument_inProjectSettings.readProperty_macAppCodeSign () ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    var_macCodeSign_14195 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasTargetGeneration.galgas4", 276)) ;
  }
  GGS_string var_MACOSX_5F_DEPLOYMENT_5F_TARGET_14439 = GGS_string ("14.6") ;
  GGS_string var_libpmPath_14559 ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, constinArgument_inProjectSettings.readProperty_libpmCustomPath ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      var_libpmPath_14559 = constinArgument_inProjectSettings.readProperty_libpmCustomPath ().readProperty_string () ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    {
    routine_updateLIBPMatPath_3F_ (constinArgument_inAbsoluteBuildDirectory.add_operation (GGS_string ("/libpm"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 285)), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 285)) ;
    }
    var_libpmPath_14559 = GGS_string ("../").add_operation (constinArgument_inBuildDirectoryName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 286)).add_operation (GGS_string ("/libpm"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 286)) ;
  }
  GGS_xcodeProject var_xcodeProject_14850 = GGS_xcodeProject::class_func_none (SOURCE_FILE ("galgasTargetGeneration.galgas4", 289)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = constinArgument_inProjectSettings.readProperty_targets ().getter_contains (GGS_projectTargets::class_func_macSwiftApp (SOURCE_FILE ("galgasTargetGeneration.galgas4", 290)) COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 290)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      var_xcodeProject_14850 = GGS_xcodeProject::class_func_swiftApp (SOURCE_FILE ("galgasTargetGeneration.galgas4", 291)) ;
    }
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    GGS_bool test_4 = GGS_bool (ComparisonKind::notEqual, var_macCodeSign_14195.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())) ;
    if (GalgasBool::boolTrue == test_4.boolEnum ()) {
      test_4 = GGS_bool (ComparisonKind::equal, var_xcodeProject_14850.objectCompare (GGS_xcodeProject::class_func_none (SOURCE_FILE ("galgasTargetGeneration.galgas4", 294)))) ;
    }
    test_3 = test_4.boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (var_macCodeSign_14195.readProperty_location (), GGS_string ("the macCodeSign property implies the definition of an OS X target system: \"%MacSwiftApp\""), fixItArray5  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 295)) ;
    }
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = GGS_bool (ComparisonKind::notEqual, var_xcodeProject_14850.objectCompare (GGS_xcodeProject::class_func_none (SOURCE_FILE ("galgasTargetGeneration.galgas4", 299)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      test_6 = GGS_bool (ComparisonKind::equal, constinArgument_inProjectSettings.readProperty_macAppBundleBaseName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        GenericArray <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticWarning (constinArgument_inProjectSettings.readProperty_macAppBundleBaseName ().readProperty_location (), GGS_string ("For a MacOS target, the \"#macAppBundleBaseName\" feature should be set; for example: '%applicationBundleBase : \"fr.what\" ;'"), fixItArray7  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 300)) ;
      }
    }
  }
  GGS_string var_inTargetName_15531 = constinArgument_inProjectSettings.readProperty_productName () ;
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    test_8 = constinArgument_inProjectSettings.readProperty_targets ().getter_contains (GGS_projectTargets::class_func_makefileMacOS (SOURCE_FILE ("galgasTargetGeneration.galgas4", 304)) COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 304)).boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      {
      routine_generateMakefileMacTarget_3F__3F_buildDirName_3F_ (var_projectDirectory_13777, constinArgument_inBuildDirectoryName, var_inTargetName_15531, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 305)) ;
      }
    }
  }
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    test_9 = constinArgument_inProjectSettings.readProperty_targets ().getter_contains (GGS_projectTargets::class_func_makefileUnix (SOURCE_FILE ("galgasTargetGeneration.galgas4", 307)) COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 307)).boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      {
      routine_generateMakefileUnixTarget_3F__3F_buildDirName_3F_ (var_projectDirectory_13777, constinArgument_inBuildDirectoryName, var_inTargetName_15531, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 308)) ;
      }
    }
  }
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    test_10 = constinArgument_inProjectSettings.readProperty_targets ().getter_contains (GGS_projectTargets::class_func_makefileX_38__36_Linux_33__32_OnMac (SOURCE_FILE ("galgasTargetGeneration.galgas4", 310)) COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 310)).boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      {
      routine_generateMakefileLinux_33__32_OnMacOSXTarget_3F__3F_buildDirName_3F_ (var_projectDirectory_13777, constinArgument_inBuildDirectoryName, var_inTargetName_15531, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 311)) ;
      }
    }
  }
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    test_11 = constinArgument_inProjectSettings.readProperty_targets ().getter_contains (GGS_projectTargets::class_func_makefileX_38__36_Linux_36__34_OnMac (SOURCE_FILE ("galgasTargetGeneration.galgas4", 313)) COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 313)).boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      {
      routine_generateMakefileLinux_36__34_OnMacOSXTarget_3F__3F_buildDirName_3F_ (var_projectDirectory_13777, constinArgument_inBuildDirectoryName, var_inTargetName_15531, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 314)) ;
      }
    }
  }
  GalgasBool test_12 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_12) {
    test_12 = constinArgument_inProjectSettings.readProperty_targets ().getter_contains (GGS_projectTargets::class_func_makefileARM_36__34_LinuxOnMac (SOURCE_FILE ("galgasTargetGeneration.galgas4", 316)) COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 316)).boolEnum () ;
    if (GalgasBool::boolTrue == test_12) {
      {
      routine_generateArm_36__34_LinuxMakefileTarget_3F__3F_buildDirName_3F_ (var_projectDirectory_13777, constinArgument_inBuildDirectoryName, var_inTargetName_15531, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 317)) ;
      }
    }
  }
  GalgasBool test_13 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_13) {
    test_13 = constinArgument_inProjectSettings.readProperty_targets ().getter_contains (GGS_projectTargets::class_func_makefileWin_33__32_OnMac (SOURCE_FILE ("galgasTargetGeneration.galgas4", 319)) COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 319)).boolEnum () ;
    if (GalgasBool::boolTrue == test_13) {
      {
      routine_generateMakefileMinGWOnMacOSXTarget_3F__3F_buildDirName_3F_ (var_projectDirectory_13777, constinArgument_inBuildDirectoryName, var_inTargetName_15531, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 320)) ;
      }
    }
  }
  GalgasBool test_14 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_14) {
    test_14 = constinArgument_inProjectSettings.readProperty_targets ().getter_contains (GGS_projectTargets::class_func_codeblocksWindows (SOURCE_FILE ("galgasTargetGeneration.galgas4", 322)) COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 322)).boolEnum () ;
    if (GalgasBool::boolTrue == test_14) {
      {
      routine_generateGalgasCodeBlocksWindowsTarget_3F__3F_buildDirName_3F__3F__3F_libpmPath_3F__3F_ (var_projectDirectory_13777, constinArgument_inBuildDirectoryName, var_inTargetName_15531, constinArgument_inToolCppFileList, var_libpmPath_14559, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectory, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 323)) ;
      }
    }
  }
  GalgasBool test_15 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_15) {
    test_15 = constinArgument_inProjectSettings.readProperty_targets ().getter_contains (GGS_projectTargets::class_func_codeblocksLinux_33__32_ (SOURCE_FILE ("galgasTargetGeneration.galgas4", 333)) COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 333)).boolEnum () ;
    if (GalgasBool::boolTrue == test_15) {
      {
      routine_generateGalgasCodeBlocksLinuxI_36__38__36_Target_3F__3F_buildDirName_3F__3F__3F__3F__3F_ (var_projectDirectory_13777, constinArgument_inBuildDirectoryName, var_inTargetName_15531, constinArgument_inToolCppFileList, var_libpmPath_14559, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectory, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 334)) ;
      }
    }
  }
  GalgasBool test_16 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_16) {
    test_16 = constinArgument_inProjectSettings.readProperty_targets ().getter_contains (GGS_projectTargets::class_func_codeblocksLinux_36__34_ (SOURCE_FILE ("galgasTargetGeneration.galgas4", 344)) COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 344)).boolEnum () ;
    if (GalgasBool::boolTrue == test_16) {
      {
      routine_generateGalgasCodeBlocksLinuxX_38__36__5F__36__34_Target_3F__3F_buildDirName_3F__3F__3F__3F__3F_ (var_projectDirectory_13777, constinArgument_inBuildDirectoryName, var_inTargetName_15531, constinArgument_inToolCppFileList, var_libpmPath_14559, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectory, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 345)) ;
      }
    }
  }
  GGS__5B_string_5D_ var_handCodedSourceToolFileList_17690 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_string_5D_ enumerator_17739 (constinArgument_inHandCodedSourceToolFileList) ;
  while (enumerator_17739.hasCurrentObject ()) {
    GalgasBool test_17 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_17) {
      test_17 = GGS_bool (ComparisonKind::notEqual, enumerator_17739.current (HERE).getter_pathExtension (SOURCE_FILE ("galgasTargetGeneration.galgas4", 358)).objectCompare (GGS_string ("h"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_17) {
        var_handCodedSourceToolFileList_17690.plusPlusAssignOperation (enumerator_17739.current (HERE).getter_lastPathComponent (SOURCE_FILE ("galgasTargetGeneration.galgas4", 359))  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 359)) ;
      }
    }
    enumerator_17739.gotoNextObject () ;
  }
  GGS_stringset var_handCodedSourceDirectorySet_17893 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_string_5D_ enumerator_17957 (constinArgument_inHandCodedSourceToolFileList) ;
  while (enumerator_17957.hasCurrentObject ()) {
    GGS_string var_subDir_17998 = enumerator_17957.current (HERE).getter_deletingLastPathComponent (SOURCE_FILE ("galgasTargetGeneration.galgas4", 364)) ;
    GalgasBool test_18 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_18) {
      test_18 = GGS_bool (ComparisonKind::equal, var_subDir_17998.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_18) {
        var_handCodedSourceDirectorySet_17893.plusPlusAssignOperation (GGS_string ("../sources/tool-sources")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 366)) ;
      }
    }
    if (GalgasBool::boolFalse == test_18) {
      var_handCodedSourceDirectorySet_17893.plusPlusAssignOperation (GGS_string ("../sources/tool-sources/").add_operation (var_subDir_17998, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 368))  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 368)) ;
    }
    enumerator_17957.gotoNextObject () ;
  }
  GGS__5B_string_5D_ temp_19 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 375)) ;
  GGS_string var_jsonFileListContents_18236 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_json_5F_file_5F_list (var_handCodedSourceDirectorySet_17893, var_handCodedSourceToolFileList_17690, constinArgument_inToolCppFileList, temp_19, var_libpmPath_14559, constinArgument_inBuildDirectoryName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 371)) ;
  GGS_string var_jsonFileListPath_18459 = constinArgument_inAbsoluteBuildDirectory.add_operation (GGS_string ("/output/file-list.json"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 379)) ;
  GGS_bool joker_18605 ; // Joker input parameter
  var_jsonFileListContents_18236.method_writeToFileWhenDifferentContents (var_jsonFileListPath_18459, joker_18605, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 380)) ;
  ioArgument_ioAllProductFileSet.plusPlusAssignOperation (GGS_string ("file-list.json")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 381)) ;
  GGS_sortedLexicalStyleArray var_sortedLexicalStyleArray_18724 = GGS_sortedLexicalStyleArray::init (inCompiler COMMA_HERE) ;
  UpEnumerator_lexicalStyleMap enumerator_18776 (constinArgument_inProjectSettings.readProperty_lexicalStyleMap ()) ;
  while (enumerator_18776.hasCurrentObject ()) {
    var_sortedLexicalStyleArray_18724.plusPlusAssignOperation (GGS_sortedLexicalStyle::init_21__21__21_ (enumerator_18776.current_lkey (HERE).readProperty_string (), enumerator_18776.current_mComment (HERE).readProperty_string (), enumerator_18776.current_mStyleIndex (HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 385)) ;
    enumerator_18776.gotoNextObject () ;
  }
  GGS_string var_contents_18905 = GGS_lexicalTemplates::class_func_swiftUILexicalStyles (var_sortedLexicalStyleArray_18724, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 387)) ;
  GGS_string var_filePath_18987 = constinArgument_inAbsoluteBuildDirectory.add_operation (GGS_string ("/output/"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 388)).add_operation (function_gSwiftLexicalStyleFileName (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 388)) ;
  GGS_bool joker_19120 ; // Joker input parameter
  var_contents_18905.method_writeToFileWhenDifferentContents (var_filePath_18987, joker_19120, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 389)) ;
  ioArgument_ioAllProductFileSet.plusPlusAssignOperation (function_gSwiftLexicalStyleFileName (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 390)) ;
  switch (var_xcodeProject_14850.enumValue ()) {
  case GGS_xcodeProject::Enumeration::invalid:
    break ;
  case GGS_xcodeProject::Enumeration::enum_none:
    break ;
  case GGS_xcodeProject::Enumeration::enum_swiftApp:
    {
      GGS_string var_dir_19284 = var_projectDirectory_13777.add_operation (GGS_string ("/xcode-project"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 395)) ;
      var_dir_19284.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 396)) ;
      GGS_string var_applicationBundleBase_19386 ;
      GalgasBool test_20 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_20) {
        test_20 = GGS_bool (ComparisonKind::notEqual, constinArgument_inProjectSettings.readProperty_macAppBundleBaseName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_20) {
          var_applicationBundleBase_19386 = constinArgument_inProjectSettings.readProperty_macAppBundleBaseName ().readProperty_string () ;
        }
      }
      if (GalgasBool::boolFalse == test_20) {
        var_applicationBundleBase_19386 = GGS_string ("unknown.unknown") ;
      }
      GGS_string var_InfoPlistContents_19621 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_makefile_5F_info_5F_plist (var_inTargetName_15531, var_applicationBundleBase_19386, var_versionString_13541, constinArgument_inHandledExtensionSet, var_MACOSX_5F_DEPLOYMENT_5F_TARGET_14439, GGS_string ("$(PRODUCT_MODULE_NAME).ProjectDocument"), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 404)) ;
      GGS_bool joker_19959 ; // Joker input parameter
      var_InfoPlistContents_19621.method_writeToFileWhenDifferentContents (var_dir_19284.add_operation (GGS_string ("/Info.plist"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 412)), joker_19959, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 412)) ;
      GalgasBool test_21 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_21) {
        test_21 = var_dir_19284.add_operation (GGS_string ("/build.command"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 414)).getter_fileExists (SOURCE_FILE ("galgasTargetGeneration.galgas4", 414)).operator_not (SOURCE_FILE ("galgasTargetGeneration.galgas4", 414)).boolEnum () ;
        if (GalgasBool::boolTrue == test_21) {
          GGS_string var_s_20047 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_makefile_5F_build_5F_xcode (inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 415)) ;
          var_s_20047.method_writeToExecutableFile (var_dir_19284.add_operation (GGS_string ("/build.command"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 416)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 416)) ;
        }
      }
      GGS_string var_d_20182 = var_dir_19284.add_operation (GGS_string ("/Base.lproj"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 419)) ;
      var_d_20182.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 419)) ;
      GGS_string var_InfoPlist_5F_strings_5F_path_20235 = var_dir_19284.add_operation (GGS_string ("/Base.lproj/InfoPlist.strings"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 420)) ;
      GGS_string var_s_32__20306 = GGS_targetGalgas_33_GenerationFileWrapper::class_func_makefile_5F_info_5F_plist_5F_strings (var_inTargetName_15531, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 421)) ;
      GGS_bool joker_20455 ; // Joker input parameter
      var_s_32__20306.method_writeToFileWhenDifferentContents (var_InfoPlist_5F_strings_5F_path_20235, joker_20455, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 422)) ;
      GGS_string var_Credits_5F_rtf_5F_path_20467 = var_dir_19284.add_operation (GGS_string ("/Base.lproj/Credits.rtf"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 423)) ;
      GalgasBool test_22 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_22) {
        test_22 = var_Credits_5F_rtf_5F_path_20467.getter_fileExists (SOURCE_FILE ("galgasTargetGeneration.galgas4", 424)).operator_not (SOURCE_FILE ("galgasTargetGeneration.galgas4", 424)).boolEnum () ;
        if (GalgasBool::boolTrue == test_22) {
          GGS_string var_s_20572 = GGS_string (gWrapperFileContent_1_targetGalgas_33_GenerationFileWrapper) ;
          var_s_20572.method_writeToFile (var_Credits_5F_rtf_5F_path_20467, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 426)) ;
        }
      }
      GGS_string var_userResourceDir_20787 = var_projectDirectory_13777.add_operation (GGS_string ("/xcode-project/userResources"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 429)) ;
      var_userResourceDir_20787.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 430)) ;
      GGS__5B_string_5D_ temp_23 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 431)) ;
      temp_23.plusPlusAssignOperation (GGS_string ("icns")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 431)) ;
      GGS__5B_string_5D_ var_resourceFiles_20900 = var_userResourceDir_20787.getter_regularFilesWithExtensions (GGS_bool (false), temp_23 COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 431)) ;
      GGS_string var_newIntermediateFilePath_21017 = constinArgument_inAbsoluteBuildDirectory.add_operation (GGS_string ("/output/file-list-for-xcode-project.txt"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 433)) ;
      ioArgument_ioAllProductFileSet.plusPlusAssignOperation (GGS_string ("file-list-for-xcode-project.txt")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 434)) ;
      GGS_XcodeProjectDescriptor var_xcodeProject_21267 = GGS_XcodeProjectDescriptor::init (inCompiler COMMA_HERE) ;
      var_xcodeProject_21267.mProperty_mApplicationBundleName = var_applicationBundleBase_19386 ;
      var_xcodeProject_21267.mProperty_mProjectName = var_inTargetName_15531 ;
      GGS_string var_headerSearchPaths_21426 = GGS_string ("HEADER_SEARCH_PATHS = (\"../").add_operation (constinArgument_inBuildDirectoryName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 439)).add_operation (GGS_string ("/output\", \"../"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 440)).add_operation (constinArgument_inBuildDirectoryName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 440)).add_operation (GGS_string ("/libpm\", \"../"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 440)).add_operation (constinArgument_inBuildDirectoryName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 441)).add_operation (GGS_string ("/user-headers\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 442)) ;
      var_headerSearchPaths_21426.plusAssignOperation(GGS_string (", \"").add_operation (constinArgument_inHandCodedSourceDirectory, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 443)).add_operation (GGS_string ("\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 443)), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 443)) ;
      var_headerSearchPaths_21426.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 444)) ;
      GGS__5B_string_5D_ temp_24 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 520)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("ALWAYS_SEARCH_USER_PATHS = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 447)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("CLANG_CXX_LANGUAGE_STANDARD = \"c++17\"")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 448)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("CLANG_ENABLE_OBJC_ARC = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 449)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("CLANG_WARN_BLOCK_CAPTURE_AUTORELEASING = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 450)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("CLANG_WARN_COMMA = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 451)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("CLANG_WARN_DEPRECATED_OBJC_IMPLEMENTATIONS = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 452)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("CLANG_WARN_EMPTY_BODY = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 453)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("CLANG_WARN_INFINITE_RECURSION = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 454)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("CLANG_WARN_OBJC_IMPLICIT_RETAIN_SELF = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 455)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("CLANG_WARN_QUOTED_INCLUDE_IN_FRAMEWORK_HEADER = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 456)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("CLANG_WARN_RANGE_LOOP_ANALYSIS = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 457)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("CLANG_WARN_STRICT_PROTOTYPES = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 458)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("CLANG_WARN_SUSPICIOUS_IMPLICIT_CONVERSION = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 459)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("CLANG_WARN_SUSPICIOUS_MOVE = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 460)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("CLANG_WARN_UNREACHABLE_CODE = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 461)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("CLANG_WARN__DUPLICATE_METHOD_MATCH = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 462)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("GCC_GENERATE_DEBUGGING_SYMBOLS = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 463)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("GCC_NO_COMMON_BLOCKS = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 464)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("ENABLE_STRICT_OBJC_MSGSEND = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 465)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("GCC_PRECOMPILE_PREFIX_HEADER = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 466)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("GCC_THREADSAFE_STATICS = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 467)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("GCC_TREAT_IMPLICIT_FUNCTION_DECLARATIONS_AS_ERRORS = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 468)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("GCC_TREAT_WARNINGS_AS_ERRORS = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 469)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("GCC_WARN_64_TO_32_BIT_CONVERSION = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 470)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("GCC_WARN_ABOUT_DEPRECATED_FUNCTIONS = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 471)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("GCC_WARN_ABOUT_INVALID_OFFSETOF_MACRO = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 472)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("CLANG_WARN_SUSPICIOUS_IMPLICIT_CONVERSION = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 473)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("GCC_WARN_ABOUT_MISSING_NEWLINE = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 474)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("GCC_WARN_ABOUT_MISSING_PROTOTYPES = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 475)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("GCC_WARN_ABOUT_RETURN_TYPE = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 476)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("GCC_WARN_CHECK_SWITCH_STATEMENTS = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 477)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("GCC_WARN_FOUR_CHARACTER_CONSTANTS = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 478)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("GCC_WARN_HIDDEN_VIRTUAL_FUNCTIONS = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 479)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("GCC_WARN_INHIBIT_ALL_WARNINGS = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 480)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("GCC_WARN_INITIALIZER_NOT_FULLY_BRACKETED = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 481)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("GCC_WARN_MISSING_PARENTHESES = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 482)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("GCC_WARN_NON_VIRTUAL_DESTRUCTOR = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 483)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("GCC_WARN_PEDANTIC = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 484)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("GCC_WARN_SHADOW = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 485)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("GCC_WARN_SIGN_COMPARE = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 486)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("GCC_WARN_TYPECHECK_CALLS_TO_PRINTF = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 487)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("GCC_WARN_UNDECLARED_SELECTOR = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 488)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("GCC_WARN_UNINITIALIZED_AUTOS = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 489)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("GCC_WARN_UNKNOWN_PRAGMAS = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 490)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("GCC_WARN_UNUSED_FUNCTION = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 491)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("GCC_WARN_UNUSED_LABEL = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 492)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("GCC_WARN_UNUSED_VALUE = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 493)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("GCC_WARN_UNUSED_VARIABLE = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 494)) ;
      temp_24.plusPlusAssignOperation (var_headerSearchPaths_21426  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 495)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("SDKROOT = macosx")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 496)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("COPY_PHASE_STRIP = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 497)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("CLANG_ENABLE_OBJC_ARC = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 498)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("SWIFT_DISABLE_SAFETY_CHECKS = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 499)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("SWIFT_ENABLE_BARE_SLASH_REGEX = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 500)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("SWIFT_ENABLE_EMIT_CONST_VALUES = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 501)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("SWIFT_ENFORCE_EXCLUSIVE_ACCESS = off")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 502)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("SWIFT_INSTALL_MODULE = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 503)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("SWIFT_INSTALL_OBJC_HEADER = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 504)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("SWIFT_PRECOMPILE_BRIDGING_HEADER = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 505)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("SWIFT_REFLECTION_METADATA_LEVEL = all")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 506)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("SWIFT_STRICT_CONCURRENCY = complete")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 507)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("SWIFT_TREAT_WARNINGS_AS_ERRORS = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 508)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("SWIFT_UPCOMING_FEATURE_CONCISE_MAGIC_FILE = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 509)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("SWIFT_UPCOMING_FEATURE_DEPRECATE_APPLICATION_MAIN = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 510)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("SWIFT_UPCOMING_FEATURE_DISABLE_OUTWARD_ACTOR_ISOLATION = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 511)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("SWIFT_UPCOMING_FEATURE_EXISTENTIAL_ANY = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 512)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("SWIFT_UPCOMING_FEATURE_FORWARD_TRAILING_CLOSURES = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 513)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("SWIFT_UPCOMING_FEATURE_GLOBAL_CONCURRENCY = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 514)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("SWIFT_UPCOMING_FEATURE_IMPLICIT_OPEN_EXISTENTIALS = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 515)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("SWIFT_UPCOMING_FEATURE_IMPORT_OBJC_FORWARD_DECLS = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 516)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("SWIFT_UPCOMING_FEATURE_INFER_SENDABLE_FROM_CAPTURES = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 517)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("SWIFT_UPCOMING_FEATURE_ISOLATED_DEFAULT_VALUES = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 518)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("SWIFT_UPCOMING_FEATURE_REGION_BASED_ISOLATION = NO")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 519)) ;
      temp_24.plusPlusAssignOperation (GGS_string ("SWIFT_VERSION = 6.0")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 520)) ;
      GGS__5B_string_5D_ var_xcodeSettingList_21776 = temp_24 ;
      GalgasBool test_25 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_25) {
        test_25 = GGS_bool (ComparisonKind::notEqual, var_MACOSX_5F_DEPLOYMENT_5F_TARGET_14439.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_25) {
          var_xcodeSettingList_21776.plusPlusAssignOperation (GGS_string ("MACOSX_DEPLOYMENT_TARGET = \"").add_operation (var_MACOSX_5F_DEPLOYMENT_5F_TARGET_14439, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 523)).add_operation (GGS_string ("\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 523))  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 523)) ;
        }
      }
      {
      extensionSetter_addSettingsToDefaultConfiguration (var_xcodeProject_21267, var_xcodeSettingList_21776, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 525)) ;
      }
      GGS__5B_string_5D_ var_buildCFileRefListForTool_25505 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
      GGS__5B_string_5D_ var_buildCppFileRefListForTool_25554 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
      GGS__5B_string_5D_ var_swift_5F_FileRefList_25605 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
      GGS__5B_string_5D_ var_frameworksFileRefList_25647 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
      GGS__5B_string_5D_ var_resourceFileBuildRefs_25693 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
      GalgasBool test_26 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_26) {
        test_26 = GGS_bool (ComparisonKind::greaterThan, constinArgument_inHandCodedSourceToolFileList.getter_count (SOURCE_FILE ("galgasTargetGeneration.galgas4", 533)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_26) {
          GGS_string var_groupRef_26309 ;
          {
          extensionSetter_addGroupWithFiles (var_xcodeProject_21267, GGS_string ("Hand Coded Sources (Tool)"), GGS_string ("../sources/tool-sources/"), GGS_stringset::class_func_setWithStringArray (constinArgument_inHandCodedSourceToolFileList  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 537)), var_buildCFileRefListForTool_25505, var_buildCppFileRefListForTool_25554, var_swift_5F_FileRefList_25605, var_frameworksFileRefList_25647, var_resourceFileBuildRefs_25693, var_groupRef_26309, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 534)) ;
          }
          {
          extensionSetter_placeGroupAsMainGroup (var_xcodeProject_21267, var_groupRef_26309, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 545)) ;
          }
        }
      }
      GGS__5B_string_5D_ var_outputGroupFileList_26446 = constinArgument_inToolCppFileList.add_operation (constinArgument_inToolHeaderFileList, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 548)).add_operation (constinArgument_inAppProductFileList, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 548)) ;
      GGS__5B_string_5D_ temp_27 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 549)) ;
      temp_27.plusPlusAssignOperation (function_gSwiftLexicalStyleFileName (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 549)) ;
      var_outputGroupFileList_26446.plusAssignOperation(constinArgument_inSwiftAppProductFileList.add_operation (temp_27, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 549)), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 549)) ;
      GGS_string var_groupRef_27075 ;
      {
      extensionSetter_addGroupWithFiles (var_xcodeProject_21267, GGS_string ("Generated by GALGAS"), GGS_string ("../").add_operation (constinArgument_inBuildDirectoryName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 552)).add_operation (GGS_string ("/output"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 552)), GGS_stringset::class_func_setWithStringArray (var_outputGroupFileList_26446  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 553)), var_buildCFileRefListForTool_25505, var_buildCppFileRefListForTool_25554, var_swift_5F_FileRefList_25605, var_frameworksFileRefList_25647, var_resourceFileBuildRefs_25693, var_groupRef_27075, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 550)) ;
      }
      {
      extensionSetter_placeGroupAsMainGroup (var_xcodeProject_21267, var_groupRef_27075, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 561)) ;
      }
      GGS__5B_string_5D_ var_libpmReferenceGroupList_27170 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
      {
      GGS_stringset temp_28 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 576)) ;
      temp_28.plusPlusAssignOperation (GGS_string ("BinaryDecisionDiagramRelationConfiguration.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 568)) ;
      temp_28.plusPlusAssignOperation (GGS_string ("BinaryDecisionDiagramRelationConfiguration.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 569)) ;
      temp_28.plusPlusAssignOperation (GGS_string ("BinaryDecisionDiagramRelation.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 570)) ;
      temp_28.plusPlusAssignOperation (GGS_string ("BinaryDecisionDiagramRelation.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 571)) ;
      temp_28.plusPlusAssignOperation (GGS_string ("BinaryDecisionDiagramRelationSingleType.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 572)) ;
      temp_28.plusPlusAssignOperation (GGS_string ("BinaryDecisionDiagramRelationSingleType.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 573)) ;
      temp_28.plusPlusAssignOperation (GGS_string ("BinaryDecisionDiagram-node.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 574)) ;
      temp_28.plusPlusAssignOperation (GGS_string ("BinaryDecisionDiagram.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 575)) ;
      temp_28.plusPlusAssignOperation (GGS_string ("BinaryDecisionDiagram.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 576)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_21267, GGS_string ("Binary Decision Diagrams"), GGS_string ("bdd"), temp_28, var_buildCFileRefListForTool_25505, var_buildCppFileRefListForTool_25554, var_swift_5F_FileRefList_25605, var_frameworksFileRefList_25647, var_resourceFileBuildRefs_25693, var_groupRef_27075, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 564)) ;
      }
      var_libpmReferenceGroupList_27170.plusPlusAssignOperation (var_groupRef_27075  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 585)) ;
      {
      GGS_stringset temp_29 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 627)) ;
      temp_29.plusPlusAssignOperation (GGS_string ("BigSigned-add.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 591)) ;
      temp_29.plusPlusAssignOperation (GGS_string ("BigSigned-bit.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 592)) ;
      temp_29.plusPlusAssignOperation (GGS_string ("BigSigned-chunk-operations.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 593)) ;
      temp_29.plusPlusAssignOperation (GGS_string ("BigSigned-constructors.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 594)) ;
      temp_29.plusPlusAssignOperation (GGS_string ("BigSigned-conversions.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 595)) ;
      temp_29.plusPlusAssignOperation (GGS_string ("BigSigned-divide.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 596)) ;
      temp_29.plusPlusAssignOperation (GGS_string ("BigSigned-logic-operations.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 597)) ;
      temp_29.plusPlusAssignOperation (GGS_string ("BigSigned-multiply.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 598)) ;
      temp_29.plusPlusAssignOperation (GGS_string ("BigSigned-print.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 599)) ;
      temp_29.plusPlusAssignOperation (GGS_string ("BigSigned-shifts.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 600)) ;
      temp_29.plusPlusAssignOperation (GGS_string ("BigSigned-subtract.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 601)) ;
      temp_29.plusPlusAssignOperation (GGS_string ("BigSigned-utilities.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 602)) ;
      temp_29.plusPlusAssignOperation (GGS_string ("BigSigned.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 603)) ;
      temp_29.plusPlusAssignOperation (GGS_string ("BigSigned.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 604)) ;
      temp_29.plusPlusAssignOperation (GGS_string ("BigUnsigned-add.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 605)) ;
      temp_29.plusPlusAssignOperation (GGS_string ("BigUnsigned-bit.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 606)) ;
      temp_29.plusPlusAssignOperation (GGS_string ("BigUnsigned-chunk-operations.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 607)) ;
      temp_29.plusPlusAssignOperation (GGS_string ("BigUnsigned-constructors.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 608)) ;
      temp_29.plusPlusAssignOperation (GGS_string ("BigUnsigned-conversions.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 609)) ;
      temp_29.plusPlusAssignOperation (GGS_string ("BigUnsigned-divide-naive.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 610)) ;
      temp_29.plusPlusAssignOperation (GGS_string ("BigUnsigned-divide.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 611)) ;
      temp_29.plusPlusAssignOperation (GGS_string ("BigUnsigned-logic-operations.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 612)) ;
      temp_29.plusPlusAssignOperation (GGS_string ("BigUnsigned-multiply.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 613)) ;
      temp_29.plusPlusAssignOperation (GGS_string ("BigUnsigned-print.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 614)) ;
      temp_29.plusPlusAssignOperation (GGS_string ("BigUnsigned-shifts.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 615)) ;
      temp_29.plusPlusAssignOperation (GGS_string ("BigUnsigned-subtract.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 616)) ;
      temp_29.plusPlusAssignOperation (GGS_string ("BigUnsigned-utilities.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 617)) ;
      temp_29.plusPlusAssignOperation (GGS_string ("BigUnsigned.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 618)) ;
      temp_29.plusPlusAssignOperation (GGS_string ("ChunkSelectSize.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 619)) ;
      temp_29.plusPlusAssignOperation (GGS_string ("ChunkSharedArray.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 620)) ;
      temp_29.plusPlusAssignOperation (GGS_string ("ChunkSharedArray.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 621)) ;
      temp_29.plusPlusAssignOperation (GGS_string ("UInt128.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 622)) ;
      temp_29.plusPlusAssignOperation (GGS_string ("UInt128.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 623)) ;
      temp_29.plusPlusAssignOperation (GGS_string ("chunk-U16.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 624)) ;
      temp_29.plusPlusAssignOperation (GGS_string ("chunk-U32.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 625)) ;
      temp_29.plusPlusAssignOperation (GGS_string ("chunk-U64.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 626)) ;
      temp_29.plusPlusAssignOperation (GGS_string ("chunk-U8.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 627)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_21267, GGS_string ("Big Integers"), GGS_string ("big-integers"), temp_29, var_buildCFileRefListForTool_25505, var_buildCppFileRefListForTool_25554, var_swift_5F_FileRefList_25605, var_frameworksFileRefList_25647, var_resourceFileBuildRefs_25693, var_groupRef_27075, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 587)) ;
      }
      var_libpmReferenceGroupList_27170.plusPlusAssignOperation (var_groupRef_27075  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 636)) ;
      {
      GGS_stringset temp_30 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 682)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("AbstractScanner.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 642)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("AllocationDebugView.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 643)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("Application.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 644)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("ASCII.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 645)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("Color+RawRepresentable.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 646)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("CommandLineOption.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 647)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("common-command-line-options.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 648)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("CompilationIssue.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 649)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("CompileLogView.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 650)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("CustomFont.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 651)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("CustomFontPicker.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 652)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("FocusedValues+extension.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 653)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("IdentifiableAttributedString.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 654)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("IndexingOperation.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 655)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("lexical-functions.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 656)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("LexicalToken.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 657)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("Notification+names.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 658)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("ProjectCompiler.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 659)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("ProjectDocument.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 660)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("ProjectDocumentView.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 661)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("ProjectDocumentView+compile.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 662)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("ProjectDocumentView+populateContextualMenu.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 663)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("ProjectDocumentView+search.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 664)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("ProjectWindowManagerView.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 665)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("RootDirectoryNode.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 666)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("ScrollSourceToLineNotification.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 667)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("SearchResultItem.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 668)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("SearchResultItemView.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 669)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("SearchResultNode.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 670)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("SearchResultNodeView.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 671)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("SharedTextModel.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 672)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("SourceFileNode.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 673)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("SourceFileNodeID.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 674)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("SourceFileNodeView.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 675)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("String+LineAndColumn.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 676)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("String+LineRangeForLineNumber.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 677)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("String+LineStartAndEndLocations.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 678)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("TemplateDelimiter.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 679)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("TextSyntaxColoringView.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 680)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("UInt64+displayString.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 681)) ;
      temp_30.plusPlusAssignOperation (GGS_string ("UserInterfaceSetting.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 682)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_21267, GGS_string ("Swift App"), GGS_string ("swiftui-app"), temp_30, var_buildCFileRefListForTool_25505, var_buildCppFileRefListForTool_25554, var_swift_5F_FileRefList_25605, var_frameworksFileRefList_25647, var_resourceFileBuildRefs_25693, var_groupRef_27075, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 638)) ;
      }
      var_libpmReferenceGroupList_27170.plusPlusAssignOperation (var_groupRef_27075  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 691)) ;
      {
      GGS_stringset temp_31 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 699)) ;
      temp_31.plusPlusAssignOperation (GGS_string ("GenericArray.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 697)) ;
      temp_31.plusPlusAssignOperation (GGS_string ("GenericUniqueArray.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 698)) ;
      temp_31.plusPlusAssignOperation (GGS_string ("GenericUniqueMatrix.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 699)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_21267, GGS_string ("Generic Arraies"), GGS_string ("generic-arraies"), temp_31, var_buildCFileRefListForTool_25505, var_buildCppFileRefListForTool_25554, var_swift_5F_FileRefList_25605, var_frameworksFileRefList_25647, var_resourceFileBuildRefs_25693, var_groupRef_27075, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 693)) ;
      }
      var_libpmReferenceGroupList_27170.plusPlusAssignOperation (var_groupRef_27075  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 708)) ;
      {
      GGS_stringset temp_32 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 725)) ;
      temp_32.plusPlusAssignOperation (GGS_string ("F_mainForLIBPM.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 714)) ;
      temp_32.plusPlusAssignOperation (GGS_string ("F_mainForLIBPM.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 715)) ;
      temp_32.plusPlusAssignOperation (GGS_string ("analyzeCommandLineOptions.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 716)) ;
      temp_32.plusPlusAssignOperation (GGS_string ("analyzeCommandLineOptions.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 717)) ;
      temp_32.plusPlusAssignOperation (GGS_string ("AbstractCommandLineOption.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 718)) ;
      temp_32.plusPlusAssignOperation (GGS_string ("AbstractCommandLineOption.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 719)) ;
      temp_32.plusPlusAssignOperation (GGS_string ("BoolCommandLineOption.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 720)) ;
      temp_32.plusPlusAssignOperation (GGS_string ("BoolCommandLineOption.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 721)) ;
      temp_32.plusPlusAssignOperation (GGS_string ("UIntCommandLineOption.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 722)) ;
      temp_32.plusPlusAssignOperation (GGS_string ("UIntCommandLineOption.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 723)) ;
      temp_32.plusPlusAssignOperation (GGS_string ("StringCommandLineOption.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 724)) ;
      temp_32.plusPlusAssignOperation (GGS_string ("StringCommandLineOption.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 725)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_21267, GGS_string ("Command line Interface"), GGS_string ("command_line_interface"), temp_32, var_buildCFileRefListForTool_25505, var_buildCppFileRefListForTool_25554, var_swift_5F_FileRefList_25605, var_frameworksFileRefList_25647, var_resourceFileBuildRefs_25693, var_groupRef_27075, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 710)) ;
      }
      var_libpmReferenceGroupList_27170.plusPlusAssignOperation (var_groupRef_27075  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 734)) ;
      {
      GGS_stringset temp_33 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 749)) ;
      temp_33.plusPlusAssignOperation (GGS_string ("FileManager.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 740)) ;
      temp_33.plusPlusAssignOperation (GGS_string ("FileManager.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 741)) ;
      temp_33.plusPlusAssignOperation (GGS_string ("AbstractFileHandle.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 742)) ;
      temp_33.plusPlusAssignOperation (GGS_string ("AbstractFileHandle.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 743)) ;
      temp_33.plusPlusAssignOperation (GGS_string ("BinaryFileWrite.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 744)) ;
      temp_33.plusPlusAssignOperation (GGS_string ("BinaryFileWrite.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 745)) ;
      temp_33.plusPlusAssignOperation (GGS_string ("TextFileWrite.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 746)) ;
      temp_33.plusPlusAssignOperation (GGS_string ("TextFileWrite.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 747)) ;
      temp_33.plusPlusAssignOperation (GGS_string ("HTMLFileWrite.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 748)) ;
      temp_33.plusPlusAssignOperation (GGS_string ("HTMLFileWrite.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 749)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_21267, GGS_string ("File"), GGS_string ("files"), temp_33, var_buildCFileRefListForTool_25505, var_buildCppFileRefListForTool_25554, var_swift_5F_FileRefList_25605, var_frameworksFileRefList_25647, var_resourceFileBuildRefs_25693, var_groupRef_27075, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 736)) ;
      }
      var_libpmReferenceGroupList_27170.plusPlusAssignOperation (var_groupRef_27075  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 758)) ;
      {
      GGS_stringset temp_34 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 836)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("AC_GALGAS_reference_class.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 764)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("AC_GALGAS_reference_class.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 765)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("AC_GALGAS_enumAssociatedValues.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 766)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("AC_GALGAS_enumAssociatedValues.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 767)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("AC_GALGAS_root.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 768)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("AC_GALGAS_root.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 769)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("AC_GALGAS_weak_reference.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 770)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("AC_GALGAS_weak_reference.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 771)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("AbstractPtrClass.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 772)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("AbstractPtrClass.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 773)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("AbstractStrongPtrClass.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 774)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("AbstractStrongPtrClass.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 775)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("PtrWeakReferenceProxy.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 776)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("PtrWeakReferenceProxy.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 777)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("Compiler.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 778)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("Compiler.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 779)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("C_galgas_class_inspector.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 780)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("C_galgas_class_inspector.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 781)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("execution-mode.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 782)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("execution-mode.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 783)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("filewrapper-utilities.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 784)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("filewrapper-utilities.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 785)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("galgas-input-output.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 786)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("galgas-input-output.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 787)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("GALGAS_TypeDescriptor.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 788)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("GALGAS_TypeDescriptor.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 789)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("IssueWithFixIt.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 790)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("IssueWithFixIt.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 791)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("Lexique-parsing.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 792)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("Lexique.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 793)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("Lexique.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 794)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("LocationInSource.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 795)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("LocationInSource.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 796)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("SourceTextInString.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 797)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("SourceTextInString.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 798)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("Enumerator_range.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 799)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("Enumerator_range.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 800)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("IndexingDictionary.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 801)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("IndexingDictionary.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 802)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("IssueDescriptor.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 803)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("IssueDescriptor.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 804)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("LexiqueIntrospection.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 805)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("LexiqueIntrospection.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 806)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("TemplateDelimiter.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 807)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("GGS_application.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 808)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("GGS_binaryset.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 809)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("GGS_bigint.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 810)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("GGS_bool.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 811)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("GGS_char.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 812)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("GGS_data.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 813)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("GGS_f64.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 814)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("GGS_filewrapper.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 815)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("GGS_location.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 816)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("GGS_s32.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 817)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("GGS_s64.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 818)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("GGS_string.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 819)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("GGS_string-getters.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 820)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("GGS_stringset.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 821)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("GGS_timer.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 822)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("GGS_u8.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 823)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("GGS_u16.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 824)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("GGS_u32.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 825)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("GGS_u64.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 826)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("scanner_actions.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 827)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("scanner_actions.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 828)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("ComparisonResult.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 829)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("ComparisonKind.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 830)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("EnumerationOrder.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 831)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("GALGAS_GenericDictionary.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 832)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("GALGAS_GenericMapRoot.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 833)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("SharedGenericPtrWithValueSemantics.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 834)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("SharedObject.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 835)) ;
      temp_34.plusPlusAssignOperation (GGS_string ("SharedObject.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 836)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_21267, GGS_string ("Galgas"), GGS_string ("galgas"), temp_34, var_buildCFileRefListForTool_25505, var_buildCppFileRefListForTool_25554, var_swift_5F_FileRefList_25605, var_frameworksFileRefList_25647, var_resourceFileBuildRefs_25693, var_groupRef_27075, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 760)) ;
      }
      var_libpmReferenceGroupList_27170.plusPlusAssignOperation (var_groupRef_27075  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 845)) ;
      {
      GGS_stringset temp_35 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 856)) ;
      temp_35.plusPlusAssignOperation (GGS_string ("AbstractOutputStream.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 851)) ;
      temp_35.plusPlusAssignOperation (GGS_string ("AbstractOutputStream.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 852)) ;
      temp_35.plusPlusAssignOperation (GGS_string ("ConsoleOut.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 853)) ;
      temp_35.plusPlusAssignOperation (GGS_string ("ConsoleOut.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 854)) ;
      temp_35.plusPlusAssignOperation (GGS_string ("ColoredConsole.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 855)) ;
      temp_35.plusPlusAssignOperation (GGS_string ("ColoredConsole.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 856)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_21267, GGS_string ("Streams"), GGS_string ("streams"), temp_35, var_buildCFileRefListForTool_25505, var_buildCppFileRefListForTool_25554, var_swift_5F_FileRefList_25605, var_frameworksFileRefList_25647, var_resourceFileBuildRefs_25693, var_groupRef_27075, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 847)) ;
      }
      var_libpmReferenceGroupList_27170.plusPlusAssignOperation (var_groupRef_27075  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 865)) ;
      {
      GGS_stringset temp_36 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 879)) ;
      temp_36.plusPlusAssignOperation (GGS_string ("String-class-getters.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 871)) ;
      temp_36.plusPlusAssignOperation (GGS_string ("String-class.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 872)) ;
      temp_36.plusPlusAssignOperation (GGS_string ("String-class.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 873)) ;
      temp_36.plusPlusAssignOperation (GGS_string ("string_encodings.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 874)) ;
      temp_36.plusPlusAssignOperation (GGS_string ("unicode-data.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 875)) ;
      temp_36.plusPlusAssignOperation (GGS_string ("utf32.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 876)) ;
      temp_36.plusPlusAssignOperation (GGS_string ("utf32.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 877)) ;
      temp_36.plusPlusAssignOperation (GGS_string ("print.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 878)) ;
      temp_36.plusPlusAssignOperation (GGS_string ("print.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 879)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_21267, GGS_string ("Strings"), GGS_string ("strings"), temp_36, var_buildCFileRefListForTool_25505, var_buildCppFileRefListForTool_25554, var_swift_5F_FileRefList_25605, var_frameworksFileRefList_25647, var_resourceFileBuildRefs_25693, var_groupRef_27075, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 867)) ;
      }
      var_libpmReferenceGroupList_27170.plusPlusAssignOperation (var_groupRef_27075  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 888)) ;
      {
      GGS_stringset temp_37 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 897)) ;
      temp_37.plusPlusAssignOperation (GGS_string ("DateTime.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 894)) ;
      temp_37.plusPlusAssignOperation (GGS_string ("DateTime.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 895)) ;
      temp_37.plusPlusAssignOperation (GGS_string ("Timer.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 896)) ;
      temp_37.plusPlusAssignOperation (GGS_string ("Timer.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 897)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_21267, GGS_string ("Time"), GGS_string ("time"), temp_37, var_buildCFileRefListForTool_25505, var_buildCppFileRefListForTool_25554, var_swift_5F_FileRefList_25605, var_frameworksFileRefList_25647, var_resourceFileBuildRefs_25693, var_groupRef_27075, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 890)) ;
      }
      var_libpmReferenceGroupList_27170.plusPlusAssignOperation (var_groupRef_27075  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 906)) ;
      {
      GGS_stringset temp_38 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 941)) ;
      temp_38.plusPlusAssignOperation (GGS_string ("basic-allocation.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 912)) ;
      temp_38.plusPlusAssignOperation (GGS_string ("basic-allocation.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 913)) ;
      temp_38.plusPlusAssignOperation (GGS_string ("U8Data.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 914)) ;
      temp_38.plusPlusAssignOperation (GGS_string ("U8Data.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 915)) ;
      temp_38.plusPlusAssignOperation (GGS_string ("DirectedGraph.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 916)) ;
      temp_38.plusPlusAssignOperation (GGS_string ("DirectedGraph.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 917)) ;
      temp_38.plusPlusAssignOperation (GGS_string ("PrologueEpilogue.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 918)) ;
      temp_38.plusPlusAssignOperation (GGS_string ("PrologueEpilogue.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 919)) ;
      temp_38.plusPlusAssignOperation (GGS_string ("UInt32Set.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 920)) ;
      temp_38.plusPlusAssignOperation (GGS_string ("UInt32Set.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 921)) ;
      temp_38.plusPlusAssignOperation (GGS_string ("cpp-allocation.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 922)) ;
      temp_38.plusPlusAssignOperation (GGS_string ("cpp-allocation.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 923)) ;
      temp_38.plusPlusAssignOperation (GGS_string ("F_DisplayException.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 924)) ;
      temp_38.plusPlusAssignOperation (GGS_string ("F_DisplayException.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 925)) ;
      temp_38.plusPlusAssignOperation (GGS_string ("F_GetPrime.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 926)) ;
      temp_38.plusPlusAssignOperation (GGS_string ("F_GetPrime.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 927)) ;
      temp_38.plusPlusAssignOperation (GGS_string ("M_machine.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 928)) ;
      temp_38.plusPlusAssignOperation (GGS_string ("M_SourceLocation.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 929)) ;
      temp_38.plusPlusAssignOperation (GGS_string ("md5.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 930)) ;
      temp_38.plusPlusAssignOperation (GGS_string ("md5.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 931)) ;
      temp_38.plusPlusAssignOperation (GGS_string ("SHA256.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 932)) ;
      temp_38.plusPlusAssignOperation (GGS_string ("SHA256.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 933)) ;
      temp_38.plusPlusAssignOperation (GGS_string ("macroAssert.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 934)) ;
      temp_38.plusPlusAssignOperation (GGS_string ("macroAssert.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 935)) ;
      temp_38.plusPlusAssignOperation (GGS_string ("MF_MemoryControl.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 936)) ;
      temp_38.plusPlusAssignOperation (GGS_string ("MF_MemoryControl.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 937)) ;
      temp_38.plusPlusAssignOperation (GGS_string ("switch-fallthrough.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 938)) ;
      temp_38.plusPlusAssignOperation (GGS_string ("TF_Swap.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 939)) ;
      temp_38.plusPlusAssignOperation (GGS_string ("galgas-random.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 940)) ;
      temp_38.plusPlusAssignOperation (GGS_string ("galgas-random.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 941)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_21267, GGS_string ("Utilities"), GGS_string ("utilities"), temp_38, var_buildCFileRefListForTool_25505, var_buildCppFileRefListForTool_25554, var_swift_5F_FileRefList_25605, var_frameworksFileRefList_25647, var_resourceFileBuildRefs_25693, var_groupRef_27075, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 908)) ;
      }
      var_libpmReferenceGroupList_27170.plusPlusAssignOperation (var_groupRef_27075  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 950)) ;
      GGS_string var_libpmGroupRef_40001 ;
      {
      extensionSetter_addGroup (var_xcodeProject_21267, GGS_string ("libpm"), GGS_string ("../").add_operation (constinArgument_inBuildDirectoryName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 952)).add_operation (GGS_string ("/libpm"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 952)), var_libpmReferenceGroupList_27170, var_libpmGroupRef_40001, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 952)) ;
      }
      {
      extensionSetter_placeGroupAsMainGroup (var_xcodeProject_21267, var_libpmGroupRef_40001, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 953)) ;
      }
      GGS_string var_resourcesGroupRef_40497 ;
      {
      GGS_stringset temp_39 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 958)) ;
      temp_39.plusPlusAssignOperation (GGS_string ("Info.plist")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 958)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_21267, GGS_string ("Resources"), GGS_string ("."), temp_39, var_buildCFileRefListForTool_25505, var_buildCppFileRefListForTool_25554, var_swift_5F_FileRefList_25605, var_frameworksFileRefList_25647, var_resourceFileBuildRefs_25693, var_resourcesGroupRef_40497, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 955)) ;
      }
      {
      extensionSetter_placeGroupAsMainGroup (var_xcodeProject_21267, var_resourcesGroupRef_40497, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 966)) ;
      }
      GGS_string var_userResourcesGroupRef_41056 ;
      {
      extensionSetter_addGroupWithFiles (var_xcodeProject_21267, GGS_string ("User Resources"), GGS_string ("userResources"), GGS_stringset::class_func_setWithStringArray (var_resourceFiles_20900  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 971)), var_buildCFileRefListForTool_25505, var_buildCppFileRefListForTool_25554, var_swift_5F_FileRefList_25605, var_frameworksFileRefList_25647, var_resourceFileBuildRefs_25693, var_userResourcesGroupRef_41056, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 968)) ;
      }
      {
      extensionSetter_placeGroupAsMainGroup (var_xcodeProject_21267, var_userResourcesGroupRef_41056, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 979)) ;
      }
      GGS_string var_frameworkGroupRef_41670 ;
      {
      GGS_stringset temp_40 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 986)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("AppKit.framework")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 985)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("Cocoa.framework")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 986)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_21267, GGS_string ("Frameworks for App"), GGS_string ("/System/Library/Frameworks"), temp_40, var_buildCFileRefListForTool_25505, var_buildCppFileRefListForTool_25554, var_swift_5F_FileRefList_25605, var_frameworksFileRefList_25647, var_resourceFileBuildRefs_25693, var_frameworkGroupRef_41670, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 981)) ;
      }
      {
      extensionSetter_placeGroupAsMainGroup (var_xcodeProject_21267, var_frameworkGroupRef_41670, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 995)) ;
      }
      GGS__5B_string_5D_ var_codeSigningSettingList_41813 ;
      GalgasBool test_41 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_41) {
        test_41 = GGS_bool (ComparisonKind::equal, var_macCodeSign_14195.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_41) {
          GGS__5B_string_5D_ temp_42 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 999)) ;
          temp_42.plusPlusAssignOperation (GGS_string ("CODE_SIGN_IDENTITY = \"-\"")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 999)) ;
          var_codeSigningSettingList_41813 = temp_42 ;
        }
      }
      if (GalgasBool::boolFalse == test_41) {
        GGS__5B_string_5D_ var_components_41954 = var_macCodeSign_14195.readProperty_string ().getter_componentsSeparatedByString (GGS_string (":") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1001)) ;
        GalgasBool test_43 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_43) {
          test_43 = GGS_bool (ComparisonKind::notEqual, var_components_41954.getter_count (SOURCE_FILE ("galgasTargetGeneration.galgas4", 1002)).objectCompare (GGS_u_33__32_ (uint32_t (2U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_43) {
            GenericArray <FixItDescription> fixItArray44 ;
            inCompiler->emitSemanticError (var_macCodeSign_14195.readProperty_location (), GGS_string ("the %macCodeSign attribute associated string should be \"key:value\""), fixItArray44  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1003)) ;
            var_codeSigningSettingList_41813.drop () ; // Release error dropped variable
          }
        }
        if (GalgasBool::boolFalse == test_43) {
          GalgasBool test_45 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_45) {
            test_45 = GGS_bool (ComparisonKind::equal, var_components_41954.getter_first (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1004)).objectCompare (GGS_string ("MacDeveloper"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_45) {
              GGS__5B_string_5D_ temp_46 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1007)) ;
              temp_46.plusPlusAssignOperation (GGS_string ("CODE_SIGN_IDENTITY = \"Mac Developer\"")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1006)) ;
              temp_46.plusPlusAssignOperation (GGS_string ("DEVELOPMENT_TEAM = \"").add_operation (var_components_41954.readSubcript__3F_ (GGS_u_33__32_ (uint32_t (1U)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1007)).add_operation (GGS_string ("\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1007))  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1007)) ;
              var_codeSigningSettingList_41813 = temp_46 ;
            }
          }
          if (GalgasBool::boolFalse == test_45) {
            GalgasBool test_47 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_47) {
              test_47 = GGS_bool (ComparisonKind::equal, var_components_41954.getter_first (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1009)).objectCompare (GGS_string ("Certificate"))).boolEnum () ;
              if (GalgasBool::boolTrue == test_47) {
                GGS__5B_string_5D_ temp_48 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1010)) ;
                temp_48.plusPlusAssignOperation (GGS_string ("CODE_SIGN_IDENTITY = \"").add_operation (var_components_41954.readSubcript__3F_ (GGS_u_33__32_ (uint32_t (1U)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1010)).add_operation (GGS_string ("\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1010))  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1010)) ;
                var_codeSigningSettingList_41813 = temp_48 ;
              }
            }
            if (GalgasBool::boolFalse == test_47) {
              GenericArray <FixItDescription> fixItArray49 ;
              inCompiler->emitSemanticError (var_macCodeSign_14195.readProperty_location (), GGS_string ("the %macCodeSign attribute string is \"key:value\", but key should be 'MacDeveloper' or 'Certificate'"), fixItArray49  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1012)) ;
              var_codeSigningSettingList_41813.drop () ; // Release error dropped variable
            }
          }
        }
      }
      GGS__5B_string_5D_ temp_50 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1020)) ;
      temp_50.plusPlusAssignOperation (GGS_string ("GCC_OPTIMIZATION_LEVEL = 2")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1017)) ;
      temp_50.plusPlusAssignOperation (GGS_string ("GCC_PREPROCESSOR_DEFINITIONS = (DO_NOT_GENERATE_CHECKINGS)")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1018)) ;
      temp_50.plusPlusAssignOperation (GGS_string ("GCC_WARN_UNUSED_PARAMETER = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1019)) ;
      temp_50.plusPlusAssignOperation (GGS_string ("PRODUCT_BUNDLE_IDENTIFIER = \"").add_operation (var_applicationBundleBase_19386, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1020)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1020)).add_operation (var_inTargetName_15531, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1020)).add_operation (GGS_string (".tool\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1020))  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1020)) ;
      GGS__5B_string_5D_ var_settingList_42768 = temp_50.add_operation (var_codeSigningSettingList_41813, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1021)) ;
      GGS_string var_releaseTargetRef_43337 ;
      GGS_string var_releaseProductFileRef_43381 ;
      {
      GGS__5B_string_5D_ temp_51 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1026)) ;
      extensionSetter_addToolTarget (var_xcodeProject_21267, var_inTargetName_15531.add_operation (GGS_string (" tool"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1023)), var_inTargetName_15531, var_buildCFileRefListForTool_25505.add_operation (var_buildCppFileRefListForTool_25554, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1025)), temp_51, var_settingList_42768, var_releaseTargetRef_43337, var_releaseProductFileRef_43381, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1022)) ;
      }
      GGS__5B_string_5D_ temp_52 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1037)) ;
      temp_52.plusPlusAssignOperation (GGS_string ("GCC_OPTIMIZATION_LEVEL = 0")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1033)) ;
      temp_52.plusPlusAssignOperation (GGS_string ("GCC_GENERATE_DEBUGGING_SYMBOLS = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1034)) ;
      temp_52.plusPlusAssignOperation (GGS_string ("GCC_PREPROCESSOR_DEFINITIONS = ()")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1035)) ;
      temp_52.plusPlusAssignOperation (GGS_string ("GCC_WARN_UNUSED_PARAMETER = YES")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1036)) ;
      temp_52.plusPlusAssignOperation (GGS_string ("PRODUCT_BUNDLE_IDENTIFIER = \"").add_operation (var_applicationBundleBase_19386, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1037)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1037)).add_operation (var_inTargetName_15531, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1037)).add_operation (GGS_string (".tooldebug\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1037))  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1037)) ;
      var_settingList_42768 = temp_52.add_operation (var_codeSigningSettingList_41813, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1038)) ;
      GGS_string var_debugTargetRef_44055 ;
      GGS_string var_debugProductFileRef_44097 ;
      {
      GGS__5B_string_5D_ temp_53 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1043)) ;
      extensionSetter_addToolTarget (var_xcodeProject_21267, var_inTargetName_15531.add_operation (GGS_string (" tool debug"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1040)), var_inTargetName_15531.add_operation (GGS_string ("-debug"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1041)), var_buildCFileRefListForTool_25505.add_operation (var_buildCppFileRefListForTool_25554, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1042)), temp_53, var_settingList_42768, var_debugTargetRef_44055, var_debugProductFileRef_44097, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1039)) ;
      }
      GGS__5B_string_5D_ temp_54 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1051)) ;
      temp_54.plusPlusAssignOperation (GGS_string ("GCC_OPTIMIZATION_LEVEL = 0")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1050)) ;
      temp_54.plusPlusAssignOperation (GGS_string ("GCC_PREPROCESSOR_DEFINITIONS = ()")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1051)) ;
      GGS__5B_string_5D_ var_cocoaConfigurationSettingList_44166 = temp_54.add_operation (var_codeSigningSettingList_41813, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1052)) ;
      {
      GGS__5B_string_5D_ temp_55 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1060)) ;
      temp_55.plusPlusAssignOperation (var_releaseTargetRef_43337  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1060)) ;
      temp_55.plusPlusAssignOperation (var_debugTargetRef_44055  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1060)) ;
      GGS__5B__32_string_5D_ temp_56 = GGS__5B__32_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1061)) ;
      temp_56.plusPlusAssignOperation (GGS__32_string::init_21__21_ (var_releaseProductFileRef_43381, var_inTargetName_15531, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1061)) ;
      temp_56.plusPlusAssignOperation (GGS__32_string::init_21__21_ (var_debugProductFileRef_44097, var_inTargetName_15531.add_operation (GGS_string ("-debug"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1061)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1061)) ;
      GGS_string joker_44845 ; // Joker input parameter
      extensionSetter_addAppTarget (var_xcodeProject_21267, var_inTargetName_15531.add_operation (GGS_string (" IDE"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1054)), var_inTargetName_15531.getter_capitalizingFirstCharacter (SOURCE_FILE ("galgasTargetGeneration.galgas4", 1055)).add_operation (GGS_string (" IDE"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1055)), var_swift_5F_FileRefList_25605, var_frameworksFileRefList_25647, var_resourceFileBuildRefs_25693, var_cocoaConfigurationSettingList_44166, temp_55, temp_56, joker_44845, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1053)) ;
      }
      extensionMethod_generateAtPath (var_xcodeProject_21267, var_dir_19284.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1066)).add_operation (var_inTargetName_15531, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1066)).add_operation (GGS_string (".xcodeproj"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1066)), var_newIntermediateFilePath_21017, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas4", 1065)) ;
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalSendTerminalByDefaultAST checkLexicalDefaultAction'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalSendTerminalByDefaultAST::method_checkLexicalDefaultAction (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexicalSendTerminalByDefaultAST temp_0 = this ;
  GGS__5B_lexicalSentValue_5D_ joker_8010 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mTerminalMap ().method_searchKey (temp_0.readProperty_mDefaultSentTerminal (), joker_8010, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 195)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalErrorByDefaultAST checkLexicalDefaultAction'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalErrorByDefaultAST::method_checkLexicalDefaultAction (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_lexicalErrorByDefaultAST temp_0 = this ;
  ioArgument_ioLexiqueAnalysisContext.mProperty_mLexicalMessageMap.setter_setMMessageIsUsedForKey (GGS_bool (true), temp_0.readProperty_mDefaultErrorMessageName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 203)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalOrExpressionAST checkLexicalExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalOrExpressionAST::method_checkLexicalExpression (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexicalOrExpressionAST temp_0 = this ;
  callExtensionMethod_checkLexicalExpression ((cPtr_lexicalExpressionAST *) temp_0.readProperty_mLeftOperand ().ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 212)) ;
  const GGS_lexicalOrExpressionAST temp_1 = this ;
  callExtensionMethod_checkLexicalExpression ((cPtr_lexicalExpressionAST *) temp_1.readProperty_mRightOperand ().ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 213)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalCharacterMatchAST checkLexicalExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalCharacterMatchAST::method_checkLexicalExpression (GGS_lexiqueAnalysisContext & /* ioArgument__5F_ioLexiqueAnalysisContext */,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalCharacterSetMatchAST checkLexicalExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalCharacterSetMatchAST::method_checkLexicalExpression (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_lexicalCharacterSetMatchAST temp_1 = this ;
    test_0 = ioArgument_ioLexiqueAnalysisContext.readProperty_mUnicodeTestFunctions ().getter_contains (temp_1.readProperty_mCharacterSetName ().readProperty_string () COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 227)).operator_not (SOURCE_FILE ("lexiqueCompilation.galgas4", 227)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_lexicalCharacterSetMatchAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      appendFixItActions (fixItArray3, EnumFixItKind::fixItReplace, ioArgument_ioLexiqueAnalysisContext.readProperty_mUnicodeTestFunctions ()) ;
      inCompiler->emitSemanticError (temp_2.readProperty_mCharacterSetName ().readProperty_location (), GGS_string ("undefined test function"), fixItArray3  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 228)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalCharacterIntervalMatchAST checkLexicalExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalCharacterIntervalMatchAST::method_checkLexicalExpression (GGS_lexiqueAnalysisContext & /* ioArgument__5F_ioLexiqueAnalysisContext */,
                                                                           Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalStringMatchAST checkLexicalExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalStringMatchAST::method_checkLexicalExpression (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexicalStringMatchAST temp_0 = this ;
  ioArgument_ioLexiqueAnalysisContext.mProperty_mUnicodeStringToGenerate.plusPlusAssignOperation (temp_0.readProperty_mString ().readProperty_string ()  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 242)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalStringNotMatchAST checkLexicalExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalStringNotMatchAST::method_checkLexicalExpression (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexicalStringNotMatchAST temp_0 = this ;
  ioArgument_ioLexiqueAnalysisContext.mProperty_mUnicodeStringToGenerate.plusPlusAssignOperation (temp_0.readProperty_mString ().readProperty_string ()  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 249)) ;
  {
  const GGS_lexicalStringNotMatchAST temp_1 = this ;
  ioArgument_ioLexiqueAnalysisContext.mProperty_mLexicalMessageMap.setter_setMMessageIsUsedForKey (GGS_bool (true), temp_1.readProperty_mErrorMessage ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 250)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalAttributeInputArgumentAST checkLexicalFunctionCallArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalAttributeInputArgumentAST::method_checkLexicalFunctionCallArgument (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                     const GGS_lexicalTypeEnum constinArgument_inLexicalRoutineFormalArgumentType,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalTypeEnum var_attributeLexicalType_11095 ;
  const GGS_lexicalAttributeInputArgumentAST temp_0 = this ;
  ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalAttributeMap ().method_searchKey (temp_0.readProperty_mAttributeName (), var_attributeLexicalType_11095, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 261)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_attributeLexicalType_11095.objectCompare (constinArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_lexicalAttributeInputArgumentAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAttributeName ().readProperty_location (), GGS_string ("type error, attribute type is @").add_operation (extensionGetter_lexicalTypeBaseName (var_attributeLexicalType_11095, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 268)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 267)).add_operation (GGS_string (" type, but lexical routine prototype requires @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 268)).add_operation (extensionGetter_lexicalTypeBaseName (constinArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 270)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 269)).add_operation (GGS_string (" type"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 270)), fixItArray3  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 267)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalCharacterInputArgumentAST checkLexicalFunctionCallArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalCharacterInputArgumentAST::method_checkLexicalFunctionCallArgument (GGS_lexiqueAnalysisContext & /* ioArgument__5F_ioLexiqueAnalysisContext */,
                                                                                     const GGS_lexicalTypeEnum constinArgument_inLexicalRoutineFormalArgumentType,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("lexiqueCompilation.galgas4", 282)).objectCompare (constinArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_lexicalCharacterInputArgumentAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mCharacter ().readProperty_location (), GGS_string ("type error, a literal character has @char").add_operation (GGS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 283)).add_operation (extensionGetter_lexicalTypeBaseName (constinArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 285)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 284)).add_operation (GGS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 285)), fixItArray2  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 283)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalUnsignedInputArgumentAST checkLexicalFunctionCallArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalUnsignedInputArgumentAST::method_checkLexicalFunctionCallArgument (GGS_lexiqueAnalysisContext & /* ioArgument__5F_ioLexiqueAnalysisContext */,
                                                                                    const GGS_lexicalTypeEnum constinArgument_inLexicalRoutineFormalArgumentType,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("lexiqueCompilation.galgas4", 297)).objectCompare (constinArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_lexicalUnsignedInputArgumentAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mUnsigned ().readProperty_location (), GGS_string ("type error, a literal character has @u32").add_operation (GGS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 298)).add_operation (extensionGetter_lexicalTypeBaseName (constinArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 300)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 299)).add_operation (GGS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 300)), fixItArray2  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 298)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalCurrentCharacterInputArgumentAST checkLexicalFunctionCallArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalCurrentCharacterInputArgumentAST::method_checkLexicalFunctionCallArgument (GGS_lexiqueAnalysisContext & /* ioArgument__5F_ioLexiqueAnalysisContext */,
                                                                                            const GGS_lexicalTypeEnum constinArgument_inLexicalRoutineFormalArgumentType,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("lexiqueCompilation.galgas4", 312)).objectCompare (constinArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_lexicalCurrentCharacterInputArgumentAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mLocation (), GGS_string ("type error, current character value has @char").add_operation (GGS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 313)).add_operation (extensionGetter_lexicalTypeBaseName (constinArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 315)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 314)).add_operation (GGS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 315)), fixItArray2  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 313)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalFunctionInputArgumentAST checkLexicalFunctionCallArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalFunctionInputArgumentAST::method_checkLexicalFunctionCallArgument (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                    const GGS_lexicalTypeEnum constinArgument_inLexicalRoutineFormalArgumentType,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_lexicalFunctionFormalArgumentAST_5D_ var_lexicalFormalTypeList_13748 ;
  GGS_lexicalTypeEnum var_returnedLexicalFormalType_13780 ;
  GGS_string var_replacementFunctionName_13816 ;
  const GGS_lexicalFunctionInputArgumentAST temp_0 = this ;
  GGS_bool joker_13845 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalFunctionMap ().method_searchKey (temp_0.readProperty_mFunctionName (), var_lexicalFormalTypeList_13748, var_returnedLexicalFormalType_13780, var_replacementFunctionName_13816, joker_13845, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 327)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_replacementFunctionName_13816.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_lexicalFunctionInputArgumentAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (temp_2.readProperty_mFunctionName ().readProperty_location (), GGS_string ("obsolete lexical function, replaced by '").add_operation (var_replacementFunctionName_13816, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 336)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 336)), fixItArray3  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 336)) ;
    }
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::notEqual, var_returnedLexicalFormalType_13780.objectCompare (constinArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_lexicalFunctionInputArgumentAST temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mFunctionName ().readProperty_location (), GGS_string ("type error, the function returns an @").add_operation (extensionGetter_lexicalTypeBaseName (var_returnedLexicalFormalType_13780, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 341)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 340)).add_operation (GGS_string (" value, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 341)).add_operation (extensionGetter_lexicalTypeBaseName (constinArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 343)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 342)).add_operation (GGS_string (" value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 343)), fixItArray6  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 340)) ;
    }
  }
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    const GGS_lexicalFunctionInputArgumentAST temp_8 = this ;
    test_7 = GGS_bool (ComparisonKind::notEqual, var_lexicalFormalTypeList_13748.getter_count (SOURCE_FILE ("lexiqueCompilation.galgas4", 348)).objectCompare (temp_8.readProperty_mFunctionActualArgumentList ().getter_count (SOURCE_FILE ("lexiqueCompilation.galgas4", 348)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      const GGS_lexicalFunctionInputArgumentAST temp_9 = this ;
      const GGS_lexicalFunctionInputArgumentAST temp_10 = this ;
      GenericArray <FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mFunctionName ().readProperty_location (), GGS_string ("this lexical function names ").add_operation (temp_10.readProperty_mFunctionActualArgumentList ().getter_count (SOURCE_FILE ("lexiqueCompilation.galgas4", 350)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas4", 350)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 349)).add_operation (GGS_string (" actual argument(s), but the prototype requires "), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 350)).add_operation (var_lexicalFormalTypeList_13748.getter_count (SOURCE_FILE ("lexiqueCompilation.galgas4", 352)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas4", 352)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 351)).add_operation (GGS_string (" actual argument(s)"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 352)), fixItArray11  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 349)) ;
    }
  }
  const GGS_lexicalFunctionInputArgumentAST temp_12 = this ;
  UpEnumerator__5B_lexicalFunctionFormalArgumentAST_5D_ enumerator_14828 (var_lexicalFormalTypeList_13748) ;
  UpEnumerator__5B_lexicalRoutineOrFunctionFormalInputArgumentAST_5D_ enumerator_14866 (temp_12.readProperty_mFunctionActualArgumentList ()) ;
  while (enumerator_14828.hasCurrentObject () && enumerator_14866.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalFunctionCallArgument ((cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) enumerator_14866.current (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, enumerator_14828.current (HERE).readProperty_mLexicalType (), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 357)) ;
    enumerator_14828.gotoNextObject () ;
    enumerator_14866.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalAttributeInputArgumentAST checkLexicalRoutineCallArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalAttributeInputArgumentAST::method_checkLexicalRoutineCallArgument (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                    const GGS_lexicalTypeEnum constinArgument_inLexicalRoutineFormalArgumentType,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalTypeEnum var_attributeLexicalType_15597 ;
  const GGS_lexicalAttributeInputArgumentAST temp_0 = this ;
  ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalAttributeMap ().method_searchKey (temp_0.readProperty_mAttributeName (), var_attributeLexicalType_15597, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 372)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_attributeLexicalType_15597.objectCompare (constinArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_lexicalAttributeInputArgumentAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAttributeName ().readProperty_location (), GGS_string ("type error, attribute type is @").add_operation (extensionGetter_lexicalTypeBaseName (var_attributeLexicalType_15597, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 379)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 378)).add_operation (GGS_string (" type, but lexical routine prototype requires @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 379)).add_operation (extensionGetter_lexicalTypeBaseName (constinArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 381)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 380)).add_operation (GGS_string (" type"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 381)), fixItArray3  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 378)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalCharacterInputArgumentAST checkLexicalRoutineCallArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalCharacterInputArgumentAST::method_checkLexicalRoutineCallArgument (GGS_lexiqueAnalysisContext & /* ioArgument__5F_ioLexiqueAnalysisContext */,
                                                                                    const GGS_lexicalTypeEnum constinArgument_inLexicalRoutineFormalArgumentType,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("lexiqueCompilation.galgas4", 393)).objectCompare (constinArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_lexicalCharacterInputArgumentAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mCharacter ().readProperty_location (), GGS_string ("type error, a literal character has @char").add_operation (GGS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 394)).add_operation (extensionGetter_lexicalTypeBaseName (constinArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 396)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 395)).add_operation (GGS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 396)), fixItArray2  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 394)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalUnsignedInputArgumentAST checkLexicalRoutineCallArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalUnsignedInputArgumentAST::method_checkLexicalRoutineCallArgument (GGS_lexiqueAnalysisContext & /* ioArgument__5F_ioLexiqueAnalysisContext */,
                                                                                   const GGS_lexicalTypeEnum constinArgument_inLexicalRoutineFormalArgumentType,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("lexiqueCompilation.galgas4", 408)).objectCompare (constinArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_lexicalUnsignedInputArgumentAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mUnsigned ().readProperty_location (), GGS_string ("type error, a literal unsigned value has @u32").add_operation (GGS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 409)).add_operation (extensionGetter_lexicalTypeBaseName (constinArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 411)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 410)).add_operation (GGS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 411)), fixItArray2  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 409)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalCurrentCharacterInputArgumentAST checkLexicalRoutineCallArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalCurrentCharacterInputArgumentAST::method_checkLexicalRoutineCallArgument (GGS_lexiqueAnalysisContext & /* ioArgument__5F_ioLexiqueAnalysisContext */,
                                                                                           const GGS_lexicalTypeEnum constinArgument_inLexicalRoutineFormalArgumentType,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("lexiqueCompilation.galgas4", 423)).objectCompare (constinArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_lexicalCurrentCharacterInputArgumentAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mLocation (), GGS_string ("type error, current character value has @char").add_operation (GGS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 424)).add_operation (extensionGetter_lexicalTypeBaseName (constinArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 426)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 425)).add_operation (GGS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 426)), fixItArray2  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 424)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalFunctionInputArgumentAST checkLexicalRoutineCallArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalFunctionInputArgumentAST::method_checkLexicalRoutineCallArgument (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                   const GGS_lexicalTypeEnum constinArgument_inLexicalRoutineFormalArgumentType,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_lexicalFunctionFormalArgumentAST_5D_ var_lexicalFormalTypeList_18254 ;
  GGS_lexicalTypeEnum var_returnedLexicalFormalType_18286 ;
  GGS_string var_replacementFunctionName_18322 ;
  const GGS_lexicalFunctionInputArgumentAST temp_0 = this ;
  GGS_bool joker_18351 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalFunctionMap ().method_searchKey (temp_0.readProperty_mFunctionName (), var_lexicalFormalTypeList_18254, var_returnedLexicalFormalType_18286, var_replacementFunctionName_18322, joker_18351, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 438)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_replacementFunctionName_18322.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_lexicalFunctionInputArgumentAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (temp_2.readProperty_mFunctionName ().readProperty_location (), GGS_string ("obsolete lexical function, replaced by '").add_operation (var_replacementFunctionName_18322, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 447)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 447)), fixItArray3  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 447)) ;
    }
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::notEqual, var_returnedLexicalFormalType_18286.objectCompare (constinArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_lexicalFunctionInputArgumentAST temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mFunctionName ().readProperty_location (), GGS_string ("type error, the function returns an @").add_operation (extensionGetter_lexicalTypeBaseName (var_returnedLexicalFormalType_18286, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 452)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 451)).add_operation (GGS_string (" value, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 452)).add_operation (extensionGetter_lexicalTypeBaseName (constinArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 454)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 453)).add_operation (GGS_string (" value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 454)), fixItArray6  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 451)) ;
    }
  }
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    const GGS_lexicalFunctionInputArgumentAST temp_8 = this ;
    test_7 = GGS_bool (ComparisonKind::notEqual, var_lexicalFormalTypeList_18254.getter_count (SOURCE_FILE ("lexiqueCompilation.galgas4", 459)).objectCompare (temp_8.readProperty_mFunctionActualArgumentList ().getter_count (SOURCE_FILE ("lexiqueCompilation.galgas4", 459)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      const GGS_lexicalFunctionInputArgumentAST temp_9 = this ;
      const GGS_lexicalFunctionInputArgumentAST temp_10 = this ;
      GenericArray <FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mFunctionName ().readProperty_location (), GGS_string ("this lexical function names ").add_operation (temp_10.readProperty_mFunctionActualArgumentList ().getter_count (SOURCE_FILE ("lexiqueCompilation.galgas4", 461)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas4", 461)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 460)).add_operation (GGS_string (" actual argument(s), but the prototype requires "), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 461)).add_operation (var_lexicalFormalTypeList_18254.getter_count (SOURCE_FILE ("lexiqueCompilation.galgas4", 463)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas4", 463)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 462)).add_operation (GGS_string (" actual argument(s)"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 463)), fixItArray11  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 460)) ;
    }
  }
  const GGS_lexicalFunctionInputArgumentAST temp_12 = this ;
  UpEnumerator__5B_lexicalFunctionFormalArgumentAST_5D_ enumerator_19335 (var_lexicalFormalTypeList_18254) ;
  UpEnumerator__5B_lexicalRoutineOrFunctionFormalInputArgumentAST_5D_ enumerator_19373 (temp_12.readProperty_mFunctionActualArgumentList ()) ;
  while (enumerator_19335.hasCurrentObject () && enumerator_19373.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalFunctionCallArgument ((cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) enumerator_19373.current (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, enumerator_19335.current (HERE).readProperty_mLexicalType (), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 468)) ;
    enumerator_19335.gotoNextObject () ;
    enumerator_19373.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalImplicitRuleAST checkLexicalRule'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalImplicitRuleAST::method_checkLexicalRule (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexicalImplicitRuleAST temp_0 = this ;
  GGS_lexicalExplicitTokenListMap joker_19967 ; // Joker input parameter
  GGS_sortedTokenArray joker_19971 ; // Joker input parameter
  GGS_bool joker_19975 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalTokenListMap ().method_searchKey (temp_0.readProperty_mListName (), joker_19967, joker_19971, joker_19975, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 481)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalExplicitRuleAST checkLexicalRule'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalExplicitRuleAST::method_checkLexicalRule (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexicalExplicitRuleAST temp_0 = this ;
  callExtensionMethod_checkLexicalExpression ((cPtr_lexicalExpressionAST *) temp_0.readProperty_mLexicalRuleExpression ().ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 488)) ;
  GGS_lexicalTagMap var_tagMap_20300 = GGS_lexicalTagMap::init (inCompiler COMMA_HERE) ;
  const GGS_lexicalExplicitRuleAST temp_1 = this ;
  UpEnumerator__5B_lexicalInstructionAST_5D_ enumerator_20333 (temp_1.readProperty_mInstructionList ()) ;
  while (enumerator_20333.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalInstruction ((cPtr_lexicalInstructionAST *) enumerator_20333.current (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap_20300, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas4", 491)) ;
    enumerator_20333.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Function 'transformLabelMap'
//
//--------------------------------------------------------------------------------------------------

GGS_nonterminalSymbolLabelMapForGrammarAnalysis function_transformLabelMap (const GGS__5B_nonTerminalLabelAST_5D_ & constinArgument_inLabels,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_nonterminalSymbolLabelMapForGrammarAnalysis result ; // Returned variable
  result = GGS_nonterminalSymbolLabelMapForGrammarAnalysis::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_nonTerminalLabelAST_5D_ enumerator_1527 (constinArgument_inLabels) ;
  while (enumerator_1527.hasCurrentObject ()) {
    GGS__5B_signatureElementForGrammarAnalysis_5D_ var_formalParametersList_1585 = GGS__5B_signatureElementForGrammarAnalysis_5D_::init (inCompiler COMMA_HERE) ;
    UpEnumerator__5B_formalParameterAST_5D_ enumerator_1640 (enumerator_1527.current (HERE).readProperty_mFormalArgumentList ()) ;
    while (enumerator_1640.hasCurrentObject ()) {
      var_formalParametersList_1585.plusPlusAssignOperation (GGS_signatureElementForGrammarAnalysis::init_21__21_ (enumerator_1640.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_1640.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 33)) ;
      enumerator_1640.gotoNextObject () ;
    }
    {
    result.setter_insertKey (enumerator_1527.current (HERE).readProperty_mLabelName (), var_formalParametersList_1585, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 35)) ;
    }
    enumerator_1527.gotoNextObject () ;
  }
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'checkLabelMap????'
//
//--------------------------------------------------------------------------------------------------

void routine_checkLabelMap_3F__3F__3F__3F_ (const GGS_location constinArgument_inNonTerminalLocation,
                                            const GGS__5B_nonTerminalLabelAST_5D_ constinArgument_inLabels,
                                            const GGS_location constinArgument_inOriginalNonTerminalLocation,
                                            const GGS_nonterminalSymbolLabelMapForGrammarAnalysis constinArgument_inNonterminalSymbolLabelMapForGrammarAnalysis,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset var_labelStringSet_2216 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_nonTerminalLabelAST_5D_ enumerator_2253 (constinArgument_inLabels) ;
  while (enumerator_2253.hasCurrentObject ()) {
    var_labelStringSet_2216.plusPlusAssignOperation (enumerator_2253.current (HERE).readProperty_mLabelName ().readProperty_string ()  COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 49)) ;
    GGS__5B_signatureElementForGrammarAnalysis_5D_ var_formalParametersList_2398 ;
    constinArgument_inNonterminalSymbolLabelMapForGrammarAnalysis.method_searchKey (enumerator_2253.current (HERE).readProperty_mLabelName (), var_formalParametersList_2398, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 50)) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::notEqual, enumerator_2253.current (HERE).readProperty_mFormalArgumentList ().getter_count (SOURCE_FILE ("grammarCompilation.galgas4", 51)).objectCompare (var_formalParametersList_2398.getter_count (SOURCE_FILE ("grammarCompilation.galgas4", 51)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_string temp_1 ;
        const GalgasBool test_2 = GGS_bool (ComparisonKind::greaterThan, enumerator_2253.current (HERE).readProperty_mFormalArgumentList ().getter_count (SOURCE_FILE ("grammarCompilation.galgas4", 54)).objectCompare (GGS_u_33__32_ (uint32_t (1U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          temp_1 = GGS_string ("s") ;
        }else if (GalgasBool::boolFalse == test_2) {
          temp_1 = GGS_string::makeEmptyString () ;
        }
        GGS_string temp_3 ;
        const GalgasBool test_4 = GGS_bool (ComparisonKind::greaterThan, var_formalParametersList_2398.getter_count (SOURCE_FILE ("grammarCompilation.galgas4", 58)).objectCompare (GGS_u_33__32_ (uint32_t (1U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          temp_3 = GGS_string ("s") ;
        }else if (GalgasBool::boolFalse == test_4) {
          temp_3 = GGS_string::makeEmptyString () ;
        }
        GenericArray <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_2253.current (HERE).readProperty_mLabelName ().readProperty_location (), enumerator_2253.current (HERE).readProperty_mFormalArgumentList ().getter_count (SOURCE_FILE ("grammarCompilation.galgas4", 52)).getter_string (SOURCE_FILE ("grammarCompilation.galgas4", 52)).add_operation (GGS_string (" formal parameter"), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 52)).add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 53)).add_operation (GGS_string (" declared here, but declaration at "), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 54)).add_operation (constinArgument_inNonterminalSymbolLabelMapForGrammarAnalysis.getter_locationForKey (enumerator_2253.current (HERE).readProperty_mLabelName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 56)).getter_startLocationString (inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 56)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 55)).add_operation (GGS_string (" names "), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 56)).add_operation (var_formalParametersList_2398.getter_count (SOURCE_FILE ("grammarCompilation.galgas4", 57)).getter_string (SOURCE_FILE ("grammarCompilation.galgas4", 57)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 57)).add_operation (GGS_string (" parameter"), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 57)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 57)), fixItArray5  COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 52)) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      UpEnumerator__5B_formalParameterAST_5D_ enumerator_3020 (enumerator_2253.current (HERE).readProperty_mFormalArgumentList ()) ;
      UpEnumerator__5B_signatureElementForGrammarAnalysis_5D_ enumerator_3072 (var_formalParametersList_2398) ;
      while (enumerator_3020.hasCurrentObject () && enumerator_3072.hasCurrentObject ()) {
        GalgasBool test_6 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_6) {
          test_6 = GGS_bool (ComparisonKind::notEqual, enumerator_3072.current (HERE).readProperty_mFormalArgumentPassingModeForGrammarAnalysis ().objectCompare (enumerator_3020.current (HERE).readProperty_mFormalArgumentPassingMode ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_6) {
            GenericArray <FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (enumerator_3072.current (HERE).readProperty_mGalgasTypeNameForGrammarAnalysis ().readProperty_location (), GGS_string (" this formal parameter is declared with '").add_operation (extensionGetter_string (enumerator_3072.current (HERE).readProperty_mFormalArgumentPassingModeForGrammarAnalysis (), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 64)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 64)).add_operation (GGS_string ("' passing mode, but declaration at "), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 65)).add_operation (constinArgument_inNonterminalSymbolLabelMapForGrammarAnalysis.getter_locationForKey (enumerator_2253.current (HERE).readProperty_mLabelName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 67)).getter_startLocationString (inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 67)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 66)).add_operation (GGS_string (" is declared with '"), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 67)).add_operation (extensionGetter_string (enumerator_3020.current (HERE).readProperty_mFormalArgumentPassingMode (), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 68)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 68)).add_operation (GGS_string ("' passing mode"), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 68)), fixItArray7  COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 63)) ;
          }
        }
        GalgasBool test_8 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_8) {
          test_8 = GGS_bool (ComparisonKind::notEqual, enumerator_3072.current (HERE).readProperty_mGalgasTypeNameForGrammarAnalysis ().readProperty_string ().objectCompare (enumerator_3020.current (HERE).readProperty_mFormalArgumentTypeName ().readProperty_string ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_8) {
            GenericArray <FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (enumerator_3072.current (HERE).readProperty_mGalgasTypeNameForGrammarAnalysis ().readProperty_location (), GGS_string (" this formal parameter is declared of '@").add_operation (enumerator_3072.current (HERE).readProperty_mGalgasTypeNameForGrammarAnalysis ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 73)).add_operation (GGS_string ("' type, but declaration at "), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 74)).add_operation (constinArgument_inNonterminalSymbolLabelMapForGrammarAnalysis.getter_locationForKey (enumerator_2253.current (HERE).readProperty_mLabelName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 76)).getter_startLocationString (inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 76)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 75)).add_operation (GGS_string (" is declared with '@"), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 76)).add_operation (enumerator_3020.current (HERE).readProperty_mFormalArgumentTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 77)).add_operation (GGS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 77)), fixItArray9  COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 72)) ;
          }
        }
        enumerator_3020.gotoNextObject () ;
        enumerator_3072.gotoNextObject () ;
      }
    }
    enumerator_2253.gotoNextObject () ;
  }
  UpEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis enumerator_4401 (constinArgument_inNonterminalSymbolLabelMapForGrammarAnalysis) ;
  while (enumerator_4401.hasCurrentObject ()) {
    GalgasBool test_10 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_10) {
      test_10 = var_labelStringSet_2216.getter_contains (enumerator_4401.current (HERE).readProperty_lkey ().readProperty_string () COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 85)).operator_not (SOURCE_FILE ("grammarCompilation.galgas4", 85)).boolEnum () ;
      if (GalgasBool::boolTrue == test_10) {
        GenericArray <FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (constinArgument_inNonTerminalLocation, GGS_string ("this non terminal does not declare the '").add_operation (enumerator_4401.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 87)).add_operation (GGS_string ("' label, but declaration at "), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 87)).add_operation (constinArgument_inOriginalNonTerminalLocation.getter_startLocationString (inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 88)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 87)).add_operation (GGS_string (" does"), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 88)), fixItArray11  COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 86)) ;
      }
    }
    enumerator_4401.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'handleNonTerminalDeclarations&?'
//
//--------------------------------------------------------------------------------------------------

void routine_handleNonTerminalDeclarations_26__3F_ (GGS_nonTerminalSymbolMapForGrammarAnalysis & ioArgument_ioNonTerminalMapForGrammarAnalysis,
                                                    const GGS__5B_nonterminalDeclarationAST_5D_ constinArgument_inNonterminalDeclarationList,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator__5B_nonterminalDeclarationAST_5D_ enumerator_5056 (constinArgument_inNonterminalDeclarationList) ;
  while (enumerator_5056.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element var_entry_5099 = ioArgument_ioNonTerminalMapForGrammarAnalysis.readSubcript__3F_ (enumerator_5056.current (HERE).readProperty_mNonterminalName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
      if (!ioArgument_ioNonTerminalMapForGrammarAnalysis.readSubcript__3F_ (enumerator_5056.current (HERE).readProperty_mNonterminalName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
        test_0 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_0) {
        {
        routine_checkLabelMap_3F__3F__3F__3F_ (enumerator_5056.current (HERE).readProperty_mNonterminalName ().readProperty_location (), enumerator_5056.current (HERE).readProperty_mLabels (), ioArgument_ioNonTerminalMapForGrammarAnalysis.getter_locationForKey (enumerator_5056.current (HERE).readProperty_mNonterminalName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 105)), var_entry_5099.readProperty_mNonterminalSymbolParametersMap (), inCompiler  COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 102)) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      {
      ioArgument_ioNonTerminalMapForGrammarAnalysis.setter_insertKey (enumerator_5056.current (HERE).readProperty_mNonterminalName (), ioArgument_ioNonTerminalMapForGrammarAnalysis.getter_count (SOURCE_FILE ("grammarCompilation.galgas4", 111)), function_transformLabelMap (enumerator_5056.current (HERE).readProperty_mLabels (), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 112)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 109)) ;
      }
    }
    enumerator_5056.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'handleNonTerminalDeclarationsFromRuleList&?'
//
//--------------------------------------------------------------------------------------------------

void routine_handleNonTerminalDeclarationsFromRuleList_26__3F_ (GGS_nonTerminalSymbolMapForGrammarAnalysis & ioArgument_ioNonTerminalMapForGrammarAnalysis,
                                                                const GGS__5B_syntaxRuleAST_5D_ constinArgument_inRuleList,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator__5B_syntaxRuleAST_5D_ enumerator_5943 (constinArgument_inRuleList) ;
  while (enumerator_5943.hasCurrentObject ()) {
    GGS__5B_nonTerminalLabelAST_5D_ var_nonTerminalLabelListAST_5965 = GGS__5B_nonTerminalLabelAST_5D_::init (inCompiler COMMA_HERE) ;
    UpEnumerator__5B_syntaxRuleLabelAST_5D_ enumerator_6041 (enumerator_5943.current (HERE).readProperty_mLabelList ()) ;
    while (enumerator_6041.hasCurrentObject ()) {
      var_nonTerminalLabelListAST_5965.plusPlusAssignOperation (GGS_nonTerminalLabelAST::init_21__21__21_ (enumerator_6041.current (HERE).readProperty_mLabelName (), enumerator_6041.current (HERE).readProperty_mFormalArguments (), enumerator_6041.current (HERE).readProperty_mEndOfArgumentLocation (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 127)) ;
      enumerator_6041.gotoNextObject () ;
    }
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element var_entry_6217 = ioArgument_ioNonTerminalMapForGrammarAnalysis.readSubcript__3F_ (enumerator_5943.current (HERE).readProperty_mNonterminalName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
      if (!ioArgument_ioNonTerminalMapForGrammarAnalysis.readSubcript__3F_ (enumerator_5943.current (HERE).readProperty_mNonterminalName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
        test_0 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_0) {
        {
        routine_checkLabelMap_3F__3F__3F__3F_ (enumerator_5943.current (HERE).readProperty_mNonterminalName ().readProperty_location (), var_nonTerminalLabelListAST_5965, ioArgument_ioNonTerminalMapForGrammarAnalysis.getter_locationForKey (enumerator_5943.current (HERE).readProperty_mNonterminalName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 137)), var_entry_6217.readProperty_mNonterminalSymbolParametersMap (), inCompiler  COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 134)) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      {
      ioArgument_ioNonTerminalMapForGrammarAnalysis.setter_insertKey (enumerator_5943.current (HERE).readProperty_mNonterminalName (), ioArgument_ioNonTerminalMapForGrammarAnalysis.getter_count (SOURCE_FILE ("grammarCompilation.galgas4", 143)), function_transformLabelMap (var_nonTerminalLabelListAST_5965, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 144)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 141)) ;
      }
    }
    enumerator_5943.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@semanticInstructionAST transformInstructionForGrammarAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_semanticInstructionAST::method_transformInstructionForGrammarAnalysis (GGS_terminalSymbolsMapForGrammarAnalysis & /* ioArgument__5F_ioActuallyUsedTerminalSymbolMap */,
                                                                                 const GGS_nonTerminalSymbolMapForGrammarAnalysis /* constinArgument__5F_inNonTerminalSymbolMap */,
                                                                                 GGS_u_33__32_ & /* ioArgument__5F_ioAddedNonTerminalIndex */,
                                                                                 GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ & /* ioArgument__5F_ioSyntaxInstructionList */,
                                                                                 Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'transformInstructionListForGrammarAnalysis?&usedTerminalMap?nonTerminalSymbolMap&addedTerminalIndex&'
//
//--------------------------------------------------------------------------------------------------

void routine_transformInstructionListForGrammarAnalysis_3F__26_usedTerminalMap_3F_nonTerminalSymbolMap_26_addedTerminalIndex_26_ (const GGS__5B_syntaxInstructionAST_5D_ constinArgument_inInstructionList,
                                                                                                                                  GGS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                                                                                                  const GGS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                                                                                                  GGS_u_33__32_ & ioArgument_ioAddedNonTerminalIndex,
                                                                                                                                  GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ & ioArgument_ioSyntaxInstructionList,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator__5B_syntaxInstructionAST_5D_ enumerator_7948 (constinArgument_inInstructionList) ;
  while (enumerator_7948.hasCurrentObject ()) {
    callExtensionMethod_transformInstructionForGrammarAnalysis ((cPtr_syntaxInstructionAST *) enumerator_7948.current (HERE).ptr (), ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, ioArgument_ioSyntaxInstructionList, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 170)) ;
    enumerator_7948.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'buildRuleList???&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_buildRuleList_3F__3F__3F__26__26__26_ (const GGS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalMapForGrammarAnalysis,
                                                    const GGS_lstring constinArgument_inSyntaxComponentName,
                                                    const GGS__5B_syntaxRuleAST_5D_ constinArgument_inRuleList,
                                                    GGS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                    GGS__5B_syntaxComponentForGrammarAnalysis_5D_ & ioArgument_ioSyntaxComponentListForGrammarAnalysis,
                                                    GGS_u_33__32_ & ioArgument_ioAddedNonTerminalCount,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_productionRuleForGrammarAnalysis_5D_ var_productionRulesList_8711 = GGS__5B_productionRuleForGrammarAnalysis_5D_::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_syntaxRuleAST_5D_ enumerator_8787 (constinArgument_inRuleList) ;
  while (enumerator_8787.hasCurrentObject ()) {
    GGS_u_33__32_ var_nonTerminalIndex_8880 ;
    GGS_nonterminalSymbolLabelMapForGrammarAnalysis joker_8898 ; // Joker input parameter
    constinArgument_inNonTerminalMapForGrammarAnalysis.method_searchKey (enumerator_8787.current (HERE).readProperty_mNonterminalName (), var_nonTerminalIndex_8880, joker_8898, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 191)) ;
    GGS__5B_syntaxInstructionAST_5D_ var_parsedSyntaxInstructionList_8985 = enumerator_8787.current (HERE).readProperty_mLabelList ().getter_first (inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 193)).readProperty_mSyntaxInstructionList () ;
    GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ var_instructionList_9104 = GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_::init (inCompiler COMMA_HERE) ;
    {
    routine_transformInstructionListForGrammarAnalysis_3F__26_usedTerminalMap_3F_nonTerminalSymbolMap_26_addedTerminalIndex_26_ (var_parsedSyntaxInstructionList_8985, ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalMapForGrammarAnalysis, ioArgument_ioAddedNonTerminalCount, var_instructionList_9104, inCompiler  COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 196)) ;
    }
    var_productionRulesList_8711.plusPlusAssignOperation (GGS_productionRuleForGrammarAnalysis::init_21__21__21__21_ (enumerator_8787.current (HERE).readProperty_mNonterminalName (), var_nonTerminalIndex_8880, var_instructionList_9104, var_productionRulesList_8711.getter_count (SOURCE_FILE ("grammarCompilation.galgas4", 208)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 204)) ;
    enumerator_8787.gotoNextObject () ;
  }
  ioArgument_ioSyntaxComponentListForGrammarAnalysis.plusPlusAssignOperation (GGS_syntaxComponentForGrammarAnalysis::init_21__21_ (var_productionRulesList_8711, constinArgument_inSyntaxComponentName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("grammarCompilation.galgas4", 211)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterClassMethodWithInputArgument&&?methodName?argType?argName?compilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterClassMethodWithInputArgument_26__26__3F_methodName_3F_argType_3F_argName_3F_compilerArgument (GGS_classMethodMap & ioArgument_ioClassMethodMap,
                                                                                                                GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                const GGS_string constinArgument_inClassMethodName,
                                                                                                                const GGS_string constinArgument_inArgumentTypeName,
                                                                                                                const GGS_string constinArgument_inArgumentName,
                                                                                                                const GGS_bool constinArgument_inHasCompilerArgument,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_argumentTypeIndex_1761 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgumentTypeName, var_argumentTypeIndex_1761, inCompiler COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas4", 33)) ;
  }
  GGS__5B_formalParameterSignatureElement_5D_ var_argList_1821 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  var_argList_1821.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas4", 35)), var_argumentTypeIndex_1761, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas4", 35)), constinArgument_inArgumentName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas4", 35)) ;
  {
  ioArgument_ioClassMethodMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inClassMethodName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas4", 37)), inCompiler COMMA_HERE), var_argList_1821, constinArgument_inHasCompilerArgument COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas4", 36)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterClassMethodWithStringInputArgument&&?classMethod?argName?compilerArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterClassMethodWithStringInputArgument_26__26__3F_classMethod_3F_argName_3F_compilerArg (GGS_classMethodMap & ioArgument_ioClassMethodMap,
                                                                                                       GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                       const GGS_string constinArgument_inClassMethodName,
                                                                                                       const GGS_string constinArgument_inStringArgumentName,
                                                                                                       const GGS_bool constinArgument_inHasCompilerArgument,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_argumentTypeIndex_4176 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GGS_string ("string"), var_argumentTypeIndex_4176, inCompiler COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas4", 78)) ;
  }
  GGS__5B_formalParameterSignatureElement_5D_ var_argList_4236 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  var_argList_4236.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas4", 80)), var_argumentTypeIndex_4176, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas4", 80)), constinArgument_inStringArgumentName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas4", 80)) ;
  {
  ioArgument_ioClassMethodMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inClassMethodName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas4", 82)), inCompiler COMMA_HERE), var_argList_4236, constinArgument_inHasCompilerArgument COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas4", 81)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@grammarForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarForGeneration::method_appendDeclaration_31_ (GGS_stringset & ioArgument_ioInclusionSet,
                                                              GGS_string & outArgument_outHeader,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_grammarForGeneration temp_0 = this ;
  UpEnumerator__5B_lstring_5D_ enumerator_2188 (temp_0.readProperty_mSyntaxComponents ()) ;
  while (enumerator_2188.hasCurrentObject ()) {
    ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("syntax-").add_operation (enumerator_2188.current (HERE).readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 42)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 42))  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 42)) ;
    enumerator_2188.gotoNextObject () ;
  }
  const GGS_grammarForGeneration temp_1 = this ;
  const GGS_grammarForGeneration temp_2 = this ;
  const GGS_grammarForGeneration temp_3 = this ;
  const GGS_grammarForGeneration temp_4 = this ;
  const GGS_grammarForGeneration temp_5 = this ;
  const GGS_grammarForGeneration temp_6 = this ;
  const GGS_grammarForGeneration temp_7 = this ;
  outArgument_outHeader = GGS_grammarGenerationTemplate::class_func_grammarZone_33_HeaderGalgas_33_ (temp_1.readProperty_mLexiqueName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 45)), temp_2.readProperty_mNonTerminalMapForGrammarAnalysis (), temp_3.readProperty_mNonTerminalToAddList (), temp_4.readProperty_mStartSymbolName (), temp_5.readProperty_mHasTranslateFeature (), temp_6.readProperty_mGrammarName (), temp_7.readProperty_mSyntaxComponents (), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 44)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@grammarForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                                     GGS_stringset & ioArgument_ioInclusionSet,
                                                                     GGS_string & outArgument_outImplementation,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_grammarForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("grammar-").add_operation (temp_0.readProperty_mGrammarName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 60)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 60))  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 60)) ;
  const GGS_grammarForGeneration temp_1 = this ;
  UpEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_3065 (temp_1.readProperty_mNonTerminalMapForGrammarAnalysis ()) ;
  while (enumerator_3065.hasCurrentObject ()) {
    UpEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis enumerator_3154 (enumerator_3065.current (HERE).readProperty_mNonterminalSymbolParametersMap ()) ;
    while (enumerator_3154.hasCurrentObject ()) {
      UpEnumerator__5B_signatureElementForGrammarAnalysis_5D_ enumerator_3238 (enumerator_3154.current (HERE).readProperty_mFormalParametersList ()) ;
      while (enumerator_3238.hasCurrentObject ()) {
        switch (enumerator_3238.current (HERE).readProperty_mFormalArgumentPassingModeForGrammarAnalysis ().enumValue ()) {
        case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
          break ;
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
          {
            GGS_unifiedTypeMapEntry var_t_3399 = extensionGetter_typeMapEntryForLKey (constinArgument_inUnifiedTypeMap, enumerator_3238.current (HERE).readProperty_mGalgasTypeNameForGrammarAnalysis (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 66)) ;
            extensionMethod_addHeaderFileName (var_t_3399, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 67)) ;
          }
          break ;
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
          break ;
        }
        enumerator_3238.gotoNextObject () ;
      }
      enumerator_3154.gotoNextObject () ;
    }
    enumerator_3065.gotoNextObject () ;
  }
  const GGS_grammarForGeneration temp_2 = this ;
  outArgument_outImplementation = temp_2.readProperty_mCppFileContents () ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@grammarForGeneration getImplementationCppFileName'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_grammarForGeneration::getter_getImplementationCppFileName (Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_grammarForGeneration temp_0 = this ;
  result = GGS_string ("grammar-").add_operation (temp_0.readProperty_mGrammarName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 79)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 79)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@grammarForGeneration hasCppHeaderFile'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_grammarForGeneration::getter_hasCppHeaderFile (Compiler */* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ; // Returned variable
  result = GGS_bool (false) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@grammarForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_grammarForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result ; // Returned variable
  result = GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("semanticGeneration.galgas4", 91)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@grammarForGeneration isPredefined'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_grammarForGeneration::getter_isPredefined (Compiler */* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ; // Returned variable
  result = GGS_bool (false) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@syntaxDeclarationForGeneration getImplementationCppFileName'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_syntaxDeclarationForGeneration::getter_getImplementationCppFileName (Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_syntaxDeclarationForGeneration temp_0 = this ;
  result = GGS_string ("syntax-").add_operation (temp_0.readProperty_mSyntaxComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 118)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 118)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@syntaxDeclarationForGeneration hasCppHeaderFile'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_syntaxDeclarationForGeneration::getter_hasCppHeaderFile (Compiler */* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ; // Returned variable
  result = GGS_bool (false) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@syntaxDeclarationForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_syntaxDeclarationForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result ; // Returned variable
  result = GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("semanticGeneration.galgas4", 130)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@syntaxDeclarationForGeneration isPredefined'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_syntaxDeclarationForGeneration::getter_isPredefined (Compiler */* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ; // Returned variable
  result = GGS_bool (false) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@syntaxDeclarationForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_syntaxDeclarationForGeneration::method_appendDeclaration_31_ (GGS_stringset & ioArgument_ioInclusionSet,
                                                                        GGS_string & outArgument_outHeader,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_syntaxDeclarationForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("lexique-").add_operation (temp_0.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 143)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 143))  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 143)) ;
  GGS__5B_u_33__32__5D_ var_selectMethodList_6100 = GGS__5B_u_33__32__5D_::init (inCompiler COMMA_HERE) ;
  GGS_u_33__32_ var_idx_6142 = GGS_u_33__32_ (uint32_t (0U)) ;
  const GGS_syntaxDeclarationForGeneration temp_1 = this ;
  if (temp_1.readProperty_mSelectMethodCount ().add_operation (GGS_u_33__32_ (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 146)).isValid ()) {
    uint32_t variant_6154 = temp_1.readProperty_mSelectMethodCount ().add_operation (GGS_u_33__32_ (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 146)).uintValue () ;
    bool loop_6154 = true ;
    while (loop_6154) {
      const GGS_syntaxDeclarationForGeneration temp_2 = this ;
      loop_6154 = GGS_bool (ComparisonKind::lowerThan, var_idx_6142.objectCompare (temp_2.readProperty_mSelectMethodCount ())).isValid () ;
      if (loop_6154) {
        loop_6154 = GGS_bool (ComparisonKind::lowerThan, var_idx_6142.objectCompare (temp_2.readProperty_mSelectMethodCount ())).boolValue () ;
      }
      if (loop_6154 && (0 == variant_6154)) {
        loop_6154 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticGeneration.galgas4", 146)) ;
      }
      if (loop_6154) {
        variant_6154 -= 1 ;
        var_selectMethodList_6100.plusPlusAssignOperation (var_idx_6142  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 148)) ;
        var_idx_6142.plusAssignOperation(GGS_u_33__32_ (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 149)) ;
      }
    }
  }
  const GGS_syntaxDeclarationForGeneration temp_3 = this ;
  const GGS_syntaxDeclarationForGeneration temp_4 = this ;
  const GGS_syntaxDeclarationForGeneration temp_5 = this ;
  const GGS_syntaxDeclarationForGeneration temp_6 = this ;
  const GGS_syntaxDeclarationForGeneration temp_7 = this ;
  const GGS_syntaxDeclarationForGeneration temp_8 = this ;
  outArgument_outHeader = GGS_syntaxFileGenerationTemplate::class_func_syntaxAnalyserClassDeclaration (temp_3.readProperty_mSyntaxComponentName (), temp_4.readProperty_mLexiqueName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 153)), temp_5.readProperty_mNonterminalDeclarationMap (), temp_6.readProperty_mRuleDeclarationList (), var_selectMethodList_6100, temp_7.readProperty_mHasIndexing (), temp_8.readProperty_mHasTranslateFeature (), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 151)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@syntaxDeclarationForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_syntaxDeclarationForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument__5F_inTypeMap */,
                                                                               GGS_stringset & ioArgument_ioInclusionSet,
                                                                               GGS_string & outArgument_outImplementation,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_syntaxDeclarationForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("syntax-").add_operation (temp_0.readProperty_mSyntaxComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 167)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 167))  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 167)) ;
  outArgument_outImplementation = GGS_syntaxFileGenerationTemplate::class_func_syntaxFileImplementationGalgas_33_ (GGS_stringset::init (inCompiler COMMA_HERE), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 168)) ;
  const GGS_syntaxDeclarationForGeneration temp_1 = this ;
  GGS_string var_lexiqueCppName_7136 = GGS_string ("Lexique_").add_operation (temp_1.readProperty_mLexiqueName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 170)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 170)) ;
  const GGS_syntaxDeclarationForGeneration temp_2 = this ;
  UpEnumerator__5B_ruleDeclarationAST_5D_ enumerator_7241 (temp_2.readProperty_mRuleDeclarationList ()) ;
  while (enumerator_7241.hasCurrentObject ()) {
    UpEnumerator__5B_ruleLabelImplementationAST_5D_ enumerator_7359 (enumerator_7241.current (HERE).readProperty_mLabelImplementationList ()) ;
    while (enumerator_7359.hasCurrentObject ()) {
      const GGS_syntaxDeclarationForGeneration temp_3 = this ;
      const GGS_syntaxDeclarationForGeneration temp_4 = this ;
      GGS_string var_ruleName_7407 = GGS_string ("cParser_").add_operation (temp_3.readProperty_mSyntaxComponentName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 174)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 174)).add_operation (GGS_string ("::rule_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 174)).add_operation (temp_4.readProperty_mSyntaxComponentName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 175)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 175)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 175)).add_operation (enumerator_7241.current (HERE).readProperty_mNonterminalName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 176)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 175)).add_operation (GGS_string ("_i"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 176)).add_operation (enumerator_7241.current (HERE).readProperty_mRuleIndex ().getter_string (SOURCE_FILE ("semanticGeneration.galgas4", 177)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 177)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 177)).add_operation (enumerator_7359.current (HERE).readProperty_mLabelName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 177)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 177)) ;
      outArgument_outImplementation.plusAssignOperation(GGS_string ("//------------------------------------------------------------------------------------------------\n\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 178)) ;
      GGS_string var_code_8323 ;
      {
      const GGS_syntaxDeclarationForGeneration temp_5 = this ;
      routine_generateProcedure_3F_static_3F__26__3F__3F__3F__3F__3F__3F__3F__21_ (GGS_bool (false), var_ruleName_7407, ioArgument_ioInclusionSet, enumerator_7359.current (HERE).readProperty_mSignatureForGeneration (), enumerator_7359.current (HERE).readProperty_mInstructionListForGeneration (), GGS_bool (false), var_lexiqueCppName_7136, GGS_bool (false), GGS_bool (false), temp_5.readProperty_mHasTranslateFeature (), var_code_8323, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 179)) ;
      }
      outArgument_outImplementation.plusAssignOperation(var_code_8323, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 192)) ;
      enumerator_7359.gotoNextObject () ;
    }
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      const GGS_syntaxDeclarationForGeneration temp_7 = this ;
      test_6 = temp_7.readProperty_mHasIndexing ().boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        GGS_ruleLabelImplementationAST var_r_8459 = enumerator_7241.current (HERE).readProperty_mLabelImplementationList ().getter_first (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 196)) ;
        GGS__5B_semanticInstructionForGeneration_5D_ var_instructionList_8522 = var_r_8459.readProperty_mInstructionListForGeneration () ;
        const GGS_syntaxDeclarationForGeneration temp_8 = this ;
        const GGS_syntaxDeclarationForGeneration temp_9 = this ;
        GGS_string var_ruleName_8592 = GGS_string ("cParser_").add_operation (temp_8.readProperty_mSyntaxComponentName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 198)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 198)).add_operation (GGS_string ("::rule_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 198)).add_operation (temp_9.readProperty_mSyntaxComponentName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 199)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 199)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 199)).add_operation (enumerator_7241.current (HERE).readProperty_mNonterminalName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 200)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 199)).add_operation (GGS_string ("_i"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 200)).add_operation (enumerator_7241.current (HERE).readProperty_mRuleIndex ().getter_string (SOURCE_FILE ("semanticGeneration.galgas4", 201)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 201)).add_operation (GGS_string ("_indexing"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 201)) ;
        outArgument_outImplementation.plusAssignOperation(GGS_string ("//------------------------------------------------------------------------------------------------\n\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 202)) ;
        GGS_string var_code_9489 ;
        {
        routine_generateProcedure_3F_static_3F__26__3F__3F__3F__3F__3F__3F__3F__21_ (GGS_bool (false), var_ruleName_8592, ioArgument_ioInclusionSet, GGS__5B_formalParameterForGeneration_5D_::init (inCompiler COMMA_HERE), function_syntaxSignatureOfInstructionList (GGS_string ("indexing"), var_instructionList_8522, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 208)), GGS_bool (false), var_lexiqueCppName_7136, GGS_bool (false), GGS_bool (false), GGS_bool (false), var_code_9489, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 203)) ;
        }
        outArgument_outImplementation.plusAssignOperation(var_code_9489, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 216)) ;
      }
    }
    enumerator_7241.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateProcedure?static?&???????!'
//
//--------------------------------------------------------------------------------------------------

void routine_generateProcedure_3F_static_3F__26__3F__3F__3F__3F__3F__3F__3F__21_ (const GGS_bool constinArgument_inGenerateStatic,
                                                                                  const GGS_string constinArgument_inProcedureMangledName,
                                                                                  GGS_stringset & ioArgument_ioInclusionSet,
                                                                                  const GGS__5B_formalParameterForGeneration_5D_ constinArgument_inFormalArgumentList,
                                                                                  const GGS__5B_semanticInstructionForGeneration_5D_ constinArgument_inInstructionList,
                                                                                  const GGS_bool constinArgument_inProcedureIsConst,
                                                                                  const GGS_string constinArgument_inCompilerTypeName,
                                                                                  const GGS_bool constinArgument_inGenerateLocationArgs,
                                                                                  const GGS_bool constinArgument_inGenerateResetTemplateString,
                                                                                  const GGS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                  GGS_string & outArgument_outGeneratedCode,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGeneratedCode.drop () ; // Release 'out' argument
  GGS_stringset var_unusedVariableCppNameSet_10460 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_unusedVariableCppNameSet_10460.plusPlusAssignOperation (function_gSyntaxDirectedTranslationResultVarName (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 247)) ;
    }
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = constinArgument_inGenerateResetTemplateString.operator_not (SOURCE_FILE ("semanticGeneration.galgas4", 249)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      var_unusedVariableCppNameSet_10460.plusPlusAssignOperation (function_gCompilerCppName (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 250)) ;
    }
  }
  UpEnumerator__5B_formalParameterForGeneration_5D_ enumerator_10738 (constinArgument_inFormalArgumentList) ;
  while (enumerator_10738.hasCurrentObject ()) {
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::notEqual, enumerator_10738.current (HERE).readProperty_mFormalArgumentPassingMode ().objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("semanticGeneration.galgas4", 253)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        var_unusedVariableCppNameSet_10460.plusPlusAssignOperation (enumerator_10738.current (HERE).readProperty_mFormalArgumentCppName ()  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 254)) ;
      }
    }
    enumerator_10738.gotoNextObject () ;
  }
  GGS_u_33__32_ var_temporaryVariableIndex_10934 = GGS_u_33__32_ (uint32_t (0U)) ;
  GGS_string var_routineBody_10967 = GGS_string::makeEmptyString () ;
  {
  var_routineBody_10967.setter_incIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 260)) ;
  }
  UpEnumerator__5B_semanticInstructionForGeneration_5D_ enumerator_11034 (constinArgument_inInstructionList) ;
  while (enumerator_11034.hasCurrentObject ()) {
    callExtensionMethod_generateInstruction ((cPtr_semanticInstructionForGeneration *) enumerator_11034.current (HERE).ptr (), ioArgument_ioInclusionSet, var_temporaryVariableIndex_10934, var_unusedVariableCppNameSet_10460, constinArgument_inGenerateSyntaxDirectedTranslationString, var_routineBody_10967, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 262)) ;
    enumerator_11034.gotoNextObject () ;
  }
  {
  var_routineBody_10967.setter_decIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 270)) ;
  }
  UpEnumerator__5B_formalParameterForGeneration_5D_ enumerator_11334 (constinArgument_inFormalArgumentList) ;
  while (enumerator_11334.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_11334.current (HERE).readProperty_mFormalArgumentType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 273)) ;
    enumerator_11334.gotoNextObject () ;
  }
  outArgument_outGeneratedCode = GGS_string::makeEmptyString () ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = constinArgument_inGenerateStatic.boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("static "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 278)) ;
    }
  }
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("void ").add_operation (constinArgument_inProcedureMangledName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 280)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 280)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 280)) ;
  GGS_u_33__32_ var_colRef_11617 = outArgument_outGeneratedCode.getter_currentColumn (SOURCE_FILE ("semanticGeneration.galgas4", 281)) ;
  UpEnumerator__5B_formalParameterForGeneration_5D_ enumerator_11679 (constinArgument_inFormalArgumentList) ;
  while (enumerator_11679.hasCurrentObject ()) {
    switch (enumerator_11679.current (HERE).readProperty_mFormalArgumentPassingMode ().enumValue ()) {
    case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
      {
        outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("const GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_11679.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 286)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 286)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 286)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 286)) ;
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
      {
        outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_11679.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 288)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 288)).add_operation (GGS_string (" & "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 288)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 288)) ;
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
      {
        outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_11679.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 290)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 290)).add_operation (GGS_string (" & "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 290)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 290)) ;
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
      {
        outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_11679.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 292)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 292)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 292)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 292)) ;
      }
      break ;
    }
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = var_unusedVariableCppNameSet_10460.getter_contains (enumerator_11679.current (HERE).readProperty_mFormalArgumentCppName () COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 294)).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("/* ").add_operation (enumerator_11679.current (HERE).readProperty_mFormalArgumentCppName (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 295)).add_operation (GGS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 295)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 295)) ;
      }
    }
    if (GalgasBool::boolFalse == test_4) {
      outArgument_outGeneratedCode.plusAssignOperation(enumerator_11679.current (HERE).readProperty_mFormalArgumentCppName (), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 297)) ;
    }
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 299)) ;
    {
    outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_11617, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 300)) ;
    }
    enumerator_11679.gotoNextObject () ;
  }
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = var_unusedVariableCppNameSet_10460.getter_contains (function_gSyntaxDirectedTranslationResultVarName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 304)).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("String & /* ").add_operation (function_gSyntaxDirectedTranslationResultVarName (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 305)).add_operation (GGS_string (" */,\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 305)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 305)) ;
        }
      }
      if (GalgasBool::boolFalse == test_6) {
        outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("String & ").add_operation (function_gSyntaxDirectedTranslationResultVarName (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 307)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 307)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 307)) ;
      }
      {
      outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_11617, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 309)) ;
      }
    }
  }
  outArgument_outGeneratedCode.plusAssignOperation(constinArgument_inCompilerTypeName.add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 312)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 312)) ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = var_unusedVariableCppNameSet_10460.getter_contains (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 313)).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("/* ").add_operation (function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 314)).add_operation (GGS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 314)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 314)) ;
    }
  }
  if (GalgasBool::boolFalse == test_7) {
    outArgument_outGeneratedCode.plusAssignOperation(function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 316)) ;
  }
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    test_8 = constinArgument_inGenerateLocationArgs.boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 319)) ;
      {
      outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_11617, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 320)) ;
      }
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("COMMA_UNUSED_LOCATION_ARGS"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 321)) ;
    }
  }
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 323)) ;
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    test_9 = constinArgument_inProcedureIsConst.boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string (" const"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 325)) ;
    }
  }
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string (" {\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 327)) ;
  UpEnumerator__5B_formalParameterForGeneration_5D_ enumerator_13583 (constinArgument_inFormalArgumentList) ;
  while (enumerator_13583.hasCurrentObject ()) {
    switch (enumerator_13583.current (HERE).readProperty_mFormalArgumentPassingMode ().enumValue ()) {
    case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
      {
        outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("  ").add_operation (enumerator_13583.current (HERE).readProperty_mFormalArgumentCppName (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 332)).add_operation (GGS_string (".drop () ; // Release 'out' argument\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 332)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 332)) ;
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
      break ;
    }
    enumerator_13583.gotoNextObject () ;
  }
  outArgument_outGeneratedCode.plusAssignOperation(var_routineBody_10967, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 337)) ;
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    test_10 = constinArgument_inGenerateResetTemplateString.boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("  ").add_operation (function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 340)).add_operation (GGS_string ("->resetTemplateString () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 340)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 340)) ;
    }
  }
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 343)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateFunction?&??????static?const!'
//
//--------------------------------------------------------------------------------------------------

void routine_generateFunction_3F__26__3F__3F__3F__3F__3F__3F_static_3F_const_21_ (const GGS_string constinArgument_inFunctionCppRepresentationName,
                                                                                  GGS_stringset & ioArgument_ioInclusionSet,
                                                                                  const GGS__5B_formalInputParameterForGeneration_5D_ constinArgument_inFormalArgumentList,
                                                                                  const GGS__5B_semanticInstructionForGeneration_5D_ constinArgument_inInstructionList,
                                                                                  const GGS_string constinArgument_inCompilerTypeName,
                                                                                  const GGS_unifiedTypeMapEntry constinArgument_inResultType,
                                                                                  const GGS_string constinArgument_inResultVariableCppName,
                                                                                  const GGS_bool constinArgument_inIsStatic,
                                                                                  const GGS_bool constinArgument_inIsConst,
                                                                                  GGS_string & outArgument_outGeneratedCode,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGeneratedCode.drop () ; // Release 'out' argument
  outArgument_outGeneratedCode = GGS_string::makeEmptyString () ;
  extensionMethod_addHeaderFileName (constinArgument_inResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 363)) ;
  GGS_stringset var_unusedVariableCppNameSet_15086 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  var_unusedVariableCppNameSet_15086.plusPlusAssignOperation (function_gCompilerCppName (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 366)) ;
  UpEnumerator__5B_formalInputParameterForGeneration_5D_ enumerator_15251 (constinArgument_inFormalArgumentList) ;
  while (enumerator_15251.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_15251.current (HERE).readProperty_mFormalArgumentType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 369)) ;
    var_unusedVariableCppNameSet_15086.plusPlusAssignOperation (enumerator_15251.current (HERE).readProperty_mFormalArgumentCppName ()  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 370)) ;
    enumerator_15251.gotoNextObject () ;
  }
  GGS_u_33__32_ var_temporaryVariableIndex_15443 = GGS_u_33__32_ (uint32_t (0U)) ;
  GGS_string var_routineBody_15484 = GGS_string::makeEmptyString () ;
  {
  var_routineBody_15484.setter_incIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 375)) ;
  }
  UpEnumerator__5B_semanticInstructionForGeneration_5D_ enumerator_15551 (constinArgument_inInstructionList) ;
  while (enumerator_15551.hasCurrentObject ()) {
    callExtensionMethod_generateInstruction ((cPtr_semanticInstructionForGeneration *) enumerator_15551.current (HERE).ptr (), ioArgument_ioInclusionSet, var_temporaryVariableIndex_15443, var_unusedVariableCppNameSet_15086, GGS_bool (false), var_routineBody_15484, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 377)) ;
    enumerator_15551.gotoNextObject () ;
  }
  {
  var_routineBody_15484.setter_decIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 385)) ;
  }
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inIsStatic.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("static "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 388)) ;
    }
  }
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (constinArgument_inResultType, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 390)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 390)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 390)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 390)) ;
  outArgument_outGeneratedCode.plusAssignOperation(constinArgument_inFunctionCppRepresentationName.add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 391)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 391)) ;
  GGS_u_33__32_ var_colRef_16049 = outArgument_outGeneratedCode.getter_currentColumn (SOURCE_FILE ("semanticGeneration.galgas4", 392)) ;
  UpEnumerator__5B_formalInputParameterForGeneration_5D_ enumerator_16111 (constinArgument_inFormalArgumentList) ;
  while (enumerator_16111.hasCurrentObject ()) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = enumerator_16111.current (HERE).readProperty_mIsConstant ().boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("const GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_16111.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 396)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 396)).add_operation (GGS_string (" &"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 396)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 396)) ;
      }
    }
    if (GalgasBool::boolFalse == test_1) {
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_16111.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 398)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 398)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 398)) ;
    }
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = var_unusedVariableCppNameSet_15086.getter_contains (enumerator_16111.current (HERE).readProperty_mFormalArgumentCppName () COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 400)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
      }
    }
    if (GalgasBool::boolFalse == test_2) {
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string (" ").add_operation (enumerator_16111.current (HERE).readProperty_mFormalArgumentCppName (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 403)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 403)) ;
    }
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 405)) ;
    {
    outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_16049, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 406)) ;
    }
    enumerator_16111.gotoNextObject () ;
  }
  outArgument_outGeneratedCode.plusAssignOperation(constinArgument_inCompilerTypeName.add_operation (GGS_string (" *"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 409)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 409)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = var_unusedVariableCppNameSet_15086.getter_contains (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 410)).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string (" /* ").add_operation (function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 411)).add_operation (GGS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 411)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 411)) ;
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string (" ").add_operation (function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 413)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 413)) ;
  }
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 415)) ;
  {
  outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_16049, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 416)) ;
  }
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("COMMA_UNUSED_LOCATION_ARGS)"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 417)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = constinArgument_inIsConst.boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string (" const"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 419)) ;
    }
  }
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string (" {\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 421)) ;
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("  GGS_").add_operation (extensionGetter_identifierRepresentation (constinArgument_inResultType, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 423)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 423)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 423)).add_operation (constinArgument_inResultVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 424)).add_operation (GGS_string (" ; // Returned variable\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 424)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 423)) ;
  outArgument_outGeneratedCode.plusAssignOperation(var_routineBody_15484, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 426)) ;
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("//---\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 428)) ;
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("  return ").add_operation (constinArgument_inResultVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 429)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 429)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 429)) ;
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 431)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateExtensionGetter?&?????!'
//
//--------------------------------------------------------------------------------------------------

void routine_generateExtensionGetter_3F__26__3F__3F__3F__3F__3F__21_ (const GGS_string constinArgument_inFunctionCppRepresentationName,
                                                                      GGS_stringset & ioArgument_ioInclusionSet,
                                                                      const GGS__5B_formalInputParameterForGeneration_5D_ constinArgument_inFormalArgumentList,
                                                                      const GGS__5B_semanticInstructionForGeneration_5D_ constinArgument_inInstructionList,
                                                                      const GGS_string constinArgument_inCompilerTypeName,
                                                                      const GGS_unifiedTypeMapEntry constinArgument_inResultType,
                                                                      const GGS_string constinArgument_inResultVariableCppName,
                                                                      GGS_string & outArgument_outGeneratedCode,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGeneratedCode.drop () ; // Release 'out' argument
  outArgument_outGeneratedCode = GGS_string::makeEmptyString () ;
  extensionMethod_addHeaderFileName (constinArgument_inResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 445)) ;
  GGS_stringset var_unusedVariableCppNameSet_18330 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  var_unusedVariableCppNameSet_18330.plusPlusAssignOperation (function_gCompilerCppName (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 448)) ;
  UpEnumerator__5B_formalInputParameterForGeneration_5D_ enumerator_18495 (constinArgument_inFormalArgumentList) ;
  while (enumerator_18495.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_18495.current (HERE).readProperty_mFormalArgumentType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 451)) ;
    var_unusedVariableCppNameSet_18330.plusPlusAssignOperation (enumerator_18495.current (HERE).readProperty_mFormalArgumentCppName ()  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 452)) ;
    enumerator_18495.gotoNextObject () ;
  }
  GGS_u_33__32_ var_temporaryVariableIndex_18687 = GGS_u_33__32_ (uint32_t (0U)) ;
  GGS_string var_routineBody_18728 = GGS_string::makeEmptyString () ;
  {
  var_routineBody_18728.setter_incIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 457)) ;
  }
  UpEnumerator__5B_semanticInstructionForGeneration_5D_ enumerator_18795 (constinArgument_inInstructionList) ;
  while (enumerator_18795.hasCurrentObject ()) {
    callExtensionMethod_generateInstruction ((cPtr_semanticInstructionForGeneration *) enumerator_18795.current (HERE).ptr (), ioArgument_ioInclusionSet, var_temporaryVariableIndex_18687, var_unusedVariableCppNameSet_18330, GGS_bool (false), var_routineBody_18728, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 459)) ;
    enumerator_18795.gotoNextObject () ;
  }
  {
  var_routineBody_18728.setter_decIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 467)) ;
  }
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (constinArgument_inResultType, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 469)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 469)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 469)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 469)) ;
  outArgument_outGeneratedCode.plusAssignOperation(constinArgument_inFunctionCppRepresentationName.add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 470)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 470)) ;
  GGS_u_33__32_ var_colRef_19232 = outArgument_outGeneratedCode.getter_currentColumn (SOURCE_FILE ("semanticGeneration.galgas4", 471)) ;
  UpEnumerator__5B_formalInputParameterForGeneration_5D_ enumerator_19294 (constinArgument_inFormalArgumentList) ;
  while (enumerator_19294.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = enumerator_19294.current (HERE).readProperty_mIsConstant ().boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("const GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_19294.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 475)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 475)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 475)) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_19294.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 477)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 477)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 477)) ;
    }
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = var_unusedVariableCppNameSet_18330.getter_contains (enumerator_19294.current (HERE).readProperty_mFormalArgumentCppName () COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 479)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        outArgument_outGeneratedCode.plusAssignOperation(GGS_string (" /* ").add_operation (enumerator_19294.current (HERE).readProperty_mFormalArgumentCppName (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 480)).add_operation (GGS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 480)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 480)) ;
      }
    }
    if (GalgasBool::boolFalse == test_1) {
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string (" ").add_operation (enumerator_19294.current (HERE).readProperty_mFormalArgumentCppName (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 482)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 482)) ;
    }
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 484)) ;
    {
    outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_19232, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 485)) ;
    }
    enumerator_19294.gotoNextObject () ;
  }
  outArgument_outGeneratedCode.plusAssignOperation(constinArgument_inCompilerTypeName.add_operation (GGS_string (" *"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 488)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 488)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = var_unusedVariableCppNameSet_18330.getter_contains (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 489)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("/* ").add_operation (function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 490)).add_operation (GGS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 490)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 490)) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string (" ").add_operation (function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 492)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 492)) ;
  }
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 494)) ;
  {
  outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_19232, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 495)) ;
  }
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("COMMA_UNUSED_LOCATION_ARGS) const {\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 496)) ;
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("  GGS_").add_operation (extensionGetter_identifierRepresentation (constinArgument_inResultType, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 498)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 498)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 498)).add_operation (constinArgument_inResultVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 499)).add_operation (GGS_string (" ; // Returned variable\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 499)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 498)) ;
  outArgument_outGeneratedCode.plusAssignOperation(var_routineBody_18728, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 501)) ;
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("//---\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 503)) ;
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("  return ").add_operation (constinArgument_inResultVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 504)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 504)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 504)) ;
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 506)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateExtensionMethodNew?&???!'
//
//--------------------------------------------------------------------------------------------------

void routine_generateExtensionMethodNew_3F__26__3F__3F__3F__21_ (const GGS_unifiedTypeMapEntry constinArgument_inReceiverType,
                                                                 GGS_stringset & ioArgument_ioInclusionSet,
                                                                 const GGS_string constinArgument_inMethodName,
                                                                 const GGS__5B_formalParameterForGeneration_5D_ constinArgument_inFormalArgumentList,
                                                                 const GGS__5B_semanticInstructionForGeneration_5D_ constinArgument_inInstructionList,
                                                                 GGS_string & outArgument_outGeneratedCode,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGeneratedCode.drop () ; // Release 'out' argument
  GGS_string var_className_21396 = extensionGetter_definition (constinArgument_inReceiverType, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 519)).readProperty_typeName ().readProperty_string () ;
  GGS_stringset var_unusedVariableCppNameSet_21499 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  var_unusedVariableCppNameSet_21499.plusPlusAssignOperation (function_gCompilerCppName (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 522)) ;
  var_unusedVariableCppNameSet_21499.plusPlusAssignOperation (GGS_string ("object")  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 523)) ;
  UpEnumerator__5B_formalParameterForGeneration_5D_ enumerator_21633 (constinArgument_inFormalArgumentList) ;
  while (enumerator_21633.hasCurrentObject ()) {
    var_unusedVariableCppNameSet_21499.plusPlusAssignOperation (enumerator_21633.current (HERE).readProperty_mFormalArgumentCppName ()  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 525)) ;
    enumerator_21633.gotoNextObject () ;
  }
  GGS_u_33__32_ var_temporaryVariableIndex_21756 = GGS_u_33__32_ (uint32_t (0U)) ;
  GGS_string var_routineBody_21797 = GGS_string::makeEmptyString () ;
  {
  var_routineBody_21797.setter_incIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 530)) ;
  }
  UpEnumerator__5B_semanticInstructionForGeneration_5D_ enumerator_21864 (constinArgument_inInstructionList) ;
  while (enumerator_21864.hasCurrentObject ()) {
    callExtensionMethod_generateInstruction ((cPtr_semanticInstructionForGeneration *) enumerator_21864.current (HERE).ptr (), ioArgument_ioInclusionSet, var_temporaryVariableIndex_21756, var_unusedVariableCppNameSet_21499, GGS_bool (false), var_routineBody_21797, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 532)) ;
    enumerator_21864.gotoNextObject () ;
  }
  {
  var_routineBody_21797.setter_decIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 540)) ;
  }
  GGS_unifiedTypeMapEntry var_baseType_22185 = constinArgument_inReceiverType ;
  GGS_bool var_searching_22223 = GGS_bool (true) ;
  if (GGS_u_33__32_::class_func_max (SOURCE_FILE ("semanticGeneration.galgas4", 544)).isValid ()) {
    uint32_t variant_22242 = GGS_u_33__32_::class_func_max (SOURCE_FILE ("semanticGeneration.galgas4", 544)).uintValue () ;
    bool loop_22242 = true ;
    while (loop_22242) {
      loop_22242 = var_searching_22223.isValid () ;
      if (loop_22242) {
        loop_22242 = var_searching_22223.boolValue () ;
      }
      if (loop_22242 && (0 == variant_22242)) {
        loop_22242 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticGeneration.galgas4", 544)) ;
      }
      if (loop_22242) {
        variant_22242 -= 1 ;
        GalgasBool test_0 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_0) {
          test_0 = extensionGetter_definition (var_baseType_22185, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 545)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticGeneration.galgas4", 545)).operator_not (SOURCE_FILE ("semanticGeneration.galgas4", 545)).boolEnum () ;
          if (GalgasBool::boolTrue == test_0) {
            GalgasBool test_1 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_1) {
              test_1 = extensionGetter_definition (extensionGetter_definition (var_baseType_22185, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 546)).readProperty_superType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 546)).readProperty_instanceMethodMap ().getter_contains (constinArgument_inMethodName COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 546)).boolEnum () ;
              if (GalgasBool::boolTrue == test_1) {
                var_baseType_22185 = extensionGetter_definition (var_baseType_22185, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 547)).readProperty_superType () ;
              }
            }
            if (GalgasBool::boolFalse == test_1) {
              var_searching_22223 = GGS_bool (false) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_0) {
          var_searching_22223 = GGS_bool (false) ;
        }
      }
    }
  }
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("proc-").add_operation (extensionGetter_definition (var_baseType_22185, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 555)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 555)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 555)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 555)).add_operation (constinArgument_inMethodName.getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 555)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 555))  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 555)) ;
  extensionMethod_addHeaderFileName (constinArgument_inReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 556)) ;
  UpEnumerator__5B_formalParameterForGeneration_5D_ enumerator_22774 (constinArgument_inFormalArgumentList) ;
  while (enumerator_22774.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_22774.current (HERE).readProperty_mFormalArgumentType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 558)) ;
    enumerator_22774.gotoNextObject () ;
  }
  outArgument_outGeneratedCode = GGS_string ("void cPtr_").add_operation (var_className_21396.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 561)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 561)).add_operation (GGS_string ("::method_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 561)).add_operation (constinArgument_inMethodName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 561)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 561)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 561)) ;
  GGS_u_33__32_ var_colRef_23036 = outArgument_outGeneratedCode.getter_currentColumn (SOURCE_FILE ("semanticGeneration.galgas4", 562)) ;
  UpEnumerator__5B_formalParameterForGeneration_5D_ enumerator_23098 (constinArgument_inFormalArgumentList) ;
  while (enumerator_23098.hasCurrentObject ()) {
    switch (enumerator_23098.current (HERE).readProperty_mFormalArgumentPassingMode ().enumValue ()) {
    case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
      {
        outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("const GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_23098.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 567)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 567)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 567)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 567)) ;
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
      {
        outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_23098.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 569)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 569)).add_operation (GGS_string (" & "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 569)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 569)) ;
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
      {
        outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_23098.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 571)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 571)).add_operation (GGS_string (" & "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 571)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 571)) ;
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
      {
        outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_23098.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 573)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 573)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 573)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 573)) ;
      }
      break ;
    }
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = var_unusedVariableCppNameSet_21499.getter_contains (enumerator_23098.current (HERE).readProperty_mFormalArgumentCppName () COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 575)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("/* ").add_operation (enumerator_23098.current (HERE).readProperty_mFormalArgumentCppName (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 576)).add_operation (GGS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 576)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 576)) ;
      }
    }
    if (GalgasBool::boolFalse == test_2) {
      outArgument_outGeneratedCode.plusAssignOperation(enumerator_23098.current (HERE).readProperty_mFormalArgumentCppName (), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 578)) ;
    }
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 580)) ;
    {
    outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_23036, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 581)) ;
    }
    enumerator_23098.gotoNextObject () ;
  }
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("Compiler * "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 584)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = var_unusedVariableCppNameSet_21499.getter_contains (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 585)).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("/* ").add_operation (function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 586)).add_operation (GGS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 586)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 586)) ;
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    outArgument_outGeneratedCode.plusAssignOperation(function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 588)) ;
  }
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 590)) ;
  {
  outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_23036, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 591)) ;
  }
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("COMMA_UNUSED_LOCATION_ARGS"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 592)) ;
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 593)) ;
  outArgument_outGeneratedCode.plusAssignOperation(var_routineBody_21797, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 595)) ;
  outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("}"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 597)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@functionPrototypeDeclarationForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_functionPrototypeDeclarationForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result ; // Returned variable
  result = GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("semanticGeneration.galgas4", 816)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@functionPrototypeDeclarationForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_functionPrototypeDeclarationForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                                   GGS_string & outArgument_outHeader,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_functionPrototypeDeclarationForGeneration temp_0 = this ;
  const GGS_functionPrototypeDeclarationForGeneration temp_1 = this ;
  const GGS_functionPrototypeDeclarationForGeneration temp_2 = this ;
  outArgument_outHeader = GGS_semanticComponentGenerationTemplate::class_func_functionDeclaration (temp_0.readProperty_mFunctionName (), temp_1.readProperty_mFormalArgumentList (), extensionGetter_identifierRepresentation (temp_2.readProperty_mReturnType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 827)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 824)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@onceFunctionDeclarationForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_onceFunctionDeclarationForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result ; // Returned variable
  result = GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("semanticGeneration.galgas4", 834)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@onceFunctionDeclarationForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_onceFunctionDeclarationForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                              GGS_string & outArgument_outHeader,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_onceFunctionDeclarationForGeneration temp_0 = this ;
  const GGS_onceFunctionDeclarationForGeneration temp_1 = this ;
  outArgument_outHeader = GGS_semanticComponentGenerationTemplate::class_func_functionDeclaration (temp_0.readProperty_mFunctionName (), GGS__5B_formalInputParameterForGeneration_5D_::init (inCompiler COMMA_HERE), extensionGetter_identifierRepresentation (temp_1.readProperty_mReturnType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 845)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 842)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@semanticTypeForGeneration appendTypeGenericImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_semanticTypeForGeneration::getter_appendTypeGenericImplementation (Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_semanticTypeForGeneration temp_0 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_33583 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 854)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::equal, var_selfTypeDefinition_33583.readProperty_typeKind ().objectCompare (GGS_typeKindEnum::class_func_packageType (SOURCE_FILE ("semanticGeneration.galgas4", 855)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      result = GGS_string::makeEmptyString () ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    const GGS_semanticTypeForGeneration temp_2 = this ;
    result = GGS_typeGenerationTemplate::class_func_genericTypeImplementation (var_selfTypeDefinition_33583.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 860)), var_selfTypeDefinition_33583.readProperty_superType (), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 858)) ;
  }
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@functionImplementationForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_functionImplementationForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument__5F_inTypeMap */,
                                                                                    GGS_stringset & ioArgument_ioInclusionSet,
                                                                                    GGS_string & outArgument_outImplementation,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_functionImplementationForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("func-").add_operation (temp_0.readProperty_mFunctionName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 874)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 874))  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 874)) ;
  GGS_string var_code_34691 ;
  {
  const GGS_functionImplementationForGeneration temp_1 = this ;
  const GGS_functionImplementationForGeneration temp_2 = this ;
  const GGS_functionImplementationForGeneration temp_3 = this ;
  const GGS_functionImplementationForGeneration temp_4 = this ;
  const GGS_functionImplementationForGeneration temp_5 = this ;
  routine_generateFunction_3F__26__3F__3F__3F__3F__3F__3F_static_3F_const_21_ (GGS_string ("function_").add_operation (temp_1.readProperty_mFunctionName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 876)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 876)), ioArgument_ioInclusionSet, temp_2.readProperty_mFormalArgumentList (), temp_3.readProperty_mFunctionInstructionList (), GGS_string ("Compiler"), temp_4.readProperty_mReturnType (), temp_5.readProperty_mResultVariableCppName (), GGS_bool (false), GGS_bool (false), var_code_34691, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 875)) ;
  }
  const GGS_functionImplementationForGeneration temp_6 = this ;
  outArgument_outImplementation = GGS_semanticComponentGenerationTemplate::class_func_functionImplementation (temp_6.readProperty_mFunctionName (), var_code_34691, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 887)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@onceFunctionDeclarationForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_onceFunctionDeclarationForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument__5F_inTypeMap */,
                                                                                     GGS_stringset & ioArgument_ioInclusionSet,
                                                                                     GGS_string & outArgument_outImplementation,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_onceFunctionDeclarationForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("func-").add_operation (temp_0.readProperty_mFunctionName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 902)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 902))  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 902)) ;
  GGS_string var_code_35575 ;
  {
  const GGS_onceFunctionDeclarationForGeneration temp_1 = this ;
  const GGS_onceFunctionDeclarationForGeneration temp_2 = this ;
  const GGS_onceFunctionDeclarationForGeneration temp_3 = this ;
  const GGS_onceFunctionDeclarationForGeneration temp_4 = this ;
  routine_generateFunction_3F__26__3F__3F__3F__3F__3F__3F_static_3F_const_21_ (GGS_string ("onceFunction_").add_operation (temp_1.readProperty_mFunctionName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 904)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 904)), ioArgument_ioInclusionSet, GGS__5B_formalInputParameterForGeneration_5D_::init (inCompiler COMMA_HERE), temp_2.readProperty_mFunctionInstructionList (), GGS_string ("Compiler"), temp_3.readProperty_mReturnType (), temp_4.readProperty_mResultVariableCppName (), GGS_bool (true), GGS_bool (false), var_code_35575, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 903)) ;
  }
  const GGS_onceFunctionDeclarationForGeneration temp_5 = this ;
  const GGS_onceFunctionDeclarationForGeneration temp_6 = this ;
  outArgument_outImplementation = GGS_semanticComponentGenerationTemplate::class_func_onceFunctionImplementation (temp_5.readProperty_mFunctionName (), var_code_35575, GGS__5B_formalInputParameterForGeneration_5D_::init (inCompiler COMMA_HERE), extensionGetter_identifierRepresentation (temp_6.readProperty_mReturnType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 919)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 915)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexiqueDeclarationForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_lexiqueDeclarationForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result ; // Returned variable
  result = GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("semanticGeneration.galgas4", 937)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexiqueDeclarationForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueDeclarationForGeneration::method_appendDeclaration_31_ (GGS_stringset & ioArgument_ioInclusionSet,
                                                                         GGS_string & outArgument_outHeader,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexiqueDeclarationForGeneration temp_0 = this ;
  outArgument_outHeader = temp_0.readProperty_mHeaderContents () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_lexiqueDeclarationForGeneration temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::notEqual, temp_2.readProperty_mSuperLexiqueName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_lexiqueDeclarationForGeneration temp_3 = this ;
      ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("lexique-").add_operation (temp_3.readProperty_mSuperLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 947)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 947))  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 947)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexiqueDeclarationForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueDeclarationForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument__5F_inTypeMap */,
                                                                                GGS_stringset & ioArgument_ioInclusionSet,
                                                                                GGS_string & outArgument_outHeader,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexiqueDeclarationForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("lexique-").add_operation (temp_0.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 957)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 957))  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 957)) ;
  const GGS_lexiqueDeclarationForGeneration temp_1 = this ;
  outArgument_outHeader = temp_1.readProperty_mCppContents () ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexiqueDeclarationForGeneration appendSpecificFiles'
//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueDeclarationForGeneration::method_appendSpecificFiles (const GGS_string constinArgument_inProductDirectory,
                                                                       GGS_stringset & ioArgument_ioAllProductFileSet,
                                                                       GGS__5B_string_5D_ & ioArgument_ioSwiftAppProductFileList,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexiqueDeclarationForGeneration temp_0 = this ;
  ioArgument_ioAllProductFileSet.plusPlusAssignOperation (GGS_string ("lexique-").add_operation (temp_0.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 968)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 968)).add_operation (GGS_string ("-swiftui.swift"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 968))  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 968)) ;
  const GGS_lexiqueDeclarationForGeneration temp_1 = this ;
  ioArgument_ioSwiftAppProductFileList.plusPlusAssignOperation (GGS_string ("lexique-").add_operation (temp_1.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 969)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 969)).add_operation (GGS_string ("-swiftui.swift"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 969))  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 969)) ;
  {
  const GGS_lexiqueDeclarationForGeneration temp_2 = this ;
  const GGS_lexiqueDeclarationForGeneration temp_3 = this ;
  GGS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GGS_string ("lexique-").add_operation (temp_2.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 972)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 972)).add_operation (GGS_string ("-swiftui.swift"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 972)), GGS_string ("//"), GGS_string::makeEmptyString (), GGS_string ("\n\n"), temp_3.readProperty_mSwiftUIImplementation (), GGS_string ("\n\n"), GGS_string ("\n\n"), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 970)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@programComponentForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_programComponentForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result ; // Returned variable
  result = GGS_headerKind::class_func_noHeader (SOURCE_FILE ("semanticGeneration.galgas4", 992)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@programComponentForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_programComponentForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument__5F_inTypeMap */,
                                                                              GGS_stringset & ioArgument_ioInclusionSet,
                                                                              GGS_string & outArgument_outImplementation,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_programComponentForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.plusAssignOperation(temp_0.readProperty_mInclusionSet (), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1001)) ;
  const GGS_programComponentForGeneration temp_1 = this ;
  outArgument_outImplementation = temp_1.readProperty_mImplementationString () ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@primitiveTypeForGeneration appendPrimitiveTypeDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_primitiveTypeForGeneration::getter_appendPrimitiveTypeDeclaration (Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_primitiveTypeForGeneration temp_0 = this ;
  result = temp_0.readProperty_mCppDeclarationString () ;
  const GGS_primitiveTypeForGeneration temp_1 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_39609 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1018)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_primitiveTypeForGeneration temp_3 = this ;
    test_2 = temp_3.readProperty_isPackage ().boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_primitiveTypeForGeneration temp_4 = this ;
      result.plusAssignOperation(GGS_typeGenerationTemplate::class_func_unifiedClassBodyForPackage (var_selfTypeDefinition_39609.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1022)), var_selfTypeDefinition_39609.readProperty_classFunctionMap (), var_selfTypeDefinition_39609.readProperty_classMethodMap (), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1020)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1020)) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    const GGS_primitiveTypeForGeneration temp_5 = this ;
    result.plusAssignOperation(GGS_typeGenerationTemplate::class_func_unifiedClassBodyForType (var_selfTypeDefinition_39609.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_5.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1029)), var_selfTypeDefinition_39609.readProperty_isConcrete (), var_selfTypeDefinition_39609.readProperty_initializerMap (), var_selfTypeDefinition_39609.readProperty_classFunctionMap (), var_selfTypeDefinition_39609.readProperty_getterMap (), var_selfTypeDefinition_39609.readProperty_setterMap (), var_selfTypeDefinition_39609.readProperty_instanceMethodMap (), var_selfTypeDefinition_39609.readProperty_classMethodMap (), var_selfTypeDefinition_39609.readProperty_readSubscriptMap (), var_selfTypeDefinition_39609.readProperty_writeSubscriptMap (), var_selfTypeDefinition_39609.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_39609.readProperty_features (), var_selfTypeDefinition_39609.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_39609.readProperty_supportArrayLiteral (), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1027)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1027)) ;
  }
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generatePredefinedTypeFiles???&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_generatePredefinedTypeFiles_3F__3F__3F__26__26__26_ (const GGS_string constinArgument_inDirectory,
                                                                  const GGS__5B_semanticDeclarationForGeneration_5D_ constinArgument_inSemanticDeclarationListForGeneration,
                                                                  const GGS_sortedLexicalStyleArray constinArgument_inLexicalStyleNameSortedArray,
                                                                  GGS__5B_string_5D_ & ioArgument_ioToolHeaderFileList,
                                                                  GGS__5B_string_5D_ & ioArgument_ioToolCppFileList,
                                                                  GGS_stringset & ioArgument_ioAllProductFileSet,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_generatedCode_41619 = GGS_predefinedTypeGenerationTemplate::class_func_primitiveTypesHeaderPrologue (inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1062)) ;
  var_generatedCode_41619.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1063)) ;
  UpEnumerator__5B_semanticDeclarationForGeneration_5D_ enumerator_41746 (constinArgument_inSemanticDeclarationListForGeneration) ;
  while (enumerator_41746.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_41746.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1065)).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        var_generatedCode_41619.plusAssignOperation(callExtensionGetter_appendPrimitiveTypeDeclaration ((const cPtr_semanticDeclarationForGeneration *) enumerator_41746.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1066)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1066)) ;
      }
    }
    enumerator_41746.gotoNextObject () ;
  }
  UpEnumerator__5B_semanticDeclarationForGeneration_5D_ enumerator_41926 (constinArgument_inSemanticDeclarationListForGeneration) ;
  while (enumerator_41926.hasCurrentObject ()) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_41926.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1070)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GGS_stringset joker_42043 = GGS_stringset::init (inCompiler COMMA_HERE) ;
        GGS_string var_code_42070 ;
        callExtensionMethod_appendDeclaration_31_ ((cPtr_semanticDeclarationForGeneration *) enumerator_41926.current (HERE).ptr (), joker_42043, var_code_42070, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1071)) ;
        var_generatedCode_41619.plusAssignOperation(var_code_42070, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1072)) ;
      }
    }
    enumerator_41926.gotoNextObject () ;
  }
  UpEnumerator__5B_semanticDeclarationForGeneration_5D_ enumerator_42139 (constinArgument_inSemanticDeclarationListForGeneration) ;
  while (enumerator_42139.hasCurrentObject ()) {
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_42139.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1076)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        GGS_stringset joker_42269 = GGS_stringset::init (inCompiler COMMA_HERE) ;
        GGS_string var_headerString_32__42296 ;
        callExtensionMethod_appendDeclaration_32_ ((cPtr_semanticDeclarationForGeneration *) enumerator_42139.current (HERE).ptr (), constinArgument_inDirectory, joker_42269, var_headerString_32__42296, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1077)) ;
        var_generatedCode_41619.plusAssignOperation(var_headerString_32__42296, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1078)) ;
      }
    }
    enumerator_42139.gotoNextObject () ;
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = GGS_bool (ComparisonKind::equal, GGS_application::class_func_errorCount (SOURCE_FILE ("semanticGeneration.galgas4", 1081)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      ioArgument_ioToolHeaderFileList.plusPlusAssignOperation (GGS_string ("all-predefined-types.h")  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1082)) ;
      ioArgument_ioAllProductFileSet.plusPlusAssignOperation (GGS_string ("all-predefined-types.h")  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1083)) ;
      {
      GGS_string::class_method_generateFileWithPattern (constinArgument_inDirectory, GGS_string ("all-predefined-types.h"), GGS_string ("//"), GGS_string::makeEmptyString (), GGS_string ("\n\n"), var_generatedCode_41619, GGS_string ("\n\n"), GGS_string::makeEmptyString (), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1084)) ;
      }
    }
  }
  var_generatedCode_41619 = GGS_predefinedTypeGenerationTemplate::class_func_predefinedTypesImplementation (constinArgument_inLexicalStyleNameSortedArray, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1097)) ;
  UpEnumerator__5B_semanticDeclarationForGeneration_5D_ enumerator_43061 (constinArgument_inSemanticDeclarationListForGeneration) ;
  while (enumerator_43061.hasCurrentObject ()) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_43061.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1099)).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        var_generatedCode_41619.plusAssignOperation(callExtensionGetter_appendTypeGenericImplementation ((const cPtr_semanticDeclarationForGeneration *) enumerator_43061.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1100)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1100)) ;
        GGS_stringset joker_43261 = GGS_stringset::init (inCompiler COMMA_HERE) ;
        GGS_string var_code_43288 ;
        callExtensionMethod_appendSpecificImplementation ((cPtr_semanticDeclarationForGeneration *) enumerator_43061.current (HERE).ptr (), GGS_unifiedTypeMap::init (inCompiler COMMA_HERE), joker_43261, var_code_43288, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1101)) ;
        var_generatedCode_41619.plusAssignOperation(var_code_43288, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1102)) ;
      }
    }
    enumerator_43061.gotoNextObject () ;
  }
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = GGS_bool (ComparisonKind::equal, GGS_application::class_func_errorCount (SOURCE_FILE ("semanticGeneration.galgas4", 1105)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      ioArgument_ioToolCppFileList.plusPlusAssignOperation (GGS_string ("all-predefined-types.cpp")  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1106)) ;
      ioArgument_ioAllProductFileSet.plusPlusAssignOperation (GGS_string ("all-predefined-types.cpp")  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1107)) ;
      {
      GGS_string::class_method_generateFileWithPattern (constinArgument_inDirectory, GGS_string ("all-predefined-types.cpp"), GGS_string ("//"), GGS_string::makeEmptyString (), GGS_string ("\n\n"), var_generatedCode_41619, GGS_string ("\n\n"), GGS_string::makeEmptyString (), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1108)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeSemanticInstructionList?&?&?localConstantList??&!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F__3F__26__21_ (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                                  GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                                  const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                                  GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                  const GGS__5B_localConstant_5D_ constinArgument_inLocalConstantList,
                                                                                                  const GGS__5B_semanticInstructionAST_5D_ constinArgument_inSemanticInstructionListAST,
                                                                                                  const GGS_location constinArgument_inEndOfBranchLocation,
                                                                                                  GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                                  GGS__5B_semanticInstructionForGeneration_5D_ & outArgument_outInstructionListForGeneration,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstructionListForGeneration.drop () ; // Release 'out' argument
  {
  extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 46)) ;
  }
  {
  routine_analyzeSemanticInstructionListWithoutBranch_3F__26__3F__26__3F_localConstantList_3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inLocalConstantList, constinArgument_inSemanticInstructionListAST, ioArgument_ioVariableMap, outArgument_outInstructionListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 48)) ;
  }
  {
  extensionSetter_closeBranch (ioArgument_ioVariableMap, constinArgument_inEndOfBranchLocation, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 59)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeSemanticInstructionListWithoutBranch?&?&?localConstantList?&!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeSemanticInstructionListWithoutBranch_3F__26__3F__26__3F_localConstantList_3F__26__21_ (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                                           GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                                           const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                                           GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                           const GGS__5B_localConstant_5D_ constinArgument_inLocalConstantList,
                                                                                                           const GGS__5B_semanticInstructionAST_5D_ constinArgument_inSemanticInstructionListAST,
                                                                                                           GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                                           GGS__5B_semanticInstructionForGeneration_5D_ & outArgument_outInstructionListForGeneration,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstructionListForGeneration.drop () ; // Release 'out' argument
  outArgument_outInstructionListForGeneration = GGS__5B_semanticInstructionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_localConstant_5D_ enumerator_3560 (constinArgument_inLocalConstantList) ;
  while (enumerator_3560.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = enumerator_3560.current (HERE).readProperty_mNoWarningIfUnused ().boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        {
        extensionSetter_insertUsedLocalConstant (ioArgument_ioVariableMap, enumerator_3560.current (HERE).readProperty_mName (), enumerator_3560.current (HERE).readProperty_mType (), enumerator_3560.current (HERE).readProperty_mCppName (), enumerator_3560.current (HERE).readProperty_mCppName (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 76)) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      {
      extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, enumerator_3560.current (HERE).readProperty_mName (), enumerator_3560.current (HERE).readProperty_mType (), enumerator_3560.current (HERE).readProperty_mCppName (), enumerator_3560.current (HERE).readProperty_mCppName (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 78)) ;
      }
    }
    enumerator_3560.gotoNextObject () ;
  }
  UpEnumerator__5B_semanticInstructionAST_5D_ enumerator_4012 (constinArgument_inSemanticInstructionListAST) ;
  while (enumerator_4012.hasCurrentObject ()) {
    callExtensionMethod_analyzeSemanticInstruction ((cPtr_semanticInstructionAST *) enumerator_4012.current (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, outArgument_outInstructionListForGeneration, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 83)) ;
    enumerator_4012.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'checkExpressionIsBoolean???!'
//
//--------------------------------------------------------------------------------------------------

void routine_checkExpressionIsBoolean_3F__3F__3F__21_ (const GGS_analysisContext constinArgument_inAnalysisContext,
                                                       const GGS_location constinArgument_inErrorLocation,
                                                       const GGS_semanticExpressionForGeneration constinArgument_inExpression,
                                                       GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_unifiedTypeMapEntry var_expressionType_4969 = constinArgument_inExpression.readProperty_mResultType () ;
  GGS_unifiedTypeMapEntry var_boolType_5036 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType () ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, var_expressionType_4969.objectCompare (var_boolType_5036)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outExpression = constinArgument_inExpression ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::equal, extensionGetter_definition (var_expressionType_4969, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 117)).readProperty_typeKind ().objectCompare (GGS_typeKindEnum::class_func_structType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 117)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = extensionGetter_definition (var_expressionType_4969, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 118)).readProperty_propertyMap ().getter_contains (GGS_string ("bool") COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 118)).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            GGS_AccessControl var_accessControl_5404 ;
            GGS_unifiedTypeMapEntry var_attributeType_5465 ;
            GGS_bool joker_5427 ; // Joker input parameter
            extensionGetter_definition (var_expressionType_4969, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 119)).readProperty_propertyMap ().method_searchKey (GGS_lstring::init_21__21_ (GGS_string ("bool"), constinArgument_inErrorLocation, inCompiler COMMA_HERE), var_accessControl_5404, joker_5427, var_attributeType_5465, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 119)) ;
            extensionMethod_checkSetAccess (var_accessControl_5404, constinArgument_inAnalysisContext.readProperty_selfAvailability (), constinArgument_inErrorLocation, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 125)) ;
            GalgasBool test_3 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_3) {
              test_3 = GGS_bool (ComparisonKind::equal, var_attributeType_5465.objectCompare (var_boolType_5036)).boolEnum () ;
              if (GalgasBool::boolTrue == test_3) {
                outArgument_outExpression = GGS_propertyAccessExpressionForGeneration::init_21__21__21__21_ (var_boolType_5036, constinArgument_inErrorLocation, constinArgument_inExpression, GGS_string ("bool"), inCompiler COMMA_HERE) ;
              }
            }
            if (GalgasBool::boolFalse == test_3) {
              GenericArray <FixItDescription> fixItArray4 ;
              inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("the '@").add_operation (extensionGetter_definition (var_expressionType_4969, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 135)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 135)).add_operation (GGS_string ("' struct type defines an attribute named 'bool', but its type is not '@bool'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 135)), fixItArray4  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 134)) ;
              outArgument_outExpression.drop () ; // Release error dropped variable
            }
          }
        }
        if (GalgasBool::boolFalse == test_2) {
          GenericArray <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("the '@").add_operation (extensionGetter_definition (var_expressionType_4969, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 140)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 140)).add_operation (GGS_string ("' struct type does not define an attribute named 'bool'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 140)), fixItArray5  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 139)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
    }
    if (GalgasBool::boolFalse == test_1) {
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        const GGS_getterMap_2E_element var_entry_6210 = extensionGetter_definition (var_expressionType_4969, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 144)).readProperty_getterMap ().readSubcript__3F_ (GGS_string ("bool"), inCompiler COMMA_HERE).unwrappedValue () ;
        if (!extensionGetter_definition (var_expressionType_4969, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 144)).readProperty_getterMap ().readSubcript__3F_ (GGS_string ("bool"), inCompiler COMMA_HERE).isValuated ()) {
          test_6 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_6) {
          GalgasBool test_7 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_7) {
            test_7 = GGS_bool (ComparisonKind::notEqual, var_entry_6210.readProperty_mReturnedType ().objectCompare (var_boolType_5036)).boolEnum () ;
            if (GalgasBool::boolTrue == test_7) {
              GenericArray <FixItDescription> fixItArray8 ;
              inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("the expression type is not @bool, it handles a 'bool' func, but it does not return a '@bool' value"), fixItArray8  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 146)) ;
              outArgument_outExpression.drop () ; // Release error dropped variable
            }
          }
          if (GalgasBool::boolFalse == test_7) {
            GalgasBool test_9 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_9) {
              test_9 = GGS_bool (ComparisonKind::greaterThan, var_entry_6210.readProperty_mArgumentTypeList ().getter_count (SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 148)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_9) {
                GenericArray <FixItDescription> fixItArray10 ;
                inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("the expression type is not @bool, it handles a 'bool' func that requires argument(s)"), fixItArray10  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 149)) ;
                outArgument_outExpression.drop () ; // Release error dropped variable
              }
            }
            if (GalgasBool::boolFalse == test_9) {
              outArgument_outExpression = GGS_getterCallExpressionForGeneration::init_21__21__21__21__21__21__21__21_ (var_boolType_5036, constinArgument_inErrorLocation, var_entry_6210.readProperty_mKind (), constinArgument_inExpression, GGS__5B_string_5D_::init (inCompiler COMMA_HERE), GGS_string ("bool"), GGS__5B_semanticExpressionForGeneration_5D_::init (inCompiler COMMA_HERE), var_entry_6210.readProperty_mHasCompilerArgument (), inCompiler COMMA_HERE) ;
            }
          }
        }
      }
      if (GalgasBool::boolFalse == test_6) {
        GalgasBool test_11 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_11) {
          test_11 = GGS_bool (ComparisonKind::equal, extensionGetter_definition (var_expressionType_4969, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 163)).readProperty_getterMap ().getter_count (SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 163)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_11) {
            GenericArray <FixItDescription> fixItArray12 ;
            inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("the expression type is not '@bool', but '@").add_operation (extensionGetter_definition (var_expressionType_4969, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 165)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 165)).add_operation (GGS_string ("', and this type does not define the 'bool' func"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 165)), fixItArray12  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 164)) ;
            outArgument_outExpression.drop () ; // Release error dropped variable
          }
        }
        if (GalgasBool::boolFalse == test_11) {
          GenericArray <FixItDescription> fixItArray13 ;
          appendFixItActions (fixItArray13, EnumFixItKind::fixItReplace, extensionGetter_definition (var_expressionType_4969, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 171)).readProperty_getterMap ().getter_keyList (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 171))) ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("the expression type is not '@bool', but '@").add_operation (extensionGetter_definition (var_expressionType_4969, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 169)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 169)).add_operation (GGS_string ("', and this type does not define the 'bool' func "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 169)), fixItArray13  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 168)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@grammarInstructionSyntaxDirectedTranslationResultNone analyzeGrammarInstructionSDT'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultNone::method_analyzeGrammarInstructionSDT (const GGS_analysisContext /* constinArgument__5F_inAnalysisContext */,
                                                                                                      GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                                                      const GGS_bool /* constinArgument__5F_inHasTranslateFeature */,
                                                                                                      const GGS_string /* constinArgument__5F_inSyntaxDirectedTranslationResultVarName */,
                                                                                                      GGS__5B_string_5D_ & /* ioArgument__5F_ioAssignementList */,
                                                                                                      GGS_localVarManager & /* ioArgument__5F_ioVariableMap */,
                                                                                                      Compiler * /* inCompiler */
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@grammarInstructionSyntaxDirectedTranslationDropResult analyzeGrammarInstructionSDT'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationDropResult::method_analyzeGrammarInstructionSDT (const GGS_analysisContext /* constinArgument__5F_inAnalysisContext */,
                                                                                                      GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                                                      const GGS_bool constinArgument_inHasTranslateFeature,
                                                                                                      const GGS_string /* constinArgument__5F_inSyntaxDirectedTranslationResultVarName */,
                                                                                                      GGS__5B_string_5D_ & /* ioArgument__5F_ioAssignementList */,
                                                                                                      GGS_localVarManager & /* ioArgument__5F_ioVariableMap */,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 197)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_grammarInstructionSyntaxDirectedTranslationDropResult temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mLocation (), GGS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 198)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@grammarInstructionSyntaxDirectedTranslationResultInVar analyzeGrammarInstructionSDT'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar::method_analyzeGrammarInstructionSDT (const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                                       GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                                                       const GGS_bool constinArgument_inHasTranslateFeature,
                                                                                                       const GGS_string constinArgument_inSyntaxDirectedTranslationResultVarName,
                                                                                                       GGS__5B_string_5D_ & ioArgument_ioAssignementList,
                                                                                                       GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 211)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 212)) ;
    }
  }
  GGS_unifiedTypeMapEntry var_type_9357 ;
  GGS_string var_cppName_9376 ;
  {
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_3 = this ;
  GGS_string joker_9385 ; // Joker input parameter
  extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, temp_3.readProperty_mActualParameterName (), var_type_9357, var_cppName_9376, joker_9385, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 214)) ;
  }
  GGS_unifiedTypeMapEntry var_expectedType_9395 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType () ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::notEqual, var_expectedType_9395.objectCompare (var_type_9357)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_5 = this ;
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_6 = this ;
      GenericArray <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the '").add_operation (temp_6.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 218)).add_operation (GGS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 218)).add_operation (extensionGetter_identifierRepresentation (var_type_9357, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 218)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 218)).add_operation (GGS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 218)).add_operation (extensionGetter_identifierRepresentation (var_expectedType_9395, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 219)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 219)).add_operation (GGS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 219)), fixItArray7  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 217)) ;
    }
  }
  ioArgument_ioAssignementList.plusPlusAssignOperation (var_cppName_9376.add_operation (GGS_string (" = GGS_string ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 221)).add_operation (constinArgument_inSyntaxDirectedTranslationResultVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 221)).add_operation (GGS_string (") ;"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 221))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 221)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar analyzeGrammarInstructionSDT'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::method_analyzeGrammarInstructionSDT (const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                                               GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                               const GGS_bool constinArgument_inHasTranslateFeature,
                                                                                                               const GGS_string constinArgument_inSyntaxDirectedTranslationResultVarName,
                                                                                                               GGS__5B_string_5D_ & ioArgument_ioAssignementList,
                                                                                                               GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 233)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 234)) ;
    }
  }
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_3 = this ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_4 = this ;
  GGS_string var_cppName_10443 = GGS_string ("var_").add_operation (temp_3.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 236)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 236)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 236)).add_operation (temp_4.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 236)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 236)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 236)) ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_5 = this ;
  GGS_unifiedTypeMapEntry var_type_10588 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_5.readProperty_mActualParameterTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 237)) ;
  {
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_6 = this ;
  extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, temp_6.readProperty_mActualParameterName (), GGS_bool (true), var_type_10588, var_cppName_10443, var_cppName_10443, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 238)) ;
  }
  GGS_unifiedTypeMapEntry var_expectedType_10790 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType () ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = GGS_bool (ComparisonKind::notEqual, var_expectedType_10790.objectCompare (var_type_10588)).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_8 = this ;
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_9 = this ;
      GenericArray <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the '").add_operation (temp_9.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 242)).add_operation (GGS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 242)).add_operation (extensionGetter_identifierRepresentation (var_type_10588, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 242)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 242)).add_operation (GGS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 242)).add_operation (extensionGetter_identifierRepresentation (var_expectedType_10790, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 243)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 243)).add_operation (GGS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 243)), fixItArray10  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 241)) ;
    }
  }
  ioArgument_ioAssignementList.plusPlusAssignOperation (GGS_string ("GGS_string ").add_operation (var_cppName_10443, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 245)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 245)).add_operation (constinArgument_inSyntaxDirectedTranslationResultVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 245)).add_operation (GGS_string (") ;"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 245))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 245)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst analyzeGrammarInstructionSDT'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::method_analyzeGrammarInstructionSDT (const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                                                 GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                                 const GGS_bool constinArgument_inHasTranslateFeature,
                                                                                                                 const GGS_string constinArgument_inSyntaxDirectedTranslationResultVarName,
                                                                                                                 GGS__5B_string_5D_ & ioArgument_ioAssignementList,
                                                                                                                 GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 257)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 258)) ;
    }
  }
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_3 = this ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_4 = this ;
  GGS_string var_cppName_11873 = GGS_string ("var_").add_operation (temp_3.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 260)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 260)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 260)).add_operation (temp_4.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 260)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 260)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 260)) ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_5 = this ;
  GGS_unifiedTypeMapEntry var_type_12018 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_5.readProperty_mActualParameterTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 261)) ;
  {
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_6 = this ;
  extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, temp_6.readProperty_mActualParameterName (), var_type_12018, var_cppName_11873, var_cppName_11873, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 262)) ;
  }
  GGS_unifiedTypeMapEntry var_expectedType_12194 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType () ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = GGS_bool (ComparisonKind::notEqual, var_expectedType_12194.objectCompare (var_type_12018)).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_8 = this ;
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_9 = this ;
      GenericArray <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the '").add_operation (temp_9.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 266)).add_operation (GGS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 266)).add_operation (extensionGetter_identifierRepresentation (var_type_12018, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 266)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 266)).add_operation (GGS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 266)).add_operation (extensionGetter_identifierRepresentation (var_expectedType_12194, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 267)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 267)).add_operation (GGS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 267)), fixItArray10  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 265)) ;
    }
  }
  ioArgument_ioAssignementList.plusPlusAssignOperation (GGS_string ("const GGS_string ").add_operation (var_cppName_11873, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 269)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 269)).add_operation (constinArgument_inSyntaxDirectedTranslationResultVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 269)).add_operation (GGS_string (") ;"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 269))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 269)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@overridingExtensionGetterAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionGetterAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & /* ioArgument__5F_ioSemanticTypePrecedenceGraph */,
                                                                        GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                        GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                                        GGS_extensionMethodMapForBuildingContext & /* ioArgument__5F_ioExtensionMethodMapForBuildingContext */,
                                                                        GGS_extensionGetterMapForBuildingContext & ioArgument_ioExtensionGetterMapForBuildingContext,
                                                                        GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                                        GGS__5B_semanticDeclarationAST_5D_ & ioArgument_ioExtensionOverrideDefinitionList,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_overridingExtensionGetterAST temp_0 = this ;
  ioArgument_ioExtensionOverrideDefinitionList.plusPlusAssignOperation (temp_0  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 110)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_overridingExtensionGetterAST temp_2 = this ;
    test_1 = ioArgument_ioExtensionGetterMapForBuildingContext.getter_contains (temp_2.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 112)).operator_not (SOURCE_FILE ("extension-overriding-getter.galgas4", 112)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      {
      const GGS_overridingExtensionGetterAST temp_3 = this ;
      ioArgument_ioExtensionGetterMapForBuildingContext.setter_insertKey (temp_3.readProperty_mTypeName (), GGS_extensionGetterMapForType::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 113)) ;
      }
    }
  }
  const GGS_overridingExtensionGetterAST temp_4 = this ;
  GGS_extensionGetterMapForBuildingContext_2E_element var_entry_5194 = ioArgument_ioExtensionGetterMapForBuildingContext.readSubcript__3F_searchKey (temp_4.readProperty_mTypeName (), inCompiler COMMA_HERE) ;
  {
  const GGS_overridingExtensionGetterAST temp_5 = this ;
  const GGS_overridingExtensionGetterAST temp_6 = this ;
  const GGS_overridingExtensionGetterAST temp_7 = this ;
  var_entry_5194.mProperty_mExtensionGetterMapForType.setter_insertKey (temp_5.readProperty_mOverridingExtensionGetterName (), temp_6.readProperty_mOverridingExtensionGetterReturnedTypeName (), temp_7.readProperty_mOverridingExtensionGetterFormalInputParameterList (), GGS_methodQualifier::class_func_isVirtualOverriding (SOURCE_FILE ("extension-overriding-getter.galgas4", 123)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 119)) ;
  }
  {
  ioArgument_ioExtensionGetterMapForBuildingContext.setter_replaceKey (var_entry_5194, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 125)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@overridingExtensionGetterAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_overridingExtensionGetterAST::getter_keyRepresentation (Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_overridingExtensionGetterAST temp_0 = this ;
  const GGS_overridingExtensionGetterAST temp_1 = this ;
  result = GGS_string ("overriding extension func @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 133)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 133)).add_operation (temp_1.readProperty_mOverridingExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 133)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@overridingExtensionGetterAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionGetterAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                                  const GGS_extensionInitializerForBuildingContext /* constinArgument__5F_inExtensionInitializerMapForBuildingContext */,
                                                                                  const GGS_extensionMethodMapForBuildingContext /* constinArgument__5F_inExtensionMethodMapForBuildingContext */,
                                                                                  const GGS_extensionGetterMapForBuildingContext /* constinArgument__5F_inExtensionGetterMapForBuildingContext */,
                                                                                  const GGS_extensionSetterMapForBuildingContext /* constinArgument__5F_inExtensionSetterMapForBuildingContext */,
                                                                                  GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                                  GGS_semanticContext & /* ioArgument__5F_ioSemanticContext */,
                                                                                  Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@overridingExtensionGetterAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionGetterAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & /* ioArgument__5F_ioUsefulnessRootEntities */,
                                                                 GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                                 const GGS_semanticContext constinArgument_inSemanticContext,
                                                                 GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                 const GGS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                 GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_overridingExtensionGetterAST temp_0 = this ;
  const GGS_overridingExtensionGetterAST temp_1 = this ;
  GGS_lstring var_nameForUsefulness_7472 = function_getterNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionGetterName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 163)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_7472, var_nameForUsefulness_7472, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 164)) ;
  }
  const GGS_overridingExtensionGetterAST temp_2 = this ;
  GGS_lstring var_typeNameForUsefulness_7658 = function_typeNameForUsefulEntitiesGraph (temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 165)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_7658, var_nameForUsefulness_7472 COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 166)) ;
  }
  const GGS_overridingExtensionGetterAST temp_3 = this ;
  GGS_unifiedTypeMapEntry var_selfType_7862 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_3.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 168)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = extensionGetter_definition (var_selfType_7862, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 170)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-overriding-getter.galgas4", 170)).operator_not (SOURCE_FILE ("extension-overriding-getter.galgas4", 170)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_overridingExtensionGetterAST temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mOverridingExtensionGetterName ().readProperty_location (), GGS_string ("cannot declare a extension func: '@").add_operation (extensionGetter_definition (var_selfType_7862, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 171)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 171)).add_operation (GGS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 171)), fixItArray6  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 171)) ;
    }
  }
  GGS_string var_baseTypeName_8198 = GGS_string::makeEmptyString () ;
  GGS_unifiedTypeMapEntry var_superType_8243 = extensionGetter_definition (var_selfType_7862, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 175)).readProperty_superType () ;
  GGS__5B_functionSignatureElement_5D_ var_inheritedSignature_8319 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_inheritedReturnType_8350 = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("extension-overriding-getter.galgas4", 177)) ;
  GGS_location var_inheritedDeclarationLocation_8414 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 178)) ;
  if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-getter.galgas4", 179)).add_operation (GGS_u_33__32_ (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 179)).isValid ()) {
    uint32_t variant_8462 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-getter.galgas4", 179)).add_operation (GGS_u_33__32_ (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 179)).uintValue () ;
    bool loop_8462 = true ;
    while (loop_8462) {
      loop_8462 = var_superType_8243.getter_isNull (SOURCE_FILE ("extension-overriding-getter.galgas4", 180)).operator_not (SOURCE_FILE ("extension-overriding-getter.galgas4", 180)).operator_and (GGS_bool (ComparisonKind::equal, var_baseTypeName_8198.objectCompare (GGS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 180)).isValid () ;
      if (loop_8462) {
        loop_8462 = var_superType_8243.getter_isNull (SOURCE_FILE ("extension-overriding-getter.galgas4", 180)).operator_not (SOURCE_FILE ("extension-overriding-getter.galgas4", 180)).operator_and (GGS_bool (ComparisonKind::equal, var_baseTypeName_8198.objectCompare (GGS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 180)).boolValue () ;
      }
      if (loop_8462 && (0 == variant_8462)) {
        loop_8462 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-getter.galgas4", 179)) ;
      }
      if (loop_8462) {
        variant_8462 -= 1 ;
        GalgasBool test_7 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_7) {
          const GGS_overridingExtensionGetterAST temp_8 = this ;
          test_7 = extensionGetter_definition (var_superType_8243, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 181)).readProperty_getterMap ().getter_contains (temp_8.readProperty_mOverridingExtensionGetterName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 181)).boolEnum () ;
          if (GalgasBool::boolTrue == test_7) {
            GGS_methodQualifier var_qualifier_8889 ;
            const GGS_overridingExtensionGetterAST temp_9 = this ;
            GGS_methodKind joker_8745 ; // Joker input parameter
            GGS_bool joker_8825 ; // Joker input parameter
            GGS_string joker_8908 ; // Joker input parameter
            extensionGetter_definition (var_superType_8243, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 182)).readProperty_getterMap ().method_searchKey (temp_9.readProperty_mOverridingExtensionGetterName (), joker_8745, var_inheritedSignature_8319, var_inheritedDeclarationLocation_8414, joker_8825, var_inheritedReturnType_8350, var_qualifier_8889, joker_8908, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 182)) ;
            GalgasBool test_10 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_10) {
              test_10 = GGS_bool (ComparisonKind::lowerOrEqual, var_qualifier_8889.objectCompare (GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("extension-overriding-getter.galgas4", 192)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_10) {
                var_baseTypeName_8198 = extensionGetter_definition (var_superType_8243, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 193)).readProperty_typeName ().readProperty_string () ;
              }
            }
          }
        }
        var_superType_8243 = extensionGetter_definition (var_superType_8243, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 196)).readProperty_superType () ;
      }
    }
  }
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    test_11 = GGS_bool (ComparisonKind::equal, var_baseTypeName_8198.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      const GGS_overridingExtensionGetterAST temp_12 = this ;
      GenericArray <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mOverridingExtensionGetterName ().readProperty_location (), GGS_string ("this func is not declared by a super class"), fixItArray13  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 199)) ;
    }
  }
  GGS_analysisContext var_analysisContext_9271 = GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GGS_string ("this"), GGS_selfAvailability::class_func_available (var_selfType_7862, GGS_selfMutability::class_func_propertiesAreMutableSelfIsNot (SOURCE_FILE ("extension-overriding-getter.galgas4", 206))  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 206)), GGS_string ("object."), inCompiler COMMA_HERE) ;
  GGS__5B_formalInputParameterForGeneration_5D_ var_formalParameterListForGeneration_9918 ;
  GGS_unifiedTypeMapEntry var_returnType_9982 ;
  GGS_string var_returnVariableCppName_10011 ;
  GGS__5B_semanticInstructionForGeneration_5D_ var_semanticInstructionListForGeneration_10079 ;
  {
  const GGS_overridingExtensionGetterAST temp_14 = this ;
  const GGS_overridingExtensionGetterAST temp_15 = this ;
  const GGS_overridingExtensionGetterAST temp_16 = this ;
  const GGS_overridingExtensionGetterAST temp_17 = this ;
  routine_analyzeFunctionBody_3F__26__3F__26__3F__3F__3F__3F__21_signatureIR_21__21__21_ (var_nameForUsefulness_7472, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_9271, ioArgument_ioTypeMap, temp_14.readProperty_mOverridingExtensionGetterFormalInputParameterList (), temp_15.readProperty_mOverridingExtensionGetterInstructionList (), temp_16.readProperty_mOverridingExtensionGetterReturnedTypeName (), temp_17.readProperty_mEndOfReaderLocation (), var_formalParameterListForGeneration_9918, var_returnType_9982, var_returnVariableCppName_10011, var_semanticInstructionListForGeneration_10079, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 209)) ;
  }
  GalgasBool test_18 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_18) {
    test_18 = GGS_bool (ComparisonKind::notEqual, var_baseTypeName_8198.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_18) {
      {
      const GGS_overridingExtensionGetterAST temp_19 = this ;
      routine_checkGetterSignatures_3F__3F__3F__3F__3F__3F_ (var_formalParameterListForGeneration_9918, var_returnType_9982, temp_19.readProperty_mOverridingExtensionGetterName ().readProperty_location (), var_inheritedSignature_8319, var_inheritedReturnType_8350, var_inheritedDeclarationLocation_8414, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 225)) ;
      }
    }
  }
  const GGS_overridingExtensionGetterAST temp_20 = this ;
  const GGS_overridingExtensionGetterAST temp_21 = this ;
  const GGS_overridingExtensionGetterAST temp_22 = this ;
  const GGS_overridingExtensionGetterAST temp_23 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_overrideExtensionGetterForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21__21__21_ (GGS_string ("override extension func ").add_operation (temp_20.readProperty_mOverridingExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 236)), GGS_bool (false), GGS_string ("func-").add_operation (temp_21.readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-getter.galgas4", 238)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 238)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 238)).add_operation (temp_22.readProperty_mOverridingExtensionGetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-getter.galgas4", 238)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 238)), var_selfType_7862, var_baseTypeName_8198, temp_23.readProperty_mOverridingExtensionGetterName ().readProperty_string (), var_returnType_9982, var_returnVariableCppName_10011, var_formalParameterListForGeneration_9918, extensionGetter_definition (var_selfType_7862, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 245)).readProperty_allTypedPropertyList (), var_semanticInstructionListForGeneration_10079, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 235)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@overridingExtensionGetterAST buildExtensionListMaps'
//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionGetterAST::method_buildExtensionListMaps (GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioAbstractExtensionSetterListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioExtensionSetterListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingExtensionSetterListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingAbstractExtensionSetterListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioAbstractExtensionMethodListMapAST */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioExtensionMethodListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingExtensionMethodListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingAbstractExtensionMethodListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioAbstractExtensionGetterListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioExtensionGetterListMap */,
                                                                       GGS_genericExtensionMethodListMap & ioArgument_ioOverridingExtensionGetterListMap,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingAbstractExtensionGetterListMap */,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_overridingExtensionGetterAST temp_0 = this ;
  const GGS_overridingExtensionGetterAST temp_1 = this ;
  extensionSetter_insertKey (ioArgument_ioOverridingExtensionGetterListMap, temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionGetterName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 267)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@overrideExtensionGetterForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_overrideExtensionGetterForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result ; // Returned variable
  result = GGS_headerKind::class_func_noHeader (SOURCE_FILE ("extension-overriding-getter.galgas4", 291)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@overrideExtensionGetterForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_overrideExtensionGetterForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument__5F_inTypeMap */,
                                                                                     GGS_stringset & ioArgument_ioInclusionSet,
                                                                                     GGS_string & outArgument_outImplementation,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_overrideExtensionGetterForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("class-").add_operation (extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 300)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-getter.galgas4", 300)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 300))  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 300)) ;
  GGS_string var_extensionGetterCode_14269 ;
  {
  const GGS_overrideExtensionGetterForGeneration temp_1 = this ;
  const GGS_overrideExtensionGetterForGeneration temp_2 = this ;
  const GGS_overrideExtensionGetterForGeneration temp_3 = this ;
  const GGS_overrideExtensionGetterForGeneration temp_4 = this ;
  const GGS_overrideExtensionGetterForGeneration temp_5 = this ;
  const GGS_overrideExtensionGetterForGeneration temp_6 = this ;
  routine_generateExtensionGetter_3F__26__3F__3F__3F__3F__3F__21_ (GGS_string ("cPtr_").add_operation (extensionGetter_definition (temp_1.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 302)).readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-overriding-getter.galgas4", 302)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 302)).add_operation (GGS_string ("::getter_"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 302)).add_operation (temp_2.readProperty_mOverridingExtensionGetterName ().getter_identifierRepresentation (SOURCE_FILE ("extension-overriding-getter.galgas4", 302)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 302)), ioArgument_ioInclusionSet, temp_3.readProperty_mOverridingExtensionGetterFormalParameterList (), temp_4.readProperty_mSemanticInstructionListForGeneration (), GGS_string ("Compiler"), temp_5.readProperty_mResultType (), temp_6.readProperty_mResultVarCppName (), var_extensionGetterCode_14269, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 301)) ;
  }
  const GGS_overrideExtensionGetterForGeneration temp_7 = this ;
  const GGS_overrideExtensionGetterForGeneration temp_8 = this ;
  const GGS_overrideExtensionGetterForGeneration temp_9 = this ;
  outArgument_outImplementation = GGS_semanticComponentGenerationTemplate::class_func_overridingExtensionGetterImplementation (extensionGetter_definition (temp_7.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 312)).readProperty_typeName ().readProperty_string (), temp_8.readProperty_mOverridingExtensionGetterName (), var_extensionGetterCode_14269, temp_9.readProperty_mResultType (), inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 311)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@abstractExtensionMethodAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionMethodAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                      GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                      GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                                      GGS_extensionMethodMapForBuildingContext & ioArgument_ioExtensionMethodMapForBuildingContext,
                                                                      GGS_extensionGetterMapForBuildingContext & /* ioArgument__5F_ioExtensionGetterMapForBuildingContext */,
                                                                      GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                                      GGS__5B_semanticDeclarationAST_5D_ & /* ioArgument__5F_ioExtensionOverrideDefinitionList */,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_abstractExtensionMethodAST temp_0 = this ;
  const GGS_abstractExtensionMethodAST temp_1 = this ;
  const GGS_abstractExtensionMethodAST temp_2 = this ;
  GGS_lstring var_key_3188 = GGS_lstring::init_21__21_ (GGS_string ("extension proc @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("abstract-method.galgas4", 64)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-method.galgas4", 64)).add_operation (temp_1.readProperty_mAbstractExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("abstract-method.galgas4", 64)), temp_2.readProperty_mAbstractExtensionMethodName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_abstractExtensionMethodAST temp_3 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3188, temp_3, inCompiler COMMA_SOURCE_FILE ("abstract-method.galgas4", 67)) ;
  }
  {
  const GGS_abstractExtensionMethodAST temp_4 = this ;
  const GGS_abstractExtensionMethodAST temp_5 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_3188, GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("abstract-method.galgas4", 68)), temp_5.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("abstract-method.galgas4", 68)) ;
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    const GGS_abstractExtensionMethodAST temp_7 = this ;
    test_6 = ioArgument_ioExtensionMethodMapForBuildingContext.getter_contains (temp_7.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("abstract-method.galgas4", 70)).operator_not (SOURCE_FILE ("abstract-method.galgas4", 70)).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      {
      const GGS_abstractExtensionMethodAST temp_8 = this ;
      ioArgument_ioExtensionMethodMapForBuildingContext.setter_insertKey (temp_8.readProperty_mTypeName (), GGS_extensionMethodMapForType::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("abstract-method.galgas4", 71)) ;
      }
    }
  }
  const GGS_abstractExtensionMethodAST temp_9 = this ;
  GGS_extensionMethodMapForBuildingContext_2E_element var_entry_3727 = ioArgument_ioExtensionMethodMapForBuildingContext.readSubcript__3F_searchKey (temp_9.readProperty_mTypeName (), inCompiler COMMA_HERE) ;
  {
  const GGS_abstractExtensionMethodAST temp_10 = this ;
  const GGS_abstractExtensionMethodAST temp_11 = this ;
  var_entry_3727.mProperty_mExtensionMethodMapForType.setter_insertKey (temp_10.readProperty_mAbstractExtensionMethodName (), temp_11.readProperty_mAbstractExtensionMethodFormalParameterList (), GGS_methodQualifier::class_func_isVirtualAbstract (SOURCE_FILE ("abstract-method.galgas4", 80)), inCompiler COMMA_SOURCE_FILE ("abstract-method.galgas4", 77)) ;
  }
  {
  ioArgument_ioExtensionMethodMapForBuildingContext.setter_replaceKey (var_entry_3727, inCompiler COMMA_SOURCE_FILE ("abstract-method.galgas4", 82)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@abstractExtensionMethodAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_abstractExtensionMethodAST::getter_keyRepresentation (Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_abstractExtensionMethodAST temp_0 = this ;
  const GGS_abstractExtensionMethodAST temp_1 = this ;
  result = GGS_string ("abstract extension proc @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("abstract-method.galgas4", 95)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-method.galgas4", 95)).add_operation (temp_1.readProperty_mAbstractExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("abstract-method.galgas4", 95)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@abstractExtensionMethodAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionMethodAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                                const GGS_extensionInitializerForBuildingContext /* constinArgument__5F_inExtensionInitializerMapForBuildingContext */,
                                                                                const GGS_extensionMethodMapForBuildingContext /* constinArgument__5F_inExtensionMethodMapForBuildingContext */,
                                                                                const GGS_extensionGetterMapForBuildingContext /* constinArgument__5F_inExtensionGetterMapForBuildingContext */,
                                                                                const GGS_extensionSetterMapForBuildingContext /* constinArgument__5F_inExtensionSetterMapForBuildingContext */,
                                                                                GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                                GGS_semanticContext & /* ioArgument__5F_ioSemanticContext */,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@abstractExtensionMethodAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionMethodAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & /* ioArgument__5F_ioUsefulnessRootEntities */,
                                                               GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                               const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                               const GGS_semanticContext /* constinArgument__5F_inSemanticContext */,
                                                               GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                               const GGS_predefinedTypes /* constinArgument__5F_inPredefinedTypes */,
                                                               GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_abstractExtensionMethodAST temp_0 = this ;
  GGS_unifiedTypeMapEntry var_selfType_5808 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("abstract-method.galgas4", 121)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = extensionGetter_definition (var_selfType_5808, inCompiler COMMA_SOURCE_FILE ("abstract-method.galgas4", 123)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("abstract-method.galgas4", 123)).operator_not (SOURCE_FILE ("abstract-method.galgas4", 123)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_abstractExtensionMethodAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAbstractExtensionMethodName ().readProperty_location (), GGS_string ("cannot declare a extension proc: '@").add_operation (extensionGetter_definition (var_selfType_5808, inCompiler COMMA_SOURCE_FILE ("abstract-method.galgas4", 124)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("abstract-method.galgas4", 124)).add_operation (GGS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("abstract-method.galgas4", 124)), fixItArray3  COMMA_SOURCE_FILE ("abstract-method.galgas4", 124)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = extensionGetter_definition (var_selfType_5808, inCompiler COMMA_SOURCE_FILE ("abstract-method.galgas4", 125)).readProperty_isConcrete ().boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_abstractExtensionMethodAST temp_5 = this ;
        GenericArray <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mAbstractExtensionMethodName ().readProperty_location (), GGS_string ("cannot declare an abstract extension proc: '@").add_operation (extensionGetter_definition (var_selfType_5808, inCompiler COMMA_SOURCE_FILE ("abstract-method.galgas4", 126)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("abstract-method.galgas4", 126)).add_operation (GGS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("abstract-method.galgas4", 126)), fixItArray6  COMMA_SOURCE_FILE ("abstract-method.galgas4", 126)) ;
      }
    }
  }
  GGS__5B_formalParameterForGeneration_5D_ var_formalParameterListForGeneration_6369 = GGS__5B_formalParameterForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_abstractExtensionMethodAST temp_7 = this ;
  UpEnumerator__5B_formalParameterAST_5D_ enumerator_6471 (temp_7.readProperty_mAbstractExtensionMethodFormalParameterList ()) ;
  while (enumerator_6471.hasCurrentObject ()) {
    var_formalParameterListForGeneration_6369.plusPlusAssignOperation (GGS_formalParameterForGeneration::init_21__21__21__21__21_ (enumerator_6471.current (HERE).readProperty_mFormalSelector (), enumerator_6471.current (HERE).readProperty_mFormalArgumentPassingMode (), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_6471.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("abstract-method.galgas4", 134)), enumerator_6471.current (HERE).readProperty_mFormalArgumentName (), enumerator_6471.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("abstract-method.galgas4", 131)) ;
    enumerator_6471.gotoNextObject () ;
  }
  const GGS_abstractExtensionMethodAST temp_8 = this ;
  const GGS_abstractExtensionMethodAST temp_9 = this ;
  const GGS_abstractExtensionMethodAST temp_10 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_abstractExtensionMethodForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21__21_ (GGS_string ("abstract extension proc ").add_operation (temp_8.readProperty_mAbstractExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("abstract-method.galgas4", 141)), GGS_bool (true), GGS_string ("proc-").add_operation (extensionGetter_definition (var_selfType_5808, inCompiler COMMA_SOURCE_FILE ("abstract-method.galgas4", 143)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("abstract-method.galgas4", 143)), inCompiler COMMA_SOURCE_FILE ("abstract-method.galgas4", 143)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("abstract-method.galgas4", 143)).add_operation (temp_9.readProperty_mAbstractExtensionMethodName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("abstract-method.galgas4", 143)), inCompiler COMMA_SOURCE_FILE ("abstract-method.galgas4", 143)), var_selfType_5808, temp_10.readProperty_mAbstractExtensionMethodName ().readProperty_string (), var_formalParameterListForGeneration_6369, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("abstract-method.galgas4", 140)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@abstractExtensionMethodAST buildExtensionListMaps'
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionMethodAST::method_buildExtensionListMaps (GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioAbstractExtensionSetterListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioExtensionSetterListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingExtensionSetterListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingAbstractExtensionSetterListMap */,
                                                                     GGS_genericExtensionMethodListMap & ioArgument_ioAbstractExtensionMethodListMapAST,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioExtensionMethodListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingExtensionMethodListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingAbstractExtensionMethodListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioAbstractExtensionGetterListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioExtensionGetterListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingExtensionGetterListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingAbstractExtensionGetterListMap */,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_abstractExtensionMethodAST temp_0 = this ;
  const GGS_abstractExtensionMethodAST temp_1 = this ;
  extensionSetter_insertKey (ioArgument_ioAbstractExtensionMethodListMapAST, temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionMethodName (), inCompiler COMMA_SOURCE_FILE ("abstract-method.galgas4", 165)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@abstractExtensionMethodForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionMethodForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                              GGS_string & outArgument_outHeader,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_abstractExtensionMethodForGeneration temp_0 = this ;
  const GGS_abstractExtensionMethodForGeneration temp_1 = this ;
  const GGS_abstractExtensionMethodForGeneration temp_2 = this ;
  outArgument_outHeader = GGS_semanticComponentGenerationTemplate::class_func_abstractExtensionMethodDeclaration (extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("abstract-method.galgas4", 189)).readProperty_typeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionMethodName (), temp_2.readProperty_mAbstractExtensionMethodFormalParameterList (), inCompiler  COMMA_SOURCE_FILE ("abstract-method.galgas4", 188)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@abstractExtensionMethodForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_abstractExtensionMethodForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result ; // Returned variable
  result = GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("abstract-method.galgas4", 198)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@abstractExtensionMethodForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionMethodForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument__5F_inTypeMap */,
                                                                                     GGS_stringset & ioArgument_ioInclusionSet,
                                                                                     GGS_string & outArgument_outImplementation,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_abstractExtensionMethodForGeneration temp_0 = this ;
  const GGS_abstractExtensionMethodForGeneration temp_1 = this ;
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("proc-").add_operation (extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("abstract-method.galgas4", 207)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("abstract-method.galgas4", 207)), inCompiler COMMA_SOURCE_FILE ("abstract-method.galgas4", 206)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("abstract-method.galgas4", 207)).add_operation (temp_1.readProperty_mAbstractExtensionMethodName ().getter_fileNameRepresentation (SOURCE_FILE ("abstract-method.galgas4", 208)), inCompiler COMMA_SOURCE_FILE ("abstract-method.galgas4", 208))  COMMA_SOURCE_FILE ("abstract-method.galgas4", 206)) ;
  const GGS_abstractExtensionMethodForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("abstract-method.galgas4", 209)) ;
  const GGS_abstractExtensionMethodForGeneration temp_3 = this ;
  UpEnumerator__5B_formalParameterForGeneration_5D_ enumerator_10388 (temp_3.readProperty_mAbstractExtensionMethodFormalParameterList ()) ;
  while (enumerator_10388.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_10388.current (HERE).readProperty_mFormalArgumentType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("abstract-method.galgas4", 211)) ;
    enumerator_10388.gotoNextObject () ;
  }
  const GGS_abstractExtensionMethodForGeneration temp_4 = this ;
  const GGS_abstractExtensionMethodForGeneration temp_5 = this ;
  const GGS_abstractExtensionMethodForGeneration temp_6 = this ;
  outArgument_outImplementation = GGS_semanticComponentGenerationTemplate::class_func_abstractExtensionMethodImplementation (temp_4.readProperty_mReceiverType (), temp_5.readProperty_mAbstractExtensionMethodName (), temp_6.readProperty_mAbstractExtensionMethodFormalParameterList (), inCompiler  COMMA_SOURCE_FILE ("abstract-method.galgas4", 213)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@overridingAbstractExtensionMethodAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_overridingAbstractExtensionMethodAST::getter_keyRepresentation (Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_overridingAbstractExtensionMethodAST temp_0 = this ;
  const GGS_overridingAbstractExtensionMethodAST temp_1 = this ;
  result = GGS_string ("overriding extension proc @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 91)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 91)).add_operation (temp_1.readProperty_mOverridingExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 91)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@overridingAbstractExtensionMethodAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionMethodAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & /* ioArgument__5F_ioSemanticTypePrecedenceGraph */,
                                                                                GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                                GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                                                GGS_extensionMethodMapForBuildingContext & ioArgument_ioExtensionMethodMapForBuildingContext,
                                                                                GGS_extensionGetterMapForBuildingContext & /* ioArgument__5F_ioExtensionGetterMapForBuildingContext */,
                                                                                GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                                                GGS__5B_semanticDeclarationAST_5D_ & ioArgument_ioExtensionOverrideDefinitionList,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_overridingAbstractExtensionMethodAST temp_0 = this ;
  ioArgument_ioExtensionOverrideDefinitionList.plusPlusAssignOperation (temp_0  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 106)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_overridingAbstractExtensionMethodAST temp_2 = this ;
    test_1 = ioArgument_ioExtensionMethodMapForBuildingContext.getter_contains (temp_2.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 108)).operator_not (SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 108)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      {
      const GGS_overridingAbstractExtensionMethodAST temp_3 = this ;
      ioArgument_ioExtensionMethodMapForBuildingContext.setter_insertKey (temp_3.readProperty_mTypeName (), GGS_extensionMethodMapForType::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 109)) ;
      }
    }
  }
  const GGS_overridingAbstractExtensionMethodAST temp_4 = this ;
  GGS_extensionMethodMapForBuildingContext_2E_element var_entry_5042 = ioArgument_ioExtensionMethodMapForBuildingContext.readSubcript__3F_searchKey (temp_4.readProperty_mTypeName (), inCompiler COMMA_HERE) ;
  {
  const GGS_overridingAbstractExtensionMethodAST temp_5 = this ;
  const GGS_overridingAbstractExtensionMethodAST temp_6 = this ;
  var_entry_5042.mProperty_mExtensionMethodMapForType.setter_insertKey (temp_5.readProperty_mOverridingExtensionMethodName (), temp_6.readProperty_mOverridingExtensionMethodFormalParameterList (), GGS_methodQualifier::class_func_isVirtualOverridingAbstract (SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 118)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 115)) ;
  }
  {
  ioArgument_ioExtensionMethodMapForBuildingContext.setter_replaceKey (var_entry_5042, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 120)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@overridingAbstractExtensionMethodAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionMethodAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                                          const GGS_extensionInitializerForBuildingContext /* constinArgument__5F_inExtensionInitializerMapForBuildingContext */,
                                                                                          const GGS_extensionMethodMapForBuildingContext /* constinArgument__5F_inExtensionMethodMapForBuildingContext */,
                                                                                          const GGS_extensionGetterMapForBuildingContext /* constinArgument__5F_inExtensionGetterMapForBuildingContext */,
                                                                                          const GGS_extensionSetterMapForBuildingContext /* constinArgument__5F_inExtensionSetterMapForBuildingContext */,
                                                                                          GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                                          GGS_semanticContext & /* ioArgument__5F_ioSemanticContext */,
                                                                                          Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@overridingAbstractExtensionMethodAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionMethodAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & /* ioArgument__5F_ioUsefulnessRootEntities */,
                                                                         GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                         const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                                         const GGS_semanticContext constinArgument_inSemanticContext,
                                                                         GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         const GGS_predefinedTypes /* constinArgument__5F_inPredefinedTypes */,
                                                                         GGS__5B_semanticDeclarationForGeneration_5D_ & /* ioArgument__5F_ioSemanticDeclarationListForGeneration */,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_overridingAbstractExtensionMethodAST temp_0 = this ;
  GGS_unifiedTypeMapEntry var_selfType_6859 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 150)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = extensionGetter_definition (var_selfType_6859, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 152)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 152)).operator_not (SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 152)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_overridingAbstractExtensionMethodAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOverridingExtensionMethodName ().readProperty_location (), GGS_string ("cannot declare a extension proc: '@").add_operation (extensionGetter_definition (var_selfType_6859, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 153)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 153)).add_operation (GGS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 153)), fixItArray3  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 153)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = extensionGetter_definition (var_selfType_6859, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 154)).readProperty_isConcrete ().boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_overridingAbstractExtensionMethodAST temp_5 = this ;
        GenericArray <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mOverridingExtensionMethodName ().readProperty_location (), GGS_string ("cannot declare an abstract extension proc: '@").add_operation (extensionGetter_definition (var_selfType_6859, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 155)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 155)).add_operation (GGS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 155)), fixItArray6  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 155)) ;
      }
    }
  }
  GGS_string var_baseTypeName_7408 = GGS_string::makeEmptyString () ;
  GGS_unifiedTypeMapEntry var_superType_7453 = extensionGetter_definition (var_selfType_6859, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 159)).readProperty_superType () ;
  GGS__5B_formalParameterSignatureElement_5D_ var_inheritedSignature_7501 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  GGS_location var_inheritedDeclarationLocation_7576 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 161)) ;
  if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 162)).add_operation (GGS_u_33__32_ (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 162)).isValid ()) {
    uint32_t variant_7624 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 162)).add_operation (GGS_u_33__32_ (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 162)).uintValue () ;
    bool loop_7624 = true ;
    while (loop_7624) {
      loop_7624 = var_superType_7453.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 163)).operator_not (SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 163)).operator_and (GGS_bool (ComparisonKind::equal, var_baseTypeName_7408.objectCompare (GGS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 163)).isValid () ;
      if (loop_7624) {
        loop_7624 = var_superType_7453.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 163)).operator_not (SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 163)).operator_and (GGS_bool (ComparisonKind::equal, var_baseTypeName_7408.objectCompare (GGS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 163)).boolValue () ;
      }
      if (loop_7624 && (0 == variant_7624)) {
        loop_7624 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 162)) ;
      }
      if (loop_7624) {
        variant_7624 -= 1 ;
        GalgasBool test_7 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_7) {
          const GGS_overridingAbstractExtensionMethodAST temp_8 = this ;
          test_7 = extensionGetter_definition (var_superType_7453, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 164)).readProperty_instanceMethodMap ().getter_contains (temp_8.readProperty_mOverridingExtensionMethodName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 164)).boolEnum () ;
          if (GalgasBool::boolTrue == test_7) {
            GGS_methodQualifier var_qualifier_8020 ;
            const GGS_overridingAbstractExtensionMethodAST temp_9 = this ;
            GGS_methodKind joker_7923 ; // Joker input parameter
            GGS_bool joker_8003 ; // Joker input parameter
            GGS_string joker_8039 ; // Joker input parameter
            extensionGetter_definition (var_superType_7453, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 165)).readProperty_instanceMethodMap ().method_searchKey (temp_9.readProperty_mOverridingExtensionMethodName (), joker_7923, var_inheritedSignature_7501, var_inheritedDeclarationLocation_7576, joker_8003, var_qualifier_8020, joker_8039, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 165)) ;
            GalgasBool test_10 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_10) {
              test_10 = GGS_bool (ComparisonKind::lowerOrEqual, var_qualifier_8020.objectCompare (GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 174)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_10) {
                var_baseTypeName_7408 = extensionGetter_definition (var_superType_7453, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 175)).readProperty_typeName ().readProperty_string () ;
              }
            }
          }
        }
        var_superType_7453 = extensionGetter_definition (var_superType_7453, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 178)).readProperty_superType () ;
      }
    }
  }
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    test_11 = GGS_bool (ComparisonKind::equal, var_baseTypeName_7408.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      const GGS_overridingAbstractExtensionMethodAST temp_12 = this ;
      GenericArray <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mOverridingExtensionMethodName ().readProperty_location (), GGS_string ("this func is not declared by a super class"), fixItArray13  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 181)) ;
    }
  }
  GGS_localVarManager var_variableMap_8405 = GGS_localVarManager::init_21_ (constinArgument_inSemanticContext.readProperty_mGlobalConstantMap (), inCompiler COMMA_HERE) ;
  GGS__5B_formalParameterForGeneration_5D_ var_formalParameterListForGeneration_8637 ;
  {
  const GGS_overridingAbstractExtensionMethodAST temp_14 = this ;
  routine_buildLocalVariableMapAndSignature_3F__26__3F__26__21_ (constinArgument_inSemanticContext, ioArgument_ioTypeMap, temp_14.readProperty_mOverridingExtensionMethodFormalParameterList (), var_variableMap_8405, var_formalParameterListForGeneration_8637, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 185)) ;
  }
  GalgasBool test_15 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_15) {
    test_15 = GGS_bool (ComparisonKind::notEqual, var_baseTypeName_7408.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_15) {
      {
      const GGS_overridingAbstractExtensionMethodAST temp_16 = this ;
      routine_checkMethodSignatures_3F__3F__3F__3F_ (var_formalParameterListForGeneration_8637, temp_16.readProperty_mOverridingExtensionMethodName ().readProperty_location (), var_inheritedSignature_7501, var_inheritedDeclarationLocation_7576, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 194)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@overridingAbstractExtensionMethodAST buildExtensionListMaps'
//--------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionMethodAST::method_buildExtensionListMaps (GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioAbstractExtensionSetterListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioExtensionSetterListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingExtensionSetterListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingAbstractExtensionSetterListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioAbstractExtensionMethodListMapAST */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioExtensionMethodListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingExtensionMethodListMap */,
                                                                               GGS_genericExtensionMethodListMap & ioArgument_ioOverridingAbstractExtensionMethodListMap,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioAbstractExtensionGetterListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioExtensionGetterListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingExtensionGetterListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingAbstractExtensionGetterListMap */,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_overridingAbstractExtensionMethodAST temp_0 = this ;
  const GGS_overridingAbstractExtensionMethodAST temp_1 = this ;
  extensionSetter_insertKey (ioArgument_ioOverridingAbstractExtensionMethodListMap, temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionMethodName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 220)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@extensionSetterAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_extensionSetterAST::getter_keyRepresentation (Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_extensionSetterAST temp_0 = this ;
  const GGS_extensionSetterAST temp_1 = this ;
  result = GGS_string ("extension mutating proc @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 96)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 96)).add_operation (temp_1.readProperty_mExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 96)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@extensionSetterAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_extensionSetterAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                              GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                              GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                              GGS_extensionMethodMapForBuildingContext & /* ioArgument__5F_ioExtensionMethodMapForBuildingContext */,
                                                              GGS_extensionGetterMapForBuildingContext & /* ioArgument__5F_ioExtensionGetterMapForBuildingContext */,
                                                              GGS_extensionSetterMapForBuildingContext & ioArgument_ioExtensionSetterMapForBuildingContext,
                                                              GGS__5B_semanticDeclarationAST_5D_ & /* ioArgument__5F_ioExtensionOverrideDefinitionList */,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_extensionSetterAST temp_0 = this ;
  const GGS_extensionSetterAST temp_1 = this ;
  const GGS_extensionSetterAST temp_2 = this ;
  GGS_lstring var_key_5038 = GGS_lstring::init_21__21_ (GGS_string ("extension mutating proc @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 112)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 112)).add_operation (temp_1.readProperty_mExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 112)), temp_2.readProperty_mExtensionSetterName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_extensionSetterAST temp_3 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_5038, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 115)) ;
  }
  {
  const GGS_extensionSetterAST temp_4 = this ;
  const GGS_extensionSetterAST temp_5 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_5038, GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 116)), temp_5.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("extension-setter.galgas4", 116)) ;
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    const GGS_extensionSetterAST temp_7 = this ;
    test_6 = ioArgument_ioExtensionSetterMapForBuildingContext.getter_contains (temp_7.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-setter.galgas4", 118)).operator_not (SOURCE_FILE ("extension-setter.galgas4", 118)).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      {
      const GGS_extensionSetterAST temp_8 = this ;
      ioArgument_ioExtensionSetterMapForBuildingContext.setter_insertKey (temp_8.readProperty_mTypeName (), GGS_extensionSetterMapForType::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 119)) ;
      }
    }
  }
  const GGS_extensionSetterAST temp_9 = this ;
  GGS_extensionSetterMapForBuildingContext_2E_element var_entry_5544 = ioArgument_ioExtensionSetterMapForBuildingContext.readSubcript__3F_searchKey (temp_9.readProperty_mTypeName (), inCompiler COMMA_HERE) ;
  {
  const GGS_extensionSetterAST temp_10 = this ;
  const GGS_extensionSetterAST temp_11 = this ;
  var_entry_5544.mProperty_mExtensionSetterMapForType.setter_insertKey (temp_10.readProperty_mExtensionSetterName (), temp_11.readProperty_mExtensionSetterFormalParameterList (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 125)) ;
  }
  {
  ioArgument_ioExtensionSetterMapForBuildingContext.setter_replaceKey (var_entry_5544, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 129)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@extensionSetterAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_extensionSetterAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                        const GGS_extensionInitializerForBuildingContext /* constinArgument__5F_inExtensionInitializerMapForBuildingContext */,
                                                                        const GGS_extensionMethodMapForBuildingContext /* constinArgument__5F_inExtensionMethodMapForBuildingContext */,
                                                                        const GGS_extensionGetterMapForBuildingContext /* constinArgument__5F_inExtensionGetterMapForBuildingContext */,
                                                                        const GGS_extensionSetterMapForBuildingContext /* constinArgument__5F_inExtensionSetterMapForBuildingContext */,
                                                                        GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                        GGS_semanticContext & /* ioArgument__5F_ioSemanticContext */,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@extensionSetterAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_extensionSetterAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & /* ioArgument__5F_ioUsefulnessRootEntities */,
                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                       const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                       const GGS_semanticContext constinArgument_inSemanticContext,
                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                       const GGS_predefinedTypes constinArgument_inPredefinedTypes,
                                                       GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_extensionSetterAST temp_0 = this ;
  const GGS_extensionSetterAST temp_1 = this ;
  GGS_lstring var_nameForUsefulness_7493 = function_setterNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionSetterName (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 165)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_7493, var_nameForUsefulness_7493, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 166)) ;
  }
  const GGS_extensionSetterAST temp_2 = this ;
  GGS_lstring var_typeNameForUsefulness_7669 = function_typeNameForUsefulEntitiesGraph (temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 167)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_7669, var_nameForUsefulness_7493 COMMA_SOURCE_FILE ("extension-setter.galgas4", 168)) ;
  }
  const GGS_extensionSetterAST temp_3 = this ;
  GGS_unifiedTypeMapEntry var_selfType_7873 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_3.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 170)) ;
  GGS_string var_selfObjectName_7945 ;
  GGS_string var_selfObjectAccessor_7974 ;
  var_selfObjectName_7945 = GGS_string ("ioObject") ;
  var_selfObjectAccessor_7974 = GGS_string ("ioObject.") ;
  GGS_analysisContext var_analysisContext_8343 = GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfObjectName_7945, GGS_selfAvailability::class_func_available (var_selfType_7873, GGS_selfMutability::class_func_selfAndPropertiesAreMutable (SOURCE_FILE ("extension-setter.galgas4", 188))  COMMA_SOURCE_FILE ("extension-setter.galgas4", 188)), var_selfObjectAccessor_7974, inCompiler COMMA_HERE) ;
  GGS__5B_semanticInstructionForGeneration_5D_ var_semanticInstructionListForGeneration_8887 ;
  GGS__5B_formalParameterForGeneration_5D_ var_formalParameterListForGeneration_8934 ;
  {
  const GGS_extensionSetterAST temp_4 = this ;
  const GGS_extensionSetterAST temp_5 = this ;
  const GGS_extensionSetterAST temp_6 = this ;
  routine_analyzeRoutineBody_3F__26__3F__26__3F__3F__3F__21__21_ (var_nameForUsefulness_7493, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_8343, ioArgument_ioTypeMap, temp_4.readProperty_mExtensionSetterFormalParameterList (), temp_5.readProperty_mExtensionSetterInstructionList (), temp_6.readProperty_mEndOfSetterDeclarationLocation (), var_semanticInstructionListForGeneration_8887, var_formalParameterListForGeneration_8934, inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas4", 191)) ;
  }
  const GGS_extensionSetterAST temp_7 = this ;
  const GGS_extensionSetterAST temp_8 = this ;
  const GGS_extensionSetterAST temp_9 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_extensionSetterForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (GGS_string ("extension mutating proc ").add_operation (temp_7.readProperty_mExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 204)), GGS_bool (true), GGS_string ("mutating proc-").add_operation (extensionGetter_definition (var_selfType_7873, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 206)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-setter.galgas4", 206)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 206)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 206)).add_operation (temp_8.readProperty_mExtensionSetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-setter.galgas4", 206)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 206)), var_selfType_7873, temp_9.readProperty_mExtensionSetterName ().readProperty_string (), var_formalParameterListForGeneration_8934, extensionGetter_definition (var_selfType_7873, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 210)).readProperty_allTypedPropertyList (), var_semanticInstructionListForGeneration_8887, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-setter.galgas4", 203)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@extensionSetterAST buildExtensionListMaps'
//--------------------------------------------------------------------------------------------------

void cPtr_extensionSetterAST::method_buildExtensionListMaps (GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioAbstractExtensionSetterListMap */,
                                                             GGS_genericExtensionMethodListMap & ioArgument_ioExtensionSetterListMap,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingExtensionSetterListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingAbstractExtensionSetterListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioAbstractExtensionMethodListMapAST */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioExtensionMethodListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingExtensionMethodListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingAbstractExtensionMethodListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioAbstractExtensionGetterListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioExtensionGetterListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingExtensionGetterListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingAbstractExtensionGetterListMap */,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_extensionSetterAST temp_0 = this ;
  const GGS_extensionSetterAST temp_1 = this ;
  extensionSetter_insertKey (ioArgument_ioExtensionSetterListMap, temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionSetterName (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 232)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@extensionSetterForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_extensionSetterForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result ; // Returned variable
  result = GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("extension-setter.galgas4", 250)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@extensionSetterForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_extensionSetterForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                      GGS_string & outArgument_outHeader,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_extensionSetterForGeneration temp_0 = this ;
  const GGS_extensionSetterForGeneration temp_1 = this ;
  const GGS_extensionSetterForGeneration temp_2 = this ;
  outArgument_outHeader = GGS_semanticComponentGenerationTemplate::class_func_extensionSetterAsFunctionDeclaration (extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 258)).readProperty_typeName ().readProperty_string (), temp_1.readProperty_mExtensionSetterName (), temp_2.readProperty_mExtensionSetterFormalParameterList (), inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas4", 257)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@extensionSetterForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_extensionSetterForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument__5F_inTypeMap */,
                                                                             GGS_stringset & ioArgument_ioInclusionSet,
                                                                             GGS_string & outArgument_outImplementation,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_extensionSetterForGeneration temp_0 = this ;
  UpEnumerator__5B_formalParameterForGeneration_5D_ enumerator_12510 (temp_0.readProperty_mExtensionSetterFormalParameterList ()) ;
  while (enumerator_12510.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_12510.current (HERE).readProperty_mFormalArgumentType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 271)) ;
    enumerator_12510.gotoNextObject () ;
  }
  const GGS_extensionSetterForGeneration temp_1 = this ;
  GGS__5B_formalParameterForGeneration_5D_ var_extensionSetterFormalParameterList_12628 = temp_1.readProperty_mExtensionSetterFormalParameterList () ;
  {
  const GGS_extensionSetterForGeneration temp_2 = this ;
  var_extensionSetterFormalParameterList_12628.setter_insert (GGS_formalParameterForGeneration::init_21__21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("extension-setter.galgas4", 275)), GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("extension-setter.galgas4", 275)), temp_2.readProperty_mReceiverType (), GGS_string ("self").getter_here (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 275)), GGS_string ("ioObject"), inCompiler COMMA_HERE), GGS_u_33__32_ (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 274)) ;
  }
  const GGS_extensionSetterForGeneration temp_3 = this ;
  const GGS_extensionSetterForGeneration temp_4 = this ;
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("mutating proc-").add_operation (extensionGetter_definition (temp_3.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 278)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-setter.galgas4", 278)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 278)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 278)).add_operation (temp_4.readProperty_mExtensionSetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-setter.galgas4", 278)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 278))  COMMA_SOURCE_FILE ("extension-setter.galgas4", 278)) ;
  GGS_string var_code_13466 ;
  {
  const GGS_extensionSetterForGeneration temp_5 = this ;
  const GGS_extensionSetterForGeneration temp_6 = this ;
  routine_generateProcedure_3F_static_3F__26__3F__3F__3F__3F__3F__3F__3F__21_ (GGS_bool (false), GGS_string ("extensionSetter_").add_operation (temp_5.readProperty_mExtensionSetterName ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.galgas4", 281)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 281)), ioArgument_ioInclusionSet, var_extensionSetterFormalParameterList_12628, temp_6.readProperty_mSemanticInstructionListForGeneration (), GGS_bool (false), GGS_string ("Compiler"), GGS_bool (true), GGS_bool (false), GGS_bool (false), var_code_13466, inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas4", 279)) ;
  }
  const GGS_extensionSetterForGeneration temp_7 = this ;
  const GGS_extensionSetterForGeneration temp_8 = this ;
  outArgument_outImplementation = GGS_semanticComponentGenerationTemplate::class_func_extensionMethodAsFunctionImplementation (extensionGetter_definition (temp_7.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 293)).readProperty_typeName ().readProperty_string (), temp_8.readProperty_mExtensionSetterName (), var_code_13466, inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas4", 292)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@initializerAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_initializerAST::getter_keyRepresentation (Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_initializerAST temp_0 = this ;
  const GGS_initializerAST temp_1 = this ;
  result = function_initializerNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName (), extensionGetter_initializerSignature (temp_1.readProperty_mFormalParameterList (), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 61)), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 59)).readProperty_string () ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@initializerAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_initializerAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                          GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                          GGS_extensionInitializerForBuildingContext & ioArgument_ioExtensionInitializerForBuildingContext,
                                                          GGS_extensionMethodMapForBuildingContext & /* ioArgument__5F_ioExtensionMethodMapForBuildingContext */,
                                                          GGS_extensionGetterMapForBuildingContext & /* ioArgument__5F_ioExtensionGetterMapForBuildingContext */,
                                                          GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                          GGS__5B_semanticDeclarationAST_5D_ & /* ioArgument__5F_ioExtensionOverrideDefinitionList */,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_initializerAST temp_0 = this ;
  const GGS_initializerAST temp_1 = this ;
  GGS_lstring var_key_3549 = GGS_lstring::init_21__21_ (callExtensionGetter_keyRepresentation ((const cPtr_initializerAST *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 75)), temp_1.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_initializerAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3549, temp_2, inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 76)) ;
  }
  {
  const GGS_initializerAST temp_3 = this ;
  const GGS_initializerAST temp_4 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_3549, GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_3.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 77)), temp_4.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("initializer.galgas4", 77)) ;
  }
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    const GGS_initializerAST temp_6 = this ;
    test_5 = ioArgument_ioExtensionInitializerForBuildingContext.getter_contains (temp_6.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("initializer.galgas4", 79)).operator_not (SOURCE_FILE ("initializer.galgas4", 79)).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      {
      const GGS_initializerAST temp_7 = this ;
      ioArgument_ioExtensionInitializerForBuildingContext.setter_insertKey (temp_7.readProperty_mTypeName (), GGS_extensionInitializerMapForType::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 80)) ;
      }
    }
  }
  const GGS_initializerAST temp_8 = this ;
  GGS_extensionInitializerForBuildingContext_2E_element var_entry_3991 = ioArgument_ioExtensionInitializerForBuildingContext.readSubcript__3F_searchKey (temp_8.readProperty_mTypeName (), inCompiler COMMA_HERE) ;
  {
  const GGS_initializerAST temp_9 = this ;
  const GGS_initializerAST temp_10 = this ;
  const GGS_initializerAST temp_11 = this ;
  var_entry_3991.mProperty_mExtensionInitializerMapForType.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (temp_9.readProperty_mFormalParameterList (), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 87)), temp_10.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE), temp_11.readProperty_mFormalParameterList (), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 86)) ;
  }
  {
  ioArgument_ioExtensionInitializerForBuildingContext.setter_replaceKey (var_entry_3991, inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 90)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@initializerAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_initializerAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                    const GGS_extensionInitializerForBuildingContext /* constinArgument__5F_inExtensionInitializerMapForBuildingContext */,
                                                                    const GGS_extensionMethodMapForBuildingContext /* constinArgument__5F_inExtensionMethodMapForBuildingContext */,
                                                                    const GGS_extensionGetterMapForBuildingContext /* constinArgument__5F_inExtensionGetterMapForBuildingContext */,
                                                                    const GGS_extensionSetterMapForBuildingContext /* constinArgument__5F_inExtensionSetterMapForBuildingContext */,
                                                                    GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                    GGS_semanticContext & /* ioArgument__5F_ioSemanticContext */,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@initializerAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_initializerAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & /* ioArgument__5F_ioUsefulnessRootEntities */,
                                                   GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                   const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                   const GGS_semanticContext constinArgument_inSemanticContext,
                                                   GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                   const GGS_predefinedTypes constinArgument_inPredefinedTypes,
                                                   GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_initializerAST temp_0 = this ;
  const GGS_initializerAST temp_1 = this ;
  GGS_lstring var_nameForUsefulness_5573 = function_initializerNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName (), extensionGetter_initializerSignature (temp_1.readProperty_mFormalParameterList (), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 118)), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 116)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_5573, var_nameForUsefulness_5573, inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 120)) ;
  }
  const GGS_initializerAST temp_2 = this ;
  GGS_unifiedTypeMapEntry var_selfType_5836 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 122)) ;
  GGS_string var_selfObjectNameString_5910 ;
  GGS_string var_selfObjectAccessorString_5947 ;
  GGS_bool var_isClass_6015 = GGS_bool (ComparisonKind::equal, extensionGetter_definition (var_selfType_5836, inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 126)).readProperty_typeKind ().objectCompare (GGS_typeKindEnum::class_func_classType (SOURCE_FILE ("initializer.galgas4", 126)))) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = var_isClass_6015.boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      var_selfObjectNameString_5910 = GGS_string ("this") ;
      var_selfObjectAccessorString_5947 = GGS_string::makeEmptyString () ;
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    var_selfObjectNameString_5910 = GGS_string ("result") ;
    var_selfObjectAccessorString_5947 = GGS_string ("result.") ;
  }
  GGS_analysisContext var_analysisContextNew_6299 = GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfObjectNameString_5910, GGS_selfAvailability::class_func_available (var_selfType_5836, GGS_selfMutability::class_func_initializer (SOURCE_FILE ("initializer.galgas4", 139))  COMMA_SOURCE_FILE ("initializer.galgas4", 139)), var_selfObjectAccessorString_5947, inCompiler COMMA_HERE) ;
  GGS__5B_semanticInstructionForGeneration_5D_ var_semanticInstructionListForGeneration_6843 ;
  GGS__5B_formalInputParameterForGeneration_5D_ var_formalParameterListForGeneration_6892 ;
  {
  const GGS_initializerAST temp_4 = this ;
  const GGS_initializerAST temp_5 = this ;
  const GGS_initializerAST temp_6 = this ;
  routine_analyzeInitializerBody_3F__26__3F__26__3F__3F__3F__21__21_ (var_nameForUsefulness_5573, ioArgument_ioUsefulEntitiesGraph, var_analysisContextNew_6299, ioArgument_ioTypeMap, temp_4.readProperty_mFormalParameterList (), temp_5.readProperty_mInstructionList (), temp_6.readProperty_mEndOfInitializerLocation (), var_semanticInstructionListForGeneration_6843, var_formalParameterListForGeneration_6892, inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 142)) ;
  }
  const GGS_initializerAST temp_7 = this ;
  GGS_string var_initializerName_6947 = extensionGetter_initializerSignature (temp_7.readProperty_mFormalParameterList (), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 154)) ;
  const GGS_initializerAST temp_8 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_extensionInitializerForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (GGS_string ("initializer @").add_operation (temp_8.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 156)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 156)).add_operation (var_initializerName_6947, inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 156)), GGS_bool (false), GGS_string ("initializer-").add_operation (extensionGetter_definition (var_selfType_5836, inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 158)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("initializer.galgas4", 158)), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 158)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 158)).add_operation (var_initializerName_6947.getter_fileNameRepresentation (SOURCE_FILE ("initializer.galgas4", 158)), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 158)), var_selfType_5836, var_initializerName_6947, var_formalParameterListForGeneration_6892, extensionGetter_definition (var_selfType_5836, inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 162)).readProperty_allTypedPropertyList (), var_semanticInstructionListForGeneration_6843, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("initializer.galgas4", 155)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeInitializerBody?&?&???!!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeInitializerBody_3F__26__3F__26__3F__3F__3F__21__21_ (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                         GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                         const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                         GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         const GGS__5B_formalInputParameterAST_5D_ constinArgument_inFormalArgumentListAST,
                                                                         const GGS__5B_semanticInstructionAST_5D_ constinArgument_inInstructionList,
                                                                         const GGS_location constinArgument_inEndOfMethodLocation,
                                                                         GGS__5B_semanticInstructionForGeneration_5D_ & outArgument_outSemanticInstructionListForGeneration,
                                                                         GGS__5B_formalInputParameterForGeneration_5D_ & outArgument_outSignatureForGeneration,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSemanticInstructionListForGeneration.drop () ; // Release 'out' argument
  outArgument_outSignatureForGeneration.drop () ; // Release 'out' argument
  GGS_localVarManager var_variableMap_8430 = GGS_localVarManager::init_21_ (constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mGlobalConstantMap (), inCompiler COMMA_HERE) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_selfAvailability_2E_available var_selfAvailable_8586 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("initializer.galgas4", 184)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("initializer.galgas4", 184)).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      UpEnumerator__5B_typedProperty_5D_ enumerator_8705 (extensionGetter_definition (var_selfAvailable_8586.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 185)).readProperty_allTypedPropertyList ()) ;
      while (enumerator_8705.hasCurrentObject ()) {
        GGS_bool temp_1 ;
        const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, var_selfAvailable_8586.readProperty_selfMutability ().objectCompare (GGS_selfMutability::class_func_initializer (SOURCE_FILE ("initializer.galgas4", 186)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          temp_1 = GGS_bool (ComparisonKind::notEqual, enumerator_8705.current (HERE).readProperty_initialization ().objectCompare (GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("initializer.galgas4", 187)))) ;
        }else if (GalgasBool::boolFalse == test_2) {
          temp_1 = GGS_bool (true) ;
        }
        GGS_bool var_initialized_8739 = temp_1 ;
        {
        extensionSetter_insertInitializerSelfProperty (var_variableMap_8430, enumerator_8705.current (HERE).readProperty_name ().readProperty_string (), constinArgument_inEndOfMethodLocation, enumerator_8705.current (HERE).readProperty_typeEntry (), GGS_string ("<< unused >>"), GGS_string ("self.").add_operation (enumerator_8705.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 195)), var_initialized_8739, inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 190)) ;
        }
        enumerator_8705.gotoNextObject () ;
      }
    }
  }
  outArgument_outSignatureForGeneration = GGS__5B_formalInputParameterForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_formalInputParameterAST_5D_ enumerator_9247 (constinArgument_inFormalArgumentListAST) ;
  while (enumerator_9247.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_parameterType_9282 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_9247.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 203)) ;
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = enumerator_9247.current (HERE).readProperty_mIsConstant ().boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GGS_string var_cppName_9416 = GGS_string ("constinArgument_").add_operation (enumerator_9247.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("initializer.galgas4", 205)), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 205)) ;
        outArgument_outSignatureForGeneration.plusPlusAssignOperation (GGS_formalInputParameterForGeneration::init_21__21__21__21__21_ (enumerator_9247.current (HERE).readProperty_mFormalSelector (), var_parameterType_9282, var_cppName_9416, enumerator_9247.current (HERE).readProperty_mFormalArgumentName (), enumerator_9247.current (HERE).readProperty_mIsConstant (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("initializer.galgas4", 206)) ;
        GalgasBool test_4 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_4) {
          test_4 = enumerator_9247.current (HERE).readProperty_mIsUnused ().boolEnum () ;
          if (GalgasBool::boolTrue == test_4) {
            {
            extensionSetter_insertConstantInputFormalArgumentDeclaredAsUnused (var_variableMap_8430, enumerator_9247.current (HERE).readProperty_mFormalArgumentName (), var_parameterType_9282, var_cppName_9416, var_cppName_9416, inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 213)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_4) {
          {
          extensionSetter_insertConstantInputFormalArgument (var_variableMap_8430, enumerator_9247.current (HERE).readProperty_mFormalArgumentName (), var_parameterType_9282, var_cppName_9416, var_cppName_9416, inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 215)) ;
          }
        }
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      GGS_string var_cppName_10033 = GGS_string ("inArgument_").add_operation (enumerator_9247.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("initializer.galgas4", 218)), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 218)) ;
      outArgument_outSignatureForGeneration.plusPlusAssignOperation (GGS_formalInputParameterForGeneration::init_21__21__21__21__21_ (enumerator_9247.current (HERE).readProperty_mFormalSelector (), var_parameterType_9282, var_cppName_10033, enumerator_9247.current (HERE).readProperty_mFormalArgumentName (), enumerator_9247.current (HERE).readProperty_mIsConstant (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("initializer.galgas4", 219)) ;
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = enumerator_9247.current (HERE).readProperty_mIsUnused ().boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          {
          extensionSetter_insertInputFormalArgumentDeclaredAsUnused (var_variableMap_8430, enumerator_9247.current (HERE).readProperty_mFormalArgumentName (), var_parameterType_9282, var_cppName_10033, var_cppName_10033, inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 226)) ;
          }
        }
      }
      if (GalgasBool::boolFalse == test_5) {
        {
        extensionSetter_insertInputFormalArgument (var_variableMap_8430, enumerator_9247.current (HERE).readProperty_mFormalArgumentName (), var_parameterType_9282, var_cppName_10033, var_cppName_10033, inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 228)) ;
        }
      }
    }
    enumerator_9247.gotoNextObject () ;
  }
  outArgument_outSemanticInstructionListForGeneration = GGS__5B_semanticInstructionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_semanticInstructionAST_5D_ enumerator_10752 (constinArgument_inInstructionList) ;
  while (enumerator_10752.hasCurrentObject ()) {
    callExtensionMethod_analyzeSemanticInstruction ((cPtr_semanticInstructionAST *) enumerator_10752.current (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, outArgument_outSemanticInstructionListForGeneration, var_variableMap_8430, inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 235)) ;
    enumerator_10752.gotoNextObject () ;
  }
  extensionMethod_checkAutomatonStates (var_variableMap_8430, constinArgument_inEndOfMethodLocation, inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 245)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@extensionInitializerForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_extensionInitializerForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result ; // Returned variable
  result = GGS_headerKind::class_func_noHeader (SOURCE_FILE ("initializer.galgas4", 262)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@extensionInitializerForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_extensionInitializerForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument__5F_inTypeMap */,
                                                                                  GGS_stringset & ioArgument_ioInclusionSet,
                                                                                  GGS_string & outArgument_outImplementation,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_extensionInitializerForGeneration temp_0 = this ;
  UpEnumerator__5B_formalInputParameterForGeneration_5D_ enumerator_12233 (temp_0.readProperty_formalParameterList ()) ;
  while (enumerator_12233.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_12233.current (HERE).readProperty_mFormalArgumentType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 271)) ;
    enumerator_12233.gotoNextObject () ;
  }
  GGS_string var_methodImplementation_12541 ;
  {
  const GGS_extensionInitializerForGeneration temp_1 = this ;
  const GGS_extensionInitializerForGeneration temp_2 = this ;
  const GGS_extensionInitializerForGeneration temp_3 = this ;
  const GGS_extensionInitializerForGeneration temp_4 = this ;
  routine_generateInitializer_3F__3F__26__3F__3F__21_ (temp_1.readProperty_mReceiverType (), temp_2.readProperty_initializerName (), ioArgument_ioInclusionSet, temp_3.readProperty_formalParameterList (), temp_4.readProperty_semanticInstructionListForGeneration (), var_methodImplementation_12541, inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 273)) ;
  }
  const GGS_extensionInitializerForGeneration temp_5 = this ;
  const GGS_extensionInitializerForGeneration temp_6 = this ;
  const GGS_extensionInitializerForGeneration temp_7 = this ;
  outArgument_outImplementation = GGS_semanticComponentGenerationTemplate::class_func_initializerImplementation (extensionGetter_definition (temp_5.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 282)).readProperty_typeName ().readProperty_string (), temp_6.readProperty_initializerName (), temp_7.readProperty_formalParameterList (), var_methodImplementation_12541, inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 281)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateInitializer??&??!'
//
//--------------------------------------------------------------------------------------------------

void routine_generateInitializer_3F__3F__26__3F__3F__21_ (const GGS_unifiedTypeMapEntry constinArgument_inReceiverType,
                                                          const GGS_string constinArgument_inInitializerName,
                                                          GGS_stringset & ioArgument_ioInclusionSet,
                                                          const GGS__5B_formalInputParameterForGeneration_5D_ constinArgument_inFormalArgumentList,
                                                          const GGS__5B_semanticInstructionForGeneration_5D_ constinArgument_inInstructionList,
                                                          GGS_string & outArgument_outGeneratedCode,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGeneratedCode.drop () ; // Release 'out' argument
  GGS_string var_className_13563 = extensionGetter_definition (constinArgument_inReceiverType, inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 303)).readProperty_typeName ().readProperty_string () ;
  GGS_stringset var_unusedVariableCppNameSet_13666 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  var_unusedVariableCppNameSet_13666.plusPlusAssignOperation (function_gCompilerCppName (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("initializer.galgas4", 306)) ;
  UpEnumerator__5B_formalInputParameterForGeneration_5D_ enumerator_13764 (constinArgument_inFormalArgumentList) ;
  while (enumerator_13764.hasCurrentObject ()) {
    var_unusedVariableCppNameSet_13666.plusPlusAssignOperation (enumerator_13764.current (HERE).readProperty_mFormalArgumentCppName ()  COMMA_SOURCE_FILE ("initializer.galgas4", 308)) ;
    enumerator_13764.gotoNextObject () ;
  }
  GGS_u_33__32_ var_temporaryVariableIndex_13891 = GGS_u_33__32_ (uint32_t (0U)) ;
  GGS_string var_routineBody_13932 = GGS_string::makeEmptyString () ;
  {
  var_routineBody_13932.setter_incIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 313)) ;
  }
  UpEnumerator__5B_semanticInstructionForGeneration_5D_ enumerator_13999 (constinArgument_inInstructionList) ;
  while (enumerator_13999.hasCurrentObject ()) {
    callExtensionMethod_generateInstruction ((cPtr_semanticInstructionForGeneration *) enumerator_13999.current (HERE).ptr (), ioArgument_ioInclusionSet, var_temporaryVariableIndex_13891, var_unusedVariableCppNameSet_13666, GGS_bool (false), var_routineBody_13932, inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 315)) ;
    enumerator_13999.gotoNextObject () ;
  }
  {
  var_routineBody_13932.setter_decIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 323)) ;
  }
  extensionMethod_addHeaderFileName (constinArgument_inReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 325)) ;
  UpEnumerator__5B_formalInputParameterForGeneration_5D_ enumerator_14366 (constinArgument_inFormalArgumentList) ;
  while (enumerator_14366.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_14366.current (HERE).readProperty_mFormalArgumentType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 327)) ;
    enumerator_14366.gotoNextObject () ;
  }
  GGS_bool var_isStruct_14495 = GGS_bool (ComparisonKind::equal, extensionGetter_definition (constinArgument_inReceiverType, inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 330)).readProperty_typeKind ().objectCompare (GGS_typeKindEnum::class_func_structType (SOURCE_FILE ("initializer.galgas4", 330)))) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = var_isStruct_14495.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outGeneratedCode = GGS_string ("GGS_").add_operation (var_className_13563.getter_identifierRepresentation (SOURCE_FILE ("initializer.galgas4", 333)), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 333)).add_operation (GGS_string (" GGS_"), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 333)).add_operation (var_className_13563.getter_identifierRepresentation (SOURCE_FILE ("initializer.galgas4", 334)), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 334)).add_operation (GGS_string ("::"), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 334)).add_operation (constinArgument_inInitializerName.getter_identifierRepresentation (SOURCE_FILE ("initializer.galgas4", 335)), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 335)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 335)) ;
      GGS_u_33__32_ var_colRef_14803 = outArgument_outGeneratedCode.getter_currentColumn (SOURCE_FILE ("initializer.galgas4", 336)) ;
      UpEnumerator__5B_formalInputParameterForGeneration_5D_ enumerator_14872 (constinArgument_inFormalArgumentList) ;
      while (enumerator_14872.hasCurrentObject ()) {
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = enumerator_14872.current (HERE).readProperty_mIsConstant ().boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("const GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_14872.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 340)), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 340)).add_operation (GGS_string (" & "), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 340)), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 340)) ;
          }
        }
        if (GalgasBool::boolFalse == test_1) {
          outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_14872.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 342)), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 342)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 342)), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 342)) ;
        }
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = var_unusedVariableCppNameSet_13666.getter_contains (enumerator_14872.current (HERE).readProperty_mFormalArgumentCppName () COMMA_SOURCE_FILE ("initializer.galgas4", 344)).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("/* ").add_operation (enumerator_14872.current (HERE).readProperty_mFormalArgumentCppName (), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 345)).add_operation (GGS_string (" */"), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 345)), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 345)) ;
          }
        }
        if (GalgasBool::boolFalse == test_2) {
          outArgument_outGeneratedCode.plusAssignOperation(enumerator_14872.current (HERE).readProperty_mFormalArgumentCppName (), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 347)) ;
        }
        outArgument_outGeneratedCode.plusAssignOperation(GGS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 349)) ;
        {
        outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_14803, inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 350)) ;
        }
        enumerator_14872.gotoNextObject () ;
      }
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("Compiler * ").add_operation (function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 353)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 353)), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 353)) ;
      {
      outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_14803, inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 354)) ;
      }
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("COMMA_UNUSED_LOCATION_ARGS"), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 355)) ;
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 356)) ;
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("  GGS_").add_operation (var_className_13563.getter_identifierRepresentation (SOURCE_FILE ("initializer.galgas4", 357)), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 357)).add_operation (GGS_string (" result ;\n"), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 357)), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 357)) ;
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("  result.setInitializedProperties (").add_operation (function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 358)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 358)), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 358)) ;
      outArgument_outGeneratedCode.plusAssignOperation(var_routineBody_13932, inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 359)) ;
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("  return result ;\n"), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 360)) ;
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("}"), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 361)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    outArgument_outGeneratedCode = GGS_string ("GGS_").add_operation (var_className_13563.getter_identifierRepresentation (SOURCE_FILE ("initializer.galgas4", 363)), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 363)).add_operation (GGS_string (" GGS_"), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 363)).add_operation (var_className_13563.getter_identifierRepresentation (SOURCE_FILE ("initializer.galgas4", 364)), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 364)).add_operation (GGS_string ("::"), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 364)).add_operation (constinArgument_inInitializerName.getter_identifierRepresentation (SOURCE_FILE ("initializer.galgas4", 365)), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 365)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 365)) ;
    GGS_u_33__32_ var_colRef_16232 = outArgument_outGeneratedCode.getter_currentColumn (SOURCE_FILE ("initializer.galgas4", 366)) ;
    UpEnumerator__5B_formalInputParameterForGeneration_5D_ enumerator_16301 (constinArgument_inFormalArgumentList) ;
    while (enumerator_16301.hasCurrentObject ()) {
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = enumerator_16301.current (HERE).readProperty_mIsConstant ().boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("const GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_16301.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 370)), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 370)).add_operation (GGS_string (" & "), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 370)), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 370)) ;
        }
      }
      if (GalgasBool::boolFalse == test_3) {
        outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_16301.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 372)), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 372)).add_operation (GGS_string (" & "), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 372)), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 372)) ;
      }
      outArgument_outGeneratedCode.plusAssignOperation(enumerator_16301.current (HERE).readProperty_mFormalArgumentCppName (), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 374)) ;
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 375)) ;
      {
      outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_16232, inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 376)) ;
      }
      enumerator_16301.gotoNextObject () ;
    }
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("Compiler * ").add_operation (function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 379)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 379)), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 379)) ;
    {
    outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_16232, inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 380)) ;
    }
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("COMMA_LOCATION_ARGS) {\n"), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 381)) ;
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("  cPtr_").add_operation (var_className_13563.getter_identifierRepresentation (SOURCE_FILE ("initializer.galgas4", 382)), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 382)).add_operation (GGS_string (" * object = nullptr ;\n"), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 382)), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 382)) ;
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("  macroMyNew (object, cPtr_").add_operation (var_className_13563.getter_identifierRepresentation (SOURCE_FILE ("initializer.galgas4", 383)), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 383)), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 383)) ;
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string (" (").add_operation (function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 384)).add_operation (GGS_string (" COMMA_THERE)) ;\n"), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 384)), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 384)) ;
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("  object->").add_operation (var_className_13563.getter_identifierRepresentation (SOURCE_FILE ("initializer.galgas4", 385)), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 385)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 385)).add_operation (constinArgument_inInitializerName.getter_identifierRepresentation (SOURCE_FILE ("initializer.galgas4", 386)), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 386)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 386)), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 385)) ;
    UpEnumerator__5B_formalInputParameterForGeneration_5D_ enumerator_17364 (constinArgument_inFormalArgumentList) ;
    while (enumerator_17364.hasCurrentObject ()) {
      outArgument_outGeneratedCode.plusAssignOperation(enumerator_17364.current (HERE).readProperty_mFormalArgumentCppName (), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 388)) ;
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 389)) ;
      enumerator_17364.gotoNextObject () ;
    }
    outArgument_outGeneratedCode.plusAssignOperation(function_gCompilerCppName (inCompiler COMMA_HERE).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 391)), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 391)) ;
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("  const GGS_").add_operation (var_className_13563.getter_identifierRepresentation (SOURCE_FILE ("initializer.galgas4", 392)), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 392)).add_operation (GGS_string (" result (object) ;\n"), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 392)), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 392)) ;
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("  macroDetachSharedObject (object) ;\n"), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 393)) ;
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("  return result ;\n"), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 394)) ;
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 395)) ;
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("void cPtr_").add_operation (var_className_13563.getter_identifierRepresentation (SOURCE_FILE ("initializer.galgas4", 396)), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 396)).add_operation (GGS_string ("::"), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 396)).add_operation (var_className_13563.getter_identifierRepresentation (SOURCE_FILE ("initializer.galgas4", 397)), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 397)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 397)).add_operation (constinArgument_inInitializerName.getter_identifierRepresentation (SOURCE_FILE ("initializer.galgas4", 398)), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 398)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 398)), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 396)) ;
    UpEnumerator__5B_formalInputParameterForGeneration_5D_ enumerator_17993 (constinArgument_inFormalArgumentList) ;
    while (enumerator_17993.hasCurrentObject ()) {
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = enumerator_17993.current (HERE).readProperty_mIsConstant ().boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("const "), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 401)) ;
        }
      }
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_17993.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 403)), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 403)).add_operation (GGS_string (" & "), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 403)), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 403)) ;
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = var_unusedVariableCppNameSet_13666.getter_contains (enumerator_17993.current (HERE).readProperty_mFormalArgumentCppName () COMMA_SOURCE_FILE ("initializer.galgas4", 404)).boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("/* ").add_operation (enumerator_17993.current (HERE).readProperty_mFormalArgumentCppName (), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 405)).add_operation (GGS_string (" */"), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 405)), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 405)) ;
        }
      }
      if (GalgasBool::boolFalse == test_5) {
        outArgument_outGeneratedCode.plusAssignOperation(enumerator_17993.current (HERE).readProperty_mFormalArgumentCppName (), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 407)) ;
      }
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 409)) ;
      {
      outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_16232, inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 410)) ;
      }
      enumerator_17993.gotoNextObject () ;
    }
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("Compiler * "), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 413)) ;
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      test_6 = var_unusedVariableCppNameSet_13666.getter_contains (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("initializer.galgas4", 414)).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("/* ").add_operation (function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 415)).add_operation (GGS_string (" */"), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 415)), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 415)) ;
      }
    }
    if (GalgasBool::boolFalse == test_6) {
      outArgument_outGeneratedCode.plusAssignOperation(function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 417)) ;
    }
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 419)) ;
    outArgument_outGeneratedCode.plusAssignOperation(var_routineBody_13932, inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 420)) ;
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("}"), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 421)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@extensionGetterAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_extensionGetterAST::getter_keyRepresentation (Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_extensionGetterAST temp_0 = this ;
  const GGS_extensionGetterAST temp_1 = this ;
  result = GGS_string ("extension func @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 105)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 105)).add_operation (temp_1.readProperty_mExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 105)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@extensionGetterAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_extensionGetterAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                              GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                              GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                              GGS_extensionMethodMapForBuildingContext & /* ioArgument__5F_ioExtensionMethodMapForBuildingContext */,
                                                              GGS_extensionGetterMapForBuildingContext & ioArgument_ioExtensionGetterMapForBuildingContext,
                                                              GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                              GGS__5B_semanticDeclarationAST_5D_ & /* ioArgument__5F_ioExtensionOverrideDefinitionList */,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_extensionGetterAST temp_0 = this ;
  const GGS_extensionGetterAST temp_1 = this ;
  const GGS_extensionGetterAST temp_2 = this ;
  GGS_lstring var_key_5185 = GGS_lstring::init_21__21_ (GGS_string ("extension func @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 118)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 118)).add_operation (temp_1.readProperty_mExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 118)), temp_2.readProperty_mExtensionGetterName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_extensionGetterAST temp_3 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_5185, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 119)) ;
  }
  {
  const GGS_extensionGetterAST temp_4 = this ;
  const GGS_extensionGetterAST temp_5 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_5185, GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 120)), temp_5.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("extension-getter.galgas4", 120)) ;
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    const GGS_extensionGetterAST temp_7 = this ;
    test_6 = ioArgument_ioExtensionGetterMapForBuildingContext.getter_contains (temp_7.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-getter.galgas4", 122)).operator_not (SOURCE_FILE ("extension-getter.galgas4", 122)).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      {
      const GGS_extensionGetterAST temp_8 = this ;
      ioArgument_ioExtensionGetterMapForBuildingContext.setter_insertKey (temp_8.readProperty_mTypeName (), GGS_extensionGetterMapForType::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 123)) ;
      }
    }
  }
  const GGS_extensionGetterAST temp_9 = this ;
  GGS_extensionGetterMapForBuildingContext_2E_element var_entry_5690 = ioArgument_ioExtensionGetterMapForBuildingContext.readSubcript__3F_searchKey (temp_9.readProperty_mTypeName (), inCompiler COMMA_HERE) ;
  {
  const GGS_extensionGetterAST temp_10 = this ;
  const GGS_extensionGetterAST temp_11 = this ;
  const GGS_extensionGetterAST temp_12 = this ;
  var_entry_5690.mProperty_mExtensionGetterMapForType.setter_insertKey (temp_10.readProperty_mExtensionGetterName (), temp_11.readProperty_mExtensionGetterReturnedTypeName (), temp_12.readProperty_mExtensionGetterFormalInputParameterList (), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("extension-getter.galgas4", 133)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 129)) ;
  }
  {
  ioArgument_ioExtensionGetterMapForBuildingContext.setter_replaceKey (var_entry_5690, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 135)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@extensionGetterAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_extensionGetterAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                        const GGS_extensionInitializerForBuildingContext /* constinArgument__5F_inExtensionInitializerMapForBuildingContext */,
                                                                        const GGS_extensionMethodMapForBuildingContext /* constinArgument__5F_inExtensionMethodMapForBuildingContext */,
                                                                        const GGS_extensionGetterMapForBuildingContext /* constinArgument__5F_inExtensionGetterMapForBuildingContext */,
                                                                        const GGS_extensionSetterMapForBuildingContext /* constinArgument__5F_inExtensionSetterMapForBuildingContext */,
                                                                        GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                        GGS_semanticContext & /* ioArgument__5F_ioSemanticContext */,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@extensionGetterAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_extensionGetterAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & /* ioArgument__5F_ioUsefulnessRootEntities */,
                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                       const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                       const GGS_semanticContext constinArgument_inSemanticContext,
                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                       const GGS_predefinedTypes constinArgument_inPredefinedTypes,
                                                       GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_extensionGetterAST temp_0 = this ;
  const GGS_extensionGetterAST temp_1 = this ;
  GGS_lstring var_nameForUsefulness_7462 = function_getterNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionGetterName (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 167)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_7462, var_nameForUsefulness_7462, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 168)) ;
  }
  const GGS_extensionGetterAST temp_2 = this ;
  GGS_lstring var_typeNameForUsefulness_7638 = function_typeNameForUsefulEntitiesGraph (temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 169)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_7638, var_nameForUsefulness_7462 COMMA_SOURCE_FILE ("extension-getter.galgas4", 170)) ;
  }
  const GGS_extensionGetterAST temp_3 = this ;
  GGS_unifiedTypeMapEntry var_selfType_7842 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_3.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 172)) ;
  GGS_string var_selfObjectNameNew_7953 ;
  GGS_string var_selfObjectAccessorNew_7985 ;
  GGS_bool var_implementedAsFunctionNew_8019 ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = extensionGetter_definition (var_selfType_7842, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 177)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-getter.galgas4", 177)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      var_selfObjectNameNew_7953 = GGS_string ("this") ;
      var_selfObjectAccessorNew_7985 = GGS_string ("this->") ;
      var_implementedAsFunctionNew_8019 = GGS_bool (false) ;
    }
  }
  if (GalgasBool::boolFalse == test_4) {
    var_selfObjectNameNew_7953 = GGS_string ("inObject") ;
    var_selfObjectAccessorNew_7985 = GGS_string ("inObject.") ;
    var_implementedAsFunctionNew_8019 = GGS_bool (true) ;
  }
  GGS_analysisContext var_analysisContextNew_8361 = GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfObjectNameNew_7953, GGS_selfAvailability::class_func_available (var_selfType_7842, GGS_selfMutability::class_func_none (SOURCE_FILE ("extension-getter.galgas4", 191))  COMMA_SOURCE_FILE ("extension-getter.galgas4", 191)), var_selfObjectAccessorNew_7985, inCompiler COMMA_HERE) ;
  GGS__5B_formalInputParameterForGeneration_5D_ var_formalParameterListForGeneration_8945 ;
  GGS_unifiedTypeMapEntry var_returnType_8988 ;
  GGS_string var_returnVariableCppName_9009 ;
  GGS__5B_semanticInstructionForGeneration_5D_ var_semanticInstructionListForGeneration_9041 ;
  {
  const GGS_extensionGetterAST temp_5 = this ;
  const GGS_extensionGetterAST temp_6 = this ;
  const GGS_extensionGetterAST temp_7 = this ;
  const GGS_extensionGetterAST temp_8 = this ;
  routine_analyzeFunctionBody_3F__26__3F__26__3F__3F__3F__3F__21_signatureIR_21__21__21_ (var_nameForUsefulness_7462, ioArgument_ioUsefulEntitiesGraph, var_analysisContextNew_8361, ioArgument_ioTypeMap, temp_5.readProperty_mExtensionGetterFormalInputParameterList (), temp_6.readProperty_mExtensionGetterInstructionList (), temp_7.readProperty_mExtensionGetterReturnedTypeName (), temp_8.readProperty_mEndOfReaderLocation (), var_formalParameterListForGeneration_8945, var_returnType_8988, var_returnVariableCppName_9009, var_semanticInstructionListForGeneration_9041, inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas4", 194)) ;
  }
  const GGS_extensionGetterAST temp_9 = this ;
  const GGS_extensionGetterAST temp_10 = this ;
  const GGS_extensionGetterAST temp_11 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_extensionGetterForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21__21__21_ (GGS_string ("extension func ").add_operation (temp_9.readProperty_mExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 210)), GGS_bool (true), GGS_string ("func-").add_operation (extensionGetter_definition (var_selfType_7842, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 212)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas4", 212)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 212)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 212)).add_operation (temp_10.readProperty_mExtensionGetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas4", 212)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 212)), var_selfType_7842, temp_11.readProperty_mExtensionGetterName ().readProperty_string (), var_implementedAsFunctionNew_8019, var_returnType_8988, var_returnVariableCppName_9009, var_formalParameterListForGeneration_8945, extensionGetter_definition (var_selfType_7842, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 219)).readProperty_allTypedPropertyList (), var_semanticInstructionListForGeneration_9041, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-getter.galgas4", 209)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@extensionGetterAST buildExtensionListMaps'
//--------------------------------------------------------------------------------------------------

void cPtr_extensionGetterAST::method_buildExtensionListMaps (GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioAbstractExtensionSetterListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioExtensionSetterListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingExtensionSetterListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingAbstractExtensionSetterListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioAbstractExtensionMethodListMapAST */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioExtensionMethodListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingExtensionMethodListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingAbstractExtensionMethodListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioAbstractExtensionGetterListMap */,
                                                             GGS_genericExtensionMethodListMap & ioArgument_ioExtensionGetterListMap,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingExtensionGetterListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingAbstractExtensionGetterListMap */,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_extensionGetterAST temp_0 = this ;
  const GGS_extensionGetterAST temp_1 = this ;
  extensionSetter_insertKey (ioArgument_ioExtensionGetterListMap, temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionGetterName (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 241)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@extensionGetterForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_extensionGetterForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result ; // Returned variable
  result = GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("extension-getter.galgas4", 261)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@extensionGetterForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_extensionGetterForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                      GGS_string & outArgument_outHeader,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_extensionGetterForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mImplementedAsFunction ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_extensionGetterForGeneration temp_2 = this ;
      const GGS_extensionGetterForGeneration temp_3 = this ;
      const GGS_extensionGetterForGeneration temp_4 = this ;
      const GGS_extensionGetterForGeneration temp_5 = this ;
      outArgument_outHeader = GGS_semanticComponentGenerationTemplate::class_func_extensionGetterAsFunctionDeclaration (extensionGetter_definition (temp_2.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 270)).readProperty_typeName ().readProperty_string (), temp_3.readProperty_mExtensionGetterName (), temp_4.readProperty_mExtensionGetterFormalParameterList (), extensionGetter_identifierRepresentation (temp_5.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 273)), inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas4", 269)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_extensionGetterForGeneration temp_6 = this ;
    const GGS_extensionGetterForGeneration temp_7 = this ;
    const GGS_extensionGetterForGeneration temp_8 = this ;
    const GGS_extensionGetterForGeneration temp_9 = this ;
    outArgument_outHeader = GGS_semanticComponentGenerationTemplate::class_func_extensionGetterDeclaration (extensionGetter_definition (temp_6.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 277)).readProperty_typeName ().readProperty_string (), temp_7.readProperty_mExtensionGetterName (), temp_8.readProperty_mExtensionGetterFormalParameterList (), temp_9.readProperty_mResultType (), inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas4", 276)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@extensionGetterForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_extensionGetterForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument__5F_inTypeMap */,
                                                                             GGS_stringset & ioArgument_ioInclusionSet,
                                                                             GGS_string & outArgument_outImplementation,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_extensionGetterForGeneration temp_0 = this ;
  UpEnumerator__5B_formalInputParameterForGeneration_5D_ enumerator_13050 (temp_0.readProperty_mExtensionGetterFormalParameterList ()) ;
  while (enumerator_13050.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_13050.current (HERE).readProperty_mFormalArgumentType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 291)) ;
    enumerator_13050.gotoNextObject () ;
  }
  const GGS_extensionGetterForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 293)) ;
  const GGS_extensionGetterForGeneration temp_2 = this ;
  GGS__5B_formalInputParameterForGeneration_5D_ var_extensionReaderFormalParameterList_13232 = temp_2.readProperty_mExtensionGetterFormalParameterList () ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    const GGS_extensionGetterForGeneration temp_4 = this ;
    test_3 = temp_4.readProperty_mImplementedAsFunction ().boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      {
      const GGS_extensionGetterForGeneration temp_5 = this ;
      var_extensionReaderFormalParameterList_13232.setter_insert (GGS_formalInputParameterForGeneration::init_21__21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("extension-getter.galgas4", 297)), temp_5.readProperty_mReceiverType (), GGS_string ("inObject"), GGS_string ("self").getter_here (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 297)), GGS_bool (true), inCompiler COMMA_HERE), GGS_u_33__32_ (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 296)) ;
      }
      const GGS_extensionGetterForGeneration temp_6 = this ;
      const GGS_extensionGetterForGeneration temp_7 = this ;
      ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("func-").add_operation (extensionGetter_definition (temp_6.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 301)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas4", 301)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 300)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 301)).add_operation (temp_7.readProperty_mExtensionGetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas4", 302)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 302))  COMMA_SOURCE_FILE ("extension-getter.galgas4", 300)) ;
      GGS_string var_code_14050 ;
      {
      const GGS_extensionGetterForGeneration temp_8 = this ;
      const GGS_extensionGetterForGeneration temp_9 = this ;
      const GGS_extensionGetterForGeneration temp_10 = this ;
      const GGS_extensionGetterForGeneration temp_11 = this ;
      routine_generateFunction_3F__26__3F__3F__3F__3F__3F__3F_static_3F_const_21_ (GGS_string ("extensionGetter_").add_operation (temp_8.readProperty_mExtensionGetterName ().getter_identifierRepresentation (SOURCE_FILE ("extension-getter.galgas4", 304)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 304)), ioArgument_ioInclusionSet, var_extensionReaderFormalParameterList_13232, temp_9.readProperty_mSemanticInstructionListForGeneration (), GGS_string ("Compiler"), temp_10.readProperty_mResultType (), temp_11.readProperty_mResultVarCppName (), GGS_bool (false), GGS_bool (false), var_code_14050, inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas4", 303)) ;
      }
      const GGS_extensionGetterForGeneration temp_12 = this ;
      const GGS_extensionGetterForGeneration temp_13 = this ;
      outArgument_outImplementation = GGS_semanticComponentGenerationTemplate::class_func_extensionGetterAsFunctionImplementation (extensionGetter_definition (temp_12.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 316)).readProperty_typeName ().readProperty_string (), temp_13.readProperty_mExtensionGetterName (), var_code_14050, inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas4", 315)) ;
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    const GGS_extensionGetterForGeneration temp_14 = this ;
    extensionMethod_addHeaderFileName (temp_14.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 321)) ;
    const GGS_extensionGetterForGeneration temp_15 = this ;
    GGS_unifiedTypeMapEntry var_baseType_14381 = temp_15.readProperty_mReceiverType () ;
    GGS_bool var_searching_14427 = GGS_bool (true) ;
    if (GGS_u_33__32_::class_func_max (SOURCE_FILE ("extension-getter.galgas4", 324)).isValid ()) {
      uint32_t variant_14450 = GGS_u_33__32_::class_func_max (SOURCE_FILE ("extension-getter.galgas4", 324)).uintValue () ;
      bool loop_14450 = true ;
      while (loop_14450) {
        loop_14450 = var_searching_14427.isValid () ;
        if (loop_14450) {
          loop_14450 = var_searching_14427.boolValue () ;
        }
        if (loop_14450 && (0 == variant_14450)) {
          loop_14450 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-getter.galgas4", 324)) ;
        }
        if (loop_14450) {
          variant_14450 -= 1 ;
          GalgasBool test_16 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_16) {
            test_16 = extensionGetter_definition (var_baseType_14381, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 325)).readProperty_superType ().getter_isNull (SOURCE_FILE ("extension-getter.galgas4", 325)).operator_not (SOURCE_FILE ("extension-getter.galgas4", 325)).boolEnum () ;
            if (GalgasBool::boolTrue == test_16) {
              GalgasBool test_17 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_17) {
                const GGS_extensionGetterForGeneration temp_18 = this ;
                test_17 = extensionGetter_definition (extensionGetter_definition (var_baseType_14381, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 326)).readProperty_superType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 326)).readProperty_getterMap ().getter_contains (temp_18.readProperty_mExtensionGetterName () COMMA_SOURCE_FILE ("extension-getter.galgas4", 326)).boolEnum () ;
                if (GalgasBool::boolTrue == test_17) {
                  var_baseType_14381 = extensionGetter_definition (var_baseType_14381, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 327)).readProperty_superType () ;
                }
              }
              if (GalgasBool::boolFalse == test_17) {
                var_searching_14427 = GGS_bool (false) ;
              }
            }
          }
          if (GalgasBool::boolFalse == test_16) {
            var_searching_14427 = GGS_bool (false) ;
          }
        }
      }
    }
    const GGS_extensionGetterForGeneration temp_19 = this ;
    ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("func-").add_operation (extensionGetter_definition (var_baseType_14381, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 336)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas4", 336)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 335)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 336)).add_operation (temp_19.readProperty_mExtensionGetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas4", 337)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 337))  COMMA_SOURCE_FILE ("extension-getter.galgas4", 335)) ;
    GGS_string var_extensionGetterCode_15400 ;
    {
    const GGS_extensionGetterForGeneration temp_20 = this ;
    const GGS_extensionGetterForGeneration temp_21 = this ;
    const GGS_extensionGetterForGeneration temp_22 = this ;
    const GGS_extensionGetterForGeneration temp_23 = this ;
    const GGS_extensionGetterForGeneration temp_24 = this ;
    routine_generateExtensionGetter_3F__26__3F__3F__3F__3F__3F__21_ (GGS_string ("cPtr_").add_operation (extensionGetter_definition (temp_20.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 339)).readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-getter.galgas4", 339)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 339)).add_operation (GGS_string ("::getter_"), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 339)).add_operation (temp_21.readProperty_mExtensionGetterName ().getter_identifierRepresentation (SOURCE_FILE ("extension-getter.galgas4", 339)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 339)), ioArgument_ioInclusionSet, var_extensionReaderFormalParameterList_13232, temp_22.readProperty_mSemanticInstructionListForGeneration (), GGS_string ("Compiler"), temp_23.readProperty_mResultType (), temp_24.readProperty_mResultVarCppName (), var_extensionGetterCode_15400, inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas4", 338)) ;
    }
    const GGS_extensionGetterForGeneration temp_25 = this ;
    const GGS_extensionGetterForGeneration temp_26 = this ;
    const GGS_extensionGetterForGeneration temp_27 = this ;
    const GGS_extensionGetterForGeneration temp_28 = this ;
    outArgument_outImplementation = GGS_semanticComponentGenerationTemplate::class_func_extensionGetterImplementation (extensionGetter_definition (temp_25.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 349)).readProperty_typeName ().readProperty_string (), temp_26.readProperty_mExtensionGetterName (), temp_27.readProperty_mExtensionGetterFormalParameterList (), var_extensionGetterCode_15400, temp_28.readProperty_mResultType (), inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas4", 348)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@overridingExtensionMethodAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_overridingExtensionMethodAST::getter_keyRepresentation (Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_overridingExtensionMethodAST temp_0 = this ;
  const GGS_overridingExtensionMethodAST temp_1 = this ;
  result = GGS_string ("overriding extension proc @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 96)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 96)).add_operation (temp_1.readProperty_mOverridingExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 96)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@overridingExtensionMethodAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionMethodAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & /* ioArgument__5F_ioSemanticTypePrecedenceGraph */,
                                                                        GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                        GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                                        GGS_extensionMethodMapForBuildingContext & ioArgument_ioExtensionMethodMapForBuildingContext,
                                                                        GGS_extensionGetterMapForBuildingContext & /* ioArgument__5F_ioExtensionGetterMapForBuildingContext */,
                                                                        GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                                        GGS__5B_semanticDeclarationAST_5D_ & ioArgument_ioExtensionOverrideDefinitionList,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_overridingExtensionMethodAST temp_0 = this ;
  ioArgument_ioExtensionOverrideDefinitionList.plusPlusAssignOperation (temp_0  COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 111)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_overridingExtensionMethodAST temp_2 = this ;
    test_1 = ioArgument_ioExtensionMethodMapForBuildingContext.getter_contains (temp_2.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 113)).operator_not (SOURCE_FILE ("extension-overriding-method.galgas4", 113)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      {
      const GGS_overridingExtensionMethodAST temp_3 = this ;
      ioArgument_ioExtensionMethodMapForBuildingContext.setter_insertKey (temp_3.readProperty_mTypeName (), GGS_extensionMethodMapForType::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 114)) ;
      }
    }
  }
  const GGS_overridingExtensionMethodAST temp_4 = this ;
  GGS_extensionMethodMapForBuildingContext_2E_element var_entry_5361 = ioArgument_ioExtensionMethodMapForBuildingContext.readSubcript__3F_searchKey (temp_4.readProperty_mTypeName (), inCompiler COMMA_HERE) ;
  {
  const GGS_overridingExtensionMethodAST temp_5 = this ;
  const GGS_overridingExtensionMethodAST temp_6 = this ;
  var_entry_5361.mProperty_mExtensionMethodMapForType.setter_insertKey (temp_5.readProperty_mOverridingExtensionMethodName (), temp_6.readProperty_mOverridingExtensionMethodFormalParameterList (), GGS_methodQualifier::class_func_isVirtualOverriding (SOURCE_FILE ("extension-overriding-method.galgas4", 123)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 120)) ;
  }
  {
  ioArgument_ioExtensionMethodMapForBuildingContext.setter_replaceKey (var_entry_5361, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 125)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@overridingExtensionMethodAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionMethodAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                                  const GGS_extensionInitializerForBuildingContext /* constinArgument__5F_inExtensionInitializerMapForBuildingContext */,
                                                                                  const GGS_extensionMethodMapForBuildingContext /* constinArgument__5F_inExtensionMethodMapForBuildingContext */,
                                                                                  const GGS_extensionGetterMapForBuildingContext /* constinArgument__5F_inExtensionGetterMapForBuildingContext */,
                                                                                  const GGS_extensionSetterMapForBuildingContext /* constinArgument__5F_inExtensionSetterMapForBuildingContext */,
                                                                                  GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                                  GGS_semanticContext & /* ioArgument__5F_ioSemanticContext */,
                                                                                  Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@overridingExtensionMethodAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionMethodAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & /* ioArgument__5F_ioUsefulnessRootEntities */,
                                                                 GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                                 const GGS_semanticContext constinArgument_inSemanticContext,
                                                                 GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                 const GGS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                 GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_overridingExtensionMethodAST temp_0 = this ;
  const GGS_overridingExtensionMethodAST temp_1 = this ;
  GGS_lstring var_nameForUsefulness_7142 = function_methodNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionMethodName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 155)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_7142, var_nameForUsefulness_7142, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 156)) ;
  }
  const GGS_overridingExtensionMethodAST temp_2 = this ;
  GGS_lstring var_typeNameForUsefulness_7328 = function_typeNameForUsefulEntitiesGraph (temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 157)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_7328, var_nameForUsefulness_7142 COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 158)) ;
  }
  const GGS_overridingExtensionMethodAST temp_3 = this ;
  GGS_unifiedTypeMapEntry var_selfType_7532 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_3.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 160)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = extensionGetter_definition (var_selfType_7532, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 162)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-overriding-method.galgas4", 162)).operator_not (SOURCE_FILE ("extension-overriding-method.galgas4", 162)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_overridingExtensionMethodAST temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mOverridingExtensionMethodName ().readProperty_location (), GGS_string ("cannot declare a extension proc: '@").add_operation (extensionGetter_definition (var_selfType_7532, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 163)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 163)).add_operation (GGS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 163)), fixItArray6  COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 163)) ;
    }
  }
  GGS_string var_baseTypeName_7868 = GGS_string::makeEmptyString () ;
  GGS_unifiedTypeMapEntry var_superType_7913 = extensionGetter_definition (var_selfType_7532, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 167)).readProperty_superType () ;
  GGS__5B_formalParameterSignatureElement_5D_ var_inheritedSignature_7961 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  GGS_location var_inheritedDeclarationLocation_8036 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 169)) ;
  if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-method.galgas4", 170)).add_operation (GGS_u_33__32_ (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 170)).isValid ()) {
    uint32_t variant_8084 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-method.galgas4", 170)).add_operation (GGS_u_33__32_ (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 170)).uintValue () ;
    bool loop_8084 = true ;
    while (loop_8084) {
      loop_8084 = var_superType_7913.getter_isNull (SOURCE_FILE ("extension-overriding-method.galgas4", 171)).operator_not (SOURCE_FILE ("extension-overriding-method.galgas4", 171)).operator_and (GGS_bool (ComparisonKind::equal, var_baseTypeName_7868.objectCompare (GGS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 171)).isValid () ;
      if (loop_8084) {
        loop_8084 = var_superType_7913.getter_isNull (SOURCE_FILE ("extension-overriding-method.galgas4", 171)).operator_not (SOURCE_FILE ("extension-overriding-method.galgas4", 171)).operator_and (GGS_bool (ComparisonKind::equal, var_baseTypeName_7868.objectCompare (GGS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 171)).boolValue () ;
      }
      if (loop_8084 && (0 == variant_8084)) {
        loop_8084 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-method.galgas4", 170)) ;
      }
      if (loop_8084) {
        variant_8084 -= 1 ;
        GalgasBool test_7 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_7) {
          const GGS_overridingExtensionMethodAST temp_8 = this ;
          test_7 = extensionGetter_definition (var_superType_7913, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 172)).readProperty_instanceMethodMap ().getter_contains (temp_8.readProperty_mOverridingExtensionMethodName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 172)).boolEnum () ;
          if (GalgasBool::boolTrue == test_7) {
            GGS_methodQualifier var_qualifier_8479 ;
            const GGS_overridingExtensionMethodAST temp_9 = this ;
            GGS_methodKind joker_8382 ; // Joker input parameter
            GGS_bool joker_8462 ; // Joker input parameter
            GGS_string joker_8498 ; // Joker input parameter
            extensionGetter_definition (var_superType_7913, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 173)).readProperty_instanceMethodMap ().method_searchKey (temp_9.readProperty_mOverridingExtensionMethodName (), joker_8382, var_inheritedSignature_7961, var_inheritedDeclarationLocation_8036, joker_8462, var_qualifier_8479, joker_8498, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 173)) ;
            GalgasBool test_10 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_10) {
              test_10 = GGS_bool (ComparisonKind::lowerOrEqual, var_qualifier_8479.objectCompare (GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("extension-overriding-method.galgas4", 182)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_10) {
                var_baseTypeName_7868 = extensionGetter_definition (var_superType_7913, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 183)).readProperty_typeName ().readProperty_string () ;
              }
            }
          }
        }
        var_superType_7913 = extensionGetter_definition (var_superType_7913, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 186)).readProperty_superType () ;
      }
    }
  }
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    test_11 = GGS_bool (ComparisonKind::equal, var_baseTypeName_7868.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      const GGS_overridingExtensionMethodAST temp_12 = this ;
      GenericArray <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mOverridingExtensionMethodName ().readProperty_location (), GGS_string ("this proc is not declared by a super class"), fixItArray13  COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 189)) ;
    }
  }
  GGS_analysisContext var_analysisContext_8860 = GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GGS_string ("this"), GGS_selfAvailability::class_func_available (var_selfType_7532, GGS_selfMutability::class_func_propertiesAreMutableSelfIsNot (SOURCE_FILE ("extension-overriding-method.galgas4", 196))  COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 196)), GGS_string ("this->"), inCompiler COMMA_HERE) ;
  GGS__5B_semanticInstructionForGeneration_5D_ var_semanticInstructionListForGeneration_9574 ;
  GGS__5B_formalParameterForGeneration_5D_ var_formalParameterListForGeneration_9621 ;
  {
  const GGS_overridingExtensionMethodAST temp_14 = this ;
  const GGS_overridingExtensionMethodAST temp_15 = this ;
  const GGS_overridingExtensionMethodAST temp_16 = this ;
  routine_analyzeRoutineBody_3F__26__3F__26__3F__3F__3F__21__21_ (var_nameForUsefulness_7142, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_8860, ioArgument_ioTypeMap, temp_14.readProperty_mOverridingExtensionMethodFormalParameterList (), temp_15.readProperty_mOverridingExtensionMethodInstructionList (), temp_16.readProperty_mEndOfMethodLocation (), var_semanticInstructionListForGeneration_9574, var_formalParameterListForGeneration_9621, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 203)) ;
  }
  GalgasBool test_17 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_17) {
    test_17 = GGS_bool (ComparisonKind::notEqual, var_baseTypeName_7868.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_17) {
      {
      const GGS_overridingExtensionMethodAST temp_18 = this ;
      routine_checkMethodSignatures_3F__3F__3F__3F_ (var_formalParameterListForGeneration_9621, temp_18.readProperty_mOverridingExtensionMethodName ().readProperty_location (), var_inheritedSignature_7961, var_inheritedDeclarationLocation_8036, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 216)) ;
      }
    }
  }
  const GGS_overridingExtensionMethodAST temp_19 = this ;
  const GGS_overridingExtensionMethodAST temp_20 = this ;
  const GGS_overridingExtensionMethodAST temp_21 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_overridingExtensionMethodForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21_ (GGS_string ("override extension proc ").add_operation (temp_19.readProperty_mOverridingExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 225)), GGS_bool (false), GGS_string ("proc-").add_operation (extensionGetter_definition (var_selfType_7532, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 227)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-method.galgas4", 227)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 227)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 227)).add_operation (temp_20.readProperty_mOverridingExtensionMethodName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-method.galgas4", 227)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 227)), var_selfType_7532, var_baseTypeName_7868, temp_21.readProperty_mOverridingExtensionMethodName ().readProperty_string (), var_formalParameterListForGeneration_9621, extensionGetter_definition (var_selfType_7532, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 232)).readProperty_allTypedPropertyList (), var_semanticInstructionListForGeneration_9574, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 224)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@overridingExtensionMethodAST buildExtensionListMaps'
//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionMethodAST::method_buildExtensionListMaps (GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioAbstractExtensionSetterListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioExtensionSetterListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingExtensionSetterListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingAbstractExtensionSetterListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioAbstractExtensionMethodListMapAST */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioExtensionMethodListMap */,
                                                                       GGS_genericExtensionMethodListMap & ioArgument_ioOverridingExtensionMethodListMap,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingAbstractExtensionMethodListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioAbstractExtensionGetterListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioExtensionGetterListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingExtensionGetterListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingAbstractExtensionGetterListMap */,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_overridingExtensionMethodAST temp_0 = this ;
  const GGS_overridingExtensionMethodAST temp_1 = this ;
  extensionSetter_insertKey (ioArgument_ioOverridingExtensionMethodListMap, temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionMethodName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 257)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@overridingExtensionMethodForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_overridingExtensionMethodForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result ; // Returned variable
  result = GGS_headerKind::class_func_noHeader (SOURCE_FILE ("extension-overriding-method.galgas4", 279)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@overridingExtensionMethodForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionMethodForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument__5F_inTypeMap */,
                                                                                       GGS_stringset & ioArgument_ioInclusionSet,
                                                                                       GGS_string & outArgument_outImplementation,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_methodImplementation_13455 ;
  {
  const GGS_overridingExtensionMethodForGeneration temp_0 = this ;
  const GGS_overridingExtensionMethodForGeneration temp_1 = this ;
  const GGS_overridingExtensionMethodForGeneration temp_2 = this ;
  const GGS_overridingExtensionMethodForGeneration temp_3 = this ;
  routine_generateExtensionMethodNew_3F__26__3F__3F__3F__21_ (temp_0.readProperty_mReceiverType (), ioArgument_ioInclusionSet, temp_1.readProperty_mExtensionMethodName (), temp_2.readProperty_mExtensionMethodFormalParameterList (), temp_3.readProperty_mSemanticInstructionListForGeneration (), var_methodImplementation_13455, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 288)) ;
  }
  const GGS_overridingExtensionMethodForGeneration temp_4 = this ;
  const GGS_overridingExtensionMethodForGeneration temp_5 = this ;
  outArgument_outImplementation = GGS_semanticComponentGenerationTemplate::class_func_overridingExtensionMethodImplementation (extensionGetter_definition (temp_4.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 297)).readProperty_typeName ().readProperty_string (), temp_5.readProperty_mExtensionMethodName (), var_methodImplementation_13455, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 296)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@abstractExtensionGetterAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_abstractExtensionGetterAST::getter_keyRepresentation (Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_abstractExtensionGetterAST temp_0 = this ;
  const GGS_abstractExtensionGetterAST temp_1 = this ;
  result = GGS_string ("abstract extension func @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("abstract-getter.galgas4", 58)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-getter.galgas4", 58)).add_operation (temp_1.readProperty_mAbstractExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("abstract-getter.galgas4", 58)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@abstractExtensionGetterAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionGetterAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                      GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                      GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                                      GGS_extensionMethodMapForBuildingContext & /* ioArgument__5F_ioExtensionMethodMapForBuildingContext */,
                                                                      GGS_extensionGetterMapForBuildingContext & ioArgument_ioExtensionGetterMapForBuildingContext,
                                                                      GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                                      GGS__5B_semanticDeclarationAST_5D_ & /* ioArgument__5F_ioExtensionOverrideDefinitionList */,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_abstractExtensionGetterAST temp_0 = this ;
  const GGS_abstractExtensionGetterAST temp_1 = this ;
  const GGS_abstractExtensionGetterAST temp_2 = this ;
  GGS_lstring var_key_3603 = GGS_lstring::init_21__21_ (GGS_string ("extension func @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("abstract-getter.galgas4", 73)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-getter.galgas4", 73)).add_operation (temp_1.readProperty_mAbstractExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("abstract-getter.galgas4", 73)), temp_2.readProperty_mAbstractExtensionGetterName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_abstractExtensionGetterAST temp_3 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3603, temp_3, inCompiler COMMA_SOURCE_FILE ("abstract-getter.galgas4", 76)) ;
  }
  {
  const GGS_abstractExtensionGetterAST temp_4 = this ;
  const GGS_abstractExtensionGetterAST temp_5 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_3603, GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("abstract-getter.galgas4", 77)), temp_5.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("abstract-getter.galgas4", 77)) ;
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    const GGS_abstractExtensionGetterAST temp_7 = this ;
    test_6 = ioArgument_ioExtensionGetterMapForBuildingContext.getter_contains (temp_7.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("abstract-getter.galgas4", 79)).operator_not (SOURCE_FILE ("abstract-getter.galgas4", 79)).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      {
      const GGS_abstractExtensionGetterAST temp_8 = this ;
      ioArgument_ioExtensionGetterMapForBuildingContext.setter_insertKey (temp_8.readProperty_mTypeName (), GGS_extensionGetterMapForType::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("abstract-getter.galgas4", 80)) ;
      }
    }
  }
  const GGS_abstractExtensionGetterAST temp_9 = this ;
  GGS_extensionGetterMapForBuildingContext_2E_element var_entry_4142 = ioArgument_ioExtensionGetterMapForBuildingContext.readSubcript__3F_searchKey (temp_9.readProperty_mTypeName (), inCompiler COMMA_HERE) ;
  {
  const GGS_abstractExtensionGetterAST temp_10 = this ;
  const GGS_abstractExtensionGetterAST temp_11 = this ;
  const GGS_abstractExtensionGetterAST temp_12 = this ;
  var_entry_4142.mProperty_mExtensionGetterMapForType.setter_insertKey (temp_10.readProperty_mAbstractExtensionGetterName (), temp_11.readProperty_mAbstractExtensionGetterReturnedTypeName (), temp_12.readProperty_mAbstractExtensionGetterFormalInputParameterList (), GGS_methodQualifier::class_func_isVirtualAbstract (SOURCE_FILE ("abstract-getter.galgas4", 90)), inCompiler COMMA_SOURCE_FILE ("abstract-getter.galgas4", 86)) ;
  }
  {
  ioArgument_ioExtensionGetterMapForBuildingContext.setter_replaceKey (var_entry_4142, inCompiler COMMA_SOURCE_FILE ("abstract-getter.galgas4", 92)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@abstractExtensionGetterAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionGetterAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                                const GGS_extensionInitializerForBuildingContext /* constinArgument__5F_inExtensionInitializerMapForBuildingContext */,
                                                                                const GGS_extensionMethodMapForBuildingContext /* constinArgument__5F_inExtensionMethodMapForBuildingContext */,
                                                                                const GGS_extensionGetterMapForBuildingContext /* constinArgument__5F_inExtensionGetterMapForBuildingContext */,
                                                                                const GGS_extensionSetterMapForBuildingContext /* constinArgument__5F_inExtensionSetterMapForBuildingContext */,
                                                                                GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                                GGS_semanticContext & /* ioArgument__5F_ioSemanticContext */,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@abstractExtensionGetterAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionGetterAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & /* ioArgument__5F_ioUsefulnessRootEntities */,
                                                               GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                               const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                               const GGS_semanticContext /* constinArgument__5F_inSemanticContext */,
                                                               GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                               const GGS_predefinedTypes /* constinArgument__5F_inPredefinedTypes */,
                                                               GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_abstractExtensionGetterAST temp_0 = this ;
  GGS_unifiedTypeMapEntry var_selfType_6080 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("abstract-getter.galgas4", 125)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = extensionGetter_definition (var_selfType_6080, inCompiler COMMA_SOURCE_FILE ("abstract-getter.galgas4", 127)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("abstract-getter.galgas4", 127)).operator_not (SOURCE_FILE ("abstract-getter.galgas4", 127)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_abstractExtensionGetterAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAbstractExtensionGetterName ().readProperty_location (), GGS_string ("cannot declare an extension func: '@").add_operation (extensionGetter_definition (var_selfType_6080, inCompiler COMMA_SOURCE_FILE ("abstract-getter.galgas4", 129)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("abstract-getter.galgas4", 129)).add_operation (GGS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("abstract-getter.galgas4", 129)), fixItArray3  COMMA_SOURCE_FILE ("abstract-getter.galgas4", 128)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = extensionGetter_definition (var_selfType_6080, inCompiler COMMA_SOURCE_FILE ("abstract-getter.galgas4", 131)).readProperty_isConcrete ().boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_abstractExtensionGetterAST temp_5 = this ;
        GenericArray <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mAbstractExtensionGetterName ().readProperty_location (), GGS_string ("cannot declare an abstract extension func: '@").add_operation (extensionGetter_definition (var_selfType_6080, inCompiler COMMA_SOURCE_FILE ("abstract-getter.galgas4", 133)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("abstract-getter.galgas4", 133)).add_operation (GGS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("abstract-getter.galgas4", 133)), fixItArray6  COMMA_SOURCE_FILE ("abstract-getter.galgas4", 132)) ;
      }
    }
  }
  GGS__5B_formalInputParameterForGeneration_5D_ var_formalParameterListForGeneration_6711 = GGS__5B_formalInputParameterForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_abstractExtensionGetterAST temp_7 = this ;
  UpEnumerator__5B_formalInputParameterAST_5D_ enumerator_6782 (temp_7.readProperty_mAbstractExtensionGetterFormalInputParameterList ()) ;
  while (enumerator_6782.hasCurrentObject ()) {
    var_formalParameterListForGeneration_6711.plusPlusAssignOperation (GGS_formalInputParameterForGeneration::init_21__21__21__21__21_ (enumerator_6782.current (HERE).readProperty_mFormalSelector (), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_6782.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("abstract-getter.galgas4", 141)), enumerator_6782.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), enumerator_6782.current (HERE).readProperty_mFormalArgumentName (), enumerator_6782.current (HERE).readProperty_mIsConstant (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("abstract-getter.galgas4", 139)) ;
    enumerator_6782.gotoNextObject () ;
  }
  const GGS_abstractExtensionGetterAST temp_8 = this ;
  const GGS_abstractExtensionGetterAST temp_9 = this ;
  const GGS_abstractExtensionGetterAST temp_10 = this ;
  const GGS_abstractExtensionGetterAST temp_11 = this ;
  const GGS_abstractExtensionGetterAST temp_12 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_abstractExtensionGetterForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21__21__21_ (GGS_string ("abstract extension func ").add_operation (temp_8.readProperty_mAbstractExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("abstract-getter.galgas4", 149)), GGS_bool (true), GGS_string ("func-").add_operation (temp_9.readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("abstract-getter.galgas4", 151)), inCompiler COMMA_SOURCE_FILE ("abstract-getter.galgas4", 151)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("abstract-getter.galgas4", 151)).add_operation (temp_10.readProperty_mAbstractExtensionGetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("abstract-getter.galgas4", 151)), inCompiler COMMA_SOURCE_FILE ("abstract-getter.galgas4", 151)), var_selfType_6080, temp_11.readProperty_mAbstractExtensionGetterName ().readProperty_string (), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_12.readProperty_mAbstractExtensionGetterReturnedTypeName (), inCompiler COMMA_SOURCE_FILE ("abstract-getter.galgas4", 154)), var_formalParameterListForGeneration_6711, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("abstract-getter.galgas4", 148)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@abstractExtensionGetterAST buildExtensionListMaps'
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionGetterAST::method_buildExtensionListMaps (GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioAbstractExtensionSetterListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioExtensionSetterListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingExtensionSetterListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingAbstractExtensionSetterListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioAbstractExtensionMethodListMapAST */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioExtensionMethodListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingExtensionMethodListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingAbstractExtensionMethodListMap */,
                                                                     GGS_genericExtensionMethodListMap & ioArgument_ioAbstractExtensionGetterListMap,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioExtensionGetterListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingExtensionGetterListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingAbstractExtensionGetterListMap */,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_abstractExtensionGetterAST temp_0 = this ;
  const GGS_abstractExtensionGetterAST temp_1 = this ;
  extensionSetter_insertKey (ioArgument_ioAbstractExtensionGetterListMap, temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionGetterName (), inCompiler COMMA_SOURCE_FILE ("abstract-getter.galgas4", 174)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@abstractExtensionGetterForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_abstractExtensionGetterForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result ; // Returned variable
  result = GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("abstract-getter.galgas4", 194)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@abstractExtensionGetterForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionGetterForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                              GGS_string & outArgument_outHeader,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_abstractExtensionGetterForGeneration temp_0 = this ;
  const GGS_abstractExtensionGetterForGeneration temp_1 = this ;
  const GGS_abstractExtensionGetterForGeneration temp_2 = this ;
  const GGS_abstractExtensionGetterForGeneration temp_3 = this ;
  outArgument_outHeader = GGS_semanticComponentGenerationTemplate::class_func_abstractExtensionGetterDeclaration (extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("abstract-getter.galgas4", 202)).readProperty_typeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionGetterName (), temp_2.readProperty_mAbstractExtensionGetterFormalParameterList (), temp_3.readProperty_mResultType (), inCompiler  COMMA_SOURCE_FILE ("abstract-getter.galgas4", 201)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@abstractExtensionGetterForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionGetterForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument__5F_inTypeMap */,
                                                                                     GGS_stringset & ioArgument_ioInclusionSet,
                                                                                     GGS_string & outArgument_outImplementation,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_abstractExtensionGetterForGeneration temp_0 = this ;
  const GGS_abstractExtensionGetterForGeneration temp_1 = this ;
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("func-").add_operation (extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("abstract-getter.galgas4", 215)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("abstract-getter.galgas4", 215)), inCompiler COMMA_SOURCE_FILE ("abstract-getter.galgas4", 214)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("abstract-getter.galgas4", 215)).add_operation (temp_1.readProperty_mAbstractExtensionGetterName ().getter_fileNameRepresentation (SOURCE_FILE ("abstract-getter.galgas4", 216)), inCompiler COMMA_SOURCE_FILE ("abstract-getter.galgas4", 216))  COMMA_SOURCE_FILE ("abstract-getter.galgas4", 214)) ;
  const GGS_abstractExtensionGetterForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("abstract-getter.galgas4", 217)) ;
  const GGS_abstractExtensionGetterForGeneration temp_3 = this ;
  extensionMethod_addHeaderFileName (temp_3.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("abstract-getter.galgas4", 218)) ;
  const GGS_abstractExtensionGetterForGeneration temp_4 = this ;
  UpEnumerator__5B_formalInputParameterForGeneration_5D_ enumerator_10870 (temp_4.readProperty_mAbstractExtensionGetterFormalParameterList ()) ;
  while (enumerator_10870.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_10870.current (HERE).readProperty_mFormalArgumentType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("abstract-getter.galgas4", 220)) ;
    enumerator_10870.gotoNextObject () ;
  }
  const GGS_abstractExtensionGetterForGeneration temp_5 = this ;
  const GGS_abstractExtensionGetterForGeneration temp_6 = this ;
  const GGS_abstractExtensionGetterForGeneration temp_7 = this ;
  const GGS_abstractExtensionGetterForGeneration temp_8 = this ;
  outArgument_outImplementation = GGS_semanticComponentGenerationTemplate::class_func_abstractExtensionGetterImplementation (extensionGetter_definition (temp_5.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("abstract-getter.galgas4", 223)).readProperty_typeName ().readProperty_string (), temp_6.readProperty_mAbstractExtensionGetterName (), temp_7.readProperty_mAbstractExtensionGetterFormalParameterList (), temp_8.readProperty_mResultType (), inCompiler  COMMA_SOURCE_FILE ("abstract-getter.galgas4", 222)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@overridingAbstractExtensionGetterAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_overridingAbstractExtensionGetterAST::getter_keyRepresentation (Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_overridingAbstractExtensionGetterAST temp_0 = this ;
  const GGS_overridingAbstractExtensionGetterAST temp_1 = this ;
  result = GGS_string ("overriding extension func @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 89)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 89)).add_operation (temp_1.readProperty_mAbstractExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 89)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@overridingAbstractExtensionGetterAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionGetterAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & /* ioArgument__5F_ioSemanticTypePrecedenceGraph */,
                                                                                GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                                GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                                                GGS_extensionMethodMapForBuildingContext & /* ioArgument__5F_ioExtensionMethodMapForBuildingContext */,
                                                                                GGS_extensionGetterMapForBuildingContext & ioArgument_ioExtensionGetterMapForBuildingContext,
                                                                                GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                                                GGS__5B_semanticDeclarationAST_5D_ & ioArgument_ioExtensionOverrideDefinitionList,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_overridingAbstractExtensionGetterAST temp_0 = this ;
  ioArgument_ioExtensionOverrideDefinitionList.plusPlusAssignOperation (temp_0  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 104)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_overridingAbstractExtensionGetterAST temp_2 = this ;
    test_1 = ioArgument_ioExtensionGetterMapForBuildingContext.getter_contains (temp_2.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 106)).operator_not (SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 106)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      {
      const GGS_overridingAbstractExtensionGetterAST temp_3 = this ;
      ioArgument_ioExtensionGetterMapForBuildingContext.setter_insertKey (temp_3.readProperty_mTypeName (), GGS_extensionGetterMapForType::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 107)) ;
      }
    }
  }
  const GGS_overridingAbstractExtensionGetterAST temp_4 = this ;
  GGS_extensionGetterMapForBuildingContext_2E_element var_entry_5053 = ioArgument_ioExtensionGetterMapForBuildingContext.readSubcript__3F_searchKey (temp_4.readProperty_mTypeName (), inCompiler COMMA_HERE) ;
  {
  const GGS_overridingAbstractExtensionGetterAST temp_5 = this ;
  const GGS_overridingAbstractExtensionGetterAST temp_6 = this ;
  const GGS_overridingAbstractExtensionGetterAST temp_7 = this ;
  var_entry_5053.mProperty_mExtensionGetterMapForType.setter_insertKey (temp_5.readProperty_mAbstractExtensionGetterName (), temp_6.readProperty_mAbstractExtensionGetterReturnedTypeName (), temp_7.readProperty_mAbstractExtensionGetterFormalInputParameterList (), GGS_methodQualifier::class_func_isVirtualOverridingAbstract (SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 117)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 113)) ;
  }
  {
  ioArgument_ioExtensionGetterMapForBuildingContext.setter_replaceKey (var_entry_5053, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 119)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@overridingAbstractExtensionGetterAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionGetterAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                                          const GGS_extensionInitializerForBuildingContext /* constinArgument__5F_inExtensionInitializerMapForBuildingContext */,
                                                                                          const GGS_extensionMethodMapForBuildingContext /* constinArgument__5F_inExtensionMethodMapForBuildingContext */,
                                                                                          const GGS_extensionGetterMapForBuildingContext /* constinArgument__5F_inExtensionGetterMapForBuildingContext */,
                                                                                          const GGS_extensionSetterMapForBuildingContext /* constinArgument__5F_inExtensionSetterMapForBuildingContext */,
                                                                                          GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                                          GGS_semanticContext & /* ioArgument__5F_ioSemanticContext */,
                                                                                          Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@overridingAbstractExtensionGetterAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionGetterAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & /* ioArgument__5F_ioUsefulnessRootEntities */,
                                                                         GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                         const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                                         const GGS_semanticContext /* constinArgument__5F_inSemanticContext */,
                                                                         GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         const GGS_predefinedTypes /* constinArgument__5F_inPredefinedTypes */,
                                                                         GGS__5B_semanticDeclarationForGeneration_5D_ & /* ioArgument__5F_ioSemanticDeclarationListForGeneration */,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_overridingAbstractExtensionGetterAST temp_0 = this ;
  GGS_unifiedTypeMapEntry var_selfType_6922 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 149)) ;
  const GGS_overridingAbstractExtensionGetterAST temp_1 = this ;
  GGS_unifiedTypeMapEntry var_returnType_7004 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_1.readProperty_mAbstractExtensionGetterReturnedTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 151)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = extensionGetter_definition (var_selfType_6922, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 153)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 153)).operator_not (SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 153)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_overridingAbstractExtensionGetterAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mAbstractExtensionGetterName ().readProperty_location (), GGS_string ("cannot declare a extension func: '@").add_operation (extensionGetter_definition (var_selfType_6922, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 154)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 154)).add_operation (GGS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 154)), fixItArray4  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 154)) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = extensionGetter_definition (var_selfType_6922, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 155)).readProperty_isConcrete ().boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        const GGS_overridingAbstractExtensionGetterAST temp_6 = this ;
        GenericArray <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mAbstractExtensionGetterName ().readProperty_location (), GGS_string ("cannot declare an abstract extension func: '@").add_operation (extensionGetter_definition (var_selfType_6922, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 156)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 156)).add_operation (GGS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 156)), fixItArray7  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 156)) ;
      }
    }
  }
  GGS_string var_baseTypeName_7582 = GGS_string::makeEmptyString () ;
  GGS_unifiedTypeMapEntry var_superType_7627 = extensionGetter_definition (var_selfType_6922, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 160)).readProperty_superType () ;
  GGS__5B_functionSignatureElement_5D_ var_inheritedSignature_7703 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_inheritedReturnType_7755 = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 162)) ;
  GGS_location var_inheritedDeclarationLocation_7799 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 163)) ;
  if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 164)).add_operation (GGS_u_33__32_ (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 164)).isValid ()) {
    uint32_t variant_7847 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 164)).add_operation (GGS_u_33__32_ (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 164)).uintValue () ;
    bool loop_7847 = true ;
    while (loop_7847) {
      loop_7847 = var_superType_7627.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 165)).operator_not (SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 165)).operator_and (GGS_bool (ComparisonKind::equal, var_baseTypeName_7582.objectCompare (GGS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 165)).isValid () ;
      if (loop_7847) {
        loop_7847 = var_superType_7627.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 165)).operator_not (SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 165)).operator_and (GGS_bool (ComparisonKind::equal, var_baseTypeName_7582.objectCompare (GGS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 165)).boolValue () ;
      }
      if (loop_7847 && (0 == variant_7847)) {
        loop_7847 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 164)) ;
      }
      if (loop_7847) {
        variant_7847 -= 1 ;
        GalgasBool test_8 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_8) {
          const GGS_overridingAbstractExtensionGetterAST temp_9 = this ;
          test_8 = extensionGetter_definition (var_superType_7627, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 166)).readProperty_getterMap ().getter_contains (temp_9.readProperty_mAbstractExtensionGetterName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 166)).boolEnum () ;
          if (GalgasBool::boolTrue == test_8) {
            GGS_methodQualifier var_qualifier_8253 ;
            const GGS_overridingAbstractExtensionGetterAST temp_10 = this ;
            GGS_methodKind joker_8126 ; // Joker input parameter
            GGS_bool joker_8206 ; // Joker input parameter
            GGS_string joker_8272 ; // Joker input parameter
            extensionGetter_definition (var_superType_7627, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 167)).readProperty_getterMap ().method_searchKey (temp_10.readProperty_mAbstractExtensionGetterName (), joker_8126, var_inheritedSignature_7703, var_inheritedDeclarationLocation_7799, joker_8206, var_inheritedReturnType_7755, var_qualifier_8253, joker_8272, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 167)) ;
            GalgasBool test_11 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_11) {
              test_11 = GGS_bool (ComparisonKind::lowerOrEqual, var_qualifier_8253.objectCompare (GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 177)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_11) {
                var_baseTypeName_7582 = extensionGetter_definition (var_superType_7627, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 178)).readProperty_typeName ().readProperty_string () ;
              }
            }
          }
        }
        var_superType_7627 = extensionGetter_definition (var_superType_7627, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 181)).readProperty_superType () ;
      }
    }
  }
  GalgasBool test_12 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_12) {
    test_12 = GGS_bool (ComparisonKind::equal, var_baseTypeName_7582.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_12) {
      const GGS_overridingAbstractExtensionGetterAST temp_13 = this ;
      GenericArray <FixItDescription> fixItArray14 ;
      inCompiler->emitSemanticError (temp_13.readProperty_mAbstractExtensionGetterName ().readProperty_location (), GGS_string ("this func is not declared by a super class"), fixItArray14  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 184)) ;
    }
  }
  GalgasBool test_15 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_15) {
    test_15 = GGS_bool (ComparisonKind::notEqual, var_baseTypeName_7582.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_15) {
      GGS__5B_formalInputParameterForGeneration_5D_ var_formalParameterListForGeneration_8655 = GGS__5B_formalInputParameterForGeneration_5D_::init (inCompiler COMMA_HERE) ;
      const GGS_overridingAbstractExtensionGetterAST temp_16 = this ;
      UpEnumerator__5B_formalInputParameterAST_5D_ enumerator_8756 (temp_16.readProperty_mAbstractExtensionGetterFormalInputParameterList ()) ;
      while (enumerator_8756.hasCurrentObject ()) {
        var_formalParameterListForGeneration_8655.plusPlusAssignOperation (GGS_formalInputParameterForGeneration::init_21__21__21__21__21_ (enumerator_8756.current (HERE).readProperty_mFormalSelector (), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_8756.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 192)), enumerator_8756.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), enumerator_8756.current (HERE).readProperty_mFormalArgumentName (), enumerator_8756.current (HERE).readProperty_mIsConstant (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 190)) ;
        enumerator_8756.gotoNextObject () ;
      }
      {
      const GGS_overridingAbstractExtensionGetterAST temp_17 = this ;
      routine_checkGetterSignatures_3F__3F__3F__3F__3F__3F_ (var_formalParameterListForGeneration_8655, var_returnType_7004, temp_17.readProperty_mAbstractExtensionGetterName ().readProperty_location (), var_inheritedSignature_7703, var_inheritedReturnType_7755, var_inheritedDeclarationLocation_7799, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 198)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@overridingAbstractExtensionGetterAST buildExtensionListMaps'
//--------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionGetterAST::method_buildExtensionListMaps (GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioAbstractExtensionSetterListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioExtensionSetterListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingExtensionSetterListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingAbstractExtensionSetterListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioAbstractExtensionMethodListMapAST */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioExtensionMethodListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingExtensionMethodListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingAbstractExtensionMethodListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioAbstractExtensionGetterListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioExtensionGetterListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingExtensionGetterListMap */,
                                                                               GGS_genericExtensionMethodListMap & ioArgument_ioOverridingAbstractExtensionGetterListMap,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_overridingAbstractExtensionGetterAST temp_0 = this ;
  const GGS_overridingAbstractExtensionGetterAST temp_1 = this ;
  extensionSetter_insertKey (ioArgument_ioOverridingAbstractExtensionGetterListMap, temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionGetterName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 226)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'handleEquatableComparableExtension&?&?acceptEquatable?acceptComparable'
//
//--------------------------------------------------------------------------------------------------

void routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (GGS_equatableExtensionMap & ioArgument_ioEquatableExtensionMap,
                                                                                                    const GGS_lstring constinArgument_inTypeName,
                                                                                                    GGS_typeFeatures & ioArgument_ioFeatures,
                                                                                                    const GGS_bool constinArgument_inAcceptEquatable,
                                                                                                    const GGS_bool constinArgument_inAcceptComparable,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_equatableExtensionMap_2E_element var_node_2622 = ioArgument_ioEquatableExtensionMap.readSubcript__3F_ (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!ioArgument_ioEquatableExtensionMap.readSubcript__3F_ (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      GGS_location var_location_2679 = ioArgument_ioEquatableExtensionMap.getter_locationForKey (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 66)) ;
      {
      GGS_equatableComparableExtension joker_2795 ; // Joker input parameter
      ioArgument_ioEquatableExtensionMap.setter_removeKey (constinArgument_inTypeName, joker_2795, inCompiler COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 67)) ;
      }
      GGS_bool var_currentlyEquatable_2807 = ioArgument_ioFeatures.getter_contains (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("extension-equatable-comparable.galgas4", 68)) COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 68)) ;
      GGS_bool var_currentlyComparable_2869 = ioArgument_ioFeatures.getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("extension-equatable-comparable.galgas4", 69)) COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 69)) ;
      switch (var_node_2622.readProperty_mExtension ().enumValue ()) {
      case GGS_equatableComparableExtension::Enumeration::invalid:
        break ;
      case GGS_equatableComparableExtension::Enumeration::enum_equatable:
        {
          GalgasBool test_1 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_1) {
            test_1 = var_currentlyComparable_2869.boolEnum () ;
            if (GalgasBool::boolTrue == test_1) {
              GenericArray <FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (var_location_2679, GGS_string ("useless extension, the type is already declared comparable"), fixItArray2  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 73)) ;
            }
          }
          if (GalgasBool::boolFalse == test_1) {
            GalgasBool test_3 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_3) {
              test_3 = var_currentlyEquatable_2807.boolEnum () ;
              if (GalgasBool::boolTrue == test_3) {
                GenericArray <FixItDescription> fixItArray4 ;
                inCompiler->emitSemanticError (var_location_2679, GGS_string ("useless extension, the type is already declared equatable"), fixItArray4  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 75)) ;
              }
            }
            if (GalgasBool::boolFalse == test_3) {
              GalgasBool test_5 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_5) {
                test_5 = constinArgument_inAcceptEquatable.boolEnum () ;
                if (GalgasBool::boolTrue == test_5) {
                  ioArgument_ioFeatures.orAssignOperation(GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("extension-equatable-comparable.galgas4", 77)), inCompiler  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 77)) ;
                }
              }
              if (GalgasBool::boolFalse == test_5) {
                GenericArray <FixItDescription> fixItArray6 ;
                inCompiler->emitSemanticError (var_location_2679, GGS_string ("useless extension, the type does not support %equatable"), fixItArray6  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 79)) ;
                GenericArray <FixItDescription> fixItArray7 ;
                inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GGS_string ("type declaration is here"), fixItArray7  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 80)) ;
              }
            }
          }
        }
        break ;
      case GGS_equatableComparableExtension::Enumeration::enum_comparable:
        {
          GalgasBool test_8 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_8) {
            test_8 = var_currentlyComparable_2869.boolEnum () ;
            if (GalgasBool::boolTrue == test_8) {
              GenericArray <FixItDescription> fixItArray9 ;
              inCompiler->emitSemanticError (var_location_2679, GGS_string ("useless extension, the type is already declared comparable"), fixItArray9  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 84)) ;
            }
          }
          if (GalgasBool::boolFalse == test_8) {
            GalgasBool test_10 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_10) {
              test_10 = constinArgument_inAcceptComparable.boolEnum () ;
              if (GalgasBool::boolTrue == test_10) {
                ioArgument_ioFeatures.orAssignOperation(GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("extension-equatable-comparable.galgas4", 86)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("extension-equatable-comparable.galgas4", 86)) COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 86)), inCompiler  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 86)) ;
              }
            }
            if (GalgasBool::boolFalse == test_10) {
              GenericArray <FixItDescription> fixItArray11 ;
              inCompiler->emitSemanticError (var_location_2679, GGS_string ("useless extension, the type does not support %comparable"), fixItArray11  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 88)) ;
              GenericArray <FixItDescription> fixItArray12 ;
              inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GGS_string ("type declaration is here"), fixItArray12  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 89)) ;
            }
          }
        }
        break ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@equatableExtensionAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_equatableExtensionAST::getter_keyRepresentation (Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_equatableExtensionAST temp_0 = this ;
  result = function_equatableNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 119)).readProperty_string () ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@equatableExtensionAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_equatableExtensionAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                 GGS_equatableExtensionMap & ioArgument_ioEquatableExtensionMap,
                                                                 GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                                 GGS_extensionMethodMapForBuildingContext & /* ioArgument__5F_ioExtensionMethodMapForBuildingContext */,
                                                                 GGS_extensionGetterMapForBuildingContext & /* ioArgument__5F_ioExtensionGetterMapForBuildingContext */,
                                                                 GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                                 GGS__5B_semanticDeclarationAST_5D_ & /* ioArgument__5F_ioExtensionOverrideDefinitionList */,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_equatableExtensionAST temp_0 = this ;
  const GGS_equatableExtensionAST temp_1 = this ;
  GGS_lstring var_key_5586 = GGS_lstring::init_21__21_ (callExtensionGetter_keyRepresentation ((const cPtr_equatableExtensionAST *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 132)), temp_1.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_equatableExtensionAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_5586, temp_2, inCompiler COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 133)) ;
  }
  {
  const GGS_equatableExtensionAST temp_3 = this ;
  const GGS_equatableExtensionAST temp_4 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_5586, GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_3.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 134)), temp_4.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 134)) ;
  }
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    const GGS_equatableExtensionAST temp_6 = this ;
    const GGS_equatableExtensionMap_2E_element var_node_5829 = ioArgument_ioEquatableExtensionMap.readSubcript__3F_ (temp_6.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!ioArgument_ioEquatableExtensionMap.readSubcript__3F_ (temp_6.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
      test_5 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_5) {
      const GGS_equatableExtensionAST temp_7 = this ;
      switch (temp_7.readProperty_mExtension ().enumValue ()) {
      case GGS_equatableComparableExtension::Enumeration::invalid:
        break ;
      case GGS_equatableComparableExtension::Enumeration::enum_equatable:
        {
          switch (var_node_5829.readProperty_mExtension ().enumValue ()) {
          case GGS_equatableComparableExtension::Enumeration::invalid:
            break ;
          case GGS_equatableComparableExtension::Enumeration::enum_equatable:
            {
              const GGS_equatableExtensionAST temp_8 = this ;
              GenericArray <FixItDescription> fixItArray9 ;
              inCompiler->emitSemanticError (temp_8.readProperty_mTypeName ().readProperty_location (), GGS_string ("this type is already equatable"), fixItArray9  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 141)) ;
              const GGS_equatableExtensionAST temp_10 = this ;
              GenericArray <FixItDescription> fixItArray11 ;
              inCompiler->emitSemanticError (ioArgument_ioEquatableExtensionMap.getter_locationForKey (temp_10.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 142)), GGS_string ("equatable extension declaration is here"), fixItArray11  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 142)) ;
            }
            break ;
          case GGS_equatableComparableExtension::Enumeration::enum_comparable:
            {
              const GGS_equatableExtensionAST temp_12 = this ;
              GenericArray <FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (temp_12.readProperty_mTypeName ().readProperty_location (), GGS_string ("useless declaration, this type is already comparable"), fixItArray13  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 144)) ;
              const GGS_equatableExtensionAST temp_14 = this ;
              GenericArray <FixItDescription> fixItArray15 ;
              inCompiler->emitSemanticError (ioArgument_ioEquatableExtensionMap.getter_locationForKey (temp_14.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 145)), GGS_string ("comparable extension declaration is here"), fixItArray15  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 145)) ;
            }
            break ;
          }
        }
        break ;
      case GGS_equatableComparableExtension::Enumeration::enum_comparable:
        {
          switch (var_node_5829.readProperty_mExtension ().enumValue ()) {
          case GGS_equatableComparableExtension::Enumeration::invalid:
            break ;
          case GGS_equatableComparableExtension::Enumeration::enum_equatable:
            {
              const GGS_equatableExtensionAST temp_16 = this ;
              GenericArray <FixItDescription> fixItArray17 ;
              inCompiler->emitSemanticError (ioArgument_ioEquatableExtensionMap.getter_locationForKey (temp_16.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 150)), GGS_string ("useless declaration, this type is already comparable"), fixItArray17  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 150)) ;
              const GGS_equatableExtensionAST temp_18 = this ;
              GenericArray <FixItDescription> fixItArray19 ;
              inCompiler->emitSemanticError (temp_18.readProperty_mTypeName ().readProperty_location (), GGS_string ("comparable extension declaration is here"), fixItArray19  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 151)) ;
            }
            break ;
          case GGS_equatableComparableExtension::Enumeration::enum_comparable:
            {
              const GGS_equatableExtensionAST temp_20 = this ;
              GenericArray <FixItDescription> fixItArray21 ;
              inCompiler->emitSemanticError (temp_20.readProperty_mTypeName ().readProperty_location (), GGS_string ("this type is already comparable"), fixItArray21  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 153)) ;
              const GGS_equatableExtensionAST temp_22 = this ;
              GenericArray <FixItDescription> fixItArray23 ;
              inCompiler->emitSemanticError (ioArgument_ioEquatableExtensionMap.getter_locationForKey (temp_22.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 154)), GGS_string ("comparable extension declaration is here"), fixItArray23  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 154)) ;
            }
            break ;
          }
        }
        break ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_5) {
    {
    const GGS_equatableExtensionAST temp_24 = this ;
    const GGS_equatableExtensionAST temp_25 = this ;
    ioArgument_ioEquatableExtensionMap.setter_insertKey (temp_24.readProperty_mTypeName (), temp_25.readProperty_mExtension (), inCompiler COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 158)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@equatableExtensionAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_equatableExtensionAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                           const GGS_extensionInitializerForBuildingContext /* constinArgument__5F_inExtensionInitializerMapForBuildingContext */,
                                                                           const GGS_extensionMethodMapForBuildingContext /* constinArgument__5F_inExtensionMethodMapForBuildingContext */,
                                                                           const GGS_extensionGetterMapForBuildingContext /* constinArgument__5F_inExtensionGetterMapForBuildingContext */,
                                                                           const GGS_extensionSetterMapForBuildingContext /* constinArgument__5F_inExtensionSetterMapForBuildingContext */,
                                                                           GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                           GGS_semanticContext & /* ioArgument__5F_ioSemanticContext */,
                                                                           Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@equatableExtensionAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_equatableExtensionAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & /* ioArgument__5F_ioUsefulnessRootEntities */,
                                                          GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                          const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                          const GGS_semanticContext /* constinArgument__5F_inSemanticContext */,
                                                          GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                          const GGS_predefinedTypes /* constinArgument__5F_inPredefinedTypes */,
                                                          GGS__5B_semanticDeclarationForGeneration_5D_ & /* ioArgument__5F_ioSemanticDeclarationListForGeneration */,
                                                          Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@extensionMethodAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_extensionMethodAST::getter_keyRepresentation (Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_extensionMethodAST temp_0 = this ;
  const GGS_extensionMethodAST temp_1 = this ;
  result = GGS_string ("extension proc @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 87)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 87)).add_operation (temp_1.readProperty_mExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 87)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@extensionMethodAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_extensionMethodAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                              GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                              GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                              GGS_extensionMethodMapForBuildingContext & ioArgument_ioExtensionMethodMapForBuildingContext,
                                                              GGS_extensionGetterMapForBuildingContext & /* ioArgument__5F_ioExtensionGetterMapForBuildingContext */,
                                                              GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                              GGS__5B_semanticDeclarationAST_5D_ & /* ioArgument__5F_ioExtensionOverrideDefinitionList */,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_extensionMethodAST temp_0 = this ;
  const GGS_extensionMethodAST temp_1 = this ;
  const GGS_extensionMethodAST temp_2 = this ;
  GGS_lstring var_key_4485 = GGS_lstring::init_21__21_ (GGS_string ("extension proc @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 101)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 101)).add_operation (temp_1.readProperty_mExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 101)), temp_2.readProperty_mExtensionMethodName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_extensionMethodAST temp_3 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_4485, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 104)) ;
  }
  {
  const GGS_extensionMethodAST temp_4 = this ;
  const GGS_extensionMethodAST temp_5 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_4485, GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 105)), temp_5.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("extension-method.galgas4", 105)) ;
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    const GGS_extensionMethodAST temp_7 = this ;
    test_6 = ioArgument_ioExtensionMethodMapForBuildingContext.getter_contains (temp_7.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-method.galgas4", 107)).operator_not (SOURCE_FILE ("extension-method.galgas4", 107)).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      {
      const GGS_extensionMethodAST temp_8 = this ;
      ioArgument_ioExtensionMethodMapForBuildingContext.setter_insertKey (temp_8.readProperty_mTypeName (), GGS_extensionMethodMapForType::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 108)) ;
      }
    }
  }
  const GGS_extensionMethodAST temp_9 = this ;
  GGS_extensionMethodMapForBuildingContext_2E_element var_entry_5009 = ioArgument_ioExtensionMethodMapForBuildingContext.readSubcript__3F_searchKey (temp_9.readProperty_mTypeName (), inCompiler COMMA_HERE) ;
  {
  const GGS_extensionMethodAST temp_10 = this ;
  const GGS_extensionMethodAST temp_11 = this ;
  var_entry_5009.mProperty_mExtensionMethodMapForType.setter_insertKey (temp_10.readProperty_mExtensionMethodName (), temp_11.readProperty_mExtensionMethodFormalParameterList (), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("extension-method.galgas4", 117)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 114)) ;
  }
  {
  ioArgument_ioExtensionMethodMapForBuildingContext.setter_replaceKey (var_entry_5009, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 119)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@extensionMethodAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_extensionMethodAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                        const GGS_extensionInitializerForBuildingContext /* constinArgument__5F_inExtensionInitializerMapForBuildingContext */,
                                                                        const GGS_extensionMethodMapForBuildingContext /* constinArgument__5F_inExtensionMethodMapForBuildingContext */,
                                                                        const GGS_extensionGetterMapForBuildingContext /* constinArgument__5F_inExtensionGetterMapForBuildingContext */,
                                                                        const GGS_extensionSetterMapForBuildingContext /* constinArgument__5F_inExtensionSetterMapForBuildingContext */,
                                                                        GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                        GGS_semanticContext & /* ioArgument__5F_ioSemanticContext */,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@extensionMethodAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_extensionMethodAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & /* ioArgument__5F_ioUsefulnessRootEntities */,
                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                       const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                       const GGS_semanticContext constinArgument_inSemanticContext,
                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                       const GGS_predefinedTypes constinArgument_inPredefinedTypes,
                                                       GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_extensionMethodAST temp_0 = this ;
  const GGS_extensionMethodAST temp_1 = this ;
  GGS_lstring var_nameForUsefulness_6909 = function_methodNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionMethodName (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 151)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_6909, var_nameForUsefulness_6909, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 152)) ;
  }
  const GGS_extensionMethodAST temp_2 = this ;
  GGS_lstring var_typeNameForUsefulness_7089 = function_typeNameForUsefulEntitiesGraph (temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 153)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_7089, var_nameForUsefulness_6909 COMMA_SOURCE_FILE ("extension-method.galgas4", 154)) ;
  }
  const GGS_extensionMethodAST temp_3 = this ;
  GGS_unifiedTypeMapEntry var_selfType_7300 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_3.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 156)) ;
  GGS_string var_selfObjectNameString_7375 ;
  GGS_string var_selfObjectPropertyAccessorString_7412 ;
  GGS_bool var_implementedAsFunction_7459 ;
  GGS_bool var_isClass_7524 = GGS_bool (ComparisonKind::equal, extensionGetter_definition (var_selfType_7300, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 161)).readProperty_typeKind ().objectCompare (GGS_typeKindEnum::class_func_classType (SOURCE_FILE ("extension-method.galgas4", 161)))) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = var_isClass_7524.boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      var_selfObjectNameString_7375 = GGS_string ("this") ;
      var_selfObjectPropertyAccessorString_7412 = GGS_string ("this->") ;
      var_implementedAsFunction_7459 = GGS_bool (false) ;
    }
  }
  if (GalgasBool::boolFalse == test_4) {
    var_selfObjectNameString_7375 = GGS_string ("inObject") ;
    var_selfObjectPropertyAccessorString_7412 = GGS_string ("inObject.") ;
    var_implementedAsFunction_7459 = GGS_bool (true) ;
  }
  GGS_analysisContext var_analysisContextNew_7905 = GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfObjectNameString_7375, GGS_selfAvailability::class_func_available (var_selfType_7300, GGS_selfMutability::class_func_propertiesAreMutableSelfIsNot (SOURCE_FILE ("extension-method.galgas4", 176))  COMMA_SOURCE_FILE ("extension-method.galgas4", 176)), var_selfObjectPropertyAccessorString_7412, inCompiler COMMA_HERE) ;
  GGS__5B_semanticInstructionForGeneration_5D_ var_semanticInstructionListForGeneration_8496 ;
  GGS__5B_formalParameterForGeneration_5D_ var_formalParameterListForGeneration_8545 ;
  {
  const GGS_extensionMethodAST temp_5 = this ;
  const GGS_extensionMethodAST temp_6 = this ;
  const GGS_extensionMethodAST temp_7 = this ;
  routine_analyzeRoutineBody_3F__26__3F__26__3F__3F__3F__21__21_ (var_nameForUsefulness_6909, ioArgument_ioUsefulEntitiesGraph, var_analysisContextNew_7905, ioArgument_ioTypeMap, temp_5.readProperty_mExtensionMethodFormalParameterList (), temp_6.readProperty_mExtensionMethodInstructionList (), temp_7.readProperty_mEndOfMethodLocation (), var_semanticInstructionListForGeneration_8496, var_formalParameterListForGeneration_8545, inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas4", 179)) ;
  }
  const GGS_extensionMethodAST temp_8 = this ;
  const GGS_extensionMethodAST temp_9 = this ;
  const GGS_extensionMethodAST temp_10 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_extensionMethodForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21_ (GGS_string ("extension proc ").add_operation (temp_8.readProperty_mExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 192)), GGS_bool (true), GGS_string ("proc-").add_operation (extensionGetter_definition (var_selfType_7300, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 194)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas4", 194)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 194)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 194)).add_operation (temp_9.readProperty_mExtensionMethodName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas4", 194)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 194)), var_selfType_7300, temp_10.readProperty_mExtensionMethodName ().readProperty_string (), var_implementedAsFunction_7459, var_formalParameterListForGeneration_8545, extensionGetter_definition (var_selfType_7300, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 199)).readProperty_allTypedPropertyList (), var_semanticInstructionListForGeneration_8496, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-method.galgas4", 191)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@extensionMethodAST buildExtensionListMaps'
//--------------------------------------------------------------------------------------------------

void cPtr_extensionMethodAST::method_buildExtensionListMaps (GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioAbstractExtensionSetterListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioExtensionSetterListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingExtensionSetterListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingAbstractExtensionSetterListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioAbstractExtensionMethodListMapAST */,
                                                             GGS_genericExtensionMethodListMap & ioArgument_ioExtensionMethodListMap,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingExtensionMethodListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingAbstractExtensionMethodListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioAbstractExtensionGetterListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioExtensionGetterListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingExtensionGetterListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingAbstractExtensionGetterListMap */,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_extensionMethodAST temp_0 = this ;
  const GGS_extensionMethodAST temp_1 = this ;
  extensionSetter_insertKey (ioArgument_ioExtensionMethodListMap, temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionMethodName (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 226)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@extensionMethodForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_extensionMethodForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result ; // Returned variable
  result = GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("extension-method.galgas4", 245)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@extensionMethodForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_extensionMethodForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                      GGS_string & outArgument_outHeader,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_extensionMethodForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mImplementedAsFunction ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_extensionMethodForGeneration temp_2 = this ;
      const GGS_extensionMethodForGeneration temp_3 = this ;
      const GGS_extensionMethodForGeneration temp_4 = this ;
      outArgument_outHeader = GGS_semanticComponentGenerationTemplate::class_func_extensionMethodAsFunctionDeclaration (extensionGetter_definition (temp_2.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 254)).readProperty_typeName ().readProperty_string (), temp_3.readProperty_mExtensionMethodName (), temp_4.readProperty_mExtensionMethodFormalParameterList (), inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas4", 253)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_extensionMethodForGeneration temp_5 = this ;
    const GGS_extensionMethodForGeneration temp_6 = this ;
    const GGS_extensionMethodForGeneration temp_7 = this ;
    outArgument_outHeader = GGS_semanticComponentGenerationTemplate::class_func_extensionMethodDeclaration (extensionGetter_definition (temp_5.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 260)).readProperty_typeName ().readProperty_string (), temp_6.readProperty_mExtensionMethodName (), temp_7.readProperty_mExtensionMethodFormalParameterList (), inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas4", 259)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@extensionMethodForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_extensionMethodForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument__5F_inTypeMap */,
                                                                             GGS_stringset & ioArgument_ioInclusionSet,
                                                                             GGS_string & outArgument_outImplementation,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_extensionMethodForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mImplementedAsFunction ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_extensionMethodForGeneration temp_2 = this ;
      GGS__5B_formalParameterForGeneration_5D_ var_extensionMethodFormalParameterList_12701 = temp_2.readProperty_mExtensionMethodFormalParameterList () ;
      {
      const GGS_extensionMethodForGeneration temp_3 = this ;
      var_extensionMethodFormalParameterList_12701.setter_insert (GGS_formalParameterForGeneration::init_21__21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("extension-method.galgas4", 279)), GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("extension-method.galgas4", 279)), temp_3.readProperty_mReceiverType (), GGS_string ("self").getter_here (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 279)), GGS_string ("inObject"), inCompiler COMMA_HERE), GGS_u_33__32_ (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 278)) ;
      }
      const GGS_extensionMethodForGeneration temp_4 = this ;
      const GGS_extensionMethodForGeneration temp_5 = this ;
      ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("proc-").add_operation (extensionGetter_definition (temp_4.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 282)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas4", 282)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 282)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 282)).add_operation (temp_5.readProperty_mExtensionMethodName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas4", 282)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 282))  COMMA_SOURCE_FILE ("extension-method.galgas4", 282)) ;
      GGS_string var_code_13735 ;
      {
      const GGS_extensionMethodForGeneration temp_6 = this ;
      const GGS_extensionMethodForGeneration temp_7 = this ;
      routine_generateProcedure_3F_static_3F__26__3F__3F__3F__3F__3F__3F__3F__21_ (GGS_bool (false), GGS_string ("extensionMethod_").add_operation (temp_6.readProperty_mExtensionMethodName ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.galgas4", 285)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 285)), ioArgument_ioInclusionSet, var_extensionMethodFormalParameterList_12701, temp_7.readProperty_mSemanticInstructionListForGeneration (), GGS_bool (false), GGS_string ("Compiler"), GGS_bool (true), GGS_bool (false), GGS_bool (false), var_code_13735, inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas4", 283)) ;
      }
      const GGS_extensionMethodForGeneration temp_8 = this ;
      const GGS_extensionMethodForGeneration temp_9 = this ;
      outArgument_outImplementation = GGS_semanticComponentGenerationTemplate::class_func_extensionMethodAsFunctionImplementation (extensionGetter_definition (temp_8.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 297)).readProperty_typeName ().readProperty_string (), temp_9.readProperty_mExtensionMethodName (), var_code_13735, inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas4", 296)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_extensionMethodForGeneration temp_10 = this ;
    extensionMethod_addHeaderFileName (temp_10.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 302)) ;
    const GGS_extensionMethodForGeneration temp_11 = this ;
    UpEnumerator__5B_formalParameterForGeneration_5D_ enumerator_14041 (temp_11.readProperty_mExtensionMethodFormalParameterList ()) ;
    while (enumerator_14041.hasCurrentObject ()) {
      extensionMethod_addHeaderFileName (enumerator_14041.current (HERE).readProperty_mFormalArgumentType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 304)) ;
      enumerator_14041.gotoNextObject () ;
    }
    const GGS_extensionMethodForGeneration temp_12 = this ;
    GGS_unifiedTypeMapEntry var_baseType_14186 = temp_12.readProperty_mReceiverType () ;
    GGS_bool var_searching_14230 = GGS_bool (true) ;
    if (GGS_u_33__32_::class_func_max (SOURCE_FILE ("extension-method.galgas4", 308)).isValid ()) {
      uint32_t variant_14251 = GGS_u_33__32_::class_func_max (SOURCE_FILE ("extension-method.galgas4", 308)).uintValue () ;
      bool loop_14251 = true ;
      while (loop_14251) {
        loop_14251 = var_searching_14230.isValid () ;
        if (loop_14251) {
          loop_14251 = var_searching_14230.boolValue () ;
        }
        if (loop_14251 && (0 == variant_14251)) {
          loop_14251 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-method.galgas4", 308)) ;
        }
        if (loop_14251) {
          variant_14251 -= 1 ;
          GalgasBool test_13 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_13) {
            test_13 = extensionGetter_definition (var_baseType_14186, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 309)).readProperty_superType ().getter_isNull (SOURCE_FILE ("extension-method.galgas4", 309)).operator_not (SOURCE_FILE ("extension-method.galgas4", 309)).boolEnum () ;
            if (GalgasBool::boolTrue == test_13) {
              GalgasBool test_14 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_14) {
                const GGS_extensionMethodForGeneration temp_15 = this ;
                test_14 = extensionGetter_definition (extensionGetter_definition (var_baseType_14186, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 310)).readProperty_superType (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 310)).readProperty_instanceMethodMap ().getter_contains (temp_15.readProperty_mExtensionMethodName () COMMA_SOURCE_FILE ("extension-method.galgas4", 310)).boolEnum () ;
                if (GalgasBool::boolTrue == test_14) {
                  var_baseType_14186 = extensionGetter_definition (var_baseType_14186, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 311)).readProperty_superType () ;
                }
              }
              if (GalgasBool::boolFalse == test_14) {
                var_searching_14230 = GGS_bool (false) ;
              }
            }
          }
          if (GalgasBool::boolFalse == test_13) {
            var_searching_14230 = GGS_bool (false) ;
          }
        }
      }
    }
    const GGS_extensionMethodForGeneration temp_16 = this ;
    ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("proc-").add_operation (extensionGetter_definition (var_baseType_14186, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 320)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas4", 320)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 320)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 320)).add_operation (temp_16.readProperty_mExtensionMethodName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas4", 321)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 321))  COMMA_SOURCE_FILE ("extension-method.galgas4", 319)) ;
    GGS_string var_methodImplementation_15006 ;
    {
    const GGS_extensionMethodForGeneration temp_17 = this ;
    const GGS_extensionMethodForGeneration temp_18 = this ;
    const GGS_extensionMethodForGeneration temp_19 = this ;
    const GGS_extensionMethodForGeneration temp_20 = this ;
    routine_generateExtensionMethodNew_3F__26__3F__3F__3F__21_ (temp_17.readProperty_mReceiverType (), ioArgument_ioInclusionSet, temp_18.readProperty_mExtensionMethodName (), temp_19.readProperty_mExtensionMethodFormalParameterList (), temp_20.readProperty_mSemanticInstructionListForGeneration (), var_methodImplementation_15006, inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas4", 322)) ;
    }
    const GGS_extensionMethodForGeneration temp_21 = this ;
    const GGS_extensionMethodForGeneration temp_22 = this ;
    const GGS_extensionMethodForGeneration temp_23 = this ;
    outArgument_outImplementation = GGS_semanticComponentGenerationTemplate::class_func_extensionMethodImplementation (extensionGetter_definition (temp_21.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 331)).readProperty_typeName ().readProperty_string (), temp_22.readProperty_mExtensionMethodName (), temp_23.readProperty_mExtensionMethodFormalParameterList (), var_methodImplementation_15006, inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas4", 330)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Function 'escapeForTex'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_escapeForTex (const GGS_string & constinArgument_inString,
                                  Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result ; // Returned variable
  result = GGS_string::makeEmptyString () ;
  UpEnumerator_range enumerator_1966 (GGS_range (GGS_u_33__32_ (uint32_t (0U)), constinArgument_inString.getter_count (SOURCE_FILE ("production-rules-in-tex.galgas4", 38)).subtract_operation (GGS_u_33__32_ (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 38)))) ;
  while (enumerator_1966.hasCurrentObject ()) {
    GGS_char var_c_1983 = constinArgument_inString.getter_characterAtIndex (enumerator_1966.current (HERE), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 39)) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::equal, var_c_1983.objectCompare (GGS_char (utf32 (95)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        result.plusAssignOperation(GGS_string ("\\_"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 41)) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = GGS_bool (ComparisonKind::equal, var_c_1983.objectCompare (GGS_char (utf32 (123)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          result.plusAssignOperation(GGS_string ("\\{"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 43)) ;
        }
      }
      if (GalgasBool::boolFalse == test_1) {
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = GGS_bool (ComparisonKind::equal, var_c_1983.objectCompare (GGS_char (utf32 (125)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            result.plusAssignOperation(GGS_string ("\\}"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 45)) ;
          }
        }
        if (GalgasBool::boolFalse == test_2) {
          GalgasBool test_3 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_3) {
            test_3 = GGS_bool (ComparisonKind::equal, var_c_1983.objectCompare (GGS_char (utf32 (38)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_3) {
              result.plusAssignOperation(GGS_string ("\\&"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 47)) ;
            }
          }
          if (GalgasBool::boolFalse == test_3) {
            GalgasBool test_4 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_4) {
              test_4 = GGS_bool (ComparisonKind::equal, var_c_1983.objectCompare (GGS_char (utf32 (35)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_4) {
                result.plusAssignOperation(GGS_string ("\\#"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 49)) ;
              }
            }
            if (GalgasBool::boolFalse == test_4) {
              GalgasBool test_5 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_5) {
                test_5 = GGS_bool (ComparisonKind::equal, var_c_1983.objectCompare (GGS_char (utf32 (36)))).boolEnum () ;
                if (GalgasBool::boolTrue == test_5) {
                  result.plusAssignOperation(GGS_string ("\\$"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 51)) ;
                }
              }
              if (GalgasBool::boolFalse == test_5) {
                GalgasBool test_6 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_6) {
                  test_6 = GGS_bool (ComparisonKind::equal, var_c_1983.objectCompare (GGS_char (utf32 (94)))).boolEnum () ;
                  if (GalgasBool::boolTrue == test_6) {
                    result.plusAssignOperation(GGS_string ("\\verb=^="), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 53)) ;
                  }
                }
                if (GalgasBool::boolFalse == test_6) {
                  GalgasBool test_7 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_7) {
                    test_7 = GGS_bool (ComparisonKind::equal, var_c_1983.objectCompare (GGS_char (utf32 (37)))).boolEnum () ;
                    if (GalgasBool::boolTrue == test_7) {
                      result.plusAssignOperation(GGS_string ("\\verb=%="), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 55)) ;
                    }
                  }
                  if (GalgasBool::boolFalse == test_7) {
                    GalgasBool test_8 = GalgasBool::boolTrue ;
                    if (GalgasBool::boolTrue == test_8) {
                      test_8 = GGS_bool (ComparisonKind::equal, var_c_1983.objectCompare (GGS_char (utf32 (126)))).boolEnum () ;
                      if (GalgasBool::boolTrue == test_8) {
                        result.plusAssignOperation(GGS_string ("$\\sim$"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 57)) ;
                      }
                    }
                    if (GalgasBool::boolFalse == test_8) {
                      GalgasBool test_9 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_9) {
                        test_9 = GGS_bool (ComparisonKind::equal, var_c_1983.objectCompare (GGS_char (utf32 (94)))).boolEnum () ;
                        if (GalgasBool::boolTrue == test_9) {
                          result.plusAssignOperation(GGS_string ("$\\wedge$"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 59)) ;
                        }
                      }
                      if (GalgasBool::boolFalse == test_9) {
                        result.plusAssignOperation(var_c_1983.getter_string (SOURCE_FILE ("production-rules-in-tex.galgas4", 61)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 61)) ;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    enumerator_1966.gotoNextObject () ;
  }
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'emitProductionRulesInTexFile?????'
//
//--------------------------------------------------------------------------------------------------

void routine_emitProductionRulesInTexFile_3F__3F__3F__3F__3F_ (const GGS_string constinArgument_inProductDirectory,
                                                               const GGS_string constinArgument_inGrammarComponentName,
                                                               const GGS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalMapForGrammarAnalysis,
                                                               const GGS__5B_syntaxComponentForGrammarAnalysis_5D_ constinArgument_inSyntaxComponentListForGrammarAnalysis,
                                                               const GGS_lstring constinArgument_inStartSymbol,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_texDocumentFilePath_3057 = constinArgument_inProductDirectory.add_operation (GGS_string ("/../tex/"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 76)).add_operation (constinArgument_inGrammarComponentName, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 76)).add_operation (GGS_string (".document.tex"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 76)) ;
  var_texDocumentFilePath_3057.getter_deletingLastPathComponent (SOURCE_FILE ("production-rules-in-tex.galgas4", 77)).method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 77)) ;
  GGS_string var_document_3225 = GGS_grammarRulesInTexDocumentTemplate::class_func_document (constinArgument_inGrammarComponentName, function_escapeForTex (constinArgument_inGrammarComponentName, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 80)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 78)) ;
  GGS_bool joker_3422 ; // Joker input parameter
  var_document_3225.method_writeToFileWhenDifferentContents (var_texDocumentFilePath_3057, joker_3422, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 82)) ;
  GGS_string var_texFilePath_3432 = constinArgument_inProductDirectory.add_operation (GGS_string ("/../tex/"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 83)).add_operation (constinArgument_inGrammarComponentName, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 83)).add_operation (GGS_string (".tex"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 83)) ;
  GGS_string var_s_3518 = GGS_string::makeEmptyString () ;
  GGS_u_33__32_ var_startSymbolIndex_3593 ;
  GGS_nonterminalSymbolLabelMapForGrammarAnalysis joker_3611 ; // Joker input parameter
  constinArgument_inNonTerminalMapForGrammarAnalysis.method_searchKey (constinArgument_inStartSymbol, var_startSymbolIndex_3593, joker_3611, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 85)) ;
  var_s_3518.plusAssignOperation(GGS_string ("\\startSymbol{").add_operation (function_escapeForTex (constinArgument_inStartSymbol.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 86)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 86)).add_operation (GGS_string ("}{"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 86)).add_operation (var_startSymbolIndex_3593.getter_string (SOURCE_FILE ("production-rules-in-tex.galgas4", 86)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 86)).add_operation (GGS_string ("}\n\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 86)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 86)) ;
  var_s_3518.plusAssignOperation(GGS_string ("\\nonTerminalSummaryStart "), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 87)) ;
  UpEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_3763 (constinArgument_inNonTerminalMapForGrammarAnalysis) ;
  while (enumerator_3763.hasCurrentObject ()) {
    var_s_3518.plusAssignOperation(GGS_string ("\\nonTerminalSummary{").add_operation (function_escapeForTex (enumerator_3763.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 89)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 89)).add_operation (GGS_string ("}{"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 89)).add_operation (enumerator_3763.current (HERE).readProperty_mNonTerminalIndex ().getter_string (SOURCE_FILE ("production-rules-in-tex.galgas4", 89)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 89)).add_operation (GGS_string ("}"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 89)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 89)) ;
    enumerator_3763.gotoNextObject () ;
    if (enumerator_3763.hasCurrentObject ()) {
      var_s_3518.plusAssignOperation(GGS_string ("\\nonTerminalSummarySeparator "), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 90)) ;
    }
  }
  var_s_3518.plusAssignOperation(GGS_string ("\\nonTerminalSummaryEnd "), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 92)) ;
  UpEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_4024 (constinArgument_inNonTerminalMapForGrammarAnalysis) ;
  while (enumerator_4024.hasCurrentObject ()) {
    var_s_3518.plusAssignOperation(GGS_string ("\\nonTerminalSection{").add_operation (function_escapeForTex (enumerator_4024.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 94)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 94)).add_operation (GGS_string ("}{"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 94)).add_operation (enumerator_4024.current (HERE).readProperty_mNonTerminalIndex ().getter_string (SOURCE_FILE ("production-rules-in-tex.galgas4", 94)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 94)).add_operation (GGS_string ("}\n\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 94)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 94)) ;
    UpEnumerator__5B_syntaxComponentForGrammarAnalysis_5D_ enumerator_4205 (constinArgument_inSyntaxComponentListForGrammarAnalysis) ;
    while (enumerator_4205.hasCurrentObject ()) {
      UpEnumerator__5B_productionRuleForGrammarAnalysis_5D_ enumerator_4292 (enumerator_4205.current (HERE).readProperty_mProductionRulesList ()) ;
      while (enumerator_4292.hasCurrentObject ()) {
        GalgasBool test_0 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_0) {
          test_0 = GGS_bool (ComparisonKind::equal, enumerator_4292.current (HERE).readProperty_mLeftNonterminalSymbol ().readProperty_string ().objectCompare (enumerator_4024.current (HERE).readProperty_lkey ().readProperty_string ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_0) {
            GalgasBool test_1 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_1) {
              test_1 = extensionGetter_displayVertically (enumerator_4292.current (HERE).readProperty_mInstructionList (), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 98)).boolEnum () ;
              if (GalgasBool::boolTrue == test_1) {
                extensionMethod_displayRuleVertically (enumerator_4292.current (HERE), enumerator_4205.current (HERE).readProperty_mSyntaxComponentName ().readProperty_string (), var_s_3518, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 99)) ;
              }
            }
            if (GalgasBool::boolFalse == test_1) {
              extensionMethod_displayRule (enumerator_4292.current (HERE), enumerator_4205.current (HERE).readProperty_mSyntaxComponentName ().readProperty_string (), var_s_3518, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 101)) ;
            }
          }
        }
        enumerator_4292.gotoNextObject () ;
      }
      enumerator_4205.gotoNextObject () ;
    }
    enumerator_4024.gotoNextObject () ;
  }
  GGS_bool joker_4771 ; // Joker input parameter
  var_s_3518.method_writeToFileWhenDifferentContents (var_texFilePath_3432, joker_4771, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 107)) ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@nonTerminalInstructionForGrammarAnalysis tikzNodeForSyntaxInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_nonTerminalInstructionForGrammarAnalysis::method_tikzNodeForSyntaxInstruction (GGS__5B_row_5D_ & ioArgument_ioRowList,
                                                                                         const GGS_u_33__32_ constinArgument_inRow,
                                                                                         GGS_u_33__32_ & ioArgument_ioColumn,
                                                                                         GGS_string & ioArgument_ioCurrentNode,
                                                                                         GGS_string & ioArgument_ioArrowShape,
                                                                                         GGS_string & ioArgument_ioArrows,
                                                                                         GGS_u_33__32_ & /* ioArgument__5F_ioMaxUsedRowIndex */,
                                                                                         const GGS_bool /* constinArgument__5F_inDebug */,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_nonTerminalInstructionForGrammarAnalysis temp_0 = this ;
  const GGS_nonTerminalInstructionForGrammarAnalysis temp_1 = this ;
  GGS_string var_nodeDefinition_11258 = GGS_string ("[nonterminal] {\\nonTerminalSymbol{").add_operation (function_escapeForTex (temp_0.readProperty_mNonterminalSymbolName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 309)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 309)).add_operation (GGS_string ("}{"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 309)).add_operation (temp_1.readProperty_mNonterminalSymbolIndex ().getter_string (SOURCE_FILE ("production-rules-in-tex.galgas4", 310)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 310)).add_operation (GGS_string ("}}"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 310)) ;
  GGS_string var_nodeName_11524 ;
  {
  extensionSetter_appendRow (ioArgument_ioRowList, var_nodeDefinition_11258, constinArgument_inRow, ioArgument_ioColumn, var_nodeName_11524, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 311)) ;
  }
  ioArgument_ioArrows.plusAssignOperation(GGS_string ("  \\draw[->] (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 317)).add_operation (GGS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 317)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 317)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 317)).add_operation (var_nodeName_11524, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 317)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 317)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 317)) ;
  ioArgument_ioCurrentNode = var_nodeName_11524 ;
  ioArgument_ioArrowShape = GGS_string ("--") ;
  ioArgument_ioColumn.plusAssignOperation(GGS_u_33__32_ (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 320)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@selectInstructionForGrammarAnalysis tikzNodeForSyntaxInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_selectInstructionForGrammarAnalysis::method_tikzNodeForSyntaxInstruction (GGS__5B_row_5D_ & ioArgument_ioRowList,
                                                                                    const GGS_u_33__32_ constinArgument_inRow,
                                                                                    GGS_u_33__32_ & ioArgument_ioColumn,
                                                                                    GGS_string & ioArgument_ioCurrentNode,
                                                                                    GGS_string & ioArgument_ioArrowShape,
                                                                                    GGS_string & ioArgument_ioArrows,
                                                                                    GGS_u_33__32_ & ioArgument_ioMaxUsedRowIndex,
                                                                                    const GGS_bool constinArgument_inDebug,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inDebug.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_string var_markerStartNodeName_12320 ;
      {
      const GGS_selectInstructionForGrammarAnalysis temp_1 = this ;
      extensionSetter_appendRow (ioArgument_ioRowList, GGS_string ("[nonterminal] {SS").add_operation (temp_1.readProperty_mSelectBranchList ().getter_count (SOURCE_FILE ("production-rules-in-tex.galgas4", 338)).getter_string (SOURCE_FILE ("production-rules-in-tex.galgas4", 338)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 338)).add_operation (GGS_string ("}"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 338)), constinArgument_inRow, ioArgument_ioColumn, var_markerStartNodeName_12320, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 337)) ;
      }
      ioArgument_ioArrows.plusAssignOperation(GGS_string ("  \\draw[->] (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 343)).add_operation (GGS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 343)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 343)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 343)).add_operation (var_markerStartNodeName_12320, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 343)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 343)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 343)) ;
      ioArgument_ioCurrentNode = var_markerStartNodeName_12320 ;
      ioArgument_ioArrowShape = GGS_string ("--") ;
      ioArgument_ioColumn.plusAssignOperation(GGS_u_33__32_ (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 346)) ;
    }
  }
  GGS_string var_startNodeName_12667 ;
  {
  extensionSetter_appendRow (ioArgument_ioRowList, GGS_string ("[point] ()"), constinArgument_inRow, ioArgument_ioColumn, var_startNodeName_12667, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 349)) ;
  }
  ioArgument_ioColumn.plusAssignOperation(GGS_u_33__32_ (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 350)) ;
  const GGS_selectInstructionForGrammarAnalysis temp_2 = this ;
  GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ var_branches_12728 = temp_2.readProperty_mSelectBranchList () ;
  GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ var_brancheZero_12840 ;
  {
  var_branches_12728.setter_removeFirst (var_brancheZero_12840, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 353)) ;
  }
  GGS_u_33__32_ var_branchZeroColumn_12859 = ioArgument_ioColumn ;
  GGS_u_33__32_ var_maxUsedRowIndex_12893 = constinArgument_inRow ;
  extensionMethod_tikzNodeForSyntaxInstruction (var_brancheZero_12840, ioArgument_ioRowList, constinArgument_inRow, var_branchZeroColumn_12859, ioArgument_ioCurrentNode, ioArgument_ioArrowShape, ioArgument_ioArrows, var_maxUsedRowIndex_12893, constinArgument_inDebug, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 356)) ;
  GGS_u_33__32_ var_endColumn_13161 = var_branchZeroColumn_12859 ;
  GGS__5B_string_5D_ var_endingNodes_13237 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ enumerator_13271 (var_branches_12728) ;
  while (enumerator_13271.hasCurrentObject ()) {
    var_maxUsedRowIndex_12893.plusAssignOperation(GGS_u_33__32_ (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 370)) ;
    GGS_u_33__32_ var_branchColumn_13316 = ioArgument_ioColumn ;
    GGS_string var_currentNode_13348 = var_startNodeName_12667 ;
    GGS_string var_arrowStyle_13384 = GGS_string ("|-") ;
    extensionMethod_tikzNodeForSyntaxInstruction (enumerator_13271.current (HERE), ioArgument_ioRowList, var_maxUsedRowIndex_12893, var_branchColumn_13316, var_currentNode_13348, var_arrowStyle_13384, ioArgument_ioArrows, var_maxUsedRowIndex_12893, constinArgument_inDebug, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 374)) ;
    var_endingNodes_13237.plusPlusAssignOperation (var_currentNode_13348  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 384)) ;
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::lowerThan, var_endColumn_13161.objectCompare (var_branchColumn_13316)).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        var_endColumn_13161 = var_branchColumn_13316 ;
      }
    }
    enumerator_13271.gotoNextObject () ;
  }
  ioArgument_ioColumn = var_endColumn_13161 ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::lowerThan, ioArgument_ioMaxUsedRowIndex.objectCompare (var_maxUsedRowIndex_12893)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      ioArgument_ioMaxUsedRowIndex = var_maxUsedRowIndex_12893 ;
    }
  }
  GGS_string var_endNodeName_14008 ;
  {
  extensionSetter_appendRow (ioArgument_ioRowList, GGS_string ("[point] ()"), constinArgument_inRow, ioArgument_ioColumn, var_endNodeName_14008, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 394)) ;
  }
  ioArgument_ioColumn.plusAssignOperation(GGS_u_33__32_ (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 395)) ;
  ioArgument_ioArrowShape = GGS_string ("--") ;
  ioArgument_ioArrows.plusAssignOperation(GGS_string ("  \\draw (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 397)).add_operation (GGS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 397)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 397)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 397)).add_operation (var_endNodeName_14008, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 397)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 397)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 397)) ;
  ioArgument_ioCurrentNode = var_endNodeName_14008 ;
  UpEnumerator__5B_string_5D_ enumerator_14223 (var_endingNodes_13237) ;
  while (enumerator_14223.hasCurrentObject ()) {
    ioArgument_ioArrows.plusAssignOperation(GGS_string ("  \\draw[->] (").add_operation (enumerator_14223.current (HERE), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 401)).add_operation (GGS_string (") -| ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 401)).add_operation (var_endNodeName_14008, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 401)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 401)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 401)) ;
    enumerator_14223.gotoNextObject () ;
  }
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = constinArgument_inDebug.boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      GGS_string var_markerEndNodeName_14521 ;
      {
      const GGS_selectInstructionForGrammarAnalysis temp_6 = this ;
      extensionSetter_appendRow (ioArgument_ioRowList, GGS_string ("[nonterminal] {SE").add_operation (temp_6.readProperty_mSelectBranchList ().getter_count (SOURCE_FILE ("production-rules-in-tex.galgas4", 406)).getter_string (SOURCE_FILE ("production-rules-in-tex.galgas4", 406)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 406)).add_operation (GGS_string ("}"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 406)), constinArgument_inRow, ioArgument_ioColumn, var_markerEndNodeName_14521, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 405)) ;
      }
      ioArgument_ioColumn.plusAssignOperation(GGS_u_33__32_ (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 411)) ;
      ioArgument_ioArrows.plusAssignOperation(GGS_string ("  \\draw[->] (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 412)).add_operation (GGS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 412)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 412)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 412)).add_operation (var_markerEndNodeName_14521, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 412)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 412)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 412)) ;
      ioArgument_ioCurrentNode = var_markerEndNodeName_14521 ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@repeatInstructionForGrammarAnalysis tikzNodeForSyntaxInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_repeatInstructionForGrammarAnalysis::method_tikzNodeForSyntaxInstruction (GGS__5B_row_5D_ & ioArgument_ioRowList,
                                                                                    const GGS_u_33__32_ constinArgument_inRow,
                                                                                    GGS_u_33__32_ & ioArgument_ioColumn,
                                                                                    GGS_string & ioArgument_ioCurrentNode,
                                                                                    GGS_string & ioArgument_ioArrowShape,
                                                                                    GGS_string & ioArgument_ioArrows,
                                                                                    GGS_u_33__32_ & ioArgument_ioMaxUsedRowIndex,
                                                                                    const GGS_bool constinArgument_inDebug,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inDebug.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_string var_markerStartNodeName_15336 ;
      {
      const GGS_repeatInstructionForGrammarAnalysis temp_1 = this ;
      extensionSetter_appendRow (ioArgument_ioRowList, GGS_string ("[nonterminal] {RS").add_operation (temp_1.readProperty_mRepeatBranchList ().getter_count (SOURCE_FILE ("production-rules-in-tex.galgas4", 432)).getter_string (SOURCE_FILE ("production-rules-in-tex.galgas4", 432)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 432)).add_operation (GGS_string ("}"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 432)), constinArgument_inRow, ioArgument_ioColumn, var_markerStartNodeName_15336, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 431)) ;
      }
      ioArgument_ioArrows.plusAssignOperation(GGS_string ("  \\draw[->] (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 437)).add_operation (GGS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 437)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 437)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 437)).add_operation (var_markerStartNodeName_15336, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 437)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 437)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 437)) ;
      ioArgument_ioCurrentNode = var_markerStartNodeName_15336 ;
      ioArgument_ioArrowShape = GGS_string ("--") ;
      ioArgument_ioColumn.plusAssignOperation(GGS_u_33__32_ (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 440)) ;
    }
  }
  GGS_string var_returnNodeName_15684 ;
  {
  extensionSetter_appendRow (ioArgument_ioRowList, GGS_string ("[point] ()"), constinArgument_inRow, ioArgument_ioColumn, var_returnNodeName_15684, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 443)) ;
  }
  ioArgument_ioColumn.plusAssignOperation(GGS_u_33__32_ (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 444)) ;
  const GGS_repeatInstructionForGrammarAnalysis temp_2 = this ;
  GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ var_branches_15746 = temp_2.readProperty_mRepeatBranchList () ;
  GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ var_brancheZero_15858 ;
  {
  var_branches_15746.setter_removeFirst (var_brancheZero_15858, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 447)) ;
  }
  GGS_u_33__32_ var_maxUsedRowIndex_15877 = constinArgument_inRow ;
  extensionMethod_tikzNodeForSyntaxInstruction (var_brancheZero_15858, ioArgument_ioRowList, constinArgument_inRow, ioArgument_ioColumn, ioArgument_ioCurrentNode, ioArgument_ioArrowShape, ioArgument_ioArrows, var_maxUsedRowIndex_15877, constinArgument_inDebug, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 449)) ;
  GGS_u_33__32_ var_endColumn_16137 = ioArgument_ioColumn ;
  GGS_string var_startNodeName_16281 ;
  {
  extensionSetter_appendRow (ioArgument_ioRowList, GGS_string ("[point] ()"), constinArgument_inRow, ioArgument_ioColumn, var_startNodeName_16281, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 461)) ;
  }
  ioArgument_ioColumn.plusAssignOperation(GGS_u_33__32_ (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 462)) ;
  GGS_bool var_oneEmptyBranch_16384 = GGS_bool (ComparisonKind::equal, var_branches_15746.getter_count (SOURCE_FILE ("production-rules-in-tex.galgas4", 464)).objectCompare (GGS_u_33__32_ (uint32_t (1U)))) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = var_oneEmptyBranch_16384.boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ var_firstBranch_16454 = var_branches_15746.getter_first (inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 466)) ;
      var_oneEmptyBranch_16384 = GGS_bool (ComparisonKind::equal, var_firstBranch_16454.getter_count (SOURCE_FILE ("production-rules-in-tex.galgas4", 467)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))) ;
    }
  }
  GGS__5B_string_5D_ var_endingNodes_16570 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = var_oneEmptyBranch_16384.boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      var_endingNodes_16570.plusPlusAssignOperation (var_startNodeName_16281  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 472)) ;
    }
  }
  if (GalgasBool::boolFalse == test_4) {
    GGS_u_33__32_ var_nextBranchUsedRowIndex_16662 = constinArgument_inRow ;
    UpEnumerator__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ enumerator_16711 (var_branches_15746) ;
    while (enumerator_16711.hasCurrentObject ()) {
      var_nextBranchUsedRowIndex_16662.plusAssignOperation(GGS_u_33__32_ (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 476)) ;
      GGS_u_33__32_ var_branchColumn_16767 = ioArgument_ioColumn ;
      GGS_string var_currentNode_16801 = var_startNodeName_16281 ;
      GGS_string var_arrowStyle_16839 = GGS_string ("|-") ;
      extensionMethod_tikzNodeForSyntaxInstruction (enumerator_16711.current (HERE), ioArgument_ioRowList, var_nextBranchUsedRowIndex_16662, var_branchColumn_16767, var_currentNode_16801, var_arrowStyle_16839, ioArgument_ioArrows, var_nextBranchUsedRowIndex_16662, constinArgument_inDebug, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 480)) ;
      var_endingNodes_16570.plusPlusAssignOperation (var_currentNode_16801  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 490)) ;
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = GGS_bool (ComparisonKind::lowerThan, var_endColumn_16137.objectCompare (var_branchColumn_16767)).boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          var_endColumn_16137 = var_branchColumn_16767 ;
        }
      }
      enumerator_16711.gotoNextObject () ;
    }
    ioArgument_ioColumn = var_endColumn_16137 ;
    ioArgument_ioMaxUsedRowIndex = var_nextBranchUsedRowIndex_16662 ;
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = GGS_bool (ComparisonKind::lowerThan, ioArgument_ioMaxUsedRowIndex.objectCompare (var_maxUsedRowIndex_15877)).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      ioArgument_ioMaxUsedRowIndex = var_maxUsedRowIndex_15877 ;
    }
  }
  ioArgument_ioMaxUsedRowIndex.plusAssignOperation(GGS_u_33__32_ (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 502)) ;
  GGS_string var_returnUpperNodeName_17663 ;
  {
  extensionSetter_appendRow (ioArgument_ioRowList, GGS_string ("[point] ()"), ioArgument_ioMaxUsedRowIndex, ioArgument_ioColumn, var_returnUpperNodeName_17663, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 504)) ;
  }
  ioArgument_ioColumn.plusAssignOperation(GGS_u_33__32_ (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 505)) ;
  ioArgument_ioArrows.plusAssignOperation(GGS_string ("  \\draw[->] (").add_operation (var_returnUpperNodeName_17663, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 506)).add_operation (GGS_string (") -| ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 506)).add_operation (var_returnNodeName_15684, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 506)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 506)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 506)) ;
  UpEnumerator__5B_string_5D_ enumerator_17830 (var_endingNodes_16570) ;
  while (enumerator_17830.hasCurrentObject ()) {
    ioArgument_ioArrows.plusAssignOperation(GGS_string ("  \\draw[->] (").add_operation (enumerator_17830.current (HERE), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 509)).add_operation (GGS_string (") -| ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 509)).add_operation (var_returnUpperNodeName_17663, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 509)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 509)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 509)) ;
    enumerator_17830.gotoNextObject () ;
  }
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = constinArgument_inDebug.boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      GGS_string var_markerEndNodeName_18136 ;
      {
      const GGS_repeatInstructionForGrammarAnalysis temp_8 = this ;
      extensionSetter_appendRow (ioArgument_ioRowList, GGS_string ("[nonterminal] {RE").add_operation (temp_8.readProperty_mRepeatBranchList ().getter_count (SOURCE_FILE ("production-rules-in-tex.galgas4", 514)).getter_string (SOURCE_FILE ("production-rules-in-tex.galgas4", 514)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 514)).add_operation (GGS_string ("}"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 514)), constinArgument_inRow, ioArgument_ioColumn, var_markerEndNodeName_18136, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 513)) ;
      }
      ioArgument_ioColumn.plusAssignOperation(GGS_u_33__32_ (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 519)) ;
      ioArgument_ioArrows.plusAssignOperation(GGS_string ("  \\draw[->] (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 520)).add_operation (GGS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 520)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 520)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 520)).add_operation (var_markerEndNodeName_18136, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 520)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 520)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 520)) ;
      ioArgument_ioCurrentNode = var_markerEndNodeName_18136 ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@nonTerminalInstructionForGrammarAnalysis isLinear'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_nonTerminalInstructionForGrammarAnalysis::getter_isLinear (Compiler */* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ; // Returned variable
  result = GGS_bool (true) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@selectInstructionForGrammarAnalysis isLinear'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_selectInstructionForGrammarAnalysis::getter_isLinear (Compiler */* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ; // Returned variable
  result = GGS_bool (false) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@repeatInstructionForGrammarAnalysis isLinear'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_repeatInstructionForGrammarAnalysis::getter_isLinear (Compiler */* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ; // Returned variable
  result = GGS_bool (false) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalStructuredSendInstructionAST checkLexicalInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalStructuredSendInstructionAST::method_checkLexicalInstruction (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                               GGS_lexicalTagMap & /* ioArgument__5F_ioTagMap */,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexicalStructuredSendInstructionAST temp_0 = this ;
  UpEnumerator__5B_lexicalSendSearchAST_5D_ enumerator_3198 (temp_0.readProperty_mLexicalSendSearchList ()) ;
  while (enumerator_3198.hasCurrentObject ()) {
    {
    ioArgument_ioLexiqueAnalysisContext.mProperty_mLexicalTokenListMap.setter_setMShouldBeGeneratedForKey (GGS_bool (true), enumerator_3198.current (HERE).readProperty_mSearchListName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 71)) ;
    }
    GGS_lexicalTypeEnum joker_3452 ; // Joker input parameter
    ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalAttributeMap ().method_searchKey (enumerator_3198.current (HERE).readProperty_mAttributeName (), joker_3452, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 72)) ;
    enumerator_3198.gotoNextObject () ;
  }
  const GGS_lexicalStructuredSendInstructionAST temp_1 = this ;
  callExtensionMethod_checkLexicalDefaultAction ((cPtr_lexicalSendDefaultActionAST *) temp_1.readProperty_mLexicalSendDefaultAction ().ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 74)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalStructuredSendInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalStructuredSendInstructionAST::getter_generateSwiftCocoaInstructionCode (const GGS_string constinArgument_inScannerClassName,
                                                                                               const GGS_lexiqueAnalysisContext /* constinArgument__5F_inLexiqueAnalysisContext */,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  result = GGS_string::makeEmptyString () ;
  const GGS_lexicalStructuredSendInstructionAST temp_0 = this ;
  UpEnumerator__5B_lexicalSendSearchAST_5D_ enumerator_3901 (temp_0.readProperty_mLexicalSendSearchList ()) ;
  while (enumerator_3901.hasCurrentObject ()) {
    result.plusAssignOperation(GGS_string ("if (tokenCode == 0) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 83)) ;
    result.plusAssignOperation(GGS_string ("  tokenCode = search_into_").add_operation (constinArgument_inScannerClassName.getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 84)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 84)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 84)) ;
    result.plusAssignOperation(GGS_string ("_").add_operation (enumerator_3901.current (HERE).readProperty_mSearchListName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 85)).add_operation (GGS_string (" (mLexicalAttribute_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 85)).add_operation (enumerator_3901.current (HERE).readProperty_mAttributeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 85)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 85)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 85)) ;
    result.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 86)) ;
    enumerator_3901.gotoNextObject () ;
  }
  result.plusAssignOperation(GGS_string ("if tokenCode == 0 {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 88)) ;
  const GGS_lexicalStructuredSendInstructionAST temp_1 = this ;
  result.plusAssignOperation(GGS_string ("  ").add_operation (callExtensionGetter_generateSwiftCocoaDefaultSendCode ((const cPtr_lexicalSendDefaultActionAST *) temp_1.readProperty_mLexicalSendDefaultAction ().ptr (), constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 89)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 89)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 89)) ;
  result.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 90)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalStructuredSendInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_lexicalStructuredSendInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler */* inCompiler */
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ; // Returned variable
  result = GGS_bool (false) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalStructuredSendInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalStructuredSendInstructionAST::getter_generateLexicalInstructionCode (const GGS_string constinArgument_inScannerClassName,
                                                                                            const GGS_lexiqueAnalysisContext /* constinArgument__5F_inLexiqueAnalysisContext */,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  result = GGS_string::makeEmptyString () ;
  const GGS_lexicalStructuredSendInstructionAST temp_0 = this ;
  UpEnumerator__5B_lexicalSendSearchAST_5D_ enumerator_4924 (temp_0.readProperty_mLexicalSendSearchList ()) ;
  while (enumerator_4924.hasCurrentObject ()) {
    result.plusAssignOperation(GGS_string ("if (token.mTokenCode == -1) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 106)) ;
    result.plusAssignOperation(GGS_string ("  token.mTokenCode = search_into_").add_operation (enumerator_4924.current (HERE).readProperty_mSearchListName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 107)).add_operation (GGS_string (" (token.mLexicalAttribute_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 107)).add_operation (enumerator_4924.current (HERE).readProperty_mAttributeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 107)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 107)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 107)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 107)) ;
    result.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 108)) ;
    enumerator_4924.gotoNextObject () ;
  }
  result.plusAssignOperation(GGS_string ("if (token.mTokenCode == -1) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 110)) ;
  const GGS_lexicalStructuredSendInstructionAST temp_1 = this ;
  result.plusAssignOperation(GGS_string ("  ").add_operation (callExtensionGetter_generateDefaultSendCode ((const cPtr_lexicalSendDefaultActionAST *) temp_1.readProperty_mLexicalSendDefaultAction ().ptr (), constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 111)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 111)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 111)) ;
  result.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 112)) ;
  result.plusAssignOperation(GGS_string ("enterToken (token) ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 113)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalAttributeInputOutputArgumentAST generateSwiftCocoaRoutineArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalAttributeInputOutputArgumentAST::getter_generateSwiftCocoaRoutineArgument (const GGS_lexiqueAnalysisContext /* constinArgument__5F_inLexiqueAnalysisContext */,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_lexicalAttributeInputOutputArgumentAST temp_0 = this ;
  result = GGS_string ("&self.mLexicalAttribute_").add_operation (temp_0.readProperty_mAttributeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 102)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalAttributeInputOutputArgumentAST checkLexicalRoutineCallArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalAttributeInputOutputArgumentAST::method_checkLexicalRoutineCallArgument (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                          const GGS_lexicalArgumentModeAST constinArgument_inLexicalRoutineFormalArgumentMode,
                                                                                          const GGS_lexicalTypeEnum constinArgument_inLexicalRoutineFormalArgumentType,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalTypeEnum var_attributeLexicalType_5033 ;
  const GGS_lexicalAttributeInputOutputArgumentAST temp_0 = this ;
  ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalAttributeMap ().method_searchKey (temp_0.readProperty_mAttributeName (), var_attributeLexicalType_5033, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 111)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_attributeLexicalType_5033.objectCompare (constinArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_lexicalAttributeInputOutputArgumentAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAttributeName ().readProperty_location (), GGS_string ("type error, attribute type is @").add_operation (extensionGetter_lexicalTypeBaseName (var_attributeLexicalType_5033, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 118)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 117)).add_operation (GGS_string (" type, but lexical routine prototype requires @"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 118)).add_operation (extensionGetter_lexicalTypeBaseName (constinArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 120)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 119)).add_operation (GGS_string (" type"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 120)), fixItArray3  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 117)) ;
    }
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::notEqual, constinArgument_inLexicalRoutineFormalArgumentMode.objectCompare (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 125)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_lexicalAttributeInputOutputArgumentAST temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mActualPassingModeLocation (), GGS_string ("the output mode (!) is required here, not an output/input mode"), fixItArray6  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 126)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalAttributeInputOutputArgumentAST generateRoutineArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalAttributeInputOutputArgumentAST::getter_generateRoutineArgument (Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_lexicalAttributeInputOutputArgumentAST temp_0 = this ;
  result = GGS_string ("token.mLexicalAttribute_").add_operation (temp_0.readProperty_mAttributeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 133)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 133)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalFormalInputArgumentAST generateSwiftCocoaRoutineArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalFormalInputArgumentAST::getter_generateSwiftCocoaRoutineArgument (const GGS_lexiqueAnalysisContext /* constinArgument__5F_inLexiqueAnalysisContext */,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_lexicalFormalInputArgumentAST temp_0 = this ;
  result = callExtensionGetter_generateSwiftCocoaRoutineOrFunctionArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) temp_0.readProperty_mRoutineOrFunctionFormalInputArgument ().ptr (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 148)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalFormalInputArgumentAST checkLexicalRoutineCallArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalFormalInputArgumentAST::method_checkLexicalRoutineCallArgument (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                 const GGS_lexicalArgumentModeAST constinArgument_inLexicalRoutineFormalArgumentMode,
                                                                                 const GGS_lexicalTypeEnum constinArgument_inLexicalRoutineFormalArgumentType,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexicalFormalInputArgumentAST temp_0 = this ;
  callExtensionMethod_checkLexicalRoutineCallArgument ((cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) temp_0.readProperty_mRoutineOrFunctionFormalInputArgument ().ptr (), ioArgument_ioLexiqueAnalysisContext, constinArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 157)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, constinArgument_inLexicalRoutineFormalArgumentMode.objectCompare (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 162)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_lexicalFormalInputArgumentAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mActualPassingModeLocation (), GGS_string ("the output/input mode (!\?) is required here, not an input mode"), fixItArray3  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 163)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalFormalInputArgumentAST generateRoutineArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalFormalInputArgumentAST::getter_generateRoutineArgument (Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_lexicalFormalInputArgumentAST temp_0 = this ;
  result = callExtensionGetter_generateRoutineOrFunctionArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) temp_0.readProperty_mRoutineOrFunctionFormalInputArgument ().ptr (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 170)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalRoutineCallInstructionAST checkLexicalInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalRoutineCallInstructionAST::method_checkLexicalInstruction (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                            GGS_lexicalTagMap & /* ioArgument__5F_ioTagMap */,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_lexicalRoutineFormalArgumentAST_5D_ var_lexicalRoutineFormalArgumentList_8545 ;
  GGS__5B_string_5D_ var_routineErrorMessageList_8590 ;
  const GGS_lexicalRoutineCallInstructionAST temp_0 = this ;
  GGS_bool joker_8621 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalRoutineMessageMap ().method_searchKey (temp_0.readProperty_mRoutineName (), var_lexicalRoutineFormalArgumentList_8545, var_routineErrorMessageList_8590, joker_8621, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 188)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_lexicalRoutineCallInstructionAST temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::notEqual, var_lexicalRoutineFormalArgumentList_8545.getter_count (SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 195)).objectCompare (temp_2.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 195)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_lexicalRoutineCallInstructionAST temp_3 = this ;
      const GGS_lexicalRoutineCallInstructionAST temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mRoutineName ().readProperty_location (), GGS_string ("this lexical routine call names ").add_operation (temp_4.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 197)).getter_string (SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 197)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 196)).add_operation (GGS_string (" actual argument(s), but the lexical routine prototype requires "), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 197)).add_operation (var_lexicalRoutineFormalArgumentList_8545.getter_count (SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 199)).getter_string (SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 198)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 198)).add_operation (GGS_string (" actual argument(s)"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 199)), fixItArray5  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 196)) ;
    }
  }
  const GGS_lexicalRoutineCallInstructionAST temp_6 = this ;
  UpEnumerator__5B_lexicalRoutineFormalArgumentAST_5D_ enumerator_9099 (var_lexicalRoutineFormalArgumentList_8545) ;
  UpEnumerator__5B_abstractLexicalRoutineActualArgumentAST_5D_ enumerator_9148 (temp_6.readProperty_mActualArgumentList ()) ;
  while (enumerator_9099.hasCurrentObject () && enumerator_9148.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalRoutineCallArgument ((cPtr_abstractLexicalRoutineActualArgumentAST *) enumerator_9148.current (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, enumerator_9099.current (HERE).readProperty_mLexicalFormalArgumentMode (), enumerator_9099.current (HERE).readProperty_mLexicalFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 204)) ;
    enumerator_9099.gotoNextObject () ;
    enumerator_9148.gotoNextObject () ;
  }
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    const GGS_lexicalRoutineCallInstructionAST temp_8 = this ;
    test_7 = GGS_bool (ComparisonKind::notEqual, var_routineErrorMessageList_8590.getter_count (SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 211)).objectCompare (temp_8.readProperty_mErrorMessageList ().getter_count (SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 211)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      const GGS_lexicalRoutineCallInstructionAST temp_9 = this ;
      const GGS_lexicalRoutineCallInstructionAST temp_10 = this ;
      GenericArray <FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mRoutineName ().readProperty_location (), GGS_string ("this lexical routine call names ").add_operation (temp_10.readProperty_mErrorMessageList ().getter_count (SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 213)).getter_string (SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 213)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 212)).add_operation (GGS_string (" error message(s), but the lexical routine prototype requires "), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 213)).add_operation (var_routineErrorMessageList_8590.getter_count (SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 215)).getter_string (SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 215)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 214)).add_operation (GGS_string (" error message(s)"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 215)), fixItArray11  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 212)) ;
    }
  }
  const GGS_lexicalRoutineCallInstructionAST temp_12 = this ;
  UpEnumerator__5B_lstring_5D_ enumerator_9799 (temp_12.readProperty_mErrorMessageList ()) ;
  while (enumerator_9799.hasCurrentObject ()) {
    GGS_lexicalMessageMap_2E_element var_entry_9830 = ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalMessageMap ().readSubcript__3F_searchKey (enumerator_9799.current (HERE), inCompiler COMMA_HERE) ;
    var_entry_9830.mProperty_mMessageIsUsed = GGS_bool (true) ;
    {
    ioArgument_ioLexiqueAnalysisContext.mProperty_mLexicalMessageMap.setter_replaceKey (var_entry_9830, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 222)) ;
    }
    enumerator_9799.gotoNextObject () ;
  }
}

