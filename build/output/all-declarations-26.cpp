#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-26.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalTypeInExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_literalTypeInExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  {
  const GALGAS_literalTypeInExpressionAST temp_0 = this ;
  GALGAS_unifiedTypeMapEntry joker_2067 ; // Joker input parameter
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_mLiteralTypeName (), joker_2067, inCompiler COMMA_SOURCE_FILE ("expression-literal-type.galgas", 50)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalTypeInExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_literalTypeInExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_literalTypeInExpressionAST temp_0 = this ;
  GALGAS_lstring var_usefulnessName_2568 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mLiteralTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-literal-type.galgas", 63)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_2568 COMMA_SOURCE_FILE ("expression-literal-type.galgas", 64)) ;
  }
  const GALGAS_literalTypeInExpressionAST temp_1 = this ;
  GALGAS_unifiedTypeMapEntry var_type_2724 = extensionGetter_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), temp_1.readProperty_mLiteralTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-literal-type.galgas", 66)) ;
  const GALGAS_literalTypeInExpressionAST temp_2 = this ;
  outArgument_outExpression = GALGAS_literalTypeInExpressionForGeneration::constructor_new (extensionGetter_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), GALGAS_lstring::constructor_new (GALGAS_string ("type"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-literal-type.galgas", 68))  COMMA_SOURCE_FILE ("expression-literal-type.galgas", 68)), inCompiler COMMA_SOURCE_FILE ("expression-literal-type.galgas", 68)), temp_2.readProperty_mLiteralTypeName ().readProperty_location (), var_type_2724  COMMA_SOURCE_FILE ("expression-literal-type.galgas", 67)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalTypeInExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_literalTypeInExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                           GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                           GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                           GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                           GALGAS_string & outArgument_outCppExpression,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_literalTypeInExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLiteralType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-literal-type.galgas", 91)) ;
  const GALGAS_literalTypeInExpressionForGeneration temp_1 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_type (& kTypeDescriptor_GALGAS_").add_operation (extensionGetter_definition (temp_1.readProperty_mLiteralType (), inCompiler COMMA_SOURCE_FILE ("expression-literal-type.galgas", 93)).readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("expression-literal-type.galgas", 93)), inCompiler COMMA_SOURCE_FILE ("expression-literal-type.galgas", 92)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-literal-type.galgas", 93)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@collectionValueAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_collectionValueAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_collectionValueAST temp_0 = this ;
  cEnumerator_collectionValueElementList enumerator_5482 (temp_0.readProperty_mElementList (), kENUMERATION_UP) ;
  while (enumerator_5482.hasCurrentObject ()) {
    callExtensionMethod_enterInSemanticContext ((const cPtr_abstractCollectionValueElement *) enumerator_5482.current_mElement (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 145)) ;
    enumerator_5482.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@collectionValueAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_collectionValueAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                const GALGAS_unifiedTypeMapEntry constinArgument_inType,
                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMapEntry var_targetType_6067 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_collectionValueAST temp_1 = this ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_targetType_6067 = constinArgument_inType ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_collectionValueAST temp_2 = this ;
    var_targetType_6067 = extensionGetter_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 163)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (kIsEqual, var_targetType_6067.objectCompare (GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("expression-collection-value.galgas", 166)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_collectionValueAST temp_4 = this ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("Cannot infer type"), fixItArray5  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 167)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_3) {
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = extensionGetter_definition (var_targetType_6067, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 168)).readProperty_mSupportCollectionValue ().operator_not (SOURCE_FILE ("expression-collection-value.galgas", 168)).boolEnum () ;
      if (kBoolTrue == test_6) {
        const GALGAS_collectionValueAST temp_7 = this ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("the @").add_operation (extensionGetter_definition (var_targetType_6067, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 169)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 169)).add_operation (GALGAS_string (" type does not support collection value"), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 169)), fixItArray8  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 169)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_6) {
      const GALGAS_collectionValueAST temp_9 = this ;
      GALGAS_lstring var_usefulnessName_6562 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (extensionGetter_definition (var_targetType_6067, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 171)).readProperty_mTypeName ().readProperty_string (), temp_9.readProperty_mEndOfCollectionValue ()  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 171)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_6562 COMMA_SOURCE_FILE ("expression-collection-value.galgas", 172)) ;
      }
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        const GALGAS_collectionValueAST temp_11 = this ;
        test_10 = GALGAS_bool (kIsEqual, temp_11.readProperty_mElementList ().getter_length (SOURCE_FILE ("expression-collection-value.galgas", 173)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 173)).getter_uint (inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 173)))).boolEnum () ;
        if (kBoolTrue == test_10) {
          const GALGAS_collectionValueAST temp_12 = this ;
          outArgument_outExpression = GALGAS_defaultConstructorExpressionForGeneration::constructor_new (var_targetType_6067, temp_12.readProperty_mTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 174)) ;
        }
      }
      if (kBoolFalse == test_10) {
        GALGAS_collectionValueElementListForGeneration var_collectionValueElementListForGeneration_7035 = GALGAS_collectionValueElementListForGeneration::constructor_emptyList (SOURCE_FILE ("expression-collection-value.galgas", 179)) ;
        const GALGAS_collectionValueAST temp_13 = this ;
        cEnumerator_collectionValueElementList enumerator_7060 (temp_13.readProperty_mElementList (), kENUMERATION_UP) ;
        while (enumerator_7060.hasCurrentObject ()) {
          callExtensionMethod_analyze ((const cPtr_abstractCollectionValueElement *) enumerator_7060.current_mElement (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_targetType_6067, ioArgument_ioVariableMap, var_collectionValueElementListForGeneration_7035, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 181)) ;
          enumerator_7060.gotoNextObject () ;
        }
        const GALGAS_collectionValueAST temp_14 = this ;
        outArgument_outExpression = GALGAS_expressionCollectionForGeneration::constructor_new (var_targetType_6067, temp_14.readProperty_mEndOfCollectionValue (), var_collectionValueElementListForGeneration_7035  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 190)) ;
      }
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@expressionCollectionValue enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_expressionCollectionValue::method_enterInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_expressionCollectionValue temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 207)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@expressionListCollectionValue enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_expressionListCollectionValue::method_enterInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_expressionListCollectionValue temp_0 = this ;
  extensionMethod_enterInSemanticContext (temp_0.readProperty_mExpressionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 213)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@expressionCollectionValue analyze'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_expressionCollectionValue::method_analyze (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                     const GALGAS_unifiedTypeMapEntry constinArgument_inElementType,
                                                     GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                     GALGAS_collectionValueElementListForGeneration & ioArgument_ioCollectionValueElementListForGeneration,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration var_expression_9510 ;
  const GALGAS_expressionCollectionValue temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inElementType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_9510, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 236)) ;
  {
  const GALGAS_expressionCollectionValue temp_1 = this ;
  routine_checkAssignmentTypeWithImplicitGetterCall (constinArgument_inElementType, var_expression_9510.readProperty_mResultType (), temp_1.readProperty_mExpressionLocation (), var_expression_9510, inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 245)) ;
  }
  const GALGAS_expressionCollectionValue temp_2 = this ;
  ioArgument_ioCollectionValueElementListForGeneration.addAssign_operation (GALGAS_expressionCollectionValueForGeneration::constructor_new (temp_2.readProperty_mExpressionLocation (), var_expression_9510  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 247))  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 247)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@expressionListCollectionValue analyze'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_expressionListCollectionValue::method_analyze (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                         GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                         const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                         const GALGAS_unifiedTypeMapEntry constinArgument_inElementType,
                                                         GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                         GALGAS_collectionValueElementListForGeneration & ioArgument_ioCollectionValueElementListForGeneration,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_functionSignature var_formalParameterTypeList_10345 = extensionGetter_definition (constinArgument_inElementType, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 259)).readProperty_mAddAssignOperatorArguments () ;
  GALGAS_semanticExpressionListForGeneration var_semanticExpressionListForGeneration_10481 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_expressionListCollectionValue temp_1 = this ;
    test_0 = GALGAS_bool (kIsNotEqual, var_formalParameterTypeList_10345.getter_length (SOURCE_FILE ("expression-collection-value.galgas", 261)).objectCompare (temp_1.readProperty_mExpressionList ().getter_length (SOURCE_FILE ("expression-collection-value.galgas", 261)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_expressionListCollectionValue temp_2 = this ;
      const GALGAS_expressionListCollectionValue temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mEndOfExpressionLocation (), GALGAS_string ("element of of '@").add_operation (extensionGetter_definition (constinArgument_inElementType, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 262)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 262)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 262)).add_operation (var_formalParameterTypeList_10345.getter_length (SOURCE_FILE ("expression-collection-value.galgas", 263)).getter_string (SOURCE_FILE ("expression-collection-value.galgas", 262)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 262)).add_operation (GALGAS_string (" parameter(s), while this list has "), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 263)).add_operation (temp_3.readProperty_mExpressionList ().getter_length (SOURCE_FILE ("expression-collection-value.galgas", 264)).getter_string (SOURCE_FILE ("expression-collection-value.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 263)).add_operation (GALGAS_string (" element(s)"), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 264)), fixItArray4  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 262)) ;
      var_semanticExpressionListForGeneration_10481.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    var_semanticExpressionListForGeneration_10481 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("expression-collection-value.galgas", 266)) ;
    const GALGAS_expressionListCollectionValue temp_5 = this ;
    cEnumerator_actualOutputExpressionList enumerator_10980 (temp_5.readProperty_mExpressionList (), kENUMERATION_UP) ;
    cEnumerator_functionSignature enumerator_11020 (var_formalParameterTypeList_10345, kENUMERATION_UP) ;
    while (enumerator_10980.hasCurrentObject () && enumerator_11020.hasCurrentObject ()) {
      GALGAS_semanticExpressionForGeneration var_exp_11318 ;
      callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_10980.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_11020.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_exp_11318, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 268)) ;
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = GALGAS_bool (kIsNotEqual, enumerator_11020.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_10980.current (HERE).readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          GALGAS_string temp_7 ;
          const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, enumerator_11020.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_8) {
            temp_7 = enumerator_11020.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 277)) ;
          }else if (kBoolFalse == test_8) {
            temp_7 = GALGAS_string::makeEmptyString () ;
          }
          GALGAS_string var_s_11422 = GALGAS_string ("!").add_operation (temp_7, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 277)) ;
          TC_Array <C_FixItDescription> fixItArray9 ;
          appendFixItActions (fixItArray9, kFixItReplace, var_s_11422) ;
          inCompiler->emitSemanticError (enumerator_10980.current (HERE).readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_11422, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 278)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 278)), fixItArray9  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 278)) ;
        }
      }
      {
      const GALGAS_expressionListCollectionValue temp_10 = this ;
      routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_11020.current_mFormalArgumentType (HERE), var_exp_11318.readProperty_mResultType (), temp_10.readProperty_mEndOfExpressionLocation (), var_exp_11318, inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 282)) ;
      }
      var_semanticExpressionListForGeneration_10481.addAssign_operation (var_exp_11318  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 283)) ;
      enumerator_10980.gotoNextObject () ;
      enumerator_11020.gotoNextObject () ;
    }
    const GALGAS_expressionListCollectionValue temp_11 = this ;
    ioArgument_ioCollectionValueElementListForGeneration.addAssign_operation (GALGAS_expressionListCollectionForGeneration::constructor_new (temp_11.readProperty_mEndOfExpressionLocation (), var_semanticExpressionListForGeneration_10481  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 285))  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 285)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@expressionCollectionValueForGeneration generateCollectionElementCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_expressionCollectionValueForGeneration::method_generateCollectionElementCode (const GALGAS_unifiedTypeMapEntry /* constinArgument_inTargetType */,
                                                                                        GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                        GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                        GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                        GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                        const GALGAS_string constinArgument_inCppTargetVar,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string var_sourceVar_14054 ;
  const GALGAS_expressionCollectionValueForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_14054, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 330)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(constinArgument_inCppTargetVar, inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 337)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".plusAssign_operation (").add_operation (var_sourceVar_14054, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 338)), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 338)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 339)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 339)), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 339)) ;
  const GALGAS_expressionCollectionValueForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_1.readProperty_mExpressionLocation (), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 340)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 340)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 340)), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 340)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 341)) COMMA_SOURCE_FILE ("expression-collection-value.galgas", 341)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@expressionListCollectionForGeneration generateCollectionElementCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_expressionListCollectionForGeneration::method_generateCollectionElementCode (const GALGAS_unifiedTypeMapEntry constinArgument_inTargetType,
                                                                                       GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                       GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                       GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                       GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                       const GALGAS_string constinArgument_inCppTargetVar,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_stringlist var_parameterList_15083 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("expression-collection-value.galgas", 360)) ;
  const GALGAS_expressionListCollectionForGeneration temp_0 = this ;
  cEnumerator_semanticExpressionListForGeneration enumerator_15119 (temp_0.readProperty_mExpressionList (), kENUMERATION_UP) ;
  while (enumerator_15119.hasCurrentObject ()) {
    GALGAS_string var_parameter_15327 ;
    callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_15119.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_15327, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 362)) ;
    var_parameterList_15083.addAssign_operation (var_parameter_15327  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 369)) ;
    enumerator_15119.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(constinArgument_inCppTargetVar, inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 372)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".addAssign_operation ("), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 374)) ;
  cEnumerator_stringlist enumerator_15518 (var_parameterList_15083, kENUMERATION_UP) ;
  while (enumerator_15518.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_15518.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 376)) ;
    if (enumerator_15518.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 377)) ;
    }
    enumerator_15518.gotoNextObject () ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 379)).readProperty_mHandledOperatorFlags ().getter_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("expression-collection-value.galgas", 379)).boolEnum () ;
    if (kBoolTrue == test_1) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 380)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 380)), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 380)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 381)) COMMA_SOURCE_FILE ("expression-collection-value.galgas", 381)) ;
      }
    }
  }
  const GALGAS_expressionListCollectionForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_2.readProperty_mExpressionLocation (), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 383)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 383)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 383)), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 383)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@expressionCollectionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_expressionCollectionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                        GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                        GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                        GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                        GALGAS_string & outArgument_outCppExpression,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_expressionCollectionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 401)) ;
  outArgument_outCppExpression = GALGAS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-collection-value.galgas", 403)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 403)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 404)) ;
  const GALGAS_expressionCollectionForGeneration temp_1 = this ;
  const GALGAS_expressionCollectionForGeneration temp_2 = this ;
  const GALGAS_expressionCollectionForGeneration temp_3 = this ;
  const GALGAS_expressionCollectionForGeneration temp_4 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_1.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 406)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 406)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 406)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 406)).add_operation (GALGAS_string (" = GALGAS_"), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 406)).add_operation (extensionGetter_identifierRepresentation (temp_2.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 407)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 407)).add_operation (GALGAS_string ("::constructor_"), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 407)).add_operation (extensionGetter_definition (temp_3.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 407)).readProperty_mDefaultConstructorName ().getter_identifierRepresentation (SOURCE_FILE ("expression-collection-value.galgas", 407)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 407)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 407)).add_operation (extensionGetter_sourceFile (temp_4.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 407)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 407)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 407)), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 406)) ;
  const GALGAS_expressionCollectionForGeneration temp_5 = this ;
  cEnumerator_collectionValueElementListForGeneration enumerator_17152 (temp_5.readProperty_mElementList (), kENUMERATION_UP) ;
  while (enumerator_17152.hasCurrentObject ()) {
    const GALGAS_expressionCollectionForGeneration temp_6 = this ;
    callExtensionMethod_generateCollectionElementCode ((const cPtr_abstractCollectionValueElementForGeneration *) enumerator_17152.current_mElement (HERE).ptr (), temp_6.readProperty_mResultType (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 410)) ;
    enumerator_17152.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfInExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_selfInExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfInExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_selfInExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                 GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                 const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                 GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMapEntry var_selfType_2498 ;
    GALGAS_bool var_unused_0_2502 ;
    GALGAS_bool var_unused_1_2502 ;
    const bool optionalResult2478 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_2498, var_unused_0_2502, var_unused_1_2502) ;
    if (!optionalResult2478) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      GALGAS_string var_selfCppName_2536 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName () ;
      const GALGAS_selfInExpressionAST temp_1 = this ;
      outArgument_outExpression = GALGAS_selfInExpressionForGeneration::constructor_new (var_selfType_2498, temp_1.readProperty_mSelfLocation (), var_selfCppName_2536  COMMA_SOURCE_FILE ("expression-self.galgas", 62)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfInExpressionAST temp_2 = this ;
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (temp_2.readProperty_mSelfLocation (), GALGAS_string ("'self' not available in this context"), fixItArray3  COMMA_SOURCE_FILE ("expression-self.galgas", 64)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfInExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_selfInExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                    GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                    GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                    GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                    GALGAS_string & outArgument_outCppExpression,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  outArgument_outCppExpression = GALGAS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-self.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("expression-self.galgas", 84)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-self.galgas", 85)) ;
  const GALGAS_selfInExpressionForGeneration temp_0 = this ;
  const GALGAS_selfInExpressionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_0.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-self.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("expression-self.galgas", 86)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-self.galgas", 86)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("expression-self.galgas", 86)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-self.galgas", 86)).add_operation (temp_1.readProperty_mSelfCppName (), inCompiler COMMA_SOURCE_FILE ("expression-self.galgas", 86)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-self.galgas", 86)), inCompiler  COMMA_SOURCE_FILE ("expression-self.galgas", 86)) ;
  {
  const GALGAS_selfInExpressionForGeneration temp_2 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_2.readProperty_mSelfCppName () COMMA_SOURCE_FILE ("expression-self.galgas", 87)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structPropertyAccessExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_structPropertyAccessExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structPropertyAccessExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_structPropertyAccessExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                               const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration var_expression_3124 ;
  const GALGAS_structPropertyAccessExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("expression-property-access.galgas", 75)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_3124, inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 72)) ;
  GALGAS_unifiedTypeMapEntry var_expressionType_3207 = var_expression_3124.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_definition (var_expressionType_3207, inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 82)).readProperty_mTypeKindEnum ().getter_isStructType (SOURCE_FILE ("expression-property-access.galgas", 82)).operator_not (SOURCE_FILE ("expression-property-access.galgas", 82)).operator_and (extensionGetter_definition (var_expressionType_3207, inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 82)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("expression-property-access.galgas", 82)).operator_not (SOURCE_FILE ("expression-property-access.galgas", 82)) COMMA_SOURCE_FILE ("expression-property-access.galgas", 82)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_structPropertyAccessExpressionAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mPropertyName ().readProperty_location (), GALGAS_string ("the '.' operator requires the receiver to be a struct or a class"), fixItArray3  COMMA_SOURCE_FILE ("expression-property-access.galgas", 83)) ;
    }
  }
  GALGAS_propertyMap var_propertyMap_3490 = extensionGetter_definition (var_expressionType_3207, inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 85)).readProperty_mPropertyMap () ;
  GALGAS_bool var_isPublic_3592 ;
  GALGAS_unifiedTypeMapEntry var_type_3605 ;
  const GALGAS_structPropertyAccessExpressionAST temp_4 = this ;
  GALGAS_bool joker_3594 ; // Joker input parameter
  var_propertyMap_3490.method_searchKey (temp_4.readProperty_mPropertyName (), var_isPublic_3592, joker_3594, var_type_3605, inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 86)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = var_isPublic_3592.boolEnum () ;
    if (kBoolTrue == test_5) {
    }
  }
  if (kBoolFalse == test_5) {
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      GALGAS_unifiedTypeMapEntry var_selfType_3704 ;
      GALGAS_bool var_unused_0_3708 ;
      GALGAS_bool var_unused_1_3708 ;
      const bool optionalResult3684 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_3704, var_unused_0_3708, var_unused_1_3708) ;
      if (!optionalResult3684) {
        test_6 = kBoolFalse ;
      }
      if (kBoolTrue == test_6) {
        test_6 = GALGAS_bool (kIsNotEqual, var_expressionType_3207.objectCompare (var_selfType_3704)).boolEnum () ;
        if (kBoolTrue == test_6) {
          const GALGAS_structPropertyAccessExpressionAST temp_7 = this ;
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (temp_7.readProperty_mPropertyName ().readProperty_location (), GALGAS_string ("inaccessible property (due to its 'private' qualifier)"), fixItArray8  COMMA_SOURCE_FILE ("expression-property-access.galgas", 90)) ;
        }
      }
    }
  }
  const GALGAS_structPropertyAccessExpressionAST temp_9 = this ;
  const GALGAS_structPropertyAccessExpressionAST temp_10 = this ;
  outArgument_outExpression = GALGAS_structPropertyAccessExpressionForGeneration::constructor_new (var_type_3605, temp_9.readProperty_mOperatorLocation (), var_expression_3124, temp_10.readProperty_mPropertyName ().readProperty_string ()  COMMA_SOURCE_FILE ("expression-property-access.galgas", 93)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structPropertyAccessExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_structPropertyAccessExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                  GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                  GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                  GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                  GALGAS_string & outArgument_outCppExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_structPropertyAccessExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 118)) ;
  GALGAS_string var_operand_5079 ;
  const GALGAS_structPropertyAccessExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_5079, inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 120)) ;
  const GALGAS_structPropertyAccessExpressionForGeneration temp_2 = this ;
  outArgument_outCppExpression = var_operand_5079.add_operation (GALGAS_string (".readProperty_"), inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 128)).add_operation (temp_2.readProperty_mStructFieldName ().getter_identifierRepresentation (SOURCE_FILE ("expression-property-access.galgas", 128)), inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 128)).add_operation (GALGAS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 128)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@notExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_notExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_notExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 53)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@notExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_notExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                              GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                              const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                              GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                              GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration var_expression_2921 ;
  const GALGAS_notExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("expression-not.galgas", 69)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_2921, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 66)) ;
  GALGAS_unifiedTypeMapEntry var_type_2990 = var_expression_2921.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (var_expression_2921.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_trueExpressionForGeneration).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_notExpressionAST temp_2 = this ;
      outArgument_outExpression = GALGAS_falseExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_2.readProperty_mOperatorLocation ()  COMMA_SOURCE_FILE ("expression-not.galgas", 77)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (var_expression_2921.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_falseExpressionForGeneration).boolEnum () ;
      if (kBoolTrue == test_3) {
        const GALGAS_notExpressionAST temp_4 = this ;
        outArgument_outExpression = GALGAS_trueExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_4.readProperty_mOperatorLocation ()  COMMA_SOURCE_FILE ("expression-not.galgas", 79)) ;
      }
    }
    if (kBoolFalse == test_3) {
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = extensionGetter_definition (var_type_2990, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 80)).readProperty_mHandledOperatorFlags ().getter_prefixNotOperator (SOURCE_FILE ("expression-not.galgas", 80)).operator_not (SOURCE_FILE ("expression-not.galgas", 80)).boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_notExpressionAST temp_6 = this ;
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mOperatorLocation (), GALGAS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_2990, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 82)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 82)).add_operation (GALGAS_string ("' and does not support the 'not' operator"), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 82)), fixItArray7  COMMA_SOURCE_FILE ("expression-not.galgas", 81)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_5) {
        const GALGAS_notExpressionAST temp_8 = this ;
        outArgument_outExpression = GALGAS_notExpressionForGeneration::constructor_new (var_type_2990, temp_8.readProperty_mOperatorLocation (), var_expression_2921  COMMA_SOURCE_FILE ("expression-not.galgas", 86)) ;
      }
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@notExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_notExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                 GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                 GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                 GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                 GALGAS_string & outArgument_outCppExpression,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_notExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 110)) ;
  GALGAS_string var_operand_4754 ;
  const GALGAS_notExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_4754, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 112)) ;
  const GALGAS_notExpressionForGeneration temp_2 = this ;
  outArgument_outCppExpression = var_operand_4754.add_operation (GALGAS_string (".operator_not ("), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 114)).add_operation (extensionGetter_sourceFile (temp_2.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 114)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 114)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@tildeExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_tildeExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_tildeExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 53)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@tildeExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_tildeExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration var_expression_2960 ;
  const GALGAS_tildeExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("expression-tilde.galgas", 70)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_2960, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 67)) ;
  GALGAS_unifiedTypeMapEntry var_type_3029 = var_expression_2960.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    GALGAS_literalBigIntExpressionForGeneration var_exp_3067 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_expression_2960.ptr ())) ;
    if (NULL == var_exp_3067.ptr ()) {
      test_1 = kBoolFalse ;
    }
    if (kBoolTrue == test_1) {
      outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::constructor_new (var_exp_3067.readProperty_mResultType (), var_exp_3067.readProperty_mLocation (), var_exp_3067.readProperty_mValue ().operator_tilde (SOURCE_FILE ("expression-tilde.galgas", 81))  COMMA_SOURCE_FILE ("expression-tilde.galgas", 78)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = extensionGetter_definition (var_type_3029, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 83)).readProperty_mHandledOperatorFlags ().getter_prefixTildeOperator (SOURCE_FILE ("expression-tilde.galgas", 83)).operator_not (SOURCE_FILE ("expression-tilde.galgas", 83)).boolEnum () ;
      if (kBoolTrue == test_2) {
        const GALGAS_tildeExpressionAST temp_3 = this ;
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GALGAS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_3029, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 85)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 85)).add_operation (GALGAS_string ("' and does not support the '~' operator"), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 85)), fixItArray4  COMMA_SOURCE_FILE ("expression-tilde.galgas", 84)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_2) {
      const GALGAS_tildeExpressionAST temp_5 = this ;
      outArgument_outExpression = GALGAS_tildeExpressionForGeneration::constructor_new (var_type_3029, temp_5.readProperty_mOperatorLocation (), var_expression_2960  COMMA_SOURCE_FILE ("expression-tilde.galgas", 89)) ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@tildeExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_tildeExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                   GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                   GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                   GALGAS_string & outArgument_outCppExpression,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_tildeExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 113)) ;
  GALGAS_string var_operand_4638 ;
  const GALGAS_tildeExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_4638, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 115)) ;
  const GALGAS_tildeExpressionForGeneration temp_2 = this ;
  outArgument_outCppExpression = var_operand_4638.add_operation (GALGAS_string (".operator_tilde ("), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 117)).add_operation (extensionGetter_sourceFile (temp_2.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 117)), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 117)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 117)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@bangExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_bangExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_bangExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 53)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@bangExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_bangExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                               const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                               GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration var_expression_2957 ;
  const GALGAS_bangExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("expression-bang.galgas", 70)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_2957, inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 67)) ;
  GALGAS_unifiedTypeMapEntry var_type_3026 = var_expression_2957.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    GALGAS_unifiedTypeMapEntry var_classIndex_3142 ;
    const bool optionalResult3111 = extensionGetter_definition (var_type_3026, inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 77)).readProperty_mTypeKindEnum ().optional_weakReferenceType (var_classIndex_3142) ;
    if (!optionalResult3111) {
      test_1 = kBoolFalse ;
    }
    if (kBoolTrue == test_1) {
      const GALGAS_bangExpressionAST temp_2 = this ;
      outArgument_outExpression = GALGAS_bangExpressionForGeneration::constructor_new (var_classIndex_3142, temp_2.readProperty_mOperatorLocation (), var_expression_2957, extensionGetter_definition (var_type_3026, inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 82)).readProperty_mTypeName ().readProperty_string ()  COMMA_SOURCE_FILE ("expression-bang.galgas", 78)) ;
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_bangExpressionAST temp_3 = this ;
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GALGAS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_3026, inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 86)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 86)).add_operation (GALGAS_string ("' and does not support the '\xC2""\xB0""' operator"), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 86)), fixItArray4  COMMA_SOURCE_FILE ("expression-bang.galgas", 85)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@bangExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_bangExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                  GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                  GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                  GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                  GALGAS_string & outArgument_outCppExpression,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_bangExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 107)) ;
  GALGAS_string var_operand_4770 ;
  const GALGAS_bangExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_4770, inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 109)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 117)) COMMA_SOURCE_FILE ("expression-bang.galgas", 117)) ;
  }
  const GALGAS_bangExpressionForGeneration temp_2 = this ;
  outArgument_outCppExpression = var_operand_4770.add_operation (GALGAS_string (".bang_"), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 118)).add_operation (temp_2.readProperty_mReceiverTypeName ().getter_identifierRepresentation (SOURCE_FILE ("expression-bang.galgas", 118)), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 118)) ;
  const GALGAS_bangExpressionForGeneration temp_3 = this ;
  outArgument_outCppExpression.plusAssign_operation(GALGAS_string (" (").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 119)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 119)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 119)), inCompiler  COMMA_SOURCE_FILE ("expression-bang.galgas", 119)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@unaryWrappingMinusExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_unaryWrappingMinusExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_unaryWrappingMinusExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 53)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@unaryWrappingMinusExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_unaryWrappingMinusExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                             GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                             GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration var_expression_2994 ;
  const GALGAS_unaryWrappingMinusExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 69)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_2994, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 66)) ;
  GALGAS_unifiedTypeMapEntry var_type_3063 = var_expression_2994.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_definition (var_type_3063, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 76)).readProperty_mHandledOperatorFlags ().getter_prefixMinusOperatorNoOVF (SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 76)).operator_not (SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 76)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_unaryWrappingMinusExpressionAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOperatorLocation (), GALGAS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_3063, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 78)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 78)).add_operation (GALGAS_string ("' and does not support the prefix minus operator"), inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 78)), fixItArray3  COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 77)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_unaryWrappingMinusExpressionAST temp_4 = this ;
    outArgument_outExpression = GALGAS_unaryWrappingMinusExpressionForGeneration::constructor_new (var_type_3063, temp_4.readProperty_mOperatorLocation (), var_expression_2994  COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 82)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@unaryWrappingMinusExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_unaryWrappingMinusExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                GALGAS_string & outArgument_outCppExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_unaryWrappingMinusExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 105)) ;
  GALGAS_string var_operand_4544 ;
  const GALGAS_unaryWrappingMinusExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_4544, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 107)) ;
  outArgument_outCppExpression = var_operand_4544.add_operation (GALGAS_string (".operator_unary_minus_no_ovf ()"), inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 115)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@orExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_orExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_orExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 144)) ;
  const GALGAS_orExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 145)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@orExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_orExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                             const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                             GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                             GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration var_leftExpression_6612 ;
  const GALGAS_orExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_6612, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 158)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_6905 ;
  const GALGAS_orExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_6612.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_6905, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 167)) ;
  GALGAS_unifiedTypeMapEntry var_leftType_6976 = var_leftExpression_6612.readProperty_mResultType () ;
  {
  const GALGAS_orExpressionAST temp_2 = this ;
  routine_checkDiadicOperator (var_leftType_6976, var_rightExpression_6905.readProperty_mResultType (), extensionGetter_definition (var_leftType_6976, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 180)).readProperty_mHandledOperatorFlags ().getter_infixOrOperator (SOURCE_FILE ("expression-or.galgas", 180)), GALGAS_string ("|"), temp_2.readProperty_mOperatorLocation (), var_rightExpression_6905, inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 177)) ;
  }
  const GALGAS_orExpressionAST temp_3 = this ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_6976, temp_3.readProperty_mOperatorLocation (), var_leftExpression_6612, GALGAS_binaryOperator::constructor_operator_5F_or (SOURCE_FILE ("expression-or.galgas", 189)), var_rightExpression_6905  COMMA_SOURCE_FILE ("expression-or.galgas", 185)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@orShortExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_orShortExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_orShortExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 199)) ;
  const GALGAS_orShortExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 200)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@orShortExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_orShortExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                  const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                  GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                  GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration var_leftExpression_8491 ;
  const GALGAS_orShortExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_8491, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 213)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_8784 ;
  const GALGAS_orShortExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_8491.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_8784, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 222)) ;
  GALGAS_unifiedTypeMapEntry var_leftType_8857 = var_leftExpression_8491.readProperty_mResultType () ;
  {
  const GALGAS_orShortExpressionAST temp_2 = this ;
  routine_checkDiadicOperator (var_leftType_8857, var_rightExpression_8784.readProperty_mResultType (), extensionGetter_definition (var_leftType_8857, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 235)).readProperty_mHandledOperatorFlags ().getter_infixOrOperator (SOURCE_FILE ("expression-or.galgas", 235)), GALGAS_string ("|"), temp_2.readProperty_mOperatorLocation (), var_rightExpression_8784, inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 232)) ;
  }
  const GALGAS_orShortExpressionAST temp_3 = this ;
  outArgument_outExpression = GALGAS_orShortExpressionForGeneration::constructor_new (var_leftType_8857, temp_3.readProperty_mOperatorLocation (), var_leftExpression_8491, var_rightExpression_8784  COMMA_SOURCE_FILE ("expression-or.galgas", 241)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@xorExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_xorExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_xorExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 253)) ;
  const GALGAS_xorExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 254)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@xorExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_xorExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                              GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                              const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                              GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                              GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration var_leftExpression_10361 ;
  const GALGAS_xorExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_10361, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 267)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_10654 ;
  const GALGAS_xorExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_10361.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_10654, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 276)) ;
  GALGAS_unifiedTypeMapEntry var_leftType_10727 = var_leftExpression_10361.readProperty_mResultType () ;
  {
  const GALGAS_xorExpressionAST temp_2 = this ;
  routine_checkDiadicOperator (var_leftType_10727, var_rightExpression_10654.readProperty_mResultType (), extensionGetter_definition (var_leftType_10727, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 289)).readProperty_mHandledOperatorFlags ().getter_infixXorOperator (SOURCE_FILE ("expression-or.galgas", 289)), GALGAS_string ("^"), temp_2.readProperty_mOperatorLocation (), var_rightExpression_10654, inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 286)) ;
  }
  const GALGAS_xorExpressionAST temp_3 = this ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_10727, temp_3.readProperty_mOperatorLocation (), var_leftExpression_10361, GALGAS_binaryOperator::constructor_operator_5F_xor (SOURCE_FILE ("expression-or.galgas", 299)), var_rightExpression_10654  COMMA_SOURCE_FILE ("expression-or.galgas", 295)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@closedSliceExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_closedSliceExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_closedSliceExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 309)) ;
  const GALGAS_closedSliceExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 310)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@closedSliceExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_closedSliceExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GALGAS_unifiedTypeMapEntry /* constinArgument_inInferenceType */,
                                                                      const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                      GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                      GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration var_leftExpression_12313 ;
  const GALGAS_closedSliceExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType (), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_12313, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 324)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_12628 ;
  const GALGAS_closedSliceExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType (), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_12628, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 333)) ;
  GALGAS_unifiedTypeMapEntry var_leftType_12701 = var_leftExpression_12313.readProperty_mResultType () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (var_leftType_12701, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 343)).readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string ("uint"))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (var_leftExpression_12313.readProperty_mLocation (), GALGAS_string ("the left expression or '...' operator should an @uint"), fixItArray3  COMMA_SOURCE_FILE ("expression-or.galgas", 344)) ;
    }
  }
  GALGAS_unifiedTypeMapEntry var_rightType_12925 = var_rightExpression_12628.readProperty_mResultType () ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (var_rightType_12925, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 347)).readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string ("uint"))).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (var_rightExpression_12628.readProperty_mLocation (), GALGAS_string ("the right expression or '...' operator should an @uint"), fixItArray5  COMMA_SOURCE_FILE ("expression-or.galgas", 348)) ;
    }
  }
  const GALGAS_closedSliceExpressionAST temp_6 = this ;
  outArgument_outExpression = GALGAS_closedSliceExpressionForGeneration::constructor_new (extensionGetter_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), GALGAS_lstring::constructor_new (GALGAS_string ("range"), var_leftExpression_12313.readProperty_mLocation ()  COMMA_SOURCE_FILE ("expression-or.galgas", 352)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 352)), temp_6.readProperty_mOperatorLocation (), var_leftExpression_12313, var_rightExpression_12628  COMMA_SOURCE_FILE ("expression-or.galgas", 351)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@openedSliceExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_openedSliceExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_openedSliceExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 364)) ;
  const GALGAS_openedSliceExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 365)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@openedSliceExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_openedSliceExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GALGAS_unifiedTypeMapEntry /* constinArgument_inInferenceType */,
                                                                      const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                      GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                      GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration var_leftExpression_14801 ;
  const GALGAS_openedSliceExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType (), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_14801, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 378)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_15116 ;
  const GALGAS_openedSliceExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType (), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_15116, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 387)) ;
  {
  routine_checkAssignmentTypeWithImplicitGetterCall (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType (), var_leftExpression_14801.readProperty_mResultType (), var_leftExpression_14801.readProperty_mLocation (), var_leftExpression_14801, inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 396)) ;
  }
  {
  routine_checkAssignmentTypeWithImplicitGetterCall (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType (), var_rightExpression_15116.readProperty_mResultType (), var_rightExpression_15116.readProperty_mLocation (), var_rightExpression_15116, inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 406)) ;
  }
  const GALGAS_openedSliceExpressionAST temp_2 = this ;
  outArgument_outExpression = GALGAS_openedSliceExpressionForGeneration::constructor_new (extensionGetter_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), GALGAS_lstring::constructor_new (GALGAS_string ("range"), var_leftExpression_14801.readProperty_mLocation ()  COMMA_SOURCE_FILE ("expression-or.galgas", 418)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 418)), temp_2.readProperty_mOperatorLocation (), var_leftExpression_14801, var_rightExpression_15116  COMMA_SOURCE_FILE ("expression-or.galgas", 417)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@orShortExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_orShortExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                     GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                     GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                     GALGAS_string & outArgument_outCppExpression,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_orShortExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLeftExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 456)) ;
  GALGAS_string var_leftTemporaryOperand_18010 ;
  const GALGAS_orShortExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_18010, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 458)) ;
  GALGAS_string var_testVar_18053 = GALGAS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-or.galgas", 466)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 466)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 467)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_bool ").add_operation (var_testVar_18053, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 468)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 468)).add_operation (var_leftTemporaryOperand_18010, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 468)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 468)), inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 468)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolTrue != ").add_operation (var_testVar_18053, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 469)).add_operation (GALGAS_string (".boolEnum ()) {\n"), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 469)), inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 469)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 471)) ;
  }
  GALGAS_string var_rightTemporaryOperand_18539 ;
  const GALGAS_orShortExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_18539, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 472)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_testVar_18053.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 479)).add_operation (var_rightTemporaryOperand_18539, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 479)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 479)), inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 479)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 480)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 481)) ;
  outArgument_outCppExpression = var_testVar_18053 ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@closedSliceExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_closedSliceExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                         GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                         GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                         GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                         GALGAS_string & outArgument_outCppExpression,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_closedSliceExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLeftExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 493)) ;
  GALGAS_string var_leftTemporaryOperand_19338 ;
  const GALGAS_closedSliceExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_19338, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 495)) ;
  GALGAS_string var_rightTemporaryOperand_19543 ;
  const GALGAS_closedSliceExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_19543, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 503)) ;
  const GALGAS_closedSliceExpressionForGeneration temp_3 = this ;
  const GALGAS_closedSliceExpressionForGeneration temp_4 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_range (").add_operation (var_leftTemporaryOperand_19338, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 512)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 512)).add_operation (var_rightTemporaryOperand_19543, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 512)).add_operation (GALGAS_string (".substract_operation ("), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 513)).add_operation (var_leftTemporaryOperand_19338, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 513)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 513)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 513)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 513)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 513)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 513)).add_operation (GALGAS_string (").add_operation (GALGAS_uint (1), "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 513)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 513)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 513)).add_operation (extensionGetter_commaSourceFile (temp_4.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 513)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 513)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 513)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@openedSliceExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_openedSliceExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                         GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                         GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                         GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                         GALGAS_string & outArgument_outCppExpression,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_openedSliceExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLeftExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 525)) ;
  GALGAS_string var_leftTemporaryOperand_20516 ;
  const GALGAS_openedSliceExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_20516, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 527)) ;
  GALGAS_string var_rightTemporaryOperand_20721 ;
  const GALGAS_openedSliceExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_20721, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 535)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 543)) COMMA_SOURCE_FILE ("expression-or.galgas", 543)) ;
  }
  const GALGAS_openedSliceExpressionForGeneration temp_3 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_range (").add_operation (var_leftTemporaryOperand_20516, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 545)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 545)).add_operation (var_rightTemporaryOperand_20721, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 545)).add_operation (GALGAS_string (".substract_operation ("), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 546)).add_operation (var_leftTemporaryOperand_20516, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 546)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 546)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 546)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 546)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 547)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 546)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 547)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@andExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_andExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_andExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 84)) ;
  const GALGAS_andExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 85)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@andExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_andExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                              GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                              const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                              GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                              GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration var_leftExpression_4277 ;
  const GALGAS_andExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_4277, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 98)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_4569 ;
  const GALGAS_andExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_4277.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_4569, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 107)) ;
  GALGAS_unifiedTypeMapEntry var_leftType_4642 = var_leftExpression_4277.readProperty_mResultType () ;
  {
  const GALGAS_andExpressionAST temp_2 = this ;
  routine_checkDiadicOperator (var_leftType_4642, var_rightExpression_4569.readProperty_mResultType (), extensionGetter_definition (var_leftType_4642, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 120)).readProperty_mHandledOperatorFlags ().getter_infixAndOperator (SOURCE_FILE ("expression-and.galgas", 120)), GALGAS_string ("&"), temp_2.readProperty_mOperatorLocation (), var_rightExpression_4569, inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 117)) ;
  }
  const GALGAS_andExpressionAST temp_3 = this ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_4642, temp_3.readProperty_mOperatorLocation (), var_leftExpression_4277, GALGAS_binaryOperator::constructor_operator_5F_and (SOURCE_FILE ("expression-and.galgas", 130)), var_rightExpression_4569  COMMA_SOURCE_FILE ("expression-and.galgas", 126)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@andShortExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_andShortExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_andShortExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 140)) ;
  const GALGAS_andShortExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 141)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@andShortExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_andShortExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                   GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                   const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                   const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                   GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                   GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration var_leftExpression_6185 ;
  const GALGAS_andShortExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_6185, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 154)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_6477 ;
  const GALGAS_andShortExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_6185.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_6477, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 163)) ;
  GALGAS_unifiedTypeMapEntry var_leftType_6550 = var_leftExpression_6185.readProperty_mResultType () ;
  {
  const GALGAS_andShortExpressionAST temp_2 = this ;
  routine_checkDiadicOperator (var_leftType_6550, var_rightExpression_6477.readProperty_mResultType (), extensionGetter_definition (var_leftType_6550, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 176)).readProperty_mHandledOperatorFlags ().getter_infixAndOperator (SOURCE_FILE ("expression-and.galgas", 176)), GALGAS_string ("&"), temp_2.readProperty_mOperatorLocation (), var_rightExpression_6477, inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 173)) ;
  }
  const GALGAS_andShortExpressionAST temp_3 = this ;
  outArgument_outExpression = GALGAS_andShortExpressionForGeneration::constructor_new (var_leftType_6550, temp_3.readProperty_mOperatorLocation (), var_leftExpression_6185, var_rightExpression_6477  COMMA_SOURCE_FILE ("expression-and.galgas", 182)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@andShortExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_andShortExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                      GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                      GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                      GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                      GALGAS_string & outArgument_outCppExpression,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_andShortExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLeftExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 206)) ;
  GALGAS_string var_leftTemporaryOperand_8052 ;
  const GALGAS_andShortExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_8052, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 208)) ;
  GALGAS_string var_testVar_8095 = GALGAS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-and.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 216)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 216)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_bool ").add_operation (var_testVar_8095, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 217)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 217)).add_operation (var_leftTemporaryOperand_8052, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 217)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 217)), inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 217)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolTrue == ").add_operation (var_testVar_8095, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 218)).add_operation (GALGAS_string (".boolEnum ()) {\n"), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 218)), inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 218)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 220)) ;
  }
  GALGAS_string var_rightTemporaryOperand_8579 ;
  const GALGAS_andShortExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_8579, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 221)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_testVar_8095.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 228)).add_operation (var_rightTemporaryOperand_8579, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 228)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 228)), inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 228)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 229)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 230)) ;
  outArgument_outCppExpression = var_testVar_8095 ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'checkAssignmentTypes'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_checkAssignmentTypes (const GALGAS_unifiedTypeMapEntry constinArgument_inTargetType,
                                   const GALGAS_unifiedTypeMapEntry constinArgument_inSourceType,
                                   const GALGAS_location constinArgument_inErrorLocation,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_sourceType_2260 = constinArgument_inSourceType ;
  GALGAS_bool var_ok_2290 = GALGAS_bool (kIsEqual, constinArgument_inTargetType.objectCompare (var_sourceType_2260)) ;
  if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 46)).isValid ()) {
    uint32_t variant_2326 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 46)).uintValue () ;
    bool loop_2326 = true ;
    while (loop_2326) {
      loop_2326 = var_ok_2290.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 46)).operator_and (extensionGetter_definition (var_sourceType_2260, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 46)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 46)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 46)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 46)).isValid () ;
      if (loop_2326) {
        loop_2326 = var_ok_2290.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 46)).operator_and (extensionGetter_definition (var_sourceType_2260, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 46)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 46)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 46)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 46)).boolValue () ;
      }
      if (loop_2326 && (0 == variant_2326)) {
        loop_2326 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 46)) ;
      }
      if (loop_2326) {
        variant_2326 -- ;
        var_sourceType_2260 = extensionGetter_definition (var_sourceType_2260, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 47)).readProperty_mSuperType () ;
        var_ok_2290 = GALGAS_bool (kIsEqual, constinArgument_inTargetType.objectCompare (var_sourceType_2260)) ;
      }
    }
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_ok_2290.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 50)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_unifiedTypeMapEntry var_targetType_2609 ;
      const bool optionalResult2578 = extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 50)).readProperty_mTypeKindEnum ().optional_weakReferenceType (var_targetType_2609) ;
      if (!optionalResult2578) {
        test_0 = kBoolFalse ;
      }
      if (kBoolTrue == test_0) {
        var_sourceType_2260 = constinArgument_inSourceType ;
        var_ok_2290 = GALGAS_bool (kIsEqual, var_targetType_2609.objectCompare (var_sourceType_2260)) ;
        if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 53)).isValid ()) {
          uint32_t variant_2688 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 53)).uintValue () ;
          bool loop_2688 = true ;
          while (loop_2688) {
            loop_2688 = var_ok_2290.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 53)).operator_and (extensionGetter_definition (var_sourceType_2260, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 53)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 53)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 53)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 53)).isValid () ;
            if (loop_2688) {
              loop_2688 = var_ok_2290.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 53)).operator_and (extensionGetter_definition (var_sourceType_2260, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 53)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 53)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 53)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 53)).boolValue () ;
            }
            if (loop_2688 && (0 == variant_2688)) {
              loop_2688 = false ;
              inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 53)) ;
            }
            if (loop_2688) {
              variant_2688 -- ;
              var_sourceType_2260 = extensionGetter_definition (var_sourceType_2260, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 54)).readProperty_mSuperType () ;
              var_ok_2290 = GALGAS_bool (kIsEqual, var_targetType_2609.objectCompare (var_sourceType_2260)) ;
            }
          }
        }
      }
    }
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_ok_2290.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 58)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("target object type is '@").add_operation (extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 60)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 60)).add_operation (GALGAS_string ("' and cannot be assigned from an '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 60)).add_operation (extensionGetter_definition (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 60)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 60)).add_operation (GALGAS_string ("' object"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 60)), fixItArray2  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 59)) ;
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'checkAssignmentTypeWithImplicitGetterCall'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_checkAssignmentTypeWithImplicitGetterCall (const GALGAS_unifiedTypeMapEntry constinArgument_inTargetType,
                                                        const GALGAS_unifiedTypeMapEntry constinArgument_inSourceType,
                                                        const GALGAS_location constinArgument_inErrorLocation,
                                                        GALGAS_semanticExpressionForGeneration & ioArgument_ioExpression,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool var_handled_3589 = GALGAS_bool (false) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_literalBigIntExpressionForGeneration var_bigIntSource_3619 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (ioArgument_ioExpression.ptr ())) ;
    if (NULL == var_bigIntSource_3619.ptr ()) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsEqual, GALGAS_string ("uint").objectCompare (extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 72)).readProperty_mTypeName ().readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_1) {
          GALGAS_bigint var_bigIntValue_3760 = var_bigIntSource_3619.readProperty_mValue () ;
          enumGalgasBool test_2 = kBoolTrue ;
          if (kBoolTrue == test_2) {
            test_2 = GALGAS_bool (kIsStrictInf, var_bigIntValue_3760.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 74)))).operator_or (GALGAS_bool (kIsSupOrEqual, var_bigIntValue_3760.objectCompare (GALGAS_bigint ("4294967296", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 74)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 74)).boolEnum () ;
            if (kBoolTrue == test_2) {
              TC_Array <C_FixItDescription> fixItArray3 ;
              inCompiler->emitSemanticError (ioArgument_ioExpression.readProperty_mLocation (), GALGAS_string ("literal value (").add_operation (var_bigIntValue_3760.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 75)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 75)).add_operation (GALGAS_string (") does not fit in an @uint"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 75)), fixItArray3  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 75)) ;
            }
          }
          ioArgument_ioExpression = GALGAS_literalUIntExpressionForGeneration::constructor_new (constinArgument_inTargetType, ioArgument_ioExpression.readProperty_mLocation (), var_bigIntValue_3760.getter_uint (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 77))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 77)) ;
          var_handled_3589 = GALGAS_bool (true) ;
        }
      }
      if (kBoolFalse == test_1) {
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = GALGAS_bool (kIsEqual, GALGAS_string ("sint").objectCompare (extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 79)).readProperty_mTypeName ().readProperty_string ())).boolEnum () ;
          if (kBoolTrue == test_4) {
            GALGAS_bigint var_bigIntValue_4180 = var_bigIntSource_3619.readProperty_mValue () ;
            enumGalgasBool test_5 = kBoolTrue ;
            if (kBoolTrue == test_5) {
              test_5 = GALGAS_bool (kIsStrictInf, var_bigIntValue_4180.objectCompare (GALGAS_bigint ("-2147483648", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 81)))).operator_or (GALGAS_bool (kIsSupOrEqual, var_bigIntValue_4180.objectCompare (GALGAS_bigint ("2147483648", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 81)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 81)).boolEnum () ;
              if (kBoolTrue == test_5) {
                TC_Array <C_FixItDescription> fixItArray6 ;
                inCompiler->emitSemanticError (ioArgument_ioExpression.readProperty_mLocation (), GALGAS_string ("literal value (").add_operation (var_bigIntValue_4180.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 82)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 82)).add_operation (GALGAS_string (") does not fit in an @sint"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 82)), fixItArray6  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 82)) ;
              }
            }
            ioArgument_ioExpression = GALGAS_literalSIntExpressionForGeneration::constructor_new (constinArgument_inTargetType, ioArgument_ioExpression.readProperty_mLocation (), var_bigIntValue_4180.getter_uint (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 84)).getter_sint (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 84))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 84)) ;
            var_handled_3589 = GALGAS_bool (true) ;
          }
        }
        if (kBoolFalse == test_4) {
          enumGalgasBool test_7 = kBoolTrue ;
          if (kBoolTrue == test_7) {
            test_7 = GALGAS_bool (kIsEqual, GALGAS_string ("uint64").objectCompare (extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 86)).readProperty_mTypeName ().readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_7) {
              GALGAS_bigint var_bigIntValue_4611 = var_bigIntSource_3619.readProperty_mValue () ;
              enumGalgasBool test_8 = kBoolTrue ;
              if (kBoolTrue == test_8) {
                test_8 = GALGAS_bool (kIsStrictInf, var_bigIntValue_4611.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 88)))).operator_or (GALGAS_bool (kIsSupOrEqual, var_bigIntValue_4611.objectCompare (GALGAS_bigint ("18446744073709551616", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 88)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 88)).boolEnum () ;
                if (kBoolTrue == test_8) {
                  TC_Array <C_FixItDescription> fixItArray9 ;
                  inCompiler->emitSemanticError (ioArgument_ioExpression.readProperty_mLocation (), GALGAS_string ("literal value (").add_operation (var_bigIntValue_4611.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 89)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 89)).add_operation (GALGAS_string (") does not fit in an @uint64"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 89)), fixItArray9  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 89)) ;
                }
              }
              ioArgument_ioExpression = GALGAS_literalUInt_36__34_ExpressionForGeneration::constructor_new (constinArgument_inTargetType, ioArgument_ioExpression.readProperty_mLocation (), var_bigIntValue_4611.getter_uint (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 91)).getter_uint_36__34_ (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 91))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 91)) ;
              var_handled_3589 = GALGAS_bool (true) ;
            }
          }
          if (kBoolFalse == test_7) {
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              test_10 = GALGAS_bool (kIsEqual, GALGAS_string ("sint64").objectCompare (extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 93)).readProperty_mTypeName ().readProperty_string ())).boolEnum () ;
              if (kBoolTrue == test_10) {
                GALGAS_bigint var_bigIntValue_5037 = var_bigIntSource_3619.readProperty_mValue () ;
                enumGalgasBool test_11 = kBoolTrue ;
                if (kBoolTrue == test_11) {
                  test_11 = GALGAS_bool (kIsStrictInf, var_bigIntValue_5037.objectCompare (GALGAS_bigint ("-9223372036854775808", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 95)))).operator_or (GALGAS_bool (kIsSupOrEqual, var_bigIntValue_5037.objectCompare (GALGAS_bigint ("9223372036854775808", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 95)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 95)).boolEnum () ;
                  if (kBoolTrue == test_11) {
                    TC_Array <C_FixItDescription> fixItArray12 ;
                    inCompiler->emitSemanticError (ioArgument_ioExpression.readProperty_mLocation (), GALGAS_string ("literal value (").add_operation (var_bigIntValue_5037.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 96)).add_operation (GALGAS_string (") does not fit in an @sint64"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 96)), fixItArray12  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 96)) ;
                  }
                }
                ioArgument_ioExpression = GALGAS_literalSInt_36__34_ExpressionForGeneration::constructor_new (constinArgument_inTargetType, ioArgument_ioExpression.readProperty_mLocation (), var_bigIntValue_5037.getter_uint (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 98)).getter_sint_36__34_ (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 98))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 98)) ;
                var_handled_3589 = GALGAS_bool (true) ;
              }
            }
          }
        }
      }
    }
  }
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    test_13 = var_handled_3589.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 102)).boolEnum () ;
    if (kBoolTrue == test_13) {
      GALGAS_unifiedTypeMapEntry var_sourceType_5463 = constinArgument_inSourceType ;
      GALGAS_bool var_ok_5495 = GALGAS_bool (kIsEqual, constinArgument_inTargetType.objectCompare (constinArgument_inSourceType)) ;
      if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 105)).isValid ()) {
        uint32_t variant_5535 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 105)).uintValue () ;
        bool loop_5535 = true ;
        while (loop_5535) {
          loop_5535 = var_ok_5495.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 105)).operator_and (extensionGetter_definition (var_sourceType_5463, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 105)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 105)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 105)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 105)).isValid () ;
          if (loop_5535) {
            loop_5535 = var_ok_5495.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 105)).operator_and (extensionGetter_definition (var_sourceType_5463, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 105)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 105)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 105)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 105)).boolValue () ;
          }
          if (loop_5535 && (0 == variant_5535)) {
            loop_5535 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 105)) ;
          }
          if (loop_5535) {
            variant_5535 -- ;
            var_sourceType_5463 = extensionGetter_definition (var_sourceType_5463, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 106)).readProperty_mSuperType () ;
            var_ok_5495 = GALGAS_bool (kIsEqual, constinArgument_inTargetType.objectCompare (var_sourceType_5463)) ;
          }
        }
      }
      enumGalgasBool test_14 = kBoolTrue ;
      if (kBoolTrue == test_14) {
        test_14 = var_ok_5495.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 109)).boolEnum () ;
        if (kBoolTrue == test_14) {
          GALGAS_unifiedTypeMapEntry var_targetType_5826 ;
          const bool optionalResult5795 = extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 109)).readProperty_mTypeKindEnum ().optional_weakReferenceType (var_targetType_5826) ;
          if (!optionalResult5795) {
            test_14 = kBoolFalse ;
          }
          if (kBoolTrue == test_14) {
            var_sourceType_5463 = constinArgument_inSourceType ;
            var_ok_5495 = GALGAS_bool (kIsEqual, var_targetType_5826.objectCompare (var_sourceType_5463)) ;
            if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 112)).isValid ()) {
              uint32_t variant_5911 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 112)).uintValue () ;
              bool loop_5911 = true ;
              while (loop_5911) {
                loop_5911 = var_ok_5495.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 112)).operator_and (extensionGetter_definition (var_sourceType_5463, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 112)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 112)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 112)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 112)).isValid () ;
                if (loop_5911) {
                  loop_5911 = var_ok_5495.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 112)).operator_and (extensionGetter_definition (var_sourceType_5463, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 112)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 112)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 112)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 112)).boolValue () ;
                }
                if (loop_5911 && (0 == variant_5911)) {
                  loop_5911 = false ;
                  inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 112)) ;
                }
                if (loop_5911) {
                  variant_5911 -- ;
                  var_sourceType_5463 = extensionGetter_definition (var_sourceType_5463, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 113)).readProperty_mSuperType () ;
                  var_ok_5495 = GALGAS_bool (kIsEqual, var_targetType_5826.objectCompare (var_sourceType_5463)) ;
                }
              }
            }
          }
        }
      }
      enumGalgasBool test_15 = kBoolTrue ;
      if (kBoolTrue == test_15) {
        test_15 = var_ok_5495.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 118)).boolEnum () ;
        if (kBoolTrue == test_15) {
          GALGAS_bool var_isPublic_6301 ;
          GALGAS_bool var_unused_0_6304 ;
          GALGAS_unifiedTypeMapEntry var_propertyType_6322 ;
          const bool optionalResult6243 = extensionGetter_definition (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 118)).readProperty_mPropertyMap ().optional_searchKey (extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 118)).readProperty_mTypeName ().readProperty_string (), var_isPublic_6301, var_unused_0_6304, var_propertyType_6322) ;
          if (!optionalResult6243) {
            test_15 = kBoolFalse ;
          }
          if (kBoolTrue == test_15) {
            enumGalgasBool test_16 = kBoolTrue ;
            if (kBoolTrue == test_16) {
              test_16 = var_isPublic_6301.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 119)).boolEnum () ;
              if (kBoolTrue == test_16) {
                TC_Array <C_FixItDescription> fixItArray17 ;
                inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray17  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 120)) ;
              }
            }
            GALGAS_structPropertyAccessExpressionForGeneration var_conversionExpression_6486 = GALGAS_structPropertyAccessExpressionForGeneration::constructor_new (var_propertyType_6322, constinArgument_inErrorLocation, ioArgument_ioExpression, extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 126)).readProperty_mTypeName ().readProperty_string ()  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 122)) ;
            ioArgument_ioExpression = var_conversionExpression_6486 ;
            var_ok_5495 = GALGAS_bool (kIsEqual, var_propertyType_6322.objectCompare (constinArgument_inTargetType)) ;
          }
        }
      }
      if (kBoolFalse == test_15) {
        enumGalgasBool test_18 = kBoolTrue ;
        if (kBoolTrue == test_18) {
          GALGAS_bool test_19 = var_ok_5495.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 130)) ;
          if (kBoolTrue == test_19.boolEnum ()) {
            test_19 = extensionGetter_definition (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 130)).readProperty_mGetterMap ().getter_hasKey (extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 130)).readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 130)) ;
          }
          test_18 = test_19.boolEnum () ;
          if (kBoolTrue == test_18) {
            GALGAS_methodKind var_kind_6985 ;
            GALGAS_functionSignature var_argumentTypeList_7034 ;
            GALGAS_bool var_hasCompilerArgument_7078 ;
            GALGAS_unifiedTypeMapEntry var_returnedType_7104 ;
            GALGAS_location joker_7044 ; // Joker input parameter
            GALGAS_methodQualifier joker_7114_2 ; // Joker input parameter
            GALGAS_string joker_7114_1 ; // Joker input parameter
            extensionGetter_definition (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 131)).readProperty_mGetterMap ().method_searchKey (extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 132)).readProperty_mTypeName (), var_kind_6985, var_argumentTypeList_7034, joker_7044, var_hasCompilerArgument_7078, var_returnedType_7104, joker_7114_2, joker_7114_1, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 131)) ;
            var_ok_5495 = GALGAS_bool (kIsEqual, var_argumentTypeList_7034.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 140)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 140)).getter_uint (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 140)))).operator_and (GALGAS_bool (kIsEqual, var_returnedType_7104.objectCompare (constinArgument_inTargetType)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 140)) ;
            GALGAS_getterCallExpressionForGeneration var_conversionExpression_7266 = GALGAS_getterCallExpressionForGeneration::constructor_new (constinArgument_inTargetType, constinArgument_inErrorLocation, var_kind_6985, ioArgument_ioExpression, GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 147)), extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 148)).readProperty_mTypeName ().readProperty_string (), GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 149)), var_hasCompilerArgument_7078  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 142)) ;
            ioArgument_ioExpression = var_conversionExpression_7266 ;
          }
        }
      }
      enumGalgasBool test_20 = kBoolTrue ;
      if (kBoolTrue == test_20) {
        test_20 = var_ok_5495.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 154)).boolEnum () ;
        if (kBoolTrue == test_20) {
          TC_Array <C_FixItDescription> fixItArray21 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("target object type is '@").add_operation (extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 156)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 156)).add_operation (GALGAS_string ("' and cannot be assigned from an '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 156)).add_operation (extensionGetter_definition (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 156)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 156)).add_operation (GALGAS_string ("' object; this type have no '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 156)).add_operation (extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 158)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 157)).add_operation (GALGAS_string ("' getter without argument that returns a '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 158)).add_operation (extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 158)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 158)).add_operation (GALGAS_string ("' object"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 158)), fixItArray21  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 155)) ;
        }
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'checkDiadicOperator'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_checkDiadicOperator (const GALGAS_unifiedTypeMapEntry constinArgument_inLeftType,
                                  const GALGAS_unifiedTypeMapEntry constinArgument_inRightType,
                                  const GALGAS_bool constinArgument_inOperandIsHandled,
                                  const GALGAS_string constinArgument_inOperatorNameForErrorMessage,
                                  const GALGAS_location constinArgument_inErrorLocation,
                                  GALGAS_semanticExpressionForGeneration & ioArgument_ioRightExpression,
                                  C_Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inOperandIsHandled.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 171)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("left operand type is '@").add_operation (extensionGetter_definition (constinArgument_inLeftType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 173)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 173)).add_operation (GALGAS_string ("' and does not accept '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 173)).add_operation (constinArgument_inOperatorNameForErrorMessage, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 173)).add_operation (GALGAS_string ("' operator (right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 173)).add_operation (extensionGetter_definition (constinArgument_inRightType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 174)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 174)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 174)), fixItArray1  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 172)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_unifiedTypeMapEntry var_rightType_8832 = constinArgument_inRightType ;
    GALGAS_bool var_ok_8863 = GALGAS_bool (kIsEqual, constinArgument_inLeftType.objectCompare (var_rightType_8832)) ;
    if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 178)).isValid ()) {
      uint32_t variant_8898 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 178)).uintValue () ;
      bool loop_8898 = true ;
      while (loop_8898) {
        loop_8898 = var_ok_8863.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 178)).operator_and (extensionGetter_definition (var_rightType_8832, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 178)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 178)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 178)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 178)).isValid () ;
        if (loop_8898) {
          loop_8898 = var_ok_8863.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 178)).operator_and (extensionGetter_definition (var_rightType_8832, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 178)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 178)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 178)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 178)).boolValue () ;
        }
        if (loop_8898 && (0 == variant_8898)) {
          loop_8898 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 178)) ;
        }
        if (loop_8898) {
          variant_8898 -- ;
          var_rightType_8832 = extensionGetter_definition (var_rightType_8832, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 179)).readProperty_mSuperType () ;
          var_ok_8863 = GALGAS_bool (kIsEqual, constinArgument_inLeftType.objectCompare (var_rightType_8832)) ;
        }
      }
    }
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = var_ok_8863.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 183)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_bool var_isPublic_9265 ;
        GALGAS_bool var_unused_0_9268 ;
        GALGAS_unifiedTypeMapEntry var_propertyType_9286 ;
        const bool optionalResult9209 = extensionGetter_definition (constinArgument_inRightType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 183)).readProperty_mPropertyMap ().optional_searchKey (extensionGetter_definition (constinArgument_inLeftType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 183)).readProperty_mTypeName ().readProperty_string (), var_isPublic_9265, var_unused_0_9268, var_propertyType_9286) ;
        if (!optionalResult9209) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_isPublic_9265.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 184)).boolEnum () ;
            if (kBoolTrue == test_3) {
              TC_Array <C_FixItDescription> fixItArray4 ;
              inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray4  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 185)) ;
            }
          }
          GALGAS_structPropertyAccessExpressionForGeneration var_conversionExpression_9450 = GALGAS_structPropertyAccessExpressionForGeneration::constructor_new (var_propertyType_9286, constinArgument_inErrorLocation, ioArgument_ioRightExpression, extensionGetter_definition (constinArgument_inLeftType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 191)).readProperty_mTypeName ().readProperty_string ()  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 187)) ;
          ioArgument_ioRightExpression = var_conversionExpression_9450 ;
          var_ok_8863 = GALGAS_bool (kIsEqual, var_propertyType_9286.objectCompare (constinArgument_inLeftType)) ;
        }
      }
    }
    if (kBoolFalse == test_2) {
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        GALGAS_bool test_6 = var_ok_8863.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 195)) ;
        if (kBoolTrue == test_6.boolEnum ()) {
          test_6 = extensionGetter_definition (constinArgument_inRightType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 195)).readProperty_mGetterMap ().getter_hasKey (extensionGetter_definition (constinArgument_inLeftType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 195)).readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 195)) ;
        }
        test_5 = test_6.boolEnum () ;
        if (kBoolTrue == test_5) {
          GALGAS_methodKind var_kind_9949 ;
          GALGAS_functionSignature var_argumentTypeList_9998 ;
          GALGAS_bool var_hasCompilerArgument_10042 ;
          GALGAS_unifiedTypeMapEntry var_returnedType_10068 ;
          GALGAS_location joker_10008 ; // Joker input parameter
          GALGAS_methodQualifier joker_10078_2 ; // Joker input parameter
          GALGAS_string joker_10078_1 ; // Joker input parameter
          extensionGetter_definition (constinArgument_inRightType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 196)).readProperty_mGetterMap ().method_searchKey (extensionGetter_definition (constinArgument_inLeftType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 197)).readProperty_mTypeName (), var_kind_9949, var_argumentTypeList_9998, joker_10008, var_hasCompilerArgument_10042, var_returnedType_10068, joker_10078_2, joker_10078_1, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 196)) ;
          var_ok_8863 = GALGAS_bool (kIsEqual, var_argumentTypeList_9998.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 205)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 205)).getter_uint (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 205)))).operator_and (GALGAS_bool (kIsEqual, var_returnedType_10068.objectCompare (constinArgument_inLeftType)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 205)) ;
          GALGAS_getterCallExpressionForGeneration var_conversionExpression_10228 = GALGAS_getterCallExpressionForGeneration::constructor_new (constinArgument_inLeftType, constinArgument_inErrorLocation, var_kind_9949, ioArgument_ioRightExpression, GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 212)), extensionGetter_definition (constinArgument_inLeftType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 213)).readProperty_mTypeName ().readProperty_string (), GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 214)), var_hasCompilerArgument_10042  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 207)) ;
          ioArgument_ioRightExpression = var_conversionExpression_10228 ;
        }
      }
    }
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = var_ok_8863.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 219)).boolEnum () ;
      if (kBoolTrue == test_7) {
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("left operand type of '").add_operation (constinArgument_inOperatorNameForErrorMessage, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 221)).add_operation (GALGAS_string ("' operator is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 221)).add_operation (extensionGetter_definition (constinArgument_inLeftType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 221)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 221)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 221)).add_operation (extensionGetter_definition (constinArgument_inRightType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 222)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 222)).add_operation (GALGAS_string ("', it should be either the same, either inherits from left operand type, either have a '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 222)).add_operation (extensionGetter_definition (constinArgument_inLeftType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 224)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 223)).add_operation (GALGAS_string ("' getter without argument that returns a '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 224)).add_operation (extensionGetter_definition (constinArgument_inLeftType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 224)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 224)).add_operation (GALGAS_string ("' object"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 224)), fixItArray8  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 220)) ;
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@assignmentInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_assignmentInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_assignmentInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 136)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfPropertyAssignmentInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_selfPropertyAssignmentInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_selfPropertyAssignmentInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 144)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@assignmentInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_assignmentInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                       GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                       GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMapEntry var_targetType_5642 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_assignmentInstructionAST temp_1 = this ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.readProperty_mOptionalProperty ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      const GALGAS_assignmentInstructionAST temp_2 = this ;
      GALGAS_string joker_5781 ; // Joker input parameter
      GALGAS_string joker_5790 ; // Joker input parameter
      extensionSetter_neutralAccess (ioArgument_ioVariableMap, temp_2.readProperty_mTargetVariableName (), var_targetType_5642, joker_5781, joker_5790, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 161)) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_assignmentInstructionAST temp_3 = this ;
    GALGAS_string joker_5897 ; // Joker input parameter
    GALGAS_string joker_5906 ; // Joker input parameter
    extensionSetter_neutralAccess (ioArgument_ioVariableMap, temp_3.readProperty_mTargetVariableName (), var_targetType_5642, joker_5897, joker_5906, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 168)) ;
    }
    GALGAS_propertyMap var_propertyMap_5933 = extensionGetter_definition (var_targetType_5642, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 174)).readProperty_mPropertyMap () ;
    GALGAS_bool var_isPublic_6037 ;
    GALGAS_bool var_isConstant_6053 ;
    const GALGAS_assignmentInstructionAST temp_4 = this ;
    var_propertyMap_5933.method_searchKey (temp_4.readProperty_mOptionalProperty (), var_isPublic_6037, var_isConstant_6053, var_targetType_5642, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 175)) ;
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = var_isPublic_6037.operator_not (SOURCE_FILE ("instruction-assignment.galgas", 176)).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_assignmentInstructionAST temp_6 = this ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mOptionalProperty ().readProperty_location (), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray7  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 177)) ;
      }
    }
    enumGalgasBool test_8 = kBoolTrue ;
    if (kBoolTrue == test_8) {
      test_8 = var_isConstant_6053.boolEnum () ;
      if (kBoolTrue == test_8) {
        const GALGAS_assignmentInstructionAST temp_9 = this ;
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (temp_9.readProperty_mOptionalProperty ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray10  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 180)) ;
      }
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_6578 ;
  const GALGAS_assignmentInstructionAST temp_11 = this ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_11.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_5642, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_6578, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 184)) ;
  {
  const GALGAS_assignmentInstructionAST temp_12 = this ;
  routine_checkAssignmentTypeWithImplicitGetterCall (var_targetType_5642, var_expression_6578.readProperty_mResultType (), temp_12.readProperty_mInstructionLocation (), var_expression_6578, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 193)) ;
  }
  GALGAS_string var_targetVariableCppName_6826 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_6876 ;
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    const GALGAS_assignmentInstructionAST temp_14 = this ;
    test_13 = GALGAS_bool (kIsEqual, temp_14.readProperty_mOptionalProperty ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_13) {
      {
      const GALGAS_assignmentInstructionAST temp_15 = this ;
      GALGAS_unifiedTypeMapEntry joker_7004 ; // Joker input parameter
      extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, temp_15.readProperty_mTargetVariableName (), joker_7004, var_targetVariableCppName_6826, var_nameForCheckingFormalParameterUsing_6876, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 203)) ;
      }
    }
  }
  if (kBoolFalse == test_13) {
    {
    const GALGAS_assignmentInstructionAST temp_16 = this ;
    GALGAS_unifiedTypeMapEntry joker_7176 ; // Joker input parameter
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_16.readProperty_mTargetVariableName (), joker_7176, var_targetVariableCppName_6826, var_nameForCheckingFormalParameterUsing_6876, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 210)) ;
    }
  }
  const GALGAS_assignmentInstructionAST temp_17 = this ;
  const GALGAS_assignmentInstructionAST temp_18 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_assignmentInstructionForGeneration::constructor_new (var_targetType_5642, var_targetVariableCppName_6826, var_nameForCheckingFormalParameterUsing_6876, temp_17.readProperty_mOptionalProperty ().readProperty_string (), var_expression_6578, temp_18.readProperty_mTargetVariableName ().readProperty_location ()  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 218))  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 218)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfPropertyAssignmentInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_selfPropertyAssignmentInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                   GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                   const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                   GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                   GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMapEntry var_selfType_8054 ;
    GALGAS_bool var_unused_0_8066 ;
    GALGAS_bool var_mutableProperties_8108 ;
    const bool optionalResult8034 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_8054, var_unused_0_8066, var_mutableProperties_8108) ;
    if (!optionalResult8034) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_mutableProperties_8108.operator_not (SOURCE_FILE ("instruction-assignment.galgas", 238)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfPropertyAssignmentInstructionAST temp_2 = this ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("'self' property not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 239)) ;
        }
      }
      GALGAS_propertyMap var_propertyMap_8262 = extensionGetter_definition (var_selfType_8054, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 241)).readProperty_mPropertyMap () ;
      GALGAS_bool var_isConstant_8375 ;
      GALGAS_unifiedTypeMapEntry var_targetType_8391 ;
      const GALGAS_selfPropertyAssignmentInstructionAST temp_4 = this ;
      GALGAS_bool joker_8358 ; // Joker input parameter
      var_propertyMap_8262.method_searchKey (temp_4.readProperty_mTargetSelfPropertyName (), joker_8358, var_isConstant_8375, var_targetType_8391, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 242)) ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = var_isConstant_8375.boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_selfPropertyAssignmentInstructionAST temp_6 = this ;
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mTargetSelfPropertyName ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray7  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 244)) ;
        }
      }
      const GALGAS_selfPropertyAssignmentInstructionAST temp_8 = this ;
      GALGAS_string var_targetVariableCppName_8537 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 246)).add_operation (temp_8.readProperty_mTargetSelfPropertyName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-assignment.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 247)) ;
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        const GALGAS_selfPropertyAssignmentInstructionAST temp_10 = this ;
        test_9 = GALGAS_bool (kIsNotEqual, temp_10.readProperty_mOptionalProperty ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_9) {
          GALGAS_propertyMap var_propertyMap_8784 = extensionGetter_definition (var_targetType_8391, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 250)).readProperty_mPropertyMap () ;
          GALGAS_bool var_isPublic_8890 ;
          GALGAS_bool var_isConstant_8906 ;
          const GALGAS_selfPropertyAssignmentInstructionAST temp_11 = this ;
          var_propertyMap_8784.method_searchKey (temp_11.readProperty_mOptionalProperty (), var_isPublic_8890, var_isConstant_8906, var_targetType_8391, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 251)) ;
          enumGalgasBool test_12 = kBoolTrue ;
          if (kBoolTrue == test_12) {
            test_12 = var_isPublic_8890.operator_not (SOURCE_FILE ("instruction-assignment.galgas", 252)).boolEnum () ;
            if (kBoolTrue == test_12) {
              const GALGAS_selfPropertyAssignmentInstructionAST temp_13 = this ;
              TC_Array <C_FixItDescription> fixItArray14 ;
              inCompiler->emitSemanticError (temp_13.readProperty_mOptionalProperty ().readProperty_location (), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray14  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 253)) ;
            }
          }
          enumGalgasBool test_15 = kBoolTrue ;
          if (kBoolTrue == test_15) {
            test_15 = var_isConstant_8906.boolEnum () ;
            if (kBoolTrue == test_15) {
              const GALGAS_selfPropertyAssignmentInstructionAST temp_16 = this ;
              TC_Array <C_FixItDescription> fixItArray17 ;
              inCompiler->emitSemanticError (temp_16.readProperty_mOptionalProperty ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray17  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 256)) ;
            }
          }
        }
      }
      GALGAS_semanticExpressionForGeneration var_expression_9461 ;
      const GALGAS_selfPropertyAssignmentInstructionAST temp_18 = this ;
      callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_18.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_8391, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_9461, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 260)) ;
      {
      const GALGAS_selfPropertyAssignmentInstructionAST temp_19 = this ;
      routine_checkAssignmentTypeWithImplicitGetterCall (var_targetType_8391, var_expression_9461.readProperty_mResultType (), temp_19.readProperty_mInstructionLocation (), var_expression_9461, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 269)) ;
      }
      const GALGAS_selfPropertyAssignmentInstructionAST temp_20 = this ;
      const GALGAS_selfPropertyAssignmentInstructionAST temp_21 = this ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_assignmentInstructionForGeneration::constructor_new (var_targetType_8391, var_targetVariableCppName_8537, constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), temp_20.readProperty_mOptionalProperty ().readProperty_string (), var_expression_9461, temp_21.readProperty_mTargetSelfPropertyName ().readProperty_location ()  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 271))  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 271)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfPropertyAssignmentInstructionAST temp_22 = this ;
    TC_Array <C_FixItDescription> fixItArray23 ;
    inCompiler->emitSemanticError (temp_22.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray23  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 280)) ;
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
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string var_sourceVar_11367 ;
  const GALGAS_assignmentInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_11367, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 308)) ;
  {
  const GALGAS_assignmentInstructionForGeneration temp_1 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_1.readProperty_mNameForCheckingFormalParameterUsing () COMMA_SOURCE_FILE ("instruction-assignment.galgas", 315)) ;
  }
  const GALGAS_assignmentInstructionForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mTargetType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 317)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_assignmentInstructionForGeneration temp_4 = this ;
    test_3 = GALGAS_bool (kIsEqual, temp_4.readProperty_mOptionalProperty ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_assignmentInstructionForGeneration temp_5 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(temp_5.readProperty_mTargetCppName ().add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 319)).add_operation (var_sourceVar_11367, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 319)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 319)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 319)) ;
    }
  }
  if (kBoolFalse == test_3) {
    const GALGAS_assignmentInstructionForGeneration temp_6 = this ;
    ioArgument_ioGeneratedCode.plusAssign_operation(temp_6.readProperty_mTargetCppName ().add_operation (GALGAS_string (".setter_set"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 321)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 321)) ;
    const GALGAS_assignmentInstructionForGeneration temp_7 = this ;
    ioArgument_ioGeneratedCode.plusAssign_operation(temp_7.readProperty_mOptionalProperty ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("instruction-assignment.galgas", 322)).getter_identifierRepresentation (SOURCE_FILE ("instruction-assignment.galgas", 322)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 322)) ;
    const GALGAS_assignmentInstructionForGeneration temp_8 = this ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" (").add_operation (var_sourceVar_11367, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 323)).add_operation (GALGAS_string (" COMMA_"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 323)).add_operation (extensionGetter_sourceFile (temp_8.readProperty_mSourceLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 323)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 323)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 323)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 323)) ;
  }
  {
  const GALGAS_assignmentInstructionForGeneration temp_9 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_9.readProperty_mTargetCppName () COMMA_SOURCE_FILE ("instruction-assignment.galgas", 325)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structuredCastInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_structuredCastInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_structuredCastInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mCastExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 221)) ;
  const GALGAS_structuredCastInstructionAST temp_1 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_1.readProperty_mElseInstructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 222)) ;
  const GALGAS_structuredCastInstructionAST temp_2 = this ;
  cEnumerator_castInstructionBranchListAST enumerator_7815 (temp_2.readProperty_mCastInstructionBranchList (), kENUMERATION_UP) ;
  while (enumerator_7815.hasCurrentObject ()) {
    extensionMethod_enterInstructionListInSemanticContext (enumerator_7815.current_mInstructionList (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 224)) ;
    enumerator_7815.gotoNextObject () ;
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
                                                                           GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                           GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration var_castExpression_8750 ;
  const GALGAS_structuredCastInstructionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mCastExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-cast.galgas", 242)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_castExpression_8750, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 239)) ;
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 248)) ;
  }
  GALGAS_castInstructionBranchListForGeneration var_castBranchList_8890 = GALGAS_castInstructionBranchListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 250)) ;
  const GALGAS_structuredCastInstructionAST temp_1 = this ;
  cEnumerator_castInstructionBranchListAST enumerator_9025 (temp_1.readProperty_mCastInstructionBranchList (), kENUMERATION_UP) ;
  while (enumerator_9025.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_type_9099 = extensionGetter_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), enumerator_9025.current_mTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 253)) ;
    GALGAS_unifiedTypeMapEntry var_t_9256 = var_type_9099 ;
    GALGAS_bool var_found_9283 = GALGAS_bool (kIsEqual, var_t_9256.objectCompare (var_castExpression_8750.readProperty_mResultType ())) ;
    if (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap ().getter_count (SOURCE_FILE ("instruction-cast.galgas", 257)).add_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 257)).getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 257)).isValid ()) {
      uint32_t variant_9326 = constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap ().getter_count (SOURCE_FILE ("instruction-cast.galgas", 257)).add_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 257)).getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 257)).uintValue () ;
      bool loop_9326 = true ;
      while (loop_9326) {
        loop_9326 = var_found_9283.operator_not (SOURCE_FILE ("instruction-cast.galgas", 258)).operator_and (extensionGetter_definition (var_t_9256, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 258)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("instruction-cast.galgas", 258)).operator_not (SOURCE_FILE ("instruction-cast.galgas", 258)) COMMA_SOURCE_FILE ("instruction-cast.galgas", 258)).isValid () ;
        if (loop_9326) {
          loop_9326 = var_found_9283.operator_not (SOURCE_FILE ("instruction-cast.galgas", 258)).operator_and (extensionGetter_definition (var_t_9256, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 258)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("instruction-cast.galgas", 258)).operator_not (SOURCE_FILE ("instruction-cast.galgas", 258)) COMMA_SOURCE_FILE ("instruction-cast.galgas", 258)).boolValue () ;
        }
        if (loop_9326 && (0 == variant_9326)) {
          loop_9326 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-cast.galgas", 257)) ;
        }
        if (loop_9326) {
          variant_9326 -- ;
          var_t_9256 = extensionGetter_definition (var_t_9256, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 259)).readProperty_mSuperType () ;
          var_found_9283 = GALGAS_bool (kIsEqual, var_t_9256.objectCompare (var_castExpression_8750.readProperty_mResultType ())) ;
        }
      }
    }
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = var_found_9283.operator_not (SOURCE_FILE ("instruction-cast.galgas", 262)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_9025.current_mTypeName (HERE).readProperty_location (), GALGAS_string ("the '@").add_operation (enumerator_9025.current_mTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 264)).add_operation (GALGAS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 264)).add_operation (extensionGetter_definition (var_castExpression_8750.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 264)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 264)).add_operation (GALGAS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 264)), fixItArray3  COMMA_SOURCE_FILE ("instruction-cast.galgas", 263)) ;
      }
    }
    GALGAS_string var_localConstantName_9817 ;
    GALGAS_localConstantList var_localConstantList_9843 = GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 268)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsStrictSup, enumerator_9025.current_mConstantVarName (HERE).readProperty_string ().getter_length (SOURCE_FILE ("instruction-cast.galgas", 269)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 269)).getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 269)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        var_localConstantName_9817 = GALGAS_string ("cast_").add_operation (enumerator_9025.current_mConstantVarName (HERE).readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 270)).getter_string (SOURCE_FILE ("instruction-cast.galgas", 270)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 270)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 270)).add_operation (enumerator_9025.current_mConstantVarName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 270)) ;
        var_localConstantList_9843.addAssign_operation (var_type_9099, enumerator_9025.current_mConstantVarName (HERE), GALGAS_bool (true), var_localConstantName_9817  COMMA_SOURCE_FILE ("instruction-cast.galgas", 271)) ;
      }
    }
    if (kBoolFalse == test_4) {
      var_localConstantName_9817 = GALGAS_string::makeEmptyString () ;
    }
    GALGAS_semanticInstructionListForGeneration var_instructionList_10617 ;
    {
    routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_localConstantList_9843, GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 285)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 286)), enumerator_9025.current_mInstructionList (HERE), enumerator_9025.current_mEndOfInstructions (HERE), ioArgument_ioVariableMap, var_instructionList_10617, inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 280)) ;
    }
    var_castBranchList_8890.addAssign_operation (enumerator_9025.current_mTypeComparisonKind (HERE), var_type_9099, var_localConstantName_9817, var_instructionList_10617  COMMA_SOURCE_FILE ("instruction-cast.galgas", 292)) ;
    enumerator_9025.gotoNextObject () ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionList_11114 ;
  {
  const GALGAS_structuredCastInstructionAST temp_5 = this ;
  const GALGAS_structuredCastInstructionAST temp_6 = this ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 299)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 300)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 301)), temp_5.readProperty_mElseInstructionList (), temp_6.readProperty_mEndOfCastInstruction (), ioArgument_ioVariableMap, var_else_5F_instructionList_11114, inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 295)) ;
  }
  {
  const GALGAS_structuredCastInstructionAST temp_7 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_7.readProperty_mEndOfCastInstruction (), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 308)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_structuredCastInstructionForGeneration::constructor_new (var_castExpression_8750, var_castBranchList_8890, var_else_5F_instructionList_11114  COMMA_SOURCE_FILE ("instruction-cast.galgas", 310))  COMMA_SOURCE_FILE ("instruction-cast.galgas", 310)) ;
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
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string var_castCppVarName_13065 ;
  const GALGAS_structuredCastInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_castCppVarName_13065, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 346)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_castCppVarName_13065, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 354)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 354)), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 354)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 355)) ;
  }
  const GALGAS_structuredCastInstructionForGeneration temp_1 = this ;
  cEnumerator_castInstructionBranchListForGeneration enumerator_13248 (temp_1.readProperty_mCastBranchList (), kENUMERATION_UP) ;
  while (enumerator_13248.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_13248.current_mType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 357)) ;
    switch (enumerator_13248.current_mTypeComparisonKind (HERE).enumValue ()) {
    case GALGAS_dynamicTypeComparisonKind::kNotBuilt:
      break ;
    case GALGAS_dynamicTypeComparisonKind::kEnum_equal:
      {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_castCppVarName_13065, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 360)).add_operation (GALGAS_string (".dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 360)).add_operation (extensionGetter_identifierRepresentation (enumerator_13248.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 362)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 361)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 362)), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 360)) ;
      }
      break ;
    case GALGAS_dynamicTypeComparisonKind::kEnum_inherited:
      {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (NULL != dynamic_cast <const cPtr_").add_operation (extensionGetter_identifierRepresentation (enumerator_13248.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 365)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 364)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 365)).add_operation (var_castCppVarName_13065, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 366)).add_operation (GALGAS_string (".ptr ())) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 366)), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 364)) ;
      }
      break ;
    case GALGAS_dynamicTypeComparisonKind::kEnum_strictlyInherited:
      {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ((").add_operation (var_castCppVarName_13065, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 368)).add_operation (GALGAS_string (".dynamicTypeDescriptor () != & kTypeDescriptor_GALGAS_"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 368)).add_operation (extensionGetter_identifierRepresentation (enumerator_13248.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 370)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 369)).add_operation (GALGAS_string (") && (NULL != dynamic_cast <const cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 370)).add_operation (extensionGetter_identifierRepresentation (enumerator_13248.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 371)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 370)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 371)).add_operation (var_castCppVarName_13065, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 372)).add_operation (GALGAS_string (".ptr ()))) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 372)), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 368)) ;
      }
      break ;
    }
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsStrictSup, enumerator_13248.current_mCastedVarCppName (HERE).getter_length (SOURCE_FILE ("instruction-cast.galgas", 374)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 374)).getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 374)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_13248.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 376)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 376)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 376)).add_operation (enumerator_13248.current_mCastedVarCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 377)).add_operation (GALGAS_string (" ((cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 377)).add_operation (extensionGetter_identifierRepresentation (enumerator_13248.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 377)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 377)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 377)).add_operation (var_castCppVarName_13065, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 378)).add_operation (GALGAS_string (".ptr ()) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 378)), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 375)) ;
      }
    }
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_13248.current_mInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 380)) ;
    }
    if (enumerator_13248.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 388)) ;
    }
    enumerator_13248.gotoNextObject () ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_structuredCastInstructionForGeneration temp_4 = this ;
    test_3 = GALGAS_bool (kIsStrictSup, temp_4.readProperty_mElseInstructionList ().getter_length (SOURCE_FILE ("instruction-cast.galgas", 391)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 391)).getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 391)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 392)) ;
      {
      const GALGAS_structuredCastInstructionForGeneration temp_5 = this ;
      routine_generateInstructionList (ioArgument_ioInclusionSet, temp_5.readProperty_mElseInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 393)) ;
      }
    }
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 403)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 404)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 405)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@plusEqualExpressionInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_plusEqualExpressionInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_plusEqualExpressionInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 255)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@minusEqualExpressionInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_minusEqualExpressionInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_minusEqualExpressionInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 261)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@mulEqualExpressionInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_mulEqualExpressionInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_mulEqualExpressionInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 267)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@divEqualExpressionInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_divEqualExpressionInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_divEqualExpressionInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 273)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@plusEqualElementsInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_plusEqualElementsInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
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
                                                                                GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMapEntry var_targetType_10808 ;
  GALGAS_string var_targetVariableCppName_10844 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_10894 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_plusEqualExpressionInstructionAST temp_1 = this ;
    test_0 = temp_1.readProperty_mPrefixedBySelf ().boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GALGAS_unifiedTypeMapEntry var_selfType_10994 ;
        GALGAS_bool var_unused_0_10998 ;
        GALGAS_bool var_mutableProperties_11040 ;
        const bool optionalResult10974 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_10994, var_unused_0_10998, var_mutableProperties_11040) ;
        if (!optionalResult10974) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_mutableProperties_11040.operator_not (SOURCE_FILE ("instruction-concat.galgas", 299)).boolEnum () ;
            if (kBoolTrue == test_3) {
              const GALGAS_plusEqualExpressionInstructionAST temp_4 = this ;
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (temp_4.readProperty_mInstructionLocation (), GALGAS_string ("property not mutable in this context"), fixItArray5  COMMA_SOURCE_FILE ("instruction-concat.galgas", 300)) ;
            }
          }
          GALGAS_propertyMap var_propertyMap_11195 = extensionGetter_definition (var_selfType_10994, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 302)).readProperty_mPropertyMap () ;
          GALGAS_bool var_isConstant_11300 ;
          const GALGAS_plusEqualExpressionInstructionAST temp_6 = this ;
          GALGAS_bool joker_11283 ; // Joker input parameter
          var_propertyMap_11195.method_searchKey (temp_6.readProperty_mReceiverName (), joker_11283, var_isConstant_11300, var_targetType_10808, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 303)) ;
          var_nameForCheckingFormalParameterUsing_10894 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName () ;
          const GALGAS_plusEqualExpressionInstructionAST temp_7 = this ;
          var_targetVariableCppName_10844 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 305)).add_operation (temp_7.readProperty_mReceiverName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 306)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 306)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = var_isConstant_11300.boolEnum () ;
            if (kBoolTrue == test_8) {
              const GALGAS_plusEqualExpressionInstructionAST temp_9 = this ;
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray10  COMMA_SOURCE_FILE ("instruction-concat.galgas", 308)) ;
            }
          }
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            test_11 = var_mutableProperties_11040.operator_not (SOURCE_FILE ("instruction-concat.galgas", 310)).boolEnum () ;
            if (kBoolTrue == test_11) {
              const GALGAS_plusEqualExpressionInstructionAST temp_12 = this ;
              TC_Array <C_FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (temp_12.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("the property is not mutable in this context"), fixItArray13  COMMA_SOURCE_FILE ("instruction-concat.galgas", 311)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_2) {
        const GALGAS_plusEqualExpressionInstructionAST temp_14 = this ;
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray15  COMMA_SOURCE_FILE ("instruction-concat.galgas", 314)) ;
        var_targetType_10808.drop () ; // Release error dropped variable
        var_targetVariableCppName_10844.drop () ; // Release error dropped variable
        var_nameForCheckingFormalParameterUsing_10894.drop () ; // Release error dropped variable
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_plusEqualExpressionInstructionAST temp_16 = this ;
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_16.readProperty_mReceiverName (), var_targetType_10808, var_targetVariableCppName_10844, var_nameForCheckingFormalParameterUsing_10894, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 318)) ;
    }
  }
  const GALGAS_plusEqualExpressionInstructionAST temp_17 = this ;
  cEnumerator_lstringlist enumerator_12168 (temp_17.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_12168.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_12221 = extensionGetter_definition (var_targetType_10808, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 326)).readProperty_mPropertyMap () ;
    GALGAS_bool var_isPublic_12309 ;
    GALGAS_bool var_isConstant_12325 ;
    var_propertyMap_12221.method_searchKey (enumerator_12168.current_mValue (HERE), var_isPublic_12309, var_isConstant_12325, var_targetType_10808, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 327)) ;
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      test_18 = var_isPublic_12309.operator_not (SOURCE_FILE ("instruction-concat.galgas", 328)).boolEnum () ;
      if (kBoolTrue == test_18) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (enumerator_12168.current_mValue (HERE).readProperty_location (), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray19  COMMA_SOURCE_FILE ("instruction-concat.galgas", 329)) ;
      }
    }
    enumGalgasBool test_20 = kBoolTrue ;
    if (kBoolTrue == test_20) {
      test_20 = var_isConstant_12325.boolEnum () ;
      if (kBoolTrue == test_20) {
        TC_Array <C_FixItDescription> fixItArray21 ;
        inCompiler->emitSemanticError (enumerator_12168.current_mValue (HERE).readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray21  COMMA_SOURCE_FILE ("instruction-concat.galgas", 332)) ;
      }
    }
    enumerator_12168.gotoNextObject () ;
  }
  enumGalgasBool test_22 = kBoolTrue ;
  if (kBoolTrue == test_22) {
    test_22 = extensionGetter_definition (var_targetType_10808, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 336)).readProperty_mHandledOperatorFlags ().getter_plusEqualOperatorWithExpression (SOURCE_FILE ("instruction-concat.galgas", 336)).operator_not (SOURCE_FILE ("instruction-concat.galgas", 336)).boolEnum () ;
    if (kBoolTrue == test_22) {
      const GALGAS_plusEqualExpressionInstructionAST temp_23 = this ;
      TC_Array <C_FixItDescription> fixItArray24 ;
      inCompiler->emitSemanticError (temp_23.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_targetType_10808, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 338)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 338)).add_operation (GALGAS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 338)), fixItArray24  COMMA_SOURCE_FILE ("instruction-concat.galgas", 337)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_13146 ;
  const GALGAS_plusEqualExpressionInstructionAST temp_25 = this ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_25.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_10808, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_13146, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 341)) ;
  {
  const GALGAS_plusEqualExpressionInstructionAST temp_26 = this ;
  routine_checkAssignmentTypeWithImplicitGetterCall (var_targetType_10808, var_expression_13146.readProperty_mResultType (), temp_26.readProperty_mInstructionLocation (), var_expression_13146, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 350)) ;
  }
  const GALGAS_plusEqualExpressionInstructionAST temp_27 = this ;
  const GALGAS_plusEqualExpressionInstructionAST temp_28 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (temp_27.readProperty_mInstructionLocation (), var_targetType_10808, var_targetVariableCppName_10844, var_nameForCheckingFormalParameterUsing_10894, temp_28.readProperty_mStructAttributeList (), var_expression_13146, GALGAS_string ("plusAssign_operation")  COMMA_SOURCE_FILE ("instruction-concat.galgas", 352))  COMMA_SOURCE_FILE ("instruction-concat.galgas", 352)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@minusEqualExpressionInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_minusEqualExpressionInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                 GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMapEntry var_targetType_14149 ;
  GALGAS_string var_targetVariableCppName_14185 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_14235 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_minusEqualExpressionInstructionAST temp_1 = this ;
    test_0 = temp_1.readProperty_mPrefixedBySelf ().boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GALGAS_unifiedTypeMapEntry var_selfType_14335 ;
        GALGAS_bool var_selfIsMutable_14363 ;
        GALGAS_bool var_mutableProperties_14405 ;
        const bool optionalResult14315 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_14335, var_selfIsMutable_14363, var_mutableProperties_14405) ;
        if (!optionalResult14315) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_selfIsMutable_14363.operator_not (SOURCE_FILE ("instruction-concat.galgas", 378)).boolEnum () ;
            if (kBoolTrue == test_3) {
              const GALGAS_minusEqualExpressionInstructionAST temp_4 = this ;
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (temp_4.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray5  COMMA_SOURCE_FILE ("instruction-concat.galgas", 379)) ;
            }
          }
          GALGAS_propertyMap var_propertyMap_14554 = extensionGetter_definition (var_selfType_14335, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 381)).readProperty_mPropertyMap () ;
          GALGAS_bool var_isConstant_14659 ;
          const GALGAS_minusEqualExpressionInstructionAST temp_6 = this ;
          GALGAS_bool joker_14642 ; // Joker input parameter
          var_propertyMap_14554.method_searchKey (temp_6.readProperty_mReceiverName (), joker_14642, var_isConstant_14659, var_targetType_14149, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 382)) ;
          var_nameForCheckingFormalParameterUsing_14235 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName () ;
          const GALGAS_minusEqualExpressionInstructionAST temp_7 = this ;
          var_targetVariableCppName_14185 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 384)).add_operation (temp_7.readProperty_mReceiverName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 385)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 385)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = var_isConstant_14659.boolEnum () ;
            if (kBoolTrue == test_8) {
              const GALGAS_minusEqualExpressionInstructionAST temp_9 = this ;
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray10  COMMA_SOURCE_FILE ("instruction-concat.galgas", 387)) ;
            }
          }
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            test_11 = var_mutableProperties_14405.operator_not (SOURCE_FILE ("instruction-concat.galgas", 389)).boolEnum () ;
            if (kBoolTrue == test_11) {
              const GALGAS_minusEqualExpressionInstructionAST temp_12 = this ;
              TC_Array <C_FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (temp_12.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("the property is not mutable in this context"), fixItArray13  COMMA_SOURCE_FILE ("instruction-concat.galgas", 390)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_2) {
        const GALGAS_minusEqualExpressionInstructionAST temp_14 = this ;
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray15  COMMA_SOURCE_FILE ("instruction-concat.galgas", 393)) ;
        var_targetType_14149.drop () ; // Release error dropped variable
        var_targetVariableCppName_14185.drop () ; // Release error dropped variable
        var_nameForCheckingFormalParameterUsing_14235.drop () ; // Release error dropped variable
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_minusEqualExpressionInstructionAST temp_16 = this ;
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_16.readProperty_mReceiverName (), var_targetType_14149, var_targetVariableCppName_14185, var_nameForCheckingFormalParameterUsing_14235, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 397)) ;
    }
  }
  const GALGAS_minusEqualExpressionInstructionAST temp_17 = this ;
  cEnumerator_lstringlist enumerator_15527 (temp_17.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_15527.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_15580 = extensionGetter_definition (var_targetType_14149, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 405)).readProperty_mPropertyMap () ;
    GALGAS_bool var_isPublic_15668 ;
    GALGAS_bool var_isConstant_15684 ;
    var_propertyMap_15580.method_searchKey (enumerator_15527.current_mValue (HERE), var_isPublic_15668, var_isConstant_15684, var_targetType_14149, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 406)) ;
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      test_18 = var_isPublic_15668.operator_not (SOURCE_FILE ("instruction-concat.galgas", 407)).boolEnum () ;
      if (kBoolTrue == test_18) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (enumerator_15527.current_mValue (HERE).readProperty_location (), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray19  COMMA_SOURCE_FILE ("instruction-concat.galgas", 408)) ;
      }
    }
    enumGalgasBool test_20 = kBoolTrue ;
    if (kBoolTrue == test_20) {
      test_20 = var_isConstant_15684.boolEnum () ;
      if (kBoolTrue == test_20) {
        TC_Array <C_FixItDescription> fixItArray21 ;
        inCompiler->emitSemanticError (enumerator_15527.current_mValue (HERE).readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray21  COMMA_SOURCE_FILE ("instruction-concat.galgas", 411)) ;
      }
    }
    enumerator_15527.gotoNextObject () ;
  }
  enumGalgasBool test_22 = kBoolTrue ;
  if (kBoolTrue == test_22) {
    test_22 = extensionGetter_definition (var_targetType_14149, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 415)).readProperty_mHandledOperatorFlags ().getter_minusEqualOperatorWithExpression (SOURCE_FILE ("instruction-concat.galgas", 415)).operator_not (SOURCE_FILE ("instruction-concat.galgas", 415)).boolEnum () ;
    if (kBoolTrue == test_22) {
      const GALGAS_minusEqualExpressionInstructionAST temp_23 = this ;
      TC_Array <C_FixItDescription> fixItArray24 ;
      inCompiler->emitSemanticError (temp_23.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_targetType_14149, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 417)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 417)).add_operation (GALGAS_string ("' type, but this type does not support the '-=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 417)), fixItArray24  COMMA_SOURCE_FILE ("instruction-concat.galgas", 416)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_16506 ;
  const GALGAS_minusEqualExpressionInstructionAST temp_25 = this ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_25.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_14149, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_16506, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 420)) ;
  {
  const GALGAS_minusEqualExpressionInstructionAST temp_26 = this ;
  routine_checkAssignmentTypeWithImplicitGetterCall (var_targetType_14149, var_expression_16506.readProperty_mResultType (), temp_26.readProperty_mInstructionLocation (), var_expression_16506, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 429)) ;
  }
  const GALGAS_minusEqualExpressionInstructionAST temp_27 = this ;
  const GALGAS_minusEqualExpressionInstructionAST temp_28 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (temp_27.readProperty_mInstructionLocation (), var_targetType_14149, var_targetVariableCppName_14185, var_nameForCheckingFormalParameterUsing_14235, temp_28.readProperty_mStructAttributeList (), var_expression_16506, GALGAS_string ("minusAssign_operation")  COMMA_SOURCE_FILE ("instruction-concat.galgas", 431))  COMMA_SOURCE_FILE ("instruction-concat.galgas", 431)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@mulEqualExpressionInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_mulEqualExpressionInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                               GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMapEntry var_targetType_17508 ;
  GALGAS_string var_targetVariableCppName_17544 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_17594 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_mulEqualExpressionInstructionAST temp_1 = this ;
    test_0 = temp_1.readProperty_mPrefixedBySelf ().boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GALGAS_unifiedTypeMapEntry var_selfType_17694 ;
        GALGAS_bool var_selfIsMutable_17722 ;
        GALGAS_bool var_mutableProperties_17764 ;
        const bool optionalResult17674 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_17694, var_selfIsMutable_17722, var_mutableProperties_17764) ;
        if (!optionalResult17674) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_selfIsMutable_17722.operator_not (SOURCE_FILE ("instruction-concat.galgas", 457)).boolEnum () ;
            if (kBoolTrue == test_3) {
              const GALGAS_mulEqualExpressionInstructionAST temp_4 = this ;
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (temp_4.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray5  COMMA_SOURCE_FILE ("instruction-concat.galgas", 458)) ;
            }
          }
          GALGAS_propertyMap var_propertyMap_17913 = extensionGetter_definition (var_selfType_17694, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 460)).readProperty_mPropertyMap () ;
          GALGAS_bool var_isConstant_18018 ;
          const GALGAS_mulEqualExpressionInstructionAST temp_6 = this ;
          GALGAS_bool joker_18001 ; // Joker input parameter
          var_propertyMap_17913.method_searchKey (temp_6.readProperty_mReceiverName (), joker_18001, var_isConstant_18018, var_targetType_17508, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 461)) ;
          var_nameForCheckingFormalParameterUsing_17594 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName () ;
          const GALGAS_mulEqualExpressionInstructionAST temp_7 = this ;
          var_targetVariableCppName_17544 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 463)).add_operation (temp_7.readProperty_mReceiverName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 464)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 464)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = var_isConstant_18018.boolEnum () ;
            if (kBoolTrue == test_8) {
              const GALGAS_mulEqualExpressionInstructionAST temp_9 = this ;
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray10  COMMA_SOURCE_FILE ("instruction-concat.galgas", 466)) ;
            }
          }
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            test_11 = var_mutableProperties_17764.operator_not (SOURCE_FILE ("instruction-concat.galgas", 468)).boolEnum () ;
            if (kBoolTrue == test_11) {
              const GALGAS_mulEqualExpressionInstructionAST temp_12 = this ;
              TC_Array <C_FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (temp_12.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("the property is not mutable in this context"), fixItArray13  COMMA_SOURCE_FILE ("instruction-concat.galgas", 469)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_2) {
        const GALGAS_mulEqualExpressionInstructionAST temp_14 = this ;
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray15  COMMA_SOURCE_FILE ("instruction-concat.galgas", 472)) ;
        var_targetType_17508.drop () ; // Release error dropped variable
        var_targetVariableCppName_17544.drop () ; // Release error dropped variable
        var_nameForCheckingFormalParameterUsing_17594.drop () ; // Release error dropped variable
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_mulEqualExpressionInstructionAST temp_16 = this ;
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_16.readProperty_mReceiverName (), var_targetType_17508, var_targetVariableCppName_17544, var_nameForCheckingFormalParameterUsing_17594, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 476)) ;
    }
  }
  const GALGAS_mulEqualExpressionInstructionAST temp_17 = this ;
  cEnumerator_lstringlist enumerator_18913 (temp_17.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_18913.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_18966 = extensionGetter_definition (var_targetType_17508, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 485)).readProperty_mPropertyMap () ;
    GALGAS_bool var_isPublic_19054 ;
    GALGAS_bool var_isConstant_19070 ;
    var_propertyMap_18966.method_searchKey (enumerator_18913.current_mValue (HERE), var_isPublic_19054, var_isConstant_19070, var_targetType_17508, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 486)) ;
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      test_18 = var_isPublic_19054.operator_not (SOURCE_FILE ("instruction-concat.galgas", 487)).boolEnum () ;
      if (kBoolTrue == test_18) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (enumerator_18913.current_mValue (HERE).readProperty_location (), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray19  COMMA_SOURCE_FILE ("instruction-concat.galgas", 488)) ;
      }
    }
    enumGalgasBool test_20 = kBoolTrue ;
    if (kBoolTrue == test_20) {
      test_20 = var_isConstant_19070.boolEnum () ;
      if (kBoolTrue == test_20) {
        TC_Array <C_FixItDescription> fixItArray21 ;
        inCompiler->emitSemanticError (enumerator_18913.current_mValue (HERE).readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray21  COMMA_SOURCE_FILE ("instruction-concat.galgas", 491)) ;
      }
    }
    enumerator_18913.gotoNextObject () ;
  }
  enumGalgasBool test_22 = kBoolTrue ;
  if (kBoolTrue == test_22) {
    test_22 = extensionGetter_definition (var_targetType_17508, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 495)).readProperty_mHandledOperatorFlags ().getter_mulEqualOperatorWithExpression (SOURCE_FILE ("instruction-concat.galgas", 495)).boolEnum () ;
    if (kBoolTrue == test_22) {
      const GALGAS_mulEqualExpressionInstructionAST temp_23 = this ;
      TC_Array <C_FixItDescription> fixItArray24 ;
      inCompiler->emitSemanticError (temp_23.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_targetType_17508, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 497)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 497)).add_operation (GALGAS_string ("' type, but this type does not support the '*=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 497)), fixItArray24  COMMA_SOURCE_FILE ("instruction-concat.galgas", 496)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_19886 ;
  const GALGAS_mulEqualExpressionInstructionAST temp_25 = this ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_25.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_17508, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_19886, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 500)) ;
  {
  const GALGAS_mulEqualExpressionInstructionAST temp_26 = this ;
  routine_checkAssignmentTypeWithImplicitGetterCall (var_targetType_17508, var_expression_19886.readProperty_mResultType (), temp_26.readProperty_mInstructionLocation (), var_expression_19886, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 509)) ;
  }
  const GALGAS_mulEqualExpressionInstructionAST temp_27 = this ;
  const GALGAS_mulEqualExpressionInstructionAST temp_28 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (temp_27.readProperty_mInstructionLocation (), var_targetType_17508, var_targetVariableCppName_17544, var_nameForCheckingFormalParameterUsing_17594, temp_28.readProperty_mStructAttributeList (), var_expression_19886, GALGAS_string ("mulAssign_operation")  COMMA_SOURCE_FILE ("instruction-concat.galgas", 511))  COMMA_SOURCE_FILE ("instruction-concat.galgas", 511)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@divEqualExpressionInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_divEqualExpressionInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                               GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMapEntry var_targetType_20886 ;
  GALGAS_string var_targetVariableCppName_20922 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_20972 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_divEqualExpressionInstructionAST temp_1 = this ;
    test_0 = temp_1.readProperty_mPrefixedBySelf ().boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GALGAS_unifiedTypeMapEntry var_selfType_21072 ;
        GALGAS_bool var_selfIsMutable_21100 ;
        GALGAS_bool var_mutableProperties_21142 ;
        const bool optionalResult21052 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_21072, var_selfIsMutable_21100, var_mutableProperties_21142) ;
        if (!optionalResult21052) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_selfIsMutable_21100.operator_not (SOURCE_FILE ("instruction-concat.galgas", 537)).boolEnum () ;
            if (kBoolTrue == test_3) {
              const GALGAS_divEqualExpressionInstructionAST temp_4 = this ;
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (temp_4.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray5  COMMA_SOURCE_FILE ("instruction-concat.galgas", 538)) ;
            }
          }
          GALGAS_propertyMap var_propertyMap_21291 = extensionGetter_definition (var_selfType_21072, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 540)).readProperty_mPropertyMap () ;
          GALGAS_bool var_isConstant_21396 ;
          const GALGAS_divEqualExpressionInstructionAST temp_6 = this ;
          GALGAS_bool joker_21379 ; // Joker input parameter
          var_propertyMap_21291.method_searchKey (temp_6.readProperty_mReceiverName (), joker_21379, var_isConstant_21396, var_targetType_20886, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 541)) ;
          var_nameForCheckingFormalParameterUsing_20972 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName () ;
          const GALGAS_divEqualExpressionInstructionAST temp_7 = this ;
          var_targetVariableCppName_20922 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 543)).add_operation (temp_7.readProperty_mReceiverName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 544)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 544)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = var_isConstant_21396.boolEnum () ;
            if (kBoolTrue == test_8) {
              const GALGAS_divEqualExpressionInstructionAST temp_9 = this ;
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray10  COMMA_SOURCE_FILE ("instruction-concat.galgas", 546)) ;
            }
          }
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            test_11 = var_mutableProperties_21142.operator_not (SOURCE_FILE ("instruction-concat.galgas", 548)).boolEnum () ;
            if (kBoolTrue == test_11) {
              const GALGAS_divEqualExpressionInstructionAST temp_12 = this ;
              TC_Array <C_FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (temp_12.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("the property is not mutable in this context"), fixItArray13  COMMA_SOURCE_FILE ("instruction-concat.galgas", 549)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_2) {
        const GALGAS_divEqualExpressionInstructionAST temp_14 = this ;
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray15  COMMA_SOURCE_FILE ("instruction-concat.galgas", 552)) ;
        var_targetType_20886.drop () ; // Release error dropped variable
        var_targetVariableCppName_20922.drop () ; // Release error dropped variable
        var_nameForCheckingFormalParameterUsing_20972.drop () ; // Release error dropped variable
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_divEqualExpressionInstructionAST temp_16 = this ;
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_16.readProperty_mReceiverName (), var_targetType_20886, var_targetVariableCppName_20922, var_nameForCheckingFormalParameterUsing_20972, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 556)) ;
    }
  }
  const GALGAS_divEqualExpressionInstructionAST temp_17 = this ;
  cEnumerator_lstringlist enumerator_22291 (temp_17.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_22291.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_22344 = extensionGetter_definition (var_targetType_20886, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 565)).readProperty_mPropertyMap () ;
    GALGAS_bool var_isPublic_22432 ;
    GALGAS_bool var_isConstant_22448 ;
    var_propertyMap_22344.method_searchKey (enumerator_22291.current_mValue (HERE), var_isPublic_22432, var_isConstant_22448, var_targetType_20886, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 566)) ;
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      test_18 = var_isPublic_22432.operator_not (SOURCE_FILE ("instruction-concat.galgas", 567)).boolEnum () ;
      if (kBoolTrue == test_18) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (enumerator_22291.current_mValue (HERE).readProperty_location (), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray19  COMMA_SOURCE_FILE ("instruction-concat.galgas", 568)) ;
      }
    }
    enumGalgasBool test_20 = kBoolTrue ;
    if (kBoolTrue == test_20) {
      test_20 = var_isConstant_22448.boolEnum () ;
      if (kBoolTrue == test_20) {
        const GALGAS_divEqualExpressionInstructionAST temp_21 = this ;
        TC_Array <C_FixItDescription> fixItArray22 ;
        inCompiler->emitSemanticError (temp_21.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray22  COMMA_SOURCE_FILE ("instruction-concat.galgas", 571)) ;
      }
    }
    enumerator_22291.gotoNextObject () ;
  }
  enumGalgasBool test_23 = kBoolTrue ;
  if (kBoolTrue == test_23) {
    test_23 = extensionGetter_definition (var_targetType_20886, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 575)).readProperty_mHandledOperatorFlags ().getter_divEqualOperatorWithExpression (SOURCE_FILE ("instruction-concat.galgas", 575)).boolEnum () ;
    if (kBoolTrue == test_23) {
      const GALGAS_divEqualExpressionInstructionAST temp_24 = this ;
      TC_Array <C_FixItDescription> fixItArray25 ;
      inCompiler->emitSemanticError (temp_24.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_targetType_20886, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 577)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 577)).add_operation (GALGAS_string ("' type, but this type does not support the '/=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 577)), fixItArray25  COMMA_SOURCE_FILE ("instruction-concat.galgas", 576)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_23276 ;
  const GALGAS_divEqualExpressionInstructionAST temp_26 = this ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_26.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_20886, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_23276, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 580)) ;
  {
  const GALGAS_divEqualExpressionInstructionAST temp_27 = this ;
  routine_checkAssignmentTypeWithImplicitGetterCall (var_targetType_20886, var_expression_23276.readProperty_mResultType (), temp_27.readProperty_mInstructionLocation (), var_expression_23276, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 589)) ;
  }
  const GALGAS_divEqualExpressionInstructionAST temp_28 = this ;
  const GALGAS_divEqualExpressionInstructionAST temp_29 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (temp_28.readProperty_mInstructionLocation (), var_targetType_20886, var_targetVariableCppName_20922, var_nameForCheckingFormalParameterUsing_20972, temp_29.readProperty_mStructAttributeList (), var_expression_23276, GALGAS_string ("divAssign_operation")  COMMA_SOURCE_FILE ("instruction-concat.galgas", 591))  COMMA_SOURCE_FILE ("instruction-concat.galgas", 591)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@plusEqualElementsInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_plusEqualElementsInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                              GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                              GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                              GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMapEntry var_targetType_24276 ;
  GALGAS_string var_targetVariableCppName_24312 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_24362 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_plusEqualElementsInstructionAST temp_1 = this ;
    test_0 = temp_1.readProperty_mPrefixedBySelf ().boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GALGAS_unifiedTypeMapEntry var_selfType_24462 ;
        GALGAS_bool var_selfIsMutable_24490 ;
        GALGAS_bool var_mutableProperties_24532 ;
        const bool optionalResult24442 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_24462, var_selfIsMutable_24490, var_mutableProperties_24532) ;
        if (!optionalResult24442) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_selfIsMutable_24490.operator_not (SOURCE_FILE ("instruction-concat.galgas", 617)).boolEnum () ;
            if (kBoolTrue == test_3) {
              const GALGAS_plusEqualElementsInstructionAST temp_4 = this ;
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (temp_4.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray5  COMMA_SOURCE_FILE ("instruction-concat.galgas", 618)) ;
            }
          }
          GALGAS_propertyMap var_propertyMap_24681 = extensionGetter_definition (var_selfType_24462, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 620)).readProperty_mPropertyMap () ;
          GALGAS_bool var_isConstant_24786 ;
          const GALGAS_plusEqualElementsInstructionAST temp_6 = this ;
          GALGAS_bool joker_24769 ; // Joker input parameter
          var_propertyMap_24681.method_searchKey (temp_6.readProperty_mReceiverName (), joker_24769, var_isConstant_24786, var_targetType_24276, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 621)) ;
          var_nameForCheckingFormalParameterUsing_24362 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName () ;
          const GALGAS_plusEqualElementsInstructionAST temp_7 = this ;
          var_targetVariableCppName_24312 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 623)).add_operation (temp_7.readProperty_mReceiverName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 624)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 624)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = var_isConstant_24786.boolEnum () ;
            if (kBoolTrue == test_8) {
              const GALGAS_plusEqualElementsInstructionAST temp_9 = this ;
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray10  COMMA_SOURCE_FILE ("instruction-concat.galgas", 626)) ;
            }
          }
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            test_11 = var_mutableProperties_24532.operator_not (SOURCE_FILE ("instruction-concat.galgas", 628)).boolEnum () ;
            if (kBoolTrue == test_11) {
              const GALGAS_plusEqualElementsInstructionAST temp_12 = this ;
              TC_Array <C_FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (temp_12.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("the property cannot be mutated in this context"), fixItArray13  COMMA_SOURCE_FILE ("instruction-concat.galgas", 629)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_2) {
        const GALGAS_plusEqualElementsInstructionAST temp_14 = this ;
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray15  COMMA_SOURCE_FILE ("instruction-concat.galgas", 632)) ;
        var_targetType_24276.drop () ; // Release error dropped variable
        var_targetVariableCppName_24312.drop () ; // Release error dropped variable
        var_nameForCheckingFormalParameterUsing_24362.drop () ; // Release error dropped variable
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_plusEqualElementsInstructionAST temp_16 = this ;
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_16.readProperty_mReceiverName (), var_targetType_24276, var_targetVariableCppName_24312, var_nameForCheckingFormalParameterUsing_24362, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 636)) ;
    }
  }
  const GALGAS_plusEqualElementsInstructionAST temp_17 = this ;
  cEnumerator_lstringlist enumerator_25684 (temp_17.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_25684.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_25737 = extensionGetter_definition (var_targetType_24276, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 645)).readProperty_mPropertyMap () ;
    GALGAS_bool var_isPublic_25825 ;
    GALGAS_bool var_isConstant_25841 ;
    var_propertyMap_25737.method_searchKey (enumerator_25684.current_mValue (HERE), var_isPublic_25825, var_isConstant_25841, var_targetType_24276, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 646)) ;
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      test_18 = var_isPublic_25825.operator_not (SOURCE_FILE ("instruction-concat.galgas", 647)).boolEnum () ;
      if (kBoolTrue == test_18) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (enumerator_25684.current_mValue (HERE).readProperty_location (), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray19  COMMA_SOURCE_FILE ("instruction-concat.galgas", 648)) ;
      }
    }
    enumGalgasBool test_20 = kBoolTrue ;
    if (kBoolTrue == test_20) {
      test_20 = var_isConstant_25841.boolEnum () ;
      if (kBoolTrue == test_20) {
        TC_Array <C_FixItDescription> fixItArray21 ;
        inCompiler->emitSemanticError (enumerator_25684.current_mValue (HERE).readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray21  COMMA_SOURCE_FILE ("instruction-concat.galgas", 651)) ;
      }
    }
    enumerator_25684.gotoNextObject () ;
  }
  GALGAS_functionSignature var_addAssignOperatorArguments_26152 = extensionGetter_definition (var_targetType_24276, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 655)).readProperty_mAddAssignOperatorArguments () ;
  enumGalgasBool test_22 = kBoolTrue ;
  if (kBoolTrue == test_22) {
    test_22 = GALGAS_bool (kIsEqual, var_addAssignOperatorArguments_26152.getter_length (SOURCE_FILE ("instruction-concat.galgas", 656)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 656)).getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 656)))).boolEnum () ;
    if (kBoolTrue == test_22) {
      const GALGAS_plusEqualElementsInstructionAST temp_23 = this ;
      TC_Array <C_FixItDescription> fixItArray24 ;
      inCompiler->emitSemanticError (temp_23.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_targetType_24276, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 658)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 658)).add_operation (GALGAS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 658)), fixItArray24  COMMA_SOURCE_FILE ("instruction-concat.galgas", 657)) ;
    }
  }
  if (kBoolFalse == test_22) {
    enumGalgasBool test_25 = kBoolTrue ;
    if (kBoolTrue == test_25) {
      const GALGAS_plusEqualElementsInstructionAST temp_26 = this ;
      test_25 = GALGAS_bool (kIsNotEqual, temp_26.readProperty_mExpressions ().getter_length (SOURCE_FILE ("instruction-concat.galgas", 660)).objectCompare (var_addAssignOperatorArguments_26152.getter_length (SOURCE_FILE ("instruction-concat.galgas", 660)))).boolEnum () ;
      if (kBoolTrue == test_25) {
        const GALGAS_plusEqualElementsInstructionAST temp_27 = this ;
        const GALGAS_plusEqualElementsInstructionAST temp_28 = this ;
        TC_Array <C_FixItDescription> fixItArray29 ;
        inCompiler->emitSemanticError (temp_27.readProperty_mInstructionLocation (), GALGAS_string ("calling the '+=' operator on an '@").add_operation (extensionGetter_definition (var_targetType_24276, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 662)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 662)).add_operation (GALGAS_string ("' object requires "), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 662)).add_operation (var_addAssignOperatorArguments_26152.getter_length (SOURCE_FILE ("instruction-concat.galgas", 663)).getter_string (SOURCE_FILE ("instruction-concat.galgas", 663)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 662)).add_operation (GALGAS_string (" parameter(s), while this invocation has "), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 663)).add_operation (temp_28.readProperty_mExpressions ().getter_length (SOURCE_FILE ("instruction-concat.galgas", 664)).getter_string (SOURCE_FILE ("instruction-concat.galgas", 664)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 663)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 664)), fixItArray29  COMMA_SOURCE_FILE ("instruction-concat.galgas", 661)) ;
      }
    }
    if (kBoolFalse == test_25) {
      GALGAS_semanticExpressionListForGeneration var_effectiveParameterList_26965 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-concat.galgas", 666)) ;
      const GALGAS_plusEqualElementsInstructionAST temp_30 = this ;
      cEnumerator_actualOutputExpressionList enumerator_27032 (temp_30.readProperty_mExpressions (), kENUMERATION_UP) ;
      cEnumerator_functionSignature enumerator_27094 (var_addAssignOperatorArguments_26152, kENUMERATION_UP) ;
      while (enumerator_27032.hasCurrentObject () && enumerator_27094.hasCurrentObject ()) {
        GALGAS_semanticExpressionForGeneration var_expression_27391 ;
        callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_27032.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_27094.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_27391, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 668)) ;
        enumGalgasBool test_31 = kBoolTrue ;
        if (kBoolTrue == test_31) {
          test_31 = GALGAS_bool (kIsNotEqual, enumerator_27094.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_27032.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
          if (kBoolTrue == test_31) {
            GALGAS_string temp_32 ;
            const enumGalgasBool test_33 = GALGAS_bool (kIsNotEqual, enumerator_27094.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_33) {
              temp_32 = enumerator_27094.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 677)) ;
            }else if (kBoolFalse == test_33) {
              temp_32 = GALGAS_string::makeEmptyString () ;
            }
            GALGAS_string var_s_27484 = GALGAS_string ("!").add_operation (temp_32, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 677)) ;
            TC_Array <C_FixItDescription> fixItArray34 ;
            appendFixItActions (fixItArray34, kFixItReplace, var_s_27484) ;
            inCompiler->emitSemanticError (enumerator_27032.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_27484, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 678)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 678)), fixItArray34  COMMA_SOURCE_FILE ("instruction-concat.galgas", 678)) ;
          }
        }
        {
        routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_27094.current_mFormalArgumentType (HERE), var_expression_27391.readProperty_mResultType (), enumerator_27032.current_mEndOfExpressionLocation (HERE), var_expression_27391, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 682)) ;
        }
        var_effectiveParameterList_26965.addAssign_operation (var_expression_27391  COMMA_SOURCE_FILE ("instruction-concat.galgas", 683)) ;
        enumerator_27032.gotoNextObject () ;
        enumerator_27094.gotoNextObject () ;
      }
      const GALGAS_plusEqualElementsInstructionAST temp_35 = this ;
      const GALGAS_plusEqualElementsInstructionAST temp_36 = this ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_plusEqualnstructionForGeneration::constructor_new (var_targetVariableCppName_24312, var_targetType_24276, var_nameForCheckingFormalParameterUsing_24362, temp_35.readProperty_mInstructionLocation (), temp_36.readProperty_mStructAttributeList (), var_effectiveParameterList_26965  COMMA_SOURCE_FILE ("instruction-concat.galgas", 686))  COMMA_SOURCE_FILE ("instruction-concat.galgas", 686)) ;
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
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_plusEqualnstructionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mTargetType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 718)) ;
  GALGAS_stringlist var_parameterList_29437 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-concat.galgas", 719)) ;
  const GALGAS_plusEqualnstructionForGeneration temp_1 = this ;
  cEnumerator_semanticExpressionListForGeneration enumerator_29473 (temp_1.readProperty_mExpressionList (), kENUMERATION_UP) ;
  while (enumerator_29473.hasCurrentObject ()) {
    GALGAS_string var_parameter_29681 ;
    callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_29473.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_29681, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 721)) ;
    var_parameterList_29437.addAssign_operation (var_parameter_29681  COMMA_SOURCE_FILE ("instruction-concat.galgas", 728)) ;
    enumerator_29473.gotoNextObject () ;
  }
  {
  const GALGAS_plusEqualnstructionForGeneration temp_2 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_2.readProperty_mNameForCheckingFormalParameterUsing () COMMA_SOURCE_FILE ("instruction-concat.galgas", 731)) ;
  }
  const GALGAS_plusEqualnstructionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(temp_3.readProperty_mReceiverCppName (), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 732)) ;
  const GALGAS_plusEqualnstructionForGeneration temp_4 = this ;
  cEnumerator_lstringlist enumerator_29884 (temp_4.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_29884.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_29884.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 734)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 734)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 734)) ;
    enumerator_29884.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".addAssign_operation ("), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 737)) ;
  {
  const GALGAS_plusEqualnstructionForGeneration temp_5 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_5.readProperty_mReceiverCppName () COMMA_SOURCE_FILE ("instruction-concat.galgas", 738)) ;
  }
  cEnumerator_stringlist enumerator_30164 (var_parameterList_29437, kENUMERATION_UP) ;
  while (enumerator_30164.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_30164.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 740)) ;
    if (enumerator_30164.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 741)) ;
    }
    enumerator_30164.gotoNextObject () ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_plusEqualnstructionForGeneration temp_7 = this ;
    test_6 = extensionGetter_definition (temp_7.readProperty_mTargetType (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 743)).readProperty_mHandledOperatorFlags ().getter_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("instruction-concat.galgas", 743)).boolEnum () ;
    if (kBoolTrue == test_6) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 744)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 744)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 744)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 745)) COMMA_SOURCE_FILE ("instruction-concat.galgas", 745)) ;
      }
    }
  }
  const GALGAS_plusEqualnstructionForGeneration temp_8 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_8.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 747)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 747)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 747)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 747)) ;
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
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_opEqualInstructionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mTargetType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 770)) ;
  GALGAS_string var_sourceVar_31749 ;
  const GALGAS_opEqualInstructionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mSourceExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_31749, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 771)) ;
  {
  const GALGAS_opEqualInstructionForGeneration temp_2 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_2.readProperty_mNameForCheckingFormalParameterUsing () COMMA_SOURCE_FILE ("instruction-concat.galgas", 778)) ;
  }
  const GALGAS_opEqualInstructionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(temp_3.readProperty_mTargetVariableCppName (), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 779)) ;
  const GALGAS_opEqualInstructionForGeneration temp_4 = this ;
  cEnumerator_lstringlist enumerator_31902 (temp_4.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_31902.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_31902.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 781)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 781)) ;
    enumerator_31902.gotoNextObject () ;
  }
  const GALGAS_opEqualInstructionForGeneration temp_5 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".").add_operation (temp_5.readProperty_mGeneratedMethod (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 783)).add_operation (GALGAS_string ("("), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 783)).add_operation (var_sourceVar_31749, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 783)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 783)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 784)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 784)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 784)) ;
  const GALGAS_opEqualInstructionForGeneration temp_6 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_6.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 785)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 785)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 785)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 785)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 786)) COMMA_SOURCE_FILE ("instruction-concat.galgas", 786)) ;
  }
  {
  const GALGAS_opEqualInstructionForGeneration temp_7 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_7.readProperty_mTargetVariableCppName () COMMA_SOURCE_FILE ("instruction-concat.galgas", 787)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dropInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_dropInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dropInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_dropInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                 GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                 const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                 GALGAS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                 GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_dropInstructionAST temp_0 = this ;
  cEnumerator_lstringlist enumerator_3073 (temp_0.readProperty_mDropList (), kENUMERATION_UP) ;
  while (enumerator_3073.hasCurrentObject ()) {
    {
    extensionSetter_searchForDropAccess (ioArgument_ioVariableMap, enumerator_3073.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-drop.galgas", 75)) ;
    }
    enumerator_3073.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@errorInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_errorInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_errorInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mLocationExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 184)) ;
  const GALGAS_errorInstructionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_1.readProperty_mMessageExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 185)) ;
  const GALGAS_errorInstructionAST temp_2 = this ;
  extensionMethod_enterFixItListInSemanticContext (temp_2.readProperty_mFixitListAST (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 186)) ;
}
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
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) constinArgument_inLocationExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLocationType (), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, outArgument_outLocationExpression, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 239)) ;
  {
  routine_checkAssignmentTypeWithImplicitGetterCall (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLocationType (), outArgument_outLocationExpression.readProperty_mResultType (), constinArgument_inErrorLocation, outArgument_outLocationExpression, inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 248)) ;
  }
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) constinArgument_inMessageExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-error.galgas", 258)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, outArgument_outMessageExpression, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 255)) ;
  outArgument_outFixitListForGeneration = GALGAS_fixitListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-error.galgas", 264)) ;
  cEnumerator_fixitListAST enumerator_9359 (constinArgument_inFixitListAST, kENUMERATION_UP) ;
  while (enumerator_9359.hasCurrentObject ()) {
    switch (enumerator_9359.current_mElement (HERE).enumValue ()) {
    case GALGAS_fixitElementAST::kNotBuilt:
      break ;
    case GALGAS_fixitElementAST::kEnum_fixItRemove:
      {
        outArgument_outFixitListForGeneration.addAssign_operation (GALGAS_fixitElementForGeneration::constructor_fixItRemove (SOURCE_FILE ("instruction-error.galgas", 268))  COMMA_SOURCE_FILE ("instruction-error.galgas", 268)) ;
      }
      break ;
    case GALGAS_fixitElementAST::kEnum_fixItReplace:
      {
        const cEnumAssociatedValues_fixitElementAST_fixItReplace * extractPtr_10404 = (const cEnumAssociatedValues_fixitElementAST_fixItReplace *) (enumerator_9359.current_mElement (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_9500_exp = extractPtr_10404->mAssociatedValue0 ;
        const GALGAS_location extractedValue_9514_errorLocation = extractPtr_10404->mAssociatedValue1 ;
        GALGAS_semanticExpressionForGeneration var_expression_9774 ;
        callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) extractedValue_9500_exp.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringListType (), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_9774, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 270)) ;
        enumGalgasBool test_0 = kBoolTrue ;
        if (kBoolTrue == test_0) {
          GALGAS_bool test_1 = GALGAS_bool (kIsNotEqual, var_expression_9774.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringListType ())) ;
          if (kBoolTrue == test_1.boolEnum ()) {
            test_1 = GALGAS_bool (kIsNotEqual, var_expression_9774.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLStringListType ())) ;
          }
          GALGAS_bool test_2 = test_1 ;
          if (kBoolTrue == test_2.boolEnum ()) {
            test_2 = GALGAS_bool (kIsNotEqual, var_expression_9774.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringSetType ())) ;
          }
          GALGAS_bool test_3 = test_2 ;
          if (kBoolTrue == test_3.boolEnum ()) {
            test_3 = GALGAS_bool (kIsNotEqual, var_expression_9774.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType ())) ;
          }
          test_0 = test_3.boolEnum () ;
          if (kBoolTrue == test_0) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (extractedValue_9514_errorLocation, GALGAS_string ("expression type is @").add_operation (extensionGetter_definition (var_expression_9774.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 282)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 282)).add_operation (GALGAS_string (", it should be an @string, @stringset, @stringlist or @lstringlist"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 282)), fixItArray4  COMMA_SOURCE_FILE ("instruction-error.galgas", 282)) ;
          }
        }
        outArgument_outFixitListForGeneration.addAssign_operation (GALGAS_fixitElementForGeneration::constructor_fixItReplace (var_expression_9774  COMMA_SOURCE_FILE ("instruction-error.galgas", 285))  COMMA_SOURCE_FILE ("instruction-error.galgas", 285)) ;
      }
      break ;
    case GALGAS_fixitElementAST::kEnum_fixItInsertBefore:
      {
        const cEnumAssociatedValues_fixitElementAST_fixItInsertBefore * extractPtr_11345 = (const cEnumAssociatedValues_fixitElementAST_fixItInsertBefore *) (enumerator_9359.current_mElement (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_10436_exp = extractPtr_11345->mAssociatedValue0 ;
        const GALGAS_location extractedValue_10450_errorLocation = extractPtr_11345->mAssociatedValue1 ;
        GALGAS_semanticExpressionForGeneration var_expression_10710 ;
        callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) extractedValue_10436_exp.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringListType (), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_10710, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 287)) ;
        enumGalgasBool test_5 = kBoolTrue ;
        if (kBoolTrue == test_5) {
          GALGAS_bool test_6 = GALGAS_bool (kIsNotEqual, var_expression_10710.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringListType ())) ;
          if (kBoolTrue == test_6.boolEnum ()) {
            test_6 = GALGAS_bool (kIsNotEqual, var_expression_10710.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLStringListType ())) ;
          }
          GALGAS_bool test_7 = test_6 ;
          if (kBoolTrue == test_7.boolEnum ()) {
            test_7 = GALGAS_bool (kIsNotEqual, var_expression_10710.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringSetType ())) ;
          }
          GALGAS_bool test_8 = test_7 ;
          if (kBoolTrue == test_8.boolEnum ()) {
            test_8 = GALGAS_bool (kIsNotEqual, var_expression_10710.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType ())) ;
          }
          test_5 = test_8.boolEnum () ;
          if (kBoolTrue == test_5) {
            TC_Array <C_FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (extractedValue_10450_errorLocation, GALGAS_string ("expression type is @").add_operation (extensionGetter_definition (var_expression_10710.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 299)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 299)).add_operation (GALGAS_string (", it should be an @string, @stringset, @stringlist or @lstringlist"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 299)), fixItArray9  COMMA_SOURCE_FILE ("instruction-error.galgas", 299)) ;
          }
        }
        outArgument_outFixitListForGeneration.addAssign_operation (GALGAS_fixitElementForGeneration::constructor_fixItInsertBefore (var_expression_10710  COMMA_SOURCE_FILE ("instruction-error.galgas", 302))  COMMA_SOURCE_FILE ("instruction-error.galgas", 302)) ;
      }
      break ;
    case GALGAS_fixitElementAST::kEnum_fixItInsertAfter:
      {
        const cEnumAssociatedValues_fixitElementAST_fixItInsertAfter * extractPtr_12284 = (const cEnumAssociatedValues_fixitElementAST_fixItInsertAfter *) (enumerator_9359.current_mElement (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_11376_exp = extractPtr_12284->mAssociatedValue0 ;
        const GALGAS_location extractedValue_11390_errorLocation = extractPtr_12284->mAssociatedValue1 ;
        GALGAS_semanticExpressionForGeneration var_expression_11650 ;
        callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) extractedValue_11376_exp.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringListType (), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_11650, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 304)) ;
        enumGalgasBool test_10 = kBoolTrue ;
        if (kBoolTrue == test_10) {
          GALGAS_bool test_11 = GALGAS_bool (kIsNotEqual, var_expression_11650.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringListType ())) ;
          if (kBoolTrue == test_11.boolEnum ()) {
            test_11 = GALGAS_bool (kIsNotEqual, var_expression_11650.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLStringListType ())) ;
          }
          GALGAS_bool test_12 = test_11 ;
          if (kBoolTrue == test_12.boolEnum ()) {
            test_12 = GALGAS_bool (kIsNotEqual, var_expression_11650.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringSetType ())) ;
          }
          GALGAS_bool test_13 = test_12 ;
          if (kBoolTrue == test_13.boolEnum ()) {
            test_13 = GALGAS_bool (kIsNotEqual, var_expression_11650.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType ())) ;
          }
          test_10 = test_13.boolEnum () ;
          if (kBoolTrue == test_10) {
            TC_Array <C_FixItDescription> fixItArray14 ;
            inCompiler->emitSemanticError (extractedValue_11390_errorLocation, GALGAS_string ("expression type is @").add_operation (extensionGetter_definition (var_expression_11650.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 316)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 316)).add_operation (GALGAS_string (", it should be an @string, @stringset, @stringlist or @lstringlist"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 316)), fixItArray14  COMMA_SOURCE_FILE ("instruction-error.galgas", 316)) ;
          }
        }
        outArgument_outFixitListForGeneration.addAssign_operation (GALGAS_fixitElementForGeneration::constructor_fixItInsertAfter (var_expression_11650  COMMA_SOURCE_FILE ("instruction-error.galgas", 319))  COMMA_SOURCE_FILE ("instruction-error.galgas", 319)) ;
      }
      break ;
    }
    enumerator_9359.gotoNextObject () ;
  }
  enumGalgasBool test_15 = kBoolTrue ;
  if (kBoolTrue == test_15) {
    test_15 = GALGAS_bool (kIsNotEqual, outArgument_outMessageExpression.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType ())).boolEnum () ;
    if (kBoolTrue == test_15) {
      TC_Array <C_FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the ").add_operation (constinArgument_inErrorOrWarningString, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 325)).add_operation (GALGAS_string (" message expression type is '@"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 325)).add_operation (extensionGetter_definition (outArgument_outMessageExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 325)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 325)).add_operation (GALGAS_string ("'; it should be of the '@string' type"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 325)), fixItArray16  COMMA_SOURCE_FILE ("instruction-error.galgas", 324)) ;
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
                                                                  GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                  GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration var_locationExpression_13388 ;
  GALGAS_semanticExpressionForGeneration var_messageExpression_13415 ;
  GALGAS_fixitListForGeneration var_fixitListForGeneration_13447 ;
  {
  const GALGAS_errorInstructionAST temp_0 = this ;
  const GALGAS_errorInstructionAST temp_1 = this ;
  const GALGAS_errorInstructionAST temp_2 = this ;
  const GALGAS_errorInstructionAST temp_3 = this ;
  routine_analyzeErrorOrWarningInstruction (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_0.readProperty_mLocationExpression (), temp_1.readProperty_mMessageExpression (), temp_2.readProperty_mFixitListAST (), temp_3.readProperty_mInstructionLocation (), GALGAS_string ("error"), ioArgument_ioVariableMap, var_locationExpression_13388, var_messageExpression_13415, var_fixitListForGeneration_13447, inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 340)) ;
  }
  GALGAS_stringlist var_builtVariableCppNameList_13512 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-error.galgas", 355)) ;
  const GALGAS_errorInstructionAST temp_4 = this ;
  cEnumerator_lstringlist enumerator_13543 (temp_4.readProperty_mBuiltVariableList (), kENUMERATION_UP) ;
  while (enumerator_13543.hasCurrentObject ()) {
    GALGAS_string var_varCppName_13643 ;
    {
    GALGAS_unifiedTypeMapEntry joker_13626 ; // Joker input parameter
    GALGAS_string joker_13645 ; // Joker input parameter
    extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, enumerator_13543.current_mValue (HERE), joker_13626, var_varCppName_13643, joker_13645, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 357)) ;
    }
    var_builtVariableCppNameList_13512.addAssign_operation (var_varCppName_13643  COMMA_SOURCE_FILE ("instruction-error.galgas", 358)) ;
    enumerator_13543.gotoNextObject () ;
  }
  const GALGAS_errorInstructionAST temp_5 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_errorInstructionForGeneration::constructor_new (temp_5.readProperty_mInstructionLocation (), var_locationExpression_13388, var_messageExpression_13415, var_builtVariableCppNameList_13512, var_fixitListForGeneration_13447  COMMA_SOURCE_FILE ("instruction-error.galgas", 361))  COMMA_SOURCE_FILE ("instruction-error.galgas", 361)) ;
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
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string var_receiverCppVarName_17092 ;
  const GALGAS_errorInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppVarName_17092, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 440)) ;
  GALGAS_string var_messageCppVarName_17299 ;
  const GALGAS_errorInstructionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mErrorExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_messageCppVarName_17299, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 448)) ;
  GALGAS_string var_fixItArrayCppName_17556 ;
  const GALGAS_errorInstructionForGeneration temp_2 = this ;
  extensionMethod_generateFixIt (temp_2.readProperty_mFixitListForGeneration (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, var_fixItArrayCppName_17556, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 456)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 465)) COMMA_SOURCE_FILE ("instruction-error.galgas", 465)) ;
  }
  const GALGAS_errorInstructionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 466)).add_operation (GALGAS_string ("->emitSemanticError ("), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 466)).add_operation (var_receiverCppVarName_17092, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 466)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 467)).add_operation (var_messageCppVarName_17299, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 467)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 468)).add_operation (var_fixItArrayCppName_17556, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 468)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 469)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 470)), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 469)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 470)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 466)) ;
  const GALGAS_errorInstructionForGeneration temp_4 = this ;
  cEnumerator_stringlist enumerator_17919 (temp_4.readProperty_mBuiltVariableCppNameList (), kENUMERATION_UP) ;
  while (enumerator_17919.hasCurrentObject ()) {
    {
    ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (enumerator_17919.current_mValue (HERE) COMMA_SOURCE_FILE ("instruction-error.galgas", 473)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_17919.current_mValue (HERE).add_operation (GALGAS_string (".drop () ; // Release error dropped variable\n"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 474)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 474)) ;
    enumerator_17919.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@forInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_forInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_forInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mWhileExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 498)) ;
  const GALGAS_forInstructionAST temp_1 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_1.readProperty_mBeforeInstructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 499)) ;
  const GALGAS_forInstructionAST temp_2 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_2.readProperty_mBetweenInstructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 500)) ;
  const GALGAS_forInstructionAST temp_3 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_3.readProperty_mDoInstructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 501)) ;
  const GALGAS_forInstructionAST temp_4 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_4.readProperty_mAfterInstructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 502)) ;
  const GALGAS_forInstructionAST temp_5 = this ;
  cEnumerator_forInstructionEnumeratedObjectListAST enumerator_16535 (temp_5.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
  while (enumerator_16535.hasCurrentObject ()) {
    callExtensionMethod_enterInSemanticContext ((const cPtr_abstractEnumeratedCollectionAST *) enumerator_16535.current_mEnumeratedCollection (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 504)) ;
    enumerator_16535.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumeratedCollectionImplicitVarInExpAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_enumeratedCollectionImplicitVarInExpAST::method_enterInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mEnumeratedExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 515)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumeratedCollectionCstListInExpAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_enumeratedCollectionCstListInExpAST::method_enterInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_enumeratedCollectionCstListInExpAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mEnumeratedExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 521)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumeratedCollectionVarInExpAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_enumeratedCollectionVarInExpAST::method_enterInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_enumeratedCollectionVarInExpAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mEnumeratedExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 527)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumeratedCollectionImplicitVarInExpAST analyzeEnumeration'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_enumeratedCollectionImplicitVarInExpAST::method_analyzeEnumeration (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                              GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                              GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                              GALGAS_localConstantList & ioArgument_ioLocalConstantListForDoBranch,
                                                                              GALGAS_string & outArgument_outEnumeratorCppName,
                                                                              GALGAS_semanticExpressionForGeneration & outArgument_outEnumerationExpression,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mEnumeratedExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-for.galgas", 558)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, outArgument_outEnumerationExpression, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 555)) ;
  const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_1 = this ;
  outArgument_outEnumeratorCppName = GALGAS_string ("enumerator_").add_operation (temp_1.readProperty_mEndOfAnonymousEnumeration ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 564)).getter_string (SOURCE_FILE ("instruction-for.galgas", 564)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 564)) ;
  GALGAS_enumerationDescriptorList var_enumerationDescriptorList_19336 = extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 565)).readProperty_mEnumerationDescriptor () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsEqual, var_enumerationDescriptorList_19336.getter_length (SOURCE_FILE ("instruction-for.galgas", 566)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 566)).getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 566)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mEndOfAnonymousEnumeration (), GALGAS_string ("an '@").add_operation (extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 567)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 567)).add_operation (GALGAS_string ("' object cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 567)), fixItArray4  COMMA_SOURCE_FILE ("instruction-for.galgas", 567)) ;
    }
  }
  GALGAS_string var_suggestion_19671 = GALGAS_string ("(") ;
  cEnumerator_enumerationDescriptorList enumerator_19717 (var_enumerationDescriptorList_19336, kENUMERATION_UP) ;
  while (enumerator_19717.hasCurrentObject ()) {
    const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_5 = this ;
    var_suggestion_19671.plusAssign_operation(temp_5.readProperty_mPrefix ().readProperty_string ().add_operation (enumerator_19717.current_mEnumerationName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 573)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 573)) ;
    const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_6 = this ;
    const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_7 = this ;
    ioArgument_ioLocalConstantListForDoBranch.addAssign_operation (enumerator_19717.current_mEnumeratedType (HERE), GALGAS_lstring::constructor_new (temp_6.readProperty_mPrefix ().readProperty_string ().add_operation (enumerator_19717.current_mEnumerationName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 576)), temp_7.readProperty_mEndOfAnonymousEnumeration ()  COMMA_SOURCE_FILE ("instruction-for.galgas", 576)), GALGAS_bool (true), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 578)).add_operation (enumerator_19717.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-for.galgas", 578)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 578)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 578))  COMMA_SOURCE_FILE ("instruction-for.galgas", 574)) ;
    if (enumerator_19717.hasNextObject ()) {
      var_suggestion_19671.plusAssign_operation(GALGAS_string (" "), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 580)) ;
    }
    enumerator_19717.gotoNextObject () ;
  }
  var_suggestion_19671.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 582)) ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorAnomynousForInstructionEnumeratedObject.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_8) {
      const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_9 = this ;
      TC_Array <C_FixItDescription> fixItArray10 ;
      appendFixItActions (fixItArray10, kFixItReplace, var_suggestion_19671) ;
      inCompiler->emitSemanticError (temp_9.readProperty_mEndOfAnonymousEnumeration (), GALGAS_string ("anonymous 'for' enumerated object (due to '--error-anonymous-for-instruction' option)"), fixItArray10  COMMA_SOURCE_FILE ("instruction-for.galgas", 584)) ;
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
                                                                          GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                          GALGAS_localConstantList & ioArgument_ioLocalConstantListForDoBranch,
                                                                          GALGAS_string & outArgument_outEnumeratorCppName,
                                                                          GALGAS_semanticExpressionForGeneration & outArgument_outEnumerationExpression,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_enumeratedCollectionCstListInExpAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mEnumeratedExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-for.galgas", 604)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, outArgument_outEnumerationExpression, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 601)) ;
  const GALGAS_enumeratedCollectionCstListInExpAST temp_1 = this ;
  outArgument_outEnumeratorCppName = GALGAS_string ("enumerator_").add_operation (temp_1.readProperty_mEndOfEnumerationExpression ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 610)).getter_string (SOURCE_FILE ("instruction-for.galgas", 610)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 610)) ;
  GALGAS_enumerationDescriptorList var_enumerationDescriptorList_21335 = extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 611)).readProperty_mEnumerationDescriptor () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsEqual, var_enumerationDescriptorList_21335.getter_length (SOURCE_FILE ("instruction-for.galgas", 612)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 612)).getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 612)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_enumeratedCollectionCstListInExpAST temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mEndOfEnumerationExpression (), GALGAS_string ("an '@").add_operation (extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 613)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 613)).add_operation (GALGAS_string ("' object cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 613)), fixItArray4  COMMA_SOURCE_FILE ("instruction-for.galgas", 613)) ;
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      const GALGAS_enumeratedCollectionCstListInExpAST temp_6 = this ;
      const GALGAS_enumeratedCollectionCstListInExpAST temp_7 = this ;
      test_5 = GALGAS_bool (kIsEqual, temp_6.readProperty_mElementList ().getter_length (SOURCE_FILE ("instruction-for.galgas", 616)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 616)).getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 616)))).operator_and (temp_7.readProperty_mEndsWithEllipsis ().operator_not (SOURCE_FILE ("instruction-for.galgas", 616)) COMMA_SOURCE_FILE ("instruction-for.galgas", 616)).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_enumerationDescriptorList var_currentTypedAttributeList_21749 = extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 617)).readProperty_mEnumerationDescriptor () ;
        cEnumerator_enumerationDescriptorList enumerator_21868 (var_currentTypedAttributeList_21749, kENUMERATION_UP) ;
        while (enumerator_21868.hasCurrentObject ()) {
          {
          const GALGAS_enumeratedCollectionCstListInExpAST temp_8 = this ;
          extensionSetter_insertUsedLocalConstant (ioArgument_ioVariableMap, GALGAS_lstring::constructor_new (enumerator_21868.current_mEnumerationName (HERE), temp_8.readProperty_mEndOfEnumerationExpression ()  COMMA_SOURCE_FILE ("instruction-for.galgas", 620)), enumerator_21868.current_mEnumeratedType (HERE), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 622)).add_operation (enumerator_21868.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-for.galgas", 622)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 622)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 622)), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 623)).add_operation (enumerator_21868.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-for.galgas", 623)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 623)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 623)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 619)) ;
          }
          enumerator_21868.gotoNextObject () ;
        }
      }
    }
    if (kBoolFalse == test_5) {
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        const GALGAS_enumeratedCollectionCstListInExpAST temp_10 = this ;
        const GALGAS_enumeratedCollectionCstListInExpAST temp_11 = this ;
        test_9 = temp_10.readProperty_mEndsWithEllipsis ().operator_not (SOURCE_FILE ("instruction-for.galgas", 626)).operator_and (GALGAS_bool (kIsNotEqual, temp_11.readProperty_mElementList ().getter_length (SOURCE_FILE ("instruction-for.galgas", 626)).objectCompare (var_enumerationDescriptorList_21335.getter_length (SOURCE_FILE ("instruction-for.galgas", 626)))) COMMA_SOURCE_FILE ("instruction-for.galgas", 626)).boolEnum () ;
        if (kBoolTrue == test_9) {
          const GALGAS_enumeratedCollectionCstListInExpAST temp_12 = this ;
          GALGAS_string temp_13 ;
          const enumGalgasBool test_14 = GALGAS_bool (kIsStrictSup, var_enumerationDescriptorList_21335.getter_length (SOURCE_FILE ("instruction-for.galgas", 630)).objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 630)).getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 630)))).boolEnum () ;
          if (kBoolTrue == test_14) {
            temp_13 = GALGAS_string ("s") ;
          }else if (kBoolFalse == test_14) {
            temp_13 = GALGAS_string::makeEmptyString () ;
          }
          const GALGAS_enumeratedCollectionCstListInExpAST temp_15 = this ;
          TC_Array <C_FixItDescription> fixItArray16 ;
          inCompiler->emitSemanticError (temp_12.readProperty_mEndOfEnumerationExpression (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 628)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 628)).add_operation (GALGAS_string ("' type requires "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 628)).add_operation (var_enumerationDescriptorList_21335.getter_length (SOURCE_FILE ("instruction-for.galgas", 629)).getter_string (SOURCE_FILE ("instruction-for.galgas", 629)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 628)).add_operation (GALGAS_string (" argument"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 629)).add_operation (temp_13, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 629)).add_operation (GALGAS_string (" for enumeration: this list provides "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 630)).add_operation (temp_15.readProperty_mElementList ().getter_length (SOURCE_FILE ("instruction-for.galgas", 632)).getter_string (SOURCE_FILE ("instruction-for.galgas", 632)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 631)), fixItArray16  COMMA_SOURCE_FILE ("instruction-for.galgas", 627)) ;
        }
      }
      if (kBoolFalse == test_9) {
        enumGalgasBool test_17 = kBoolTrue ;
        if (kBoolTrue == test_17) {
          const GALGAS_enumeratedCollectionCstListInExpAST temp_18 = this ;
          const GALGAS_enumeratedCollectionCstListInExpAST temp_19 = this ;
          test_17 = temp_18.readProperty_mEndsWithEllipsis ().operator_and (GALGAS_bool (kIsStrictSup, temp_19.readProperty_mElementList ().getter_length (SOURCE_FILE ("instruction-for.galgas", 633)).objectCompare (var_enumerationDescriptorList_21335.getter_length (SOURCE_FILE ("instruction-for.galgas", 633)))) COMMA_SOURCE_FILE ("instruction-for.galgas", 633)).boolEnum () ;
          if (kBoolTrue == test_17) {
            const GALGAS_enumeratedCollectionCstListInExpAST temp_20 = this ;
            GALGAS_string temp_21 ;
            const enumGalgasBool test_22 = GALGAS_bool (kIsStrictSup, var_enumerationDescriptorList_21335.getter_length (SOURCE_FILE ("instruction-for.galgas", 637)).objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 637)).getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 637)))).boolEnum () ;
            if (kBoolTrue == test_22) {
              temp_21 = GALGAS_string ("s") ;
            }else if (kBoolFalse == test_22) {
              temp_21 = GALGAS_string::makeEmptyString () ;
            }
            const GALGAS_enumeratedCollectionCstListInExpAST temp_23 = this ;
            TC_Array <C_FixItDescription> fixItArray24 ;
            inCompiler->emitSemanticError (temp_20.readProperty_mEndOfEnumerationExpression (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 635)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 635)).add_operation (GALGAS_string ("' type requires "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 635)).add_operation (var_enumerationDescriptorList_21335.getter_length (SOURCE_FILE ("instruction-for.galgas", 636)).getter_string (SOURCE_FILE ("instruction-for.galgas", 636)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 635)).add_operation (GALGAS_string (" argument"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 636)).add_operation (temp_21, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 636)).add_operation (GALGAS_string (" or less for enumeration: this list provides "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 637)).add_operation (temp_23.readProperty_mElementList ().getter_length (SOURCE_FILE ("instruction-for.galgas", 639)).getter_string (SOURCE_FILE ("instruction-for.galgas", 639)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 638)), fixItArray24  COMMA_SOURCE_FILE ("instruction-for.galgas", 634)) ;
          }
        }
        if (kBoolFalse == test_17) {
          enumGalgasBool test_25 = kBoolTrue ;
          if (kBoolTrue == test_25) {
            GALGAS_bool test_26 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorEllipsisInEnumeratedObject.readProperty_value ()) ;
            if (kBoolTrue == test_26.boolEnum ()) {
              const GALGAS_enumeratedCollectionCstListInExpAST temp_27 = this ;
              test_26 = GALGAS_bool (kIsStrictSup, var_enumerationDescriptorList_21335.getter_length (SOURCE_FILE ("instruction-for.galgas", 641)).objectCompare (temp_27.readProperty_mElementList ().getter_length (SOURCE_FILE ("instruction-for.galgas", 641)))) ;
            }
            test_25 = test_26.boolEnum () ;
            if (kBoolTrue == test_25) {
              const GALGAS_enumeratedCollectionCstListInExpAST temp_28 = this ;
              GALGAS_uint var_missingArgumentCount_23460 = var_enumerationDescriptorList_21335.getter_length (SOURCE_FILE ("instruction-for.galgas", 642)).substract_operation (temp_28.readProperty_mElementList ().getter_length (SOURCE_FILE ("instruction-for.galgas", 642)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 642)) ;
              const GALGAS_enumeratedCollectionCstListInExpAST temp_29 = this ;
              TC_Array <C_FixItDescription> fixItArray30 ;
              GALGAS_string temp_31 ;
              const enumGalgasBool test_32 = GALGAS_bool (kIsEqual, var_missingArgumentCount_23460.objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 645)).getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 645)))).boolEnum () ;
              if (kBoolTrue == test_32) {
                temp_31 = GALGAS_string ("*") ;
              }else if (kBoolFalse == test_32) {
                temp_31 = GALGAS_string (" ").add_operation (var_missingArgumentCount_23460.getter_string (SOURCE_FILE ("instruction-for.galgas", 645)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 645)).add_operation (GALGAS_string ("*"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 645)) ;
              }
              appendFixItActions (fixItArray30, kFixItReplace, temp_31) ;
              inCompiler->emitSemanticError (temp_29.readProperty_mEndOfEnumerationExpression (), GALGAS_string ("enumerated object ends with '...' (due to '--error-ellipsis-in-for-instruction' option)"), fixItArray30  COMMA_SOURCE_FILE ("instruction-for.galgas", 643)) ;
            }
          }
          const GALGAS_enumeratedCollectionCstListInExpAST temp_33 = this ;
          cEnumerator_forInstructionEnumeratedObjectElementListAST enumerator_23858 (temp_33.readProperty_mElementList (), kENUMERATION_UP) ;
          cEnumerator_enumerationDescriptorList enumerator_23915 (var_enumerationDescriptorList_21335, kENUMERATION_UP) ;
          while (enumerator_23858.hasCurrentObject () && enumerator_23915.hasCurrentObject ()) {
            enumGalgasBool test_34 = kBoolTrue ;
            if (kBoolTrue == test_34) {
              test_34 = GALGAS_bool (kIsNotEqual, enumerator_23858.current_mOptionalConstantName (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_34) {
                enumGalgasBool test_35 = kBoolTrue ;
                if (kBoolTrue == test_35) {
                  test_35 = GALGAS_bool (kIsNotEqual, enumerator_23858.current_mOptionalTypeName (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                  if (kBoolTrue == test_35) {
                    GALGAS_unifiedTypeMapEntry var_foundType_24098 = extensionGetter_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), enumerator_23858.current_mOptionalTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 650)) ;
                    enumGalgasBool test_36 = kBoolTrue ;
                    if (kBoolTrue == test_36) {
                      test_36 = GALGAS_bool (kIsNotEqual, var_foundType_24098.objectCompare (enumerator_23915.current_mEnumeratedType (HERE))).boolEnum () ;
                      if (kBoolTrue == test_36) {
                        TC_Array <C_FixItDescription> fixItArray37 ;
                        inCompiler->emitSemanticError (enumerator_23858.current_mOptionalTypeName (HERE).readProperty_location (), GALGAS_string ("incorrect '@").add_operation (extensionGetter_definition (var_foundType_24098, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 652)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 652)).add_operation (GALGAS_string ("' type: '@"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 652)).add_operation (extensionGetter_definition (enumerator_23915.current_mEnumeratedType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 652)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 652)).add_operation (GALGAS_string ("' type required here"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 652)), fixItArray37  COMMA_SOURCE_FILE ("instruction-for.galgas", 652)) ;
                      }
                    }
                  }
                }
                ioArgument_ioLocalConstantListForDoBranch.addAssign_operation (enumerator_23915.current_mEnumeratedType (HERE), enumerator_23858.current_mOptionalConstantName (HERE), enumerator_23858.current_mDeclaredAsUnused (HERE), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 659)).add_operation (enumerator_23915.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-for.galgas", 659)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 659)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 659))  COMMA_SOURCE_FILE ("instruction-for.galgas", 655)) ;
              }
            }
            enumerator_23858.gotoNextObject () ;
            enumerator_23915.gotoNextObject () ;
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
                                                                      GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                      GALGAS_localConstantList & ioArgument_ioLocalConstantListForDoBranch,
                                                                      GALGAS_string & outArgument_outEnumeratorCppName,
                                                                      GALGAS_semanticExpressionForGeneration & outArgument_outEnumerationExpression,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_enumeratedCollectionVarInExpAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mEnumeratedExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-for.galgas", 680)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, outArgument_outEnumerationExpression, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 677)) ;
  const GALGAS_enumeratedCollectionVarInExpAST temp_1 = this ;
  outArgument_outEnumeratorCppName = GALGAS_string ("enumerator_").add_operation (temp_1.readProperty_mEndOfEnumerationExpression ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 686)).getter_string (SOURCE_FILE ("instruction-for.galgas", 686)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 686)) ;
  GALGAS_unifiedTypeMapEntry var_enumeratedElementType_25648 = extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 687)).readProperty_mTypeForEnumeratedElement () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_enumeratedElementType_25648.getter_isNull (SOURCE_FILE ("instruction-for.galgas", 688)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_enumeratedCollectionVarInExpAST temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mEndOfEnumerationExpression (), GALGAS_string ("an '@").add_operation (extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 689)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 689)).add_operation (GALGAS_string ("' object cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 689)), fixItArray4  COMMA_SOURCE_FILE ("instruction-for.galgas", 689)) ;
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      const GALGAS_enumeratedCollectionVarInExpAST temp_6 = this ;
      test_5 = GALGAS_bool (kIsNotEqual, temp_6.readProperty_mEnumerationVariable ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_enumeratedCollectionVarInExpAST temp_7 = this ;
        ioArgument_ioLocalConstantListForDoBranch.addAssign_operation (var_enumeratedElementType_25648, temp_7.readProperty_mEnumerationVariable (), GALGAS_bool (false), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 691))  COMMA_SOURCE_FILE ("instruction-for.galgas", 691)) ;
      }
    }
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    const GALGAS_enumeratedCollectionVarInExpAST temp_9 = this ;
    test_8 = GALGAS_bool (kIsNotEqual, temp_9.readProperty_mEnumerationOptionalTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_8) {
      const GALGAS_enumeratedCollectionVarInExpAST temp_10 = this ;
      GALGAS_unifiedTypeMapEntry var_explicitType_26224 = extensionGetter_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), temp_10.readProperty_mEnumerationOptionalTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 695)) ;
      enumGalgasBool test_11 = kBoolTrue ;
      if (kBoolTrue == test_11) {
        test_11 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (var_enumeratedElementType_25648, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 696)).readProperty_mTypeName ().readProperty_string ().objectCompare (extensionGetter_definition (var_explicitType_26224, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 696)).readProperty_mTypeName ().readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_11) {
          const GALGAS_enumeratedCollectionVarInExpAST temp_12 = this ;
          TC_Array <C_FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (temp_12.readProperty_mEnumerationOptionalTypeName ().readProperty_location (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (var_enumeratedElementType_25648, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 697)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 697)).add_operation (GALGAS_string ("' type is expected here"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 697)), fixItArray13  COMMA_SOURCE_FILE ("instruction-for.galgas", 697)) ;
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
                                                                GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 713)) ;
  }
  {
  extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 714)) ;
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 716)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_before_5F_instructionList_27585 ;
  {
  const GALGAS_forInstructionAST temp_0 = this ;
  const GALGAS_forInstructionAST temp_1 = this ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 721)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 722)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 723)), temp_0.readProperty_mBeforeInstructionList (), temp_1.readProperty_mEndOf_5F_before_5F_branch (), ioArgument_ioVariableMap, var_before_5F_instructionList_27585, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 717)) ;
  }
  {
  const GALGAS_forInstructionAST temp_2 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_2.readProperty_mEndOf_5F_before_5F_branch (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 729)) ;
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 731)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_between_5F_instructionList_28097 ;
  {
  const GALGAS_forInstructionAST temp_3 = this ;
  const GALGAS_forInstructionAST temp_4 = this ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 736)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 737)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 738)), temp_3.readProperty_mBetweenInstructionList (), temp_4.readProperty_mEndOf_5F_between_5F_branch (), ioArgument_ioVariableMap, var_between_5F_instructionList_28097, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 732)) ;
  }
  {
  const GALGAS_forInstructionAST temp_5 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_5.readProperty_mEndOf_5F_between_5F_branch (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 744)) ;
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 746)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_after_5F_instructionList_28640 ;
  {
  const GALGAS_forInstructionAST temp_6 = this ;
  const GALGAS_forInstructionAST temp_7 = this ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 751)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 752)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 753)), temp_6.readProperty_mAfterInstructionList (), temp_7.readProperty_mEndOf_5F_after_5F_branch (), ioArgument_ioVariableMap, var_after_5F_instructionList_28640, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 747)) ;
  }
  {
  const GALGAS_forInstructionAST temp_8 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_8.readProperty_mEndOf_5F_after_5F_branch (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 759)) ;
  }
  GALGAS_localConstantList var_localConstantListForDoBranch_28790 = GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 761)) ;
  GALGAS_forInstructionEnumeratedObjectListForGeneration var_enumerationList_28866 = GALGAS_forInstructionEnumeratedObjectListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 762)) ;
  const GALGAS_forInstructionAST temp_9 = this ;
  cEnumerator_forInstructionEnumeratedObjectListAST enumerator_28911 (temp_9.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
  while (enumerator_28911.hasCurrentObject ()) {
    GALGAS_string var_enumeratorCppName_29178 ;
    GALGAS_semanticExpressionForGeneration var_enumerationExpression_29244 ;
    callExtensionMethod_analyzeEnumeration ((const cPtr_abstractEnumeratedCollectionAST *) enumerator_28911.current_mEnumeratedCollection (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_localConstantListForDoBranch_28790, var_enumeratorCppName_29178, var_enumerationExpression_29244, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 764)) ;
    GALGAS_string temp_10 ;
    const enumGalgasBool test_11 = enumerator_28911.current_mAscending (HERE).boolEnum () ;
    if (kBoolTrue == test_11) {
      temp_10 = GALGAS_string ("UP") ;
    }else if (kBoolFalse == test_11) {
      temp_10 = GALGAS_string ("DOWN") ;
    }
    var_enumerationList_28866.addAssign_operation (temp_10, var_enumerationExpression_29244, var_enumeratorCppName_29178  COMMA_SOURCE_FILE ("instruction-for.galgas", 774)) ;
    enumerator_28911.gotoNextObject () ;
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 780)) ;
  }
  {
  extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 781)) ;
  }
  cEnumerator_localConstantList enumerator_29568 (var_localConstantListForDoBranch_28790, kENUMERATION_UP) ;
  while (enumerator_29568.hasCurrentObject ()) {
    {
    extensionSetter_insertUsedLocalConstant (ioArgument_ioVariableMap, enumerator_29568.current (HERE).readProperty_mName (), enumerator_29568.current (HERE).readProperty_mType (), enumerator_29568.current (HERE).readProperty_mCppName (), enumerator_29568.current (HERE).readProperty_mCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 784)) ;
    }
    enumerator_29568.gotoNextObject () ;
  }
  GALGAS_semanticExpressionForGeneration var_uncheckedWhileExpression_30010 ;
  const GALGAS_forInstructionAST temp_12 = this ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_12.readProperty_mWhileExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-for.galgas", 795)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_uncheckedWhileExpression_30010, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 792)) ;
  GALGAS_semanticExpressionForGeneration var_whileExpression_30188 ;
  {
  const GALGAS_forInstructionAST temp_13 = this ;
  routine_checkExpressionIsBoolean (constinArgument_inAnalysisContext, temp_13.readProperty_mEndOf_5F_while_5F_expression (), var_uncheckedWhileExpression_30010, var_whileExpression_30188, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 800)) ;
  }
  {
  const GALGAS_forInstructionAST temp_14 = this ;
  extensionSetter_closeBranch (ioArgument_ioVariableMap, temp_14.readProperty_mEndOf_5F_while_5F_expression (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 807)) ;
  }
  {
  const GALGAS_forInstructionAST temp_15 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_15.readProperty_mEndOf_5F_while_5F_expression (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 808)) ;
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 810)) ;
  }
  GALGAS_string var_indexCppName_30415 = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_16 = kBoolTrue ;
  if (kBoolTrue == test_16) {
    const GALGAS_forInstructionAST temp_17 = this ;
    test_16 = GALGAS_bool (kIsNotEqual, temp_17.readProperty_mIndexVariableName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_16) {
      const GALGAS_forInstructionAST temp_18 = this ;
      var_indexCppName_30415 = GALGAS_string ("index_").add_operation (temp_18.readProperty_mInstructionLocation ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 813)).getter_string (SOURCE_FILE ("instruction-for.galgas", 813)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 813)) ;
      const GALGAS_forInstructionAST temp_19 = this ;
      var_localConstantListForDoBranch_28790.addAssign_operation (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType (), temp_19.readProperty_mIndexVariableName (), GALGAS_bool (false), var_indexCppName_30415  COMMA_SOURCE_FILE ("instruction-for.galgas", 814)) ;
    }
  }
  GALGAS_semanticInstructionListForGeneration var_do_5F_instructionList_31140 ;
  {
  const GALGAS_forInstructionAST temp_20 = this ;
  const GALGAS_forInstructionAST temp_21 = this ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_localConstantListForDoBranch_28790, GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 826)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 827)), temp_20.readProperty_mDoInstructionList (), temp_21.readProperty_mEndOf_5F_do_5F_branch (), ioArgument_ioVariableMap, var_do_5F_instructionList_31140, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 821)) ;
  }
  {
  const GALGAS_forInstructionAST temp_22 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_22.readProperty_mEndOf_5F_foreach_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 834)) ;
  }
  {
  const GALGAS_forInstructionAST temp_23 = this ;
  extensionSetter_closeBranch (ioArgument_ioVariableMap, temp_23.readProperty_mEndOf_5F_foreach_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 836)) ;
  }
  {
  const GALGAS_forInstructionAST temp_24 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_24.readProperty_mEndOf_5F_foreach_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 837)) ;
  }
  const GALGAS_forInstructionAST temp_25 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_forInstructionForGeneration::constructor_new (temp_25.readProperty_mInstructionLocation (), var_enumerationList_28866, var_indexCppName_30415, var_whileExpression_30188, var_before_5F_instructionList_27585, var_between_5F_instructionList_28097, var_do_5F_instructionList_31140, var_after_5F_instructionList_28640  COMMA_SOURCE_FILE ("instruction-for.galgas", 839))  COMMA_SOURCE_FILE ("instruction-for.galgas", 839)) ;
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
                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_stringlist var_enumerationVarCppNameList_33507 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 885)) ;
  const GALGAS_forInstructionForGeneration temp_0 = this ;
  cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_33545 (temp_0.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
  while (enumerator_33545.hasCurrentObject ()) {
    GALGAS_string var_enumerationVar_33766 ;
    callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_33545.current_mEnumeratedExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_enumerationVar_33766, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 887)) ;
    var_enumerationVarCppNameList_33507.addAssign_operation (var_enumerationVar_33766  COMMA_SOURCE_FILE ("instruction-for.galgas", 894)) ;
    enumerator_33545.gotoNextObject () ;
  }
  const GALGAS_forInstructionForGeneration temp_1 = this ;
  cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_33893 (temp_1.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
  cEnumerator_stringlist enumerator_33933 (var_enumerationVarCppNameList_33507, kENUMERATION_UP) ;
  while (enumerator_33893.hasCurrentObject () && enumerator_33933.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cEnumerator_").add_operation (extensionGetter_identifierRepresentation (enumerator_33893.current_mEnumeratedExpression (HERE).readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 897)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 897)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 897)).add_operation (enumerator_33893.current_mEnumeratorCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 898)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 898)).add_operation (enumerator_33933.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 898)).add_operation (GALGAS_string (", kENUMERATION_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 898)).add_operation (enumerator_33893.current_mEnumerationOrder (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 899)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 899)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 897)) ;
    enumerator_33893.gotoNextObject () ;
    enumerator_33933.gotoNextObject () ;
  }
  const GALGAS_forInstructionForGeneration temp_2 = this ;
  GALGAS_bool var_whileExpressionIsAllwaysTrue_34245 = callExtensionGetter_isTrueExpression ((const cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mWhileExpression ().ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 902)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_forInstructionForGeneration temp_4 = this ;
    const GALGAS_forInstructionForGeneration temp_5 = this ;
    test_3 = GALGAS_bool (kIsStrictSup, temp_4.readProperty_mBeforeInstructionList ().getter_length (SOURCE_FILE ("instruction-for.galgas", 904)).add_operation (temp_5.readProperty_mAfterInstructionList ().getter_length (SOURCE_FILE ("instruction-for.galgas", 904)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 904)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 904)).getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 904)))).operator_or (var_whileExpressionIsAllwaysTrue_34245.operator_not (SOURCE_FILE ("instruction-for.galgas", 904)) COMMA_SOURCE_FILE ("instruction-for.galgas", 904)).boolEnum () ;
    if (kBoolTrue == test_3) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        const GALGAS_forInstructionForGeneration temp_7 = this ;
        test_6 = GALGAS_bool (kIsNotEqual, temp_7.readProperty_mIndexVariableCppName ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          const GALGAS_forInstructionForGeneration temp_8 = this ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_uint ").add_operation (temp_8.readProperty_mIndexVariableCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 907)).add_operation (GALGAS_string (" ((uint32_t) 0) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 907)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 907)) ;
        }
      }
      GALGAS_string var_boolVarCppName_34680 = GALGAS_string ("bool_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-for.galgas", 909)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 909)) ;
      ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 910)) ;
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = var_whileExpressionIsAllwaysTrue_34245.boolEnum () ;
        if (kBoolTrue == test_9) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const bool ").add_operation (var_boolVarCppName_34680, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 912)).add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 912)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 912)) ;
        }
      }
      if (kBoolFalse == test_9) {
        GALGAS_string var_whileVar_35035 ;
        const GALGAS_forInstructionForGeneration temp_10 = this ;
        callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_10.readProperty_mWhileExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_whileVar_35035, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 914)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("bool ").add_operation (var_boolVarCppName_34680, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 915)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 915)).add_operation (var_whileVar_35035, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 915)).add_operation (GALGAS_string (".isValidAndTrue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 915)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 915)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 917)) ;
      const GALGAS_forInstructionForGeneration temp_11 = this ;
      cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_35202 (temp_11.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
      while (enumerator_35202.hasCurrentObject ()) {
        ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_35202.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject () && "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 919)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 919)) ;
        enumerator_35202.gotoNextObject () ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(var_boolVarCppName_34680.add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 921)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 921)) ;
      {
      const GALGAS_forInstructionForGeneration temp_12 = this ;
      routine_generateInstructionList (ioArgument_ioInclusionSet, temp_12.readProperty_mBeforeInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 922)) ;
      }
      {
      ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 930)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("while ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 931)) ;
      const GALGAS_forInstructionForGeneration temp_13 = this ;
      cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_35707 (temp_13.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
      while (enumerator_35707.hasCurrentObject ()) {
        ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_35707.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject () && "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 933)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 933)) ;
        enumerator_35707.gotoNextObject () ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(var_boolVarCppName_34680.add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 935)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 935)) ;
      {
      const GALGAS_forInstructionForGeneration temp_14 = this ;
      routine_generateInstructionList (ioArgument_ioInclusionSet, temp_14.readProperty_mDoInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 937)) ;
      }
      const GALGAS_forInstructionForGeneration temp_15 = this ;
      cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_36190 (temp_15.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
      while (enumerator_36190.hasCurrentObject ()) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (enumerator_36190.current_mEnumeratorCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 947)).add_operation (GALGAS_string (".gotoNextObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 947)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 947)) ;
        enumerator_36190.gotoNextObject () ;
      }
      enumGalgasBool test_16 = kBoolTrue ;
      if (kBoolTrue == test_16) {
        const GALGAS_forInstructionForGeneration temp_17 = this ;
        test_16 = GALGAS_bool (kIsNotEqual, temp_17.readProperty_mIndexVariableCppName ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_16) {
          const GALGAS_forInstructionForGeneration temp_18 = this ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (temp_18.readProperty_mIndexVariableCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 950)).add_operation (GALGAS_string (".increment () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 950)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 950)) ;
        }
      }
      enumGalgasBool test_19 = kBoolTrue ;
      if (kBoolTrue == test_19) {
        test_19 = var_whileExpressionIsAllwaysTrue_34245.operator_not (SOURCE_FILE ("instruction-for.galgas", 953)).boolEnum () ;
        if (kBoolTrue == test_19) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 954)) ;
          const GALGAS_forInstructionForGeneration temp_20 = this ;
          cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_36591 (temp_20.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
          while (enumerator_36591.hasCurrentObject ()) {
            ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_36591.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject ()"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 956)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 956)) ;
            if (enumerator_36591.hasNextObject ()) {
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" && "), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 957)) ;
            }
            enumerator_36591.gotoNextObject () ;
          }
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 959)) ;
          GALGAS_string var_whileVar_36971 ;
          const GALGAS_forInstructionForGeneration temp_21 = this ;
          callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_21.readProperty_mWhileExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_whileVar_36971, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 960)) ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("    ").add_operation (var_boolVarCppName_34680, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 967)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 967)).add_operation (var_whileVar_36971, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 967)).add_operation (GALGAS_string (".isValidAndTrue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 967)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 967)) ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  }\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 968)) ;
        }
      }
      enumGalgasBool test_22 = kBoolTrue ;
      if (kBoolTrue == test_22) {
        const GALGAS_forInstructionForGeneration temp_23 = this ;
        test_22 = GALGAS_bool (kIsStrictSup, temp_23.readProperty_mBetweenInstructionList ().getter_length (SOURCE_FILE ("instruction-for.galgas", 971)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 971)).getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 971)))).boolEnum () ;
        if (kBoolTrue == test_22) {
          {
          ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 972)) ;
          }
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 973)) ;
          const GALGAS_forInstructionForGeneration temp_24 = this ;
          cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_37317 (temp_24.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
          while (enumerator_37317.hasCurrentObject ()) {
            ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_37317.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject () && "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 975)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 975)) ;
            enumerator_37317.gotoNextObject () ;
          }
          ioArgument_ioGeneratedCode.plusAssign_operation(var_boolVarCppName_34680.add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 977)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 977)) ;
          {
          const GALGAS_forInstructionForGeneration temp_25 = this ;
          routine_generateInstructionList (ioArgument_ioInclusionSet, temp_25.readProperty_mBetweenInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 978)) ;
          }
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 986)) ;
          {
          ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 987)) ;
          }
        }
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 990)) ;
      {
      ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 992)) ;
      }
      {
      const GALGAS_forInstructionForGeneration temp_26 = this ;
      routine_generateInstructionList (ioArgument_ioInclusionSet, temp_26.readProperty_mAfterInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 993)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1001)) ;
    }
  }
  if (kBoolFalse == test_3) {
    enumGalgasBool test_27 = kBoolTrue ;
    if (kBoolTrue == test_27) {
      const GALGAS_forInstructionForGeneration temp_28 = this ;
      test_27 = GALGAS_bool (kIsNotEqual, temp_28.readProperty_mIndexVariableCppName ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_27) {
        const GALGAS_forInstructionForGeneration temp_29 = this ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_uint ").add_operation (temp_29.readProperty_mIndexVariableCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1004)).add_operation (GALGAS_string (" ((uint32_t) 0) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1004)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1004)) ;
      }
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("while ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1006)) ;
    const GALGAS_forInstructionForGeneration temp_30 = this ;
    cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_38514 (temp_30.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
    while (enumerator_38514.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_38514.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject ()"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1008)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1008)) ;
      if (enumerator_38514.hasNextObject ()) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" && "), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1009)) ;
      }
      enumerator_38514.gotoNextObject () ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1011)) ;
    {
    const GALGAS_forInstructionForGeneration temp_31 = this ;
    routine_generateInstructionList (ioArgument_ioInclusionSet, temp_31.readProperty_mDoInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1013)) ;
    }
    enumGalgasBool test_32 = kBoolTrue ;
    if (kBoolTrue == test_32) {
      const GALGAS_forInstructionForGeneration temp_33 = this ;
      test_32 = GALGAS_bool (kIsStrictSup, temp_33.readProperty_mBetweenInstructionList ().getter_length (SOURCE_FILE ("instruction-for.galgas", 1022)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1022)).getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1022)))).boolEnum () ;
      if (kBoolTrue == test_32) {
        {
        ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1023)) ;
        }
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1024)) ;
        const GALGAS_forInstructionForGeneration temp_34 = this ;
        cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_39162 (temp_34.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
        while (enumerator_39162.hasCurrentObject ()) {
          ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_39162.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasNextObject ()"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1026)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1026)) ;
          if (enumerator_39162.hasNextObject ()) {
            ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" && "), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1027)) ;
          }
          enumerator_39162.gotoNextObject () ;
        }
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1029)) ;
        {
        const GALGAS_forInstructionForGeneration temp_35 = this ;
        routine_generateInstructionList (ioArgument_ioInclusionSet, temp_35.readProperty_mBetweenInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1030)) ;
        }
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1038)) ;
        {
        ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1039)) ;
        }
      }
    }
    const GALGAS_forInstructionForGeneration temp_36 = this ;
    cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_39750 (temp_36.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
    while (enumerator_39750.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (enumerator_39750.current_mEnumeratorCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1043)).add_operation (GALGAS_string (".gotoNextObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1043)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1043)) ;
      enumerator_39750.gotoNextObject () ;
    }
    enumGalgasBool test_37 = kBoolTrue ;
    if (kBoolTrue == test_37) {
      const GALGAS_forInstructionForGeneration temp_38 = this ;
      test_37 = GALGAS_bool (kIsNotEqual, temp_38.readProperty_mIndexVariableCppName ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_37) {
        {
        ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1046)) COMMA_SOURCE_FILE ("instruction-for.galgas", 1046)) ;
        }
        const GALGAS_forInstructionForGeneration temp_39 = this ;
        const GALGAS_forInstructionForGeneration temp_40 = this ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (temp_39.readProperty_mIndexVariableCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1047)).add_operation (GALGAS_string (".increment_operation ("), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1047)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1047)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1047)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1047)).add_operation (extensionGetter_commaSourceFile (temp_40.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1048)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1048)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1048)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1047)) ;
      }
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1050)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInFileInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_grammarInFileInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_grammarInFileInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 343)) ;
  const GALGAS_grammarInFileInstructionAST temp_1 = this ;
  cEnumerator_actualParameterListAST enumerator_15320 (temp_1.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_15320.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((const cPtr_actualParameterAST *) enumerator_15320.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 345)) ;
    enumerator_15320.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInStringInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_grammarInStringInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_grammarInStringInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 354)) ;
  const GALGAS_grammarInStringInstructionAST temp_1 = this ;
  cEnumerator_actualParameterListAST enumerator_15776 (temp_1.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_15776.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((const cPtr_actualParameterAST *) enumerator_15776.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 356)) ;
    enumerator_15776.gotoNextObject () ;
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
                                                                          GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                          GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_grammarInFileInstructionAST temp_0 = this ;
  GALGAS_lstring var_usefulnessName_16484 = function_grammarNameForUsefulEntitiesGraph (temp_0.readProperty_mGrammarComponentName (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 371)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_16484 COMMA_SOURCE_FILE ("instruction-grammar.galgas", 372)) ;
  }
  GALGAS_grammarLabelMap var_grammarLabelMap_16801 ;
  GALGAS_bool var_hasTranslateFeature_16843 ;
  const GALGAS_grammarInFileInstructionAST temp_1 = this ;
  GALGAS_bool joker_16807 ; // Joker input parameter
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mGrammarMap ().method_searchKey (temp_1.readProperty_mGrammarComponentName (), var_grammarLabelMap_16801, joker_16807, var_hasTranslateFeature_16843, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 374)) ;
  GALGAS_formalParameterSignature var_labelSignature_16965 ;
  const GALGAS_grammarInFileInstructionAST temp_2 = this ;
  var_grammarLabelMap_16801.method_searchKey (temp_2.readProperty_mLabelName (), var_labelSignature_16965, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 381)) ;
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_17415 ;
  {
  const GALGAS_grammarInFileInstructionAST temp_3 = this ;
  const GALGAS_grammarInFileInstructionAST temp_4 = this ;
  const GALGAS_grammarInFileInstructionAST temp_5 = this ;
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_3.readProperty_mLabelName (), GALGAS_string ("label of the ").add_operation (temp_4.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 391)).add_operation (GALGAS_string (" grammar"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 391)), var_labelSignature_16965, temp_5.readProperty_mActualParameterList (), ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_17415, inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 386)) ;
  }
  GALGAS_semanticExpressionForGeneration var_sourceExpression_17710 ;
  const GALGAS_grammarInFileInstructionAST temp_6 = this ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_6.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-grammar.galgas", 402)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_sourceExpression_17710, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 399)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (kIsNotEqual, var_sourceExpression_17710.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLStringType ())).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_grammarInFileInstructionAST temp_8 = this ;
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mEndOfSourceExpression (), GALGAS_string ("this expression is the source file path and its type should be '@lstring', but it is '@").add_operation (extensionGetter_definition (var_sourceExpression_17710.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 411)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 410)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 411)), fixItArray9  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 409)) ;
    }
  }
  const GALGAS_grammarInFileInstructionAST temp_10 = this ;
  GALGAS_string var_syntaxDirectedTranslationResultVarName_18203 = GALGAS_string ("syntaxDirectedTranslationResult_").add_operation (temp_10.readProperty_mGrammarComponentName ().readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 414)).getter_string (SOURCE_FILE ("instruction-grammar.galgas", 414)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 414)) ;
  GALGAS_stringlist var_assignementList_18316 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 415)) ;
  const GALGAS_grammarInFileInstructionAST temp_11 = this ;
  callExtensionMethod_analyzeGrammarInstructionSDT ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_11.readProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult ().ptr (), constinArgument_inAnalysisContext, var_hasTranslateFeature_16843, var_syntaxDirectedTranslationResultVarName_18203, var_assignementList_18316, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 416)) ;
  const GALGAS_grammarInFileInstructionAST temp_12 = this ;
  const GALGAS_grammarInFileInstructionAST temp_13 = this ;
  const GALGAS_grammarInFileInstructionAST temp_14 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_grammarInstructionWithSourceFileForGeneration::constructor_new (temp_12.readProperty_mInstructionLocation (), temp_13.readProperty_mGrammarComponentName ().readProperty_string (), temp_14.readProperty_mLabelName ().readProperty_string (), var_sourceExpression_17710, var_actualParameterListForGeneration_17415, var_hasTranslateFeature_16843, var_assignementList_18316, var_syntaxDirectedTranslationResultVarName_18203  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 424))  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 424)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInStringInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_grammarInStringInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                            GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                            const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                            GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                            GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_grammarInStringInstructionAST temp_0 = this ;
  GALGAS_lstring var_grammarUsefulnessName_19407 = function_grammarNameForUsefulEntitiesGraph (temp_0.readProperty_mGrammarComponentName (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 445)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_grammarUsefulnessName_19407 COMMA_SOURCE_FILE ("instruction-grammar.galgas", 446)) ;
  }
  GALGAS_grammarLabelMap var_grammarLabelMap_19731 ;
  GALGAS_bool var_hasTranslateFeature_19773 ;
  const GALGAS_grammarInStringInstructionAST temp_1 = this ;
  GALGAS_bool joker_19737 ; // Joker input parameter
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mGrammarMap ().method_searchKey (temp_1.readProperty_mGrammarComponentName (), var_grammarLabelMap_19731, joker_19737, var_hasTranslateFeature_19773, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 448)) ;
  GALGAS_formalParameterSignature var_labelSignature_19895 ;
  const GALGAS_grammarInStringInstructionAST temp_2 = this ;
  var_grammarLabelMap_19731.method_searchKey (temp_2.readProperty_mLabelName (), var_labelSignature_19895, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 455)) ;
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_20345 ;
  {
  const GALGAS_grammarInStringInstructionAST temp_3 = this ;
  const GALGAS_grammarInStringInstructionAST temp_4 = this ;
  const GALGAS_grammarInStringInstructionAST temp_5 = this ;
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_3.readProperty_mLabelName (), GALGAS_string ("label of the ").add_operation (temp_4.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 465)).add_operation (GALGAS_string (" grammar"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 465)), var_labelSignature_19895, temp_5.readProperty_mActualParameterList (), ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_20345, inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 460)) ;
  }
  GALGAS_semanticExpressionForGeneration var_sourceExpression_20640 ;
  const GALGAS_grammarInStringInstructionAST temp_6 = this ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_6.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-grammar.galgas", 476)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_sourceExpression_20640, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 473)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (kIsNotEqual, var_sourceExpression_20640.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType ())).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_grammarInStringInstructionAST temp_8 = this ;
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mEndOfSourceExpression (), GALGAS_string ("this expression is the source string and its type should be '@string', but it is '@").add_operation (extensionGetter_definition (var_sourceExpression_20640.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 485)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 484)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 485)), fixItArray9  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 483)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_nameExpression_21268 ;
  const GALGAS_grammarInStringInstructionAST temp_10 = this ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_10.readProperty_mNameExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-grammar.galgas", 491)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_nameExpression_21268, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 488)) ;
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GALGAS_bool (kIsNotEqual, var_nameExpression_21268.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType ())).boolEnum () ;
    if (kBoolTrue == test_11) {
      const GALGAS_grammarInStringInstructionAST temp_12 = this ;
      TC_Array <C_FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mEndOfNameExpression (), GALGAS_string ("this expression is the name string and its type should be '@string', but it is '@").add_operation (extensionGetter_definition (var_sourceExpression_20640.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 500)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 499)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 500)), fixItArray13  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 498)) ;
    }
  }
  const GALGAS_grammarInStringInstructionAST temp_14 = this ;
  GALGAS_string var_syntaxDirectedTranslationResultVarName_21704 = GALGAS_string ("syntaxDirectedTranslationResult_").add_operation (temp_14.readProperty_mGrammarComponentName ().readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 503)).getter_string (SOURCE_FILE ("instruction-grammar.galgas", 503)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 503)) ;
  GALGAS_stringlist var_assignementList_21817 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 504)) ;
  const GALGAS_grammarInStringInstructionAST temp_15 = this ;
  callExtensionMethod_analyzeGrammarInstructionSDT ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_15.readProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult ().ptr (), constinArgument_inAnalysisContext, var_hasTranslateFeature_19773, var_syntaxDirectedTranslationResultVarName_21704, var_assignementList_21817, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 505)) ;
  const GALGAS_grammarInStringInstructionAST temp_16 = this ;
  const GALGAS_grammarInStringInstructionAST temp_17 = this ;
  const GALGAS_grammarInStringInstructionAST temp_18 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_grammarInstructionWithSourceExpressionForGeneration::constructor_new (temp_16.readProperty_mInstructionLocation (), temp_17.readProperty_mGrammarComponentName ().readProperty_string (), temp_18.readProperty_mLabelName ().readProperty_string (), var_sourceExpression_20640, var_nameExpression_21268, var_actualParameterListForGeneration_20345, var_hasTranslateFeature_19773, var_assignementList_21817, var_syntaxDirectedTranslationResultVarName_21704  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 513))  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 513)) ;
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
                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("grammar-").add_operation (temp_0.readProperty_mGrammarName ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 550)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 550))  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 550)) ;
  GALGAS_string var_sourceVar_23971 ;
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mSourceFileExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_23971, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 552)) ;
  GALGAS_stringlist var_parameterCppNameList_24024 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 560)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_24078 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 561)) ;
  GALGAS_stringlist var_inputVariableList_24121 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 562)) ;
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_2 = this ;
  cEnumerator_actualParameterListForGeneration enumerator_24164 (temp_2.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_24164.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_24473 ;
    callExtensionMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_24164.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_24078, var_inputVariableList_24121, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_24473, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 564)) ;
    var_parameterCppNameList_24024.addAssign_operation (var_parameterCppName_24473  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 573)) ;
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (NULL != dynamic_cast <const cPtr_inputActualParameterForGeneration *> (enumerator_24164.current_mActualParameter (HERE).ptr ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        ioArgument_ioGeneratedCode.plusAssign_operation(var_parameterCppName_24473.add_operation (GALGAS_string (".drop () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 575)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 575)) ;
      }
    }
    enumerator_24164.gotoNextObject () ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_grammarInstructionWithSourceFileForGeneration temp_5 = this ;
    test_4 = temp_5.readProperty_mGrammarHasTranslateFeature ().boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_grammarInstructionWithSourceFileForGeneration temp_6 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("C_String ").add_operation (temp_6.readProperty_mSyntaxDirectedTranslationResultVarName (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 579)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 579)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 579)) ;
    }
  }
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_7 = this ;
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_8 = this ;
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_9 = this ;
  GALGAS_string temp_10 ;
  const enumGalgasBool test_11 = temp_9.readProperty_mGrammarHasTranslateFeature ().boolEnum () ;
  if (kBoolTrue == test_11) {
    const GALGAS_grammarInstructionWithSourceFileForGeneration temp_12 = this ;
    temp_10 = temp_12.readProperty_mSyntaxDirectedTranslationResultVarName ().add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 585)) ;
  }else if (kBoolFalse == test_11) {
    temp_10 = GALGAS_string::makeEmptyString () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cGrammar_").add_operation (temp_7.readProperty_mGrammarName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 581)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 581)).add_operation (GALGAS_string ("::_performSourceFileParsing_"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 581)).add_operation (temp_8.readProperty_mLabelName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 582)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 582)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 582)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 584)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 583)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 584)).add_operation (temp_10, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 584)).add_operation (var_sourceVar_23971, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 585)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 581)) ;
  cEnumerator_stringlist enumerator_25256 (var_parameterCppNameList_24024, kENUMERATION_UP) ;
  while (enumerator_25256.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (enumerator_25256.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 588)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 588)) ;
    enumerator_25256.gotoNextObject () ;
  }
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_13 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_13.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 590)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 590)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 590)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 590)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 591)) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 591)) ;
  }
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_14 = this ;
  cEnumerator_stringlist enumerator_25514 (temp_14.readProperty_mAssignementList (), kENUMERATION_UP) ;
  while (enumerator_25514.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_25514.current (HERE).readProperty_mValue ().add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 593)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 593)) ;
    enumerator_25514.gotoNextObject () ;
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
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("grammar-").add_operation (temp_0.readProperty_mGrammarName ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 621)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 621))  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 621)) ;
  GALGAS_string var_sourceVar_27163 ;
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mSourceStringExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_27163, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 623)) ;
  GALGAS_string var_nameVar_27381 ;
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mNameStringExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_nameVar_27381, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 631)) ;
  GALGAS_stringlist var_parameterCppNameList_27434 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 639)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_27488 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 640)) ;
  GALGAS_stringlist var_inputVariableList_27531 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 641)) ;
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_3 = this ;
  cEnumerator_actualParameterListForGeneration enumerator_27574 (temp_3.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_27574.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_27890 ;
    callExtensionMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_27574.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_27488, var_inputVariableList_27531, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_27890, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 643)) ;
    var_parameterCppNameList_27434.addAssign_operation (var_parameterCppName_27890  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 652)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (NULL != dynamic_cast <const cPtr_inputActualParameterForGeneration *> (enumerator_27574.current_mActualParameter (HERE).ptr ())).boolEnum () ;
      if (kBoolTrue == test_4) {
        ioArgument_ioGeneratedCode.plusAssign_operation(var_parameterCppName_27890.add_operation (GALGAS_string (".drop () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 654)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 654)) ;
      }
    }
    enumerator_27574.gotoNextObject () ;
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_6 = this ;
    test_5 = temp_6.readProperty_mGrammarHasTranslateFeature ().boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_7 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("C_String ").add_operation (temp_7.readProperty_mSyntaxDirectedTranslationResultVarName (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 658)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 658)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 658)) ;
    }
  }
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_8 = this ;
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_9 = this ;
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_10 = this ;
  GALGAS_string temp_11 ;
  const enumGalgasBool test_12 = temp_10.readProperty_mGrammarHasTranslateFeature ().boolEnum () ;
  if (kBoolTrue == test_12) {
    const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_13 = this ;
    temp_11 = temp_13.readProperty_mSyntaxDirectedTranslationResultVarName ().add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 663)) ;
  }else if (kBoolFalse == test_12) {
    temp_11 = GALGAS_string::makeEmptyString () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cGrammar_").add_operation (temp_8.readProperty_mGrammarName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 660)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 660)).add_operation (GALGAS_string ("::_performSourceStringParsing_"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 660)).add_operation (temp_9.readProperty_mLabelName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 661)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 661)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 661)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 662)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 662)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 662)).add_operation (temp_11, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 662)).add_operation (var_sourceVar_27163, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 663)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 664)).add_operation (var_nameVar_27381, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 665)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 660)) ;
  cEnumerator_stringlist enumerator_28692 (var_parameterCppNameList_27434, kENUMERATION_UP) ;
  while (enumerator_28692.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (enumerator_28692.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 667)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 667)) ;
    enumerator_28692.gotoNextObject () ;
  }
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_14 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_14.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 669)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 669)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 669)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 669)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 670)) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 670)) ;
  }
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_15 = this ;
  cEnumerator_stringlist enumerator_28950 (temp_15.readProperty_mAssignementList (), kENUMERATION_UP) ;
  while (enumerator_28950.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_28950.current (HERE).readProperty_mValue ().add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 672)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 672)) ;
    enumerator_28950.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@incDecInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_incDecInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@incDecNoOVFInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_incDecNoOVFInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfIncDecInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_selfIncDecInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfIncDecNoOVFInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_selfIncDecNoOVFInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@incDecInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_incDecInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                   GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                   const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                   GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                   GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMapEntry var_targetType_9320 ;
  GALGAS_string var_targetVariableCppName_9356 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_incDecInstructionAST temp_1 = this ;
    test_0 = temp_1.readProperty_mPrefixedBySelf ().boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GALGAS_unifiedTypeMapEntry var_selfType_9507 ;
        GALGAS_bool var_selfIsMutable_9535 ;
        GALGAS_bool var_mutableProperties_9577 ;
        const bool optionalResult9487 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_9507, var_selfIsMutable_9535, var_mutableProperties_9577) ;
        if (!optionalResult9487) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_selfIsMutable_9535.operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 290)).boolEnum () ;
            if (kBoolTrue == test_3) {
              const GALGAS_incDecInstructionAST temp_4 = this ;
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (temp_4.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray5  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 291)) ;
            }
          }
          GALGAS_propertyMap var_propertyMap_9726 = extensionGetter_definition (var_selfType_9507, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 293)).readProperty_mPropertyMap () ;
          GALGAS_bool var_isConstant_9831 ;
          const GALGAS_incDecInstructionAST temp_6 = this ;
          GALGAS_bool joker_9814 ; // Joker input parameter
          var_propertyMap_9726.method_searchKey (temp_6.readProperty_mReceiverName (), joker_9814, var_isConstant_9831, var_targetType_9320, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 294)) ;
          const GALGAS_incDecInstructionAST temp_7 = this ;
          var_targetVariableCppName_9356 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 296)).add_operation (temp_7.readProperty_mReceiverName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-inc-dec.galgas", 297)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 297)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = var_isConstant_9831.boolEnum () ;
            if (kBoolTrue == test_8) {
              const GALGAS_incDecInstructionAST temp_9 = this ;
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray10  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 299)) ;
            }
          }
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            test_11 = var_mutableProperties_9577.operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 301)).boolEnum () ;
            if (kBoolTrue == test_11) {
              const GALGAS_incDecInstructionAST temp_12 = this ;
              TC_Array <C_FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (temp_12.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("the property cannot be mutated in this constant"), fixItArray13  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 302)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_2) {
        const GALGAS_incDecInstructionAST temp_14 = this ;
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray15  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 305)) ;
        var_targetType_9320.drop () ; // Release error dropped variable
        var_targetVariableCppName_9356.drop () ; // Release error dropped variable
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_incDecInstructionAST temp_16 = this ;
    GALGAS_string joker_11605 ; // Joker input parameter
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_16.readProperty_mReceiverName (), var_targetType_9320, var_targetVariableCppName_9356, joker_11605, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 327)) ;
    }
  }
  const GALGAS_incDecInstructionAST temp_17 = this ;
  cEnumerator_lstringlist enumerator_11677 (temp_17.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_11677.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_11730 = extensionGetter_definition (var_targetType_9320, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 336)).readProperty_mPropertyMap () ;
    GALGAS_bool var_isPublic_11818 ;
    GALGAS_bool var_isConstant_11834 ;
    var_propertyMap_11730.method_searchKey (enumerator_11677.current_mValue (HERE), var_isPublic_11818, var_isConstant_11834, var_targetType_9320, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 337)) ;
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      test_18 = var_isPublic_11818.operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 338)).boolEnum () ;
      if (kBoolTrue == test_18) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (enumerator_11677.current_mValue (HERE).readProperty_location (), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray19  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 339)) ;
      }
    }
    enumGalgasBool test_20 = kBoolTrue ;
    if (kBoolTrue == test_20) {
      test_20 = var_isConstant_11834.boolEnum () ;
      if (kBoolTrue == test_20) {
        TC_Array <C_FixItDescription> fixItArray21 ;
        inCompiler->emitSemanticError (enumerator_11677.current_mValue (HERE).readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray21  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 342)) ;
      }
    }
    enumerator_11677.gotoNextObject () ;
  }
  enumGalgasBool test_22 = kBoolTrue ;
  if (kBoolTrue == test_22) {
    test_22 = extensionGetter_definition (var_targetType_9320, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 346)).readProperty_mHandledOperatorFlags ().getter_incDecOperator (SOURCE_FILE ("instruction-inc-dec.galgas", 346)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 346)).boolEnum () ;
    if (kBoolTrue == test_22) {
      const GALGAS_incDecInstructionAST temp_23 = this ;
      TC_Array <C_FixItDescription> fixItArray24 ;
      inCompiler->emitSemanticError (temp_23.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_targetType_9320, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 348)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 348)).add_operation (GALGAS_string ("' type, but this type does not support the '++', '--' operators"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 348)), fixItArray24  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 347)) ;
    }
  }
  const GALGAS_incDecInstructionAST temp_25 = this ;
  const GALGAS_incDecInstructionAST temp_26 = this ;
  const GALGAS_incDecInstructionAST temp_27 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_incDecInstructionForGeneration::constructor_new (temp_25.readProperty_mInstructionLocation (), var_targetVariableCppName_9356, var_targetType_9320, temp_26.readProperty_mStructAttributeList (), temp_27.readProperty_mKind ()  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 351))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 351)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@incDecNoOVFInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_incDecNoOVFInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                        GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                        const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                        GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                        GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMapEntry var_targetType_13120 ;
  GALGAS_string var_targetVariableCppName_13223 ;
  {
  const GALGAS_incDecNoOVFInstructionAST temp_0 = this ;
  GALGAS_string joker_13225 ; // Joker input parameter
  extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_0.readProperty_mReceiverName (), var_targetType_13120, var_targetVariableCppName_13223, joker_13225, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 371)) ;
  }
  const GALGAS_incDecNoOVFInstructionAST temp_1 = this ;
  cEnumerator_lstringlist enumerator_13241 (temp_1.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_13241.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_13294 = extensionGetter_definition (var_targetType_13120, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 373)).readProperty_mPropertyMap () ;
    GALGAS_bool var_isPublic_13382 ;
    GALGAS_bool var_isConstant_13398 ;
    var_propertyMap_13294.method_searchKey (enumerator_13241.current_mValue (HERE), var_isPublic_13382, var_isConstant_13398, var_targetType_13120, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 374)) ;
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = var_isPublic_13382.operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 375)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_13241.current_mValue (HERE).readProperty_location (), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray3  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 376)) ;
      }
    }
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = var_isConstant_13398.boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_13241.current_mValue (HERE).readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray5  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 379)) ;
      }
    }
    enumerator_13241.gotoNextObject () ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = extensionGetter_definition (var_targetType_13120, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 383)).readProperty_mHandledOperatorFlags ().getter_incDecOperator (SOURCE_FILE ("instruction-inc-dec.galgas", 383)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 383)).boolEnum () ;
    if (kBoolTrue == test_6) {
      const GALGAS_incDecNoOVFInstructionAST temp_7 = this ;
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_targetType_13120, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 385)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 385)).add_operation (GALGAS_string ("' type, but this type does not support the '&++', '&--' operators"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 385)), fixItArray8  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 384)) ;
    }
  }
  const GALGAS_incDecNoOVFInstructionAST temp_9 = this ;
  const GALGAS_incDecNoOVFInstructionAST temp_10 = this ;
  const GALGAS_incDecNoOVFInstructionAST temp_11 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_incDecNoOVFInstructionForGeneration::constructor_new (temp_9.readProperty_mInstructionLocation (), var_targetVariableCppName_13223, var_targetType_13120, temp_10.readProperty_mStructAttributeList (), temp_11.readProperty_mKind ()  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 388))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 388)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfIncDecNoOVFInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_selfIncDecNoOVFInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                            GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                            const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                            GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                            GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMapEntry var_selfType_14697 ;
    GALGAS_bool var_selfIsMutable_14725 ;
    GALGAS_bool var_unused_0_14747 ;
    const bool optionalResult14677 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_14697, var_selfIsMutable_14725, var_unused_0_14747) ;
    if (!optionalResult14677) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_selfIsMutable_14725.operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 407)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfIncDecNoOVFInstructionAST temp_2 = this ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 408)) ;
        }
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = extensionGetter_definition (var_selfType_14697, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 411)).readProperty_mHandledOperatorFlags ().getter_incDecOperator (SOURCE_FILE ("instruction-inc-dec.galgas", 411)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 411)).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_selfIncDecNoOVFInstructionAST temp_5 = this ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_selfType_14697, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 413)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 413)).add_operation (GALGAS_string ("' type, but this type does not support the '&++' and  '&--' operators"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 413)), fixItArray6  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 412)) ;
        }
      }
      const GALGAS_selfIncDecNoOVFInstructionAST temp_7 = this ;
      const GALGAS_selfIncDecNoOVFInstructionAST temp_8 = this ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_incDecNoOVFInstructionForGeneration::constructor_new (temp_7.readProperty_mInstructionLocation (), constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), var_selfType_14697, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-inc-dec.galgas", 420)), temp_8.readProperty_mKind ()  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 416))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 416)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfIncDecNoOVFInstructionAST temp_9 = this ;
    TC_Array <C_FixItDescription> fixItArray10 ;
    inCompiler->emitSemanticError (temp_9.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray10  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 424)) ;
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
                                                                       GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                       GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMapEntry var_selfType_16044 ;
    GALGAS_bool var_selfIsMutable_16072 ;
    GALGAS_bool var_unused_0_16094 ;
    const bool optionalResult16024 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_16044, var_selfIsMutable_16072, var_unused_0_16094) ;
    if (!optionalResult16024) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_selfIsMutable_16072.operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 438)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfIncDecInstructionAST temp_2 = this ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 439)) ;
        }
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = extensionGetter_definition (var_selfType_16044, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 442)).readProperty_mHandledOperatorFlags ().getter_incDecOperator (SOURCE_FILE ("instruction-inc-dec.galgas", 442)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 442)).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_selfIncDecInstructionAST temp_5 = this ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_selfType_16044, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 444)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 444)).add_operation (GALGAS_string ("' type, but this type does not support the '++' and  '--' operators"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 444)), fixItArray6  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 443)) ;
        }
      }
      const GALGAS_selfIncDecInstructionAST temp_7 = this ;
      const GALGAS_selfIncDecInstructionAST temp_8 = this ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_incDecInstructionForGeneration::constructor_new (temp_7.readProperty_mInstructionLocation (), constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), var_selfType_16044, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-inc-dec.galgas", 451)), temp_8.readProperty_mKind ()  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 447))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 447)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfIncDecInstructionAST temp_9 = this ;
    TC_Array <C_FixItDescription> fixItArray10 ;
    inCompiler->emitSemanticError (temp_9.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray10  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 455)) ;
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
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  {
  const GALGAS_incDecInstructionForGeneration temp_0 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_0.readProperty_mReceiverCppName () COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 491)) ;
  }
  const GALGAS_incDecInstructionForGeneration temp_1 = this ;
  GALGAS_string var_receiverCppName_18338 = temp_1.readProperty_mReceiverCppName () ;
  const GALGAS_incDecInstructionForGeneration temp_2 = this ;
  cEnumerator_lstringlist enumerator_18376 (temp_2.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_18376.hasCurrentObject ()) {
    var_receiverCppName_18338.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_18376.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-inc-dec.galgas", 494)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 494)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 494)) ;
    enumerator_18376.gotoNextObject () ;
  }
  const GALGAS_incDecInstructionForGeneration temp_3 = this ;
  switch (temp_3.readProperty_mKind ().enumValue ()) {
  case GALGAS_incDecKind::kNotBuilt:
    break ;
  case GALGAS_incDecKind::kEnum_increment:
    {
      const GALGAS_incDecInstructionForGeneration temp_4 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_18338.add_operation (GALGAS_string (".increment_operation ("), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 499)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 499)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 499)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 499)).add_operation (extensionGetter_commaSourceFile (temp_4.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 500)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 500)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 500)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 499)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 501)) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 501)) ;
      }
    }
    break ;
  case GALGAS_incDecKind::kEnum_decrement:
    {
      const GALGAS_incDecInstructionForGeneration temp_5 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_18338.add_operation (GALGAS_string (".decrement_operation ("), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 503)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 503)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 503)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 503)).add_operation (extensionGetter_commaSourceFile (temp_5.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 504)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 504)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 504)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 503)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 505)) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 505)) ;
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
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  {
  const GALGAS_incDecNoOVFInstructionForGeneration temp_0 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_0.readProperty_mReceiverCppName () COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 519)) ;
  }
  const GALGAS_incDecNoOVFInstructionForGeneration temp_1 = this ;
  GALGAS_string var_receiverCppName_19574 = temp_1.readProperty_mReceiverCppName () ;
  const GALGAS_incDecNoOVFInstructionForGeneration temp_2 = this ;
  cEnumerator_lstringlist enumerator_19612 (temp_2.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_19612.hasCurrentObject ()) {
    var_receiverCppName_19574.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_19612.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-inc-dec.galgas", 522)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 522)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 522)) ;
    enumerator_19612.gotoNextObject () ;
  }
  const GALGAS_incDecNoOVFInstructionForGeneration temp_3 = this ;
  switch (temp_3.readProperty_mKind ().enumValue ()) {
  case GALGAS_incDecKind::kNotBuilt:
    break ;
  case GALGAS_incDecKind::kEnum_increment:
    {
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_19574.add_operation (GALGAS_string (".increment_operation_no_overflow () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 527)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 527)) ;
    }
    break ;
  case GALGAS_incDecKind::kEnum_decrement:
    {
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_19574.add_operation (GALGAS_string (".decrement_operation_no_overflow () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 529)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 529)) ;
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
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_ifInstructionAST temp_0 = this ;
  cEnumerator_ifExpressionList enumerator_12824 (temp_0.readProperty_mExpressions (), kENUMERATION_UP) ;
  while (enumerator_12824.hasCurrentObject ()) {
    switch (enumerator_12824.current_mExpression (HERE).enumValue ()) {
    case GALGAS_ifExpressionKind::kNotBuilt:
      break ;
    case GALGAS_ifExpressionKind::kEnum_regularExp:
      {
        const cEnumAssociatedValues_ifExpressionKind_regularExp * extractPtr_12956 = (const cEnumAssociatedValues_ifExpressionKind_regularExp *) (enumerator_12824.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_12896_exp = extractPtr_12956->mAssociatedValue0 ;
        callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) extractedValue_12896_exp.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 367)) ;
      }
      break ;
    case GALGAS_ifExpressionKind::kEnum_letExp:
      {
        const cEnumAssociatedValues_ifExpressionKind_letExp * extractPtr_13102 = (const cEnumAssociatedValues_ifExpressionKind_letExp *) (enumerator_12824.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_12979_exp = extractPtr_13102->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_12999_typeName = extractPtr_13102->mAssociatedValue3 ;
        callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) extractedValue_12979_exp.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 369)) ;
        {
        GALGAS_unifiedTypeMapEntry joker_13100 ; // Joker input parameter
        extensionSetter_makeEntry (ioArgument_ioTypeMap, extractedValue_12999_typeName, joker_13100, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 370)) ;
        }
      }
      break ;
    case GALGAS_ifExpressionKind::kEnum_optionalMethodCall:
      {
        const cEnumAssociatedValues_ifExpressionKind_optionalMethodCall * extractPtr_13544 = (const cEnumAssociatedValues_ifExpressionKind_optionalMethodCall *) (enumerator_12824.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_13150_receiverExpression = extractPtr_13544->mAssociatedValue0 ;
        const GALGAS_optionalMethodActualArgumentList extractedValue_13163_parameters = extractPtr_13544->mAssociatedValue2 ;
        callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) extractedValue_13150_receiverExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 372)) ;
        cEnumerator_optionalMethodActualArgumentList enumerator_13261 (extractedValue_13163_parameters, kENUMERATION_UP) ;
        while (enumerator_13261.hasCurrentObject ()) {
          switch (enumerator_13261.current_mActualArgument (HERE).enumValue ()) {
          case GALGAS_optionalMethodActualArgument::kNotBuilt:
            break ;
          case GALGAS_optionalMethodActualArgument::kEnum_actualOutput:
            {
              const cEnumAssociatedValues_optionalMethodActualArgument_actualOutput * extractPtr_13415 = (const cEnumAssociatedValues_optionalMethodActualArgument_actualOutput *) (enumerator_13261.current_mActualArgument (HERE).unsafePointer ()) ;
              const GALGAS_semanticExpressionAST extractedValue_13342_expression = extractPtr_13415->mAssociatedValue0 ;
              callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) extractedValue_13342_expression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 376)) ;
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
          enumerator_13261.gotoNextObject () ;
        }
      }
      break ;
    }
    enumerator_12824.gotoNextObject () ;
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
                                                               GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                               GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_ifTestListForGeneration var_testListForGeneration_15009 = GALGAS_ifTestListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 422)) ;
  const GALGAS_ifInstructionAST temp_0 = this ;
  cEnumerator_ifExpressionList enumerator_15032 (temp_0.readProperty_mExpressions (), kENUMERATION_UP) ;
  while (enumerator_15032.hasCurrentObject ()) {
    switch (enumerator_15032.current_mExpression (HERE).enumValue ()) {
    case GALGAS_ifExpressionKind::kNotBuilt:
      break ;
    case GALGAS_ifExpressionKind::kEnum_regularExp:
      {
        const cEnumAssociatedValues_ifExpressionKind_regularExp * extractPtr_15651 = (const cEnumAssociatedValues_ifExpressionKind_regularExp *) (enumerator_15032.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_15104_exp = extractPtr_15651->mAssociatedValue0 ;
        GALGAS_semanticExpressionForGeneration var_analyzed_5F_if_5F_expression_15331 ;
        callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) extractedValue_15104_exp.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-if.galgas", 429)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_analyzed_5F_if_5F_expression_15331, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 426)) ;
        GALGAS_semanticExpressionForGeneration var_if_5F_expression_15494 ;
        {
        const GALGAS_ifInstructionAST temp_1 = this ;
        routine_checkExpressionIsBoolean (constinArgument_inAnalysisContext, temp_1.readProperty_mEndOf_5F_if_5F_instruction (), var_analyzed_5F_if_5F_expression_15331, var_if_5F_expression_15494, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 434)) ;
        }
        var_testListForGeneration_15009.addAssign_operation (GALGAS_ifTestForGeneration::constructor_regular (var_if_5F_expression_15494  COMMA_SOURCE_FILE ("instruction-if.galgas", 440))  COMMA_SOURCE_FILE ("instruction-if.galgas", 440)) ;
        {
        extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 441)) ;
        }
        {
        extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 442)) ;
        }
      }
      break ;
    case GALGAS_ifExpressionKind::kEnum_letExp:
      {
        const cEnumAssociatedValues_ifExpressionKind_letExp * extractPtr_19328 = (const cEnumAssociatedValues_ifExpressionKind_letExp *) (enumerator_15032.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_15681_constantName = extractPtr_19328->mAssociatedValue0 ;
        const GALGAS_semanticExpressionAST extractedValue_15685_exp = extractPtr_19328->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_15705_typeName = extractPtr_19328->mAssociatedValue3 ;
        GALGAS_semanticExpressionForGeneration var_analyzedExpression_15928 ;
        callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) extractedValue_15685_exp.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-if.galgas", 447)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_analyzedExpression_15928, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 444)) ;
        GALGAS_unifiedTypeMapEntry var_castType_15985 = GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-if.galgas", 453)) ;
        GALGAS_unifiedTypeMapEntry var_testType_16032 = GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-if.galgas", 454)) ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = extensionGetter_definition (var_analyzedExpression_15928.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 456)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("instruction-if.galgas", 456)).boolEnum () ;
          if (kBoolTrue == test_2) {
            enumGalgasBool test_3 = kBoolTrue ;
            if (kBoolTrue == test_3) {
              test_3 = GALGAS_bool (kIsEqual, extractedValue_15705_typeName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_3) {
                TC_Array <C_FixItDescription> fixItArray4 ;
                inCompiler->emitSemanticError (extractedValue_15705_typeName.readProperty_location (), GALGAS_string ("on a class object, the 'as' clause is required"), fixItArray4  COMMA_SOURCE_FILE ("instruction-if.galgas", 458)) ;
                var_castType_15985.drop () ; // Release error dropped variable
                var_testType_16032.drop () ; // Release error dropped variable
              }
            }
            if (kBoolFalse == test_3) {
              var_castType_15985 = extensionGetter_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), extractedValue_15705_typeName, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 460)) ;
              var_testType_16032 = var_castType_15985 ;
              GALGAS_unifiedTypeMapEntry var_t_16553 = var_castType_15985 ;
              GALGAS_bool var_found_16590 = GALGAS_bool (kIsEqual, var_t_16553.objectCompare (var_analyzedExpression_15928.readProperty_mResultType ())) ;
              if (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap ().getter_count (SOURCE_FILE ("instruction-if.galgas", 465)).add_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 465)).getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 465)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 465)).isValid ()) {
                uint32_t variant_16643 = constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap ().getter_count (SOURCE_FILE ("instruction-if.galgas", 465)).add_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 465)).getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 465)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 465)).uintValue () ;
                bool loop_16643 = true ;
                while (loop_16643) {
                  loop_16643 = var_found_16590.operator_not (SOURCE_FILE ("instruction-if.galgas", 466)).operator_and (extensionGetter_definition (var_t_16553, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 466)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("instruction-if.galgas", 466)).operator_not (SOURCE_FILE ("instruction-if.galgas", 466)) COMMA_SOURCE_FILE ("instruction-if.galgas", 466)).isValid () ;
                  if (loop_16643) {
                    loop_16643 = var_found_16590.operator_not (SOURCE_FILE ("instruction-if.galgas", 466)).operator_and (extensionGetter_definition (var_t_16553, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 466)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("instruction-if.galgas", 466)).operator_not (SOURCE_FILE ("instruction-if.galgas", 466)) COMMA_SOURCE_FILE ("instruction-if.galgas", 466)).boolValue () ;
                  }
                  if (loop_16643 && (0 == variant_16643)) {
                    loop_16643 = false ;
                    inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-if.galgas", 465)) ;
                  }
                  if (loop_16643) {
                    variant_16643 -- ;
                    var_t_16553 = extensionGetter_definition (var_t_16553, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 467)).readProperty_mSuperType () ;
                    var_found_16590 = GALGAS_bool (kIsEqual, var_t_16553.objectCompare (var_analyzedExpression_15928.readProperty_mResultType ())) ;
                  }
                }
              }
              enumGalgasBool test_5 = kBoolTrue ;
              if (kBoolTrue == test_5) {
                test_5 = var_found_16590.operator_not (SOURCE_FILE ("instruction-if.galgas", 470)).boolEnum () ;
                if (kBoolTrue == test_5) {
                  TC_Array <C_FixItDescription> fixItArray6 ;
                  inCompiler->emitSemanticError (extractedValue_15705_typeName.readProperty_location (), GALGAS_string ("the '@").add_operation (extractedValue_15705_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 472)).add_operation (GALGAS_string ("' type is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 472)).add_operation (extensionGetter_definition (var_analyzedExpression_15928.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 472)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 472)).add_operation (GALGAS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 472)), fixItArray6  COMMA_SOURCE_FILE ("instruction-if.galgas", 471)) ;
                }
              }
            }
          }
        }
        if (kBoolFalse == test_2) {
          enumGalgasBool test_7 = kBoolTrue ;
          if (kBoolTrue == test_7) {
            GALGAS_unifiedTypeMapEntry var_classType_17275 ;
            const bool optionalResult17245 = extensionGetter_definition (var_analyzedExpression_15928.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 476)).readProperty_mTypeKindEnum ().optional_weakReferenceType (var_classType_17275) ;
            if (!optionalResult17245) {
              test_7 = kBoolFalse ;
            }
            if (kBoolTrue == test_7) {
              enumGalgasBool test_8 = kBoolTrue ;
              if (kBoolTrue == test_8) {
                test_8 = GALGAS_bool (kIsEqual, extractedValue_15705_typeName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_8) {
                  var_castType_15985 = var_classType_17275 ;
                }
              }
              if (kBoolFalse == test_8) {
                var_castType_15985 = extensionGetter_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), extractedValue_15705_typeName, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 480)) ;
              }
              var_testType_16032 = var_castType_15985 ;
              GALGAS_unifiedTypeMapEntry var_t_17525 = var_castType_15985 ;
              GALGAS_bool var_found_17560 = GALGAS_bool (kIsEqual, var_t_17525.objectCompare (var_analyzedExpression_15928.readProperty_mResultType ())) ;
              enumGalgasBool test_9 = kBoolTrue ;
              if (kBoolTrue == test_9) {
                test_9 = var_found_17560.boolEnum () ;
                if (kBoolTrue == test_9) {
                  extensionGetter_definition (var_castType_15985, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 486)).readProperty_mTypeKindEnum ().method_weakReferenceType (var_testType_16032, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 486)) ;
                }
              }
              if (kBoolFalse == test_9) {
                enumGalgasBool test_10 = kBoolTrue ;
                if (kBoolTrue == test_10) {
                  test_10 = GALGAS_bool (kIsEqual, var_t_17525.objectCompare (var_classType_17275)).boolEnum () ;
                  if (kBoolTrue == test_10) {
                    var_found_17560 = GALGAS_bool (true) ;
                  }
                }
              }
              if (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap ().getter_count (SOURCE_FILE ("instruction-if.galgas", 490)).add_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 490)).getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 490)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 490)).isValid ()) {
                uint32_t variant_17793 = constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap ().getter_count (SOURCE_FILE ("instruction-if.galgas", 490)).add_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 490)).getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 490)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 490)).uintValue () ;
                bool loop_17793 = true ;
                while (loop_17793) {
                  loop_17793 = var_found_17560.operator_not (SOURCE_FILE ("instruction-if.galgas", 491)).operator_and (extensionGetter_definition (var_t_17525, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 491)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("instruction-if.galgas", 491)).operator_not (SOURCE_FILE ("instruction-if.galgas", 491)) COMMA_SOURCE_FILE ("instruction-if.galgas", 491)).isValid () ;
                  if (loop_17793) {
                    loop_17793 = var_found_17560.operator_not (SOURCE_FILE ("instruction-if.galgas", 491)).operator_and (extensionGetter_definition (var_t_17525, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 491)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("instruction-if.galgas", 491)).operator_not (SOURCE_FILE ("instruction-if.galgas", 491)) COMMA_SOURCE_FILE ("instruction-if.galgas", 491)).boolValue () ;
                  }
                  if (loop_17793 && (0 == variant_17793)) {
                    loop_17793 = false ;
                    inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-if.galgas", 490)) ;
                  }
                  if (loop_17793) {
                    variant_17793 -- ;
                    var_t_17525 = extensionGetter_definition (var_t_17525, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 492)).readProperty_mSuperType () ;
                    enumGalgasBool test_11 = kBoolTrue ;
                    if (kBoolTrue == test_11) {
                      test_11 = GALGAS_bool (kIsEqual, var_t_17525.objectCompare (var_analyzedExpression_15928.readProperty_mResultType ())).boolEnum () ;
                      if (kBoolTrue == test_11) {
                        var_found_17560 = GALGAS_bool (true) ;
                        extensionGetter_definition (var_castType_15985, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 495)).readProperty_mTypeKindEnum ().method_weakReferenceType (var_testType_16032, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 495)) ;
                      }
                    }
                    if (kBoolFalse == test_11) {
                      enumGalgasBool test_12 = kBoolTrue ;
                      if (kBoolTrue == test_12) {
                        test_12 = GALGAS_bool (kIsEqual, var_t_17525.objectCompare (var_classType_17275)).boolEnum () ;
                        if (kBoolTrue == test_12) {
                          var_found_17560 = GALGAS_bool (true) ;
                        }
                      }
                    }
                  }
                }
              }
              enumGalgasBool test_13 = kBoolTrue ;
              if (kBoolTrue == test_13) {
                test_13 = var_found_17560.operator_not (SOURCE_FILE ("instruction-if.galgas", 500)).boolEnum () ;
                if (kBoolTrue == test_13) {
                  TC_Array <C_FixItDescription> fixItArray14 ;
                  inCompiler->emitSemanticError (extractedValue_15705_typeName.readProperty_location (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (var_castType_15985, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 502)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 502)).add_operation (GALGAS_string ("' type is not compatible with the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 502)).add_operation (extensionGetter_definition (var_analyzedExpression_15928.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 502)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 502)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 502)), fixItArray14  COMMA_SOURCE_FILE ("instruction-if.galgas", 501)) ;
                }
              }
            }
          }
          if (kBoolFalse == test_7) {
            TC_Array <C_FixItDescription> fixItArray15 ;
            inCompiler->emitSemanticError (var_analyzedExpression_15928.readProperty_mLocation (), GALGAS_string ("expression should be a class instance, or a weak reference: it is an @").add_operation (extensionGetter_definition (var_analyzedExpression_15928.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 506)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 505)).add_operation (GALGAS_string (" instance"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 506)), fixItArray15  COMMA_SOURCE_FILE ("instruction-if.galgas", 505)) ;
          }
        }
        {
        extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 508)) ;
        }
        {
        extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 509)) ;
        }
        GALGAS_string var_targetVariableCppName_18803 = GALGAS_string ("var_").add_operation (extractedValue_15681_constantName.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-if.galgas", 510)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 510)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 510)).add_operation (extractedValue_15681_constantName.readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 511)).getter_string (SOURCE_FILE ("instruction-if.galgas", 511)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 511)) ;
        enumGalgasBool test_16 = kBoolTrue ;
        if (kBoolTrue == test_16) {
          test_16 = GALGAS_bool (kIsNotEqual, extractedValue_15681_constantName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_16) {
            {
            extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, extractedValue_15681_constantName, var_castType_15985, var_targetVariableCppName_18803, var_targetVariableCppName_18803, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 513)) ;
            }
          }
        }
        var_testListForGeneration_15009.addAssign_operation (GALGAS_ifTestForGeneration::constructor_letExp (var_targetVariableCppName_18803, var_analyzedExpression_15928, var_castType_15985, var_testType_16032  COMMA_SOURCE_FILE ("instruction-if.galgas", 520))  COMMA_SOURCE_FILE ("instruction-if.galgas", 520)) ;
      }
      break ;
    case GALGAS_ifExpressionKind::kEnum_optionalMethodCall:
      {
        const cEnumAssociatedValues_ifExpressionKind_optionalMethodCall * extractPtr_19725 = (const cEnumAssociatedValues_ifExpressionKind_optionalMethodCall *) (enumerator_15032.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_19376_receiverExpression = extractPtr_19725->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_19395_optionalMethodName = extractPtr_19725->mAssociatedValue1 ;
        const GALGAS_optionalMethodActualArgumentList extractedValue_19406_parameters = extractPtr_19725->mAssociatedValue2 ;
        {
        routine_analyzeOptionalMethodCall (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, extractedValue_19376_receiverExpression, extractedValue_19395_optionalMethodName, extractedValue_19406_parameters, var_testListForGeneration_15009, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 527)) ;
        }
      }
      break ;
    }
    enumerator_15032.gotoNextObject () ;
  }
  GALGAS_semanticInstructionListForGeneration var_then_5F_instructionList_20111 ;
  {
  const GALGAS_ifInstructionAST temp_17 = this ;
  routine_analyzeSemanticInstructionListWithoutBranch (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 544)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 545)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 546)), temp_17.readProperty_m_5F_then_5F_instructionList (), ioArgument_ioVariableMap, var_then_5F_instructionList_20111, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 540)) ;
  }
  const GALGAS_ifInstructionAST temp_18 = this ;
  GALGAS_ifExpressionList var_expressions_20133 = temp_18.readProperty_mExpressions () ;
  {
  GALGAS_ifExpressionKind joker_20180 ; // Joker input parameter
  var_expressions_20133.setter_popLast (joker_20180, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 552)) ;
  }
  cEnumerator_ifExpressionList enumerator_20191 (var_expressions_20133, kENUMERATION_UP) ;
  while (enumerator_20191.hasCurrentObject ()) {
    {
    const GALGAS_ifInstructionAST temp_19 = this ;
    extensionSetter_closeBranch (ioArgument_ioVariableMap, temp_19.readProperty_mEndOf_5F_then_5F_branch (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 554)) ;
    }
    {
    const GALGAS_ifInstructionAST temp_20 = this ;
    extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_20.readProperty_mEndOf_5F_then_5F_branch (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 555)) ;
    }
    enumerator_20191.gotoNextObject () ;
  }
  {
  const GALGAS_ifInstructionAST temp_21 = this ;
  extensionSetter_closeBranch (ioArgument_ioVariableMap, temp_21.readProperty_mEndOf_5F_then_5F_branch (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 557)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionList_20784 ;
  {
  const GALGAS_ifInstructionAST temp_22 = this ;
  const GALGAS_ifInstructionAST temp_23 = this ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 563)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 564)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 565)), temp_22.readProperty_m_5F_else_5F_instructionList (), temp_23.readProperty_mEndOf_5F_if_5F_instruction (), ioArgument_ioVariableMap, var_else_5F_instructionList_20784, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 559)) ;
  }
  {
  const GALGAS_ifInstructionAST temp_24 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_24.readProperty_mEndOf_5F_if_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 571)) ;
  }
  const GALGAS_ifInstructionAST temp_25 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_ifInstructionForGeneration::constructor_new (temp_25.readProperty_mEndOf_5F_then_5F_branch (), var_testListForGeneration_15009, var_then_5F_instructionList_20111, var_else_5F_instructionList_20784  COMMA_SOURCE_FILE ("instruction-if.galgas", 573))  COMMA_SOURCE_FILE ("instruction-if.galgas", 573)) ;
}
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
  GALGAS_semanticExpressionForGeneration var_receiverExpression_22337 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) constinArgument_inReceiverExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-if.galgas", 597)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_receiverExpression_22337, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 594)) ;
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 602)) ;
  }
  {
  extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 603)) ;
  }
  GALGAS_unifiedTypeMapEntry var_receiverType_22488 = var_receiverExpression_22337.readProperty_mResultType () ;
  GALGAS_optionalMethodMap var_optionalMethodMap_22564 = extensionGetter_definition (var_receiverType_22488, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 606)).readProperty_mOptionalMethodMap () ;
  GALGAS_optionalMethodSignature var_optionalMethodSignature_22694 ;
  const cMapElement_optionalMethodMap * objectArray_22701 = (const cMapElement_optionalMethodMap *) var_optionalMethodMap_22564.readAccessForWithInstruction (constinArgument_inOptionalMethodName.readProperty_string ()) ;
  if (NULL != objectArray_22701) {
      macroValidSharedObject (objectArray_22701, cMapElement_optionalMethodMap) ;
    var_optionalMethodSignature_22694 = objectArray_22701->mProperty_mArgumentTypeList ;
  }else{
    GALGAS_string var_s_22818 = GALGAS_string ("this optional method is not defined; available optional methods:") ;
    cEnumerator_optionalMethodMap enumerator_22903 (var_optionalMethodMap_22564, kENUMERATION_UP) ;
    while (enumerator_22903.hasCurrentObject ()) {
      var_s_22818.plusAssign_operation(GALGAS_string ("\n"
        "  - ").add_operation (enumerator_22903.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 614)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 614)) ;
      enumerator_22903.gotoNextObject () ;
    }
    TC_Array <C_FixItDescription> fixItArray0 ;
    inCompiler->emitSemanticError (constinArgument_inOptionalMethodName.readProperty_location (), var_s_22818, fixItArray0  COMMA_SOURCE_FILE ("instruction-if.galgas", 616)) ;
    var_optionalMethodSignature_22694.drop () ; // Release error dropped variable
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, constinArgument_inActualParameters.getter_length (SOURCE_FILE ("instruction-if.galgas", 619)).objectCompare (var_optionalMethodSignature_22694.getter_length (SOURCE_FILE ("instruction-if.galgas", 619)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inOptionalMethodName.readProperty_location (), GALGAS_string ("calling the '").add_operation (constinArgument_inOptionalMethodName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 621)).add_operation (GALGAS_string ("' optional method of '@"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 621)).add_operation (extensionGetter_definition (var_receiverType_22488, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 621)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 621)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 621)).add_operation (var_optionalMethodSignature_22694.getter_length (SOURCE_FILE ("instruction-if.galgas", 622)).getter_string (SOURCE_FILE ("instruction-if.galgas", 621)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 621)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 622)).add_operation (constinArgument_inActualParameters.getter_length (SOURCE_FILE ("instruction-if.galgas", 623)).getter_string (SOURCE_FILE ("instruction-if.galgas", 622)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 622)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 623)), fixItArray2  COMMA_SOURCE_FILE ("instruction-if.galgas", 620)) ;
    }
  }
  if (kBoolFalse == test_1) {
    GALGAS_optionalMethodActualArgumentListForGeneration var_actualParameterList_23550 = GALGAS_optionalMethodActualArgumentListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 625)) ;
    cEnumerator_optionalMethodActualArgumentList enumerator_23595 (constinArgument_inActualParameters, kENUMERATION_UP) ;
    cEnumerator_optionalMethodSignature enumerator_23658 (var_optionalMethodSignature_22694, kENUMERATION_UP) ;
    while (enumerator_23595.hasCurrentObject () && enumerator_23658.hasCurrentObject ()) {
      switch (enumerator_23595.current_mActualArgument (HERE).enumValue ()) {
      case GALGAS_optionalMethodActualArgument::kNotBuilt:
        break ;
      case GALGAS_optionalMethodActualArgument::kEnum_actualOutput:
        {
          const cEnumAssociatedValues_optionalMethodActualArgument_actualOutput * extractPtr_24471 = (const cEnumAssociatedValues_optionalMethodActualArgument_actualOutput *) (enumerator_23595.current_mActualArgument (HERE).unsafePointer ()) ;
          const GALGAS_semanticExpressionAST extractedValue_23754_expression = extractPtr_24471->mAssociatedValue0 ;
          const GALGAS_location extractedValue_23763_location = extractPtr_24471->mAssociatedValue1 ;
          GALGAS_semanticExpressionForGeneration var_exp_24026 ;
          callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) extractedValue_23754_expression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_23658.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_exp_24026, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 630)) ;
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = GALGAS_bool (kIsNotEqual, enumerator_23658.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_23595.current_mSelector (HERE).readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_3) {
              GALGAS_string temp_4 ;
              const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, enumerator_23658.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_5) {
                temp_4 = enumerator_23658.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 639)) ;
              }else if (kBoolFalse == test_5) {
                temp_4 = GALGAS_string::makeEmptyString () ;
              }
              GALGAS_string var_s_24123 = GALGAS_string ("!").add_operation (temp_4, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 639)) ;
              TC_Array <C_FixItDescription> fixItArray6 ;
              appendFixItActions (fixItArray6, kFixItReplace, var_s_24123) ;
              inCompiler->emitSemanticError (enumerator_23595.current_mSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_24123, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 640)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 640)), fixItArray6  COMMA_SOURCE_FILE ("instruction-if.galgas", 640)) ;
            }
          }
          {
          routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_23658.current_mFormalArgumentType (HERE), var_exp_24026.readProperty_mResultType (), extractedValue_23763_location, var_exp_24026, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 642)) ;
          }
          var_actualParameterList_23550.addAssign_operation (GALGAS_optionalMethodActualArgumentForGeneration::constructor_actualOutput (var_exp_24026  COMMA_SOURCE_FILE ("instruction-if.galgas", 643))  COMMA_SOURCE_FILE ("instruction-if.galgas", 643)) ;
        }
        break ;
      case GALGAS_optionalMethodActualArgument::kEnum_actualLetInput:
        {
          const cEnumAssociatedValues_optionalMethodActualArgument_actualLetInput * extractPtr_25611 = (const cEnumAssociatedValues_optionalMethodActualArgument_actualLetInput *) (enumerator_23595.current_mActualArgument (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_24522_actualTypeName = extractPtr_25611->mAssociatedValue0 ;
          const GALGAS_lstring extractedValue_24544_constantName = extractPtr_25611->mAssociatedValue1 ;
          enumGalgasBool test_7 = kBoolTrue ;
          if (kBoolTrue == test_7) {
            GALGAS_bool test_8 = GALGAS_bool (kIsNotEqual, extractedValue_24522_actualTypeName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())) ;
            if (kBoolTrue == test_8.boolEnum ()) {
              test_8 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (enumerator_23658.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 645)).readProperty_mTypeName ().readProperty_string ().objectCompare (extractedValue_24522_actualTypeName.readProperty_string ())) ;
            }
            test_7 = test_8.boolEnum () ;
            if (kBoolTrue == test_7) {
              TC_Array <C_FixItDescription> fixItArray9 ;
              appendFixItActions (fixItArray9, kFixItReplace, GALGAS_string ("@").add_operation (extensionGetter_definition (enumerator_23658.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 648)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 648))) ;
              inCompiler->emitSemanticError (extractedValue_24522_actualTypeName.readProperty_location (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (enumerator_23658.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 647)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 647)).add_operation (GALGAS_string ("' type name is required here"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 647)), fixItArray9  COMMA_SOURCE_FILE ("instruction-if.galgas", 646)) ;
            }
          }
          GALGAS_string var_targetVariableCppName_24915 = GALGAS_string ("var_").add_operation (extractedValue_24544_constantName.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-if.galgas", 650)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 650)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 650)).add_operation (extractedValue_24544_constantName.readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 651)).getter_string (SOURCE_FILE ("instruction-if.galgas", 651)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 651)) ;
          {
          extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, extractedValue_24544_constantName, enumerator_23658.current_mFormalArgumentType (HERE), var_targetVariableCppName_24915, var_targetVariableCppName_24915, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 652)) ;
          }
          var_actualParameterList_23550.addAssign_operation (GALGAS_optionalMethodActualArgumentForGeneration::constructor_actualLetInput (extensionGetter_definition (enumerator_23658.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 658)).readProperty_mTypeName ().readProperty_string (), var_targetVariableCppName_24915  COMMA_SOURCE_FILE ("instruction-if.galgas", 658))  COMMA_SOURCE_FILE ("instruction-if.galgas", 658)) ;
          enumGalgasBool test_10 = kBoolTrue ;
          if (kBoolTrue == test_10) {
            test_10 = GALGAS_bool (kIsNotEqual, enumerator_23658.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_23595.current_mSelector (HERE).readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_10) {
              GALGAS_string temp_11 ;
              const enumGalgasBool test_12 = GALGAS_bool (kIsNotEqual, enumerator_23658.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_12) {
                temp_11 = enumerator_23658.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 660)) ;
              }else if (kBoolFalse == test_12) {
                temp_11 = GALGAS_string::makeEmptyString () ;
              }
              GALGAS_string var_s_25425 = GALGAS_string ("\?").add_operation (temp_11, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 660)) ;
              TC_Array <C_FixItDescription> fixItArray13 ;
              appendFixItActions (fixItArray13, kFixItReplace, var_s_25425) ;
              inCompiler->emitSemanticError (enumerator_23595.current_mSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_25425, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 661)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 661)), fixItArray13  COMMA_SOURCE_FILE ("instruction-if.galgas", 661)) ;
            }
          }
        }
        break ;
      case GALGAS_optionalMethodActualArgument::kEnum_actualVarInput:
        {
          const cEnumAssociatedValues_optionalMethodActualArgument_actualVarInput * extractPtr_26787 = (const cEnumAssociatedValues_optionalMethodActualArgument_actualVarInput *) (enumerator_23595.current_mActualArgument (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_25662_actualTypeName = extractPtr_26787->mAssociatedValue0 ;
          const GALGAS_lstring extractedValue_25684_variableName = extractPtr_26787->mAssociatedValue1 ;
          enumGalgasBool test_14 = kBoolTrue ;
          if (kBoolTrue == test_14) {
            GALGAS_bool test_15 = GALGAS_bool (kIsNotEqual, extractedValue_25662_actualTypeName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())) ;
            if (kBoolTrue == test_15.boolEnum ()) {
              test_15 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (enumerator_23658.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 664)).readProperty_mTypeName ().readProperty_string ().objectCompare (extractedValue_25662_actualTypeName.readProperty_string ())) ;
            }
            test_14 = test_15.boolEnum () ;
            if (kBoolTrue == test_14) {
              TC_Array <C_FixItDescription> fixItArray16 ;
              appendFixItActions (fixItArray16, kFixItReplace, GALGAS_string ("@").add_operation (extensionGetter_definition (enumerator_23658.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 667)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 667))) ;
              inCompiler->emitSemanticError (extractedValue_25662_actualTypeName.readProperty_location (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (enumerator_23658.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 666)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 666)).add_operation (GALGAS_string ("' type name is required here"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 666)), fixItArray16  COMMA_SOURCE_FILE ("instruction-if.galgas", 665)) ;
            }
          }
          GALGAS_string var_targetVariableCppName_26056 = GALGAS_string ("var_").add_operation (extractedValue_25684_variableName.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-if.galgas", 669)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 669)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 669)).add_operation (extractedValue_25684_variableName.readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 670)).getter_string (SOURCE_FILE ("instruction-if.galgas", 670)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 670)) ;
          {
          extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, extractedValue_25684_variableName, GALGAS_bool (true), enumerator_23658.current_mFormalArgumentType (HERE), var_targetVariableCppName_26056, var_targetVariableCppName_26056, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 671)) ;
          }
          var_actualParameterList_23550.addAssign_operation (GALGAS_optionalMethodActualArgumentForGeneration::constructor_actualVarInput (extensionGetter_definition (enumerator_23658.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 678)).readProperty_mTypeName ().readProperty_string (), var_targetVariableCppName_26056  COMMA_SOURCE_FILE ("instruction-if.galgas", 678))  COMMA_SOURCE_FILE ("instruction-if.galgas", 678)) ;
          enumGalgasBool test_17 = kBoolTrue ;
          if (kBoolTrue == test_17) {
            test_17 = GALGAS_bool (kIsNotEqual, enumerator_23658.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_23595.current_mSelector (HERE).readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_17) {
              GALGAS_string temp_18 ;
              const enumGalgasBool test_19 = GALGAS_bool (kIsNotEqual, enumerator_23658.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_19) {
                temp_18 = enumerator_23658.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 680)) ;
              }else if (kBoolFalse == test_19) {
                temp_18 = GALGAS_string::makeEmptyString () ;
              }
              GALGAS_string var_s_26601 = GALGAS_string ("\?").add_operation (temp_18, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 680)) ;
              TC_Array <C_FixItDescription> fixItArray20 ;
              appendFixItActions (fixItArray20, kFixItReplace, var_s_26601) ;
              inCompiler->emitSemanticError (enumerator_23595.current_mSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_26601, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 681)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 681)), fixItArray20  COMMA_SOURCE_FILE ("instruction-if.galgas", 681)) ;
            }
          }
        }
        break ;
      case GALGAS_optionalMethodActualArgument::kEnum_actualInputJoker:
        {
          const cEnumAssociatedValues_optionalMethodActualArgument_actualInputJoker * extractPtr_27366 = (const cEnumAssociatedValues_optionalMethodActualArgument_actualInputJoker *) (enumerator_23595.current_mActualArgument (HERE).unsafePointer ()) ;
          const GALGAS_bool extractedValue_26830_checkSelector = extractPtr_27366->mAssociatedValue0 ;
          const GALGAS_location extractedValue_26839_location = extractPtr_27366->mAssociatedValue1 ;
          const GALGAS_uint extractedValue_26843_idx = extractPtr_27366->mAssociatedValue2 ;
          GALGAS_string var_targetVariableCppName_26880 = GALGAS_string ("var_unused_").add_operation (extractedValue_26843_idx.getter_string (SOURCE_FILE ("instruction-if.galgas", 684)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 684)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 684)).add_operation (extractedValue_26839_location.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 684)).getter_string (SOURCE_FILE ("instruction-if.galgas", 684)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 684)) ;
          var_actualParameterList_23550.addAssign_operation (GALGAS_optionalMethodActualArgumentForGeneration::constructor_actualVarInput (extensionGetter_definition (enumerator_23658.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 685)).readProperty_mTypeName ().readProperty_string (), var_targetVariableCppName_26880  COMMA_SOURCE_FILE ("instruction-if.galgas", 685))  COMMA_SOURCE_FILE ("instruction-if.galgas", 685)) ;
          enumGalgasBool test_21 = kBoolTrue ;
          if (kBoolTrue == test_21) {
            GALGAS_bool test_22 = extractedValue_26830_checkSelector ;
            if (kBoolTrue == test_22.boolEnum ()) {
              test_22 = GALGAS_bool (kIsNotEqual, enumerator_23658.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_23595.current_mSelector (HERE).readProperty_string ())) ;
            }
            test_21 = test_22.boolEnum () ;
            if (kBoolTrue == test_21) {
              GALGAS_string temp_23 ;
              const enumGalgasBool test_24 = GALGAS_bool (kIsNotEqual, enumerator_23658.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_24) {
                temp_23 = enumerator_23658.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 687)) ;
              }else if (kBoolFalse == test_24) {
                temp_23 = GALGAS_string::makeEmptyString () ;
              }
              GALGAS_string var_s_27180 = GALGAS_string ("\?").add_operation (temp_23, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 687)) ;
              TC_Array <C_FixItDescription> fixItArray25 ;
              appendFixItActions (fixItArray25, kFixItReplace, var_s_27180) ;
              inCompiler->emitSemanticError (enumerator_23595.current_mSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_27180, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 688)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 688)), fixItArray25  COMMA_SOURCE_FILE ("instruction-if.galgas", 688)) ;
            }
          }
        }
        break ;
      }
      enumerator_23595.gotoNextObject () ;
      enumerator_23658.gotoNextObject () ;
    }
    ioArgument_ioTestListForGeneration.addAssign_operation (GALGAS_ifTestForGeneration::constructor_optionalMethodCall (var_receiverExpression_22337, constinArgument_inOptionalMethodName, var_actualParameterList_23550  COMMA_SOURCE_FILE ("instruction-if.galgas", 692))  COMMA_SOURCE_FILE ("instruction-if.galgas", 692)) ;
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
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string var_testVar_30459 = GALGAS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-if.galgas", 772)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 772)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 773)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("enumGalgasBool ").add_operation (var_testVar_30459, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 774)).add_operation (GALGAS_string (" = kBoolTrue ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 774)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 774)) ;
  const GALGAS_ifInstructionForGeneration temp_0 = this ;
  cEnumerator_ifTestListForGeneration enumerator_30625 (temp_0.readProperty_mExpressions (), kENUMERATION_UP) ;
  while (enumerator_30625.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolTrue == ").add_operation (var_testVar_30459, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 776)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 776)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 776)) ;
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 777)) ;
    }
    switch (enumerator_30625.current_mExpression (HERE).enumValue ()) {
    case GALGAS_ifTestForGeneration::kNotBuilt:
      break ;
    case GALGAS_ifTestForGeneration::kEnum_regular:
      {
        const cEnumAssociatedValues_ifTestForGeneration_regular * extractPtr_31062 = (const cEnumAssociatedValues_ifTestForGeneration_regular *) (enumerator_30625.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionForGeneration extractedValue_30799_exp = extractPtr_31062->mAssociatedValue0 ;
        GALGAS_string var_cppVarName_30979 ;
        callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) extractedValue_30799_exp.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_cppVarName_30979, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 780)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(var_testVar_30459.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 787)).add_operation (var_cppVarName_30979, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 787)).add_operation (GALGAS_string (".boolEnum () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 787)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 787)) ;
      }
      break ;
    case GALGAS_ifTestForGeneration::kEnum_letExp:
      {
        const cEnumAssociatedValues_ifTestForGeneration_letExp * extractPtr_31791 = (const cEnumAssociatedValues_ifTestForGeneration_letExp *) (enumerator_30625.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_string extractedValue_31096_targetVarCppName = extractPtr_31791->mAssociatedValue0 ;
        const GALGAS_semanticExpressionForGeneration extractedValue_31100_exp = extractPtr_31791->mAssociatedValue1 ;
        const GALGAS_unifiedTypeMapEntry extractedValue_31111_targetType = extractPtr_31791->mAssociatedValue2 ;
        const GALGAS_unifiedTypeMapEntry extractedValue_31120_testType = extractPtr_31791->mAssociatedValue3 ;
        GALGAS_string var_targetTypeName_31148 = extensionGetter_identifierRepresentation (extractedValue_31111_targetType, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 789)) ;
        GALGAS_string var_testTypeName_31211 = extensionGetter_identifierRepresentation (extractedValue_31120_testType, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 790)) ;
        GALGAS_string var_cppVarName_31426 ;
        callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) extractedValue_31100_exp.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_cppVarName_31426, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 791)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (var_targetTypeName_31148, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 798)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 798)).add_operation (extractedValue_31096_targetVarCppName, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 798)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 798)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" (dynamic_cast <const cPtr_").add_operation (var_testTypeName_31211, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 799)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 799)).add_operation (var_cppVarName_31426, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 799)).add_operation (GALGAS_string (".ptr ())) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 799)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 799)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (NULL == ").add_operation (extractedValue_31096_targetVarCppName, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 800)).add_operation (GALGAS_string (".ptr ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 800)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 800)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_testVar_30459, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 801)).add_operation (GALGAS_string (" = kBoolFalse ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 801)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 801)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 802)) ;
      }
      break ;
    case GALGAS_ifTestForGeneration::kEnum_optionalMethodCall:
      {
        const cEnumAssociatedValues_ifTestForGeneration_optionalMethodCall * extractPtr_33522 = (const cEnumAssociatedValues_ifTestForGeneration_optionalMethodCall *) (enumerator_30625.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionForGeneration extractedValue_31839_receiverExpression = extractPtr_33522->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_31858_optionalMethodName = extractPtr_33522->mAssociatedValue1 ;
        const GALGAS_optionalMethodActualArgumentListForGeneration extractedValue_31869_parameters = extractPtr_33522->mAssociatedValue2 ;
        GALGAS_string var_cppVarName_32064 ;
        callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) extractedValue_31839_receiverExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_cppVarName_32064, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 804)) ;
        GALGAS_stringlist var_actualParameterNameList_32118 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 811)) ;
        cEnumerator_optionalMethodActualArgumentListForGeneration enumerator_32144 (extractedValue_31869_parameters, kENUMERATION_UP) ;
        while (enumerator_32144.hasCurrentObject ()) {
          switch (enumerator_32144.current_mParameter (HERE).enumValue ()) {
          case GALGAS_optionalMethodActualArgumentForGeneration::kNotBuilt:
            break ;
          case GALGAS_optionalMethodActualArgumentForGeneration::kEnum_actualOutput:
            {
              const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualOutput * extractPtr_32507 = (const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualOutput *) (enumerator_32144.current_mParameter (HERE).unsafePointer ()) ;
              const GALGAS_semanticExpressionForGeneration extractedValue_32225_expression = extractPtr_32507->mAssociatedValue0 ;
              GALGAS_string var_argumentCppName_32441 ;
              callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) extractedValue_32225_expression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_argumentCppName_32441, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 815)) ;
              var_actualParameterNameList_32118.addAssign_operation (var_argumentCppName_32441  COMMA_SOURCE_FILE ("instruction-if.galgas", 822)) ;
            }
            break ;
          case GALGAS_optionalMethodActualArgumentForGeneration::kEnum_actualLetInput:
            {
              const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualLetInput * extractPtr_32719 = (const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualLetInput *) (enumerator_32144.current_mParameter (HERE).unsafePointer ()) ;
              const GALGAS_string extractedValue_32545_typeName = extractPtr_32719->mAssociatedValue0 ;
              const GALGAS_string extractedValue_32558_constantName = extractPtr_32719->mAssociatedValue1 ;
              var_actualParameterNameList_32118.addAssign_operation (extractedValue_32558_constantName  COMMA_SOURCE_FILE ("instruction-if.galgas", 824)) ;
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extractedValue_32545_typeName.getter_identifierRepresentation (SOURCE_FILE ("instruction-if.galgas", 825)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 825)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 825)).add_operation (extractedValue_32558_constantName, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 825)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 825)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 825)) ;
            }
            break ;
          case GALGAS_optionalMethodActualArgumentForGeneration::kEnum_actualVarInput:
            {
              const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualVarInput * extractPtr_32931 = (const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualVarInput *) (enumerator_32144.current_mParameter (HERE).unsafePointer ()) ;
              const GALGAS_string extractedValue_32757_typeName = extractPtr_32931->mAssociatedValue0 ;
              const GALGAS_string extractedValue_32770_variableName = extractPtr_32931->mAssociatedValue1 ;
              var_actualParameterNameList_32118.addAssign_operation (extractedValue_32770_variableName  COMMA_SOURCE_FILE ("instruction-if.galgas", 827)) ;
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extractedValue_32757_typeName.getter_identifierRepresentation (SOURCE_FILE ("instruction-if.galgas", 828)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 828)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 828)).add_operation (extractedValue_32770_variableName, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 828)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 828)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 828)) ;
            }
            break ;
          }
          enumerator_32144.gotoNextObject () ;
        }
        GALGAS_string var_boolResultName_32978 = GALGAS_string ("optionalResult").add_operation (extractedValue_31858_optionalMethodName.readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 831)).getter_string (SOURCE_FILE ("instruction-if.galgas", 831)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 831)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const bool ").add_operation (var_boolResultName_32978, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 832)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 832)).add_operation (var_cppVarName_32064, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 832)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 832)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".optional_").add_operation (extractedValue_31858_optionalMethodName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 833)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 833)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 833)) ;
        cEnumerator_stringlist enumerator_33202 (var_actualParameterNameList_32118, kENUMERATION_UP) ;
        while (enumerator_33202.hasCurrentObject ()) {
          ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_33202.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 836)) ;
          if (enumerator_33202.hasNextObject ()) {
            ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 838)) ;
          }
          enumerator_33202.gotoNextObject () ;
        }
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (") ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 840)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (!").add_operation (var_boolResultName_32978, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 841)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 841)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 841)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_testVar_30459, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 842)).add_operation (GALGAS_string (" = kBoolFalse ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 842)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 842)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 843)) ;
      }
      break ;
    }
    enumerator_30625.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolTrue == ").add_operation (var_testVar_30459, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 847)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 847)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 847)) ;
  {
  const GALGAS_ifInstructionForGeneration temp_1 = this ;
  routine_generateInstructionList (ioArgument_ioInclusionSet, temp_1.readProperty_m_5F_then_5F_instructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 848)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 856)) ;
  const GALGAS_ifInstructionForGeneration temp_2 = this ;
  cEnumerator_ifTestListForGeneration enumerator_33869 (temp_2.readProperty_mExpressions (), kENUMERATION_UP) ;
  while (enumerator_33869.hasCurrentObject ()) {
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 858)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 859)) ;
    enumerator_33869.gotoNextObject () ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_ifInstructionForGeneration temp_4 = this ;
    test_3 = GALGAS_bool (kIsStrictSup, temp_4.readProperty_m_5F_else_5F_instructionList ().getter_length (SOURCE_FILE ("instruction-if.galgas", 862)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 862)).getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 862)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolFalse == ").add_operation (var_testVar_30459, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 863)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 863)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 863)) ;
      {
      const GALGAS_ifInstructionForGeneration temp_5 = this ;
      routine_generateInstructionList (ioArgument_ioInclusionSet, temp_5.readProperty_m_5F_else_5F_instructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 864)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 872)) ;
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
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@localConstantDeclarationWithAssignmentAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_localConstantDeclarationWithAssignmentAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_localConstantDeclarationWithAssignmentAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 143)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@localVariableOrConstantDeclarationWithAssignmentAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_localVariableOrConstantDeclarationWithAssignmentAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_1 = this ;
    test_0 = GALGAS_bool (kIsNotEqual, temp_1.readProperty_mOptionalTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_2 = this ;
      GALGAS_unifiedTypeMapEntry joker_5651 ; // Joker input parameter
      extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_2.readProperty_mOptionalTypeName (), joker_5651, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 151)) ;
      }
    }
  }
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_3 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_3.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 153)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@undefinedLocalConstantDeclarationAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_undefinedLocalConstantDeclarationAST::method_analyzeSemanticInstruction (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                   GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                   const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                   GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                   GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_undefinedLocalConstantDeclarationAST temp_0 = this ;
  GALGAS_unifiedTypeMapEntry var_targetType_6546 = extensionGetter_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), temp_0.readProperty_mConstantTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 166)) ;
  const GALGAS_undefinedLocalConstantDeclarationAST temp_1 = this ;
  const GALGAS_undefinedLocalConstantDeclarationAST temp_2 = this ;
  GALGAS_string var_targetVariableCppName_6656 = GALGAS_string ("var_").add_operation (temp_1.readProperty_mConstantName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-let.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 167)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 167)).add_operation (temp_2.readProperty_mConstantName ().readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 168)).getter_string (SOURCE_FILE ("instruction-let.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 168)) ;
  {
  const GALGAS_undefinedLocalConstantDeclarationAST temp_3 = this ;
  extensionSetter_insertDeclaredLocalConstant (ioArgument_ioVariableMap, temp_3.readProperty_mConstantName (), var_targetType_6546, var_targetVariableCppName_6656, var_targetVariableCppName_6656, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 169)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_undefinedLocalConstantDeclarationForGeneration::constructor_new (var_targetType_6546, var_targetVariableCppName_6656  COMMA_SOURCE_FILE ("instruction-let.galgas", 176))  COMMA_SOURCE_FILE ("instruction-let.galgas", 176)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@localConstantDeclarationWithAssignmentAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_localConstantDeclarationWithAssignmentAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                        GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                        GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration var_expression_7954 ;
  const GALGAS_localConstantDeclarationWithAssignmentAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-let.galgas", 194)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_7954, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 191)) ;
  const GALGAS_localConstantDeclarationWithAssignmentAST temp_1 = this ;
  const GALGAS_localConstantDeclarationWithAssignmentAST temp_2 = this ;
  GALGAS_string var_targetVariableCppName_8013 = GALGAS_string ("var_").add_operation (temp_1.readProperty_mVariableName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-let.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 200)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 200)).add_operation (temp_2.readProperty_mVariableName ().readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 201)).getter_string (SOURCE_FILE ("instruction-let.galgas", 201)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 201)) ;
  {
  const GALGAS_localConstantDeclarationWithAssignmentAST temp_3 = this ;
  extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, temp_3.readProperty_mVariableName (), var_expression_7954.readProperty_mResultType (), var_targetVariableCppName_8013, var_targetVariableCppName_8013, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 202)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::constructor_new (var_expression_7954.readProperty_mResultType (), GALGAS_bool (true), var_targetVariableCppName_8013, var_expression_7954  COMMA_SOURCE_FILE ("instruction-let.galgas", 209))  COMMA_SOURCE_FILE ("instruction-let.galgas", 209)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@localVariableOrConstantDeclarationWithAssignmentAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_localVariableOrConstantDeclarationWithAssignmentAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                  GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                                  GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_0 = this ;
  GALGAS_unifiedTypeMapEntry var_targetType_9151 = extensionGetter_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), temp_0.readProperty_mOptionalTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 224)) ;
  GALGAS_semanticExpressionForGeneration var_expression_9501 ;
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_1.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_9151, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_9501, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 226)) ;
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_2 = this ;
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_3 = this ;
  GALGAS_string var_targetVariableCppName_9560 = GALGAS_string ("var_").add_operation (temp_2.readProperty_mVariableName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-let.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 235)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 235)).add_operation (temp_3.readProperty_mVariableName ().readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 236)).getter_string (SOURCE_FILE ("instruction-let.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 236)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_5 = this ;
    test_4 = temp_5.readProperty_mIsConstant ().boolEnum () ;
    if (kBoolTrue == test_4) {
      {
      const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_6 = this ;
      extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, temp_6.readProperty_mVariableName (), var_targetType_9151, var_targetVariableCppName_9560, var_targetVariableCppName_9560, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 238)) ;
      }
    }
  }
  if (kBoolFalse == test_4) {
    {
    const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_7 = this ;
    extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, temp_7.readProperty_mVariableName (), GALGAS_bool (true), var_targetType_9151, var_targetVariableCppName_9560, var_targetVariableCppName_9560, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 245)) ;
    }
  }
  {
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_8 = this ;
  routine_checkAssignmentTypeWithImplicitGetterCall (var_targetType_9151, var_expression_9501.readProperty_mResultType (), temp_8.readProperty_mInstructionLocation (), var_expression_9501, inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 254)) ;
  }
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_9 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::constructor_new (var_targetType_9151, temp_9.readProperty_mIsConstant (), var_targetVariableCppName_9560, var_expression_9501  COMMA_SOURCE_FILE ("instruction-let.galgas", 256))  COMMA_SOURCE_FILE ("instruction-let.galgas", 256)) ;
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
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_undefinedLocalConstantDeclarationForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mTargetType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 291)) ;
  const GALGAS_undefinedLocalConstantDeclarationForGeneration temp_1 = this ;
  const GALGAS_undefinedLocalConstantDeclarationForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_1.readProperty_mTargetType (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 292)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 292)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 292)).add_operation (temp_2.readProperty_mCppVariableName (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 292)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 292)), inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 292)) ;
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
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mTargetType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 303)) ;
  GALGAS_string var_sourceVar_12852 ;
  const GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mSourceExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_12852, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 304)) ;
  const GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration temp_2 = this ;
  const GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_2.readProperty_mTargetType (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 311)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 311)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 311)).add_operation (temp_3.readProperty_mCppVariableName (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 311)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 311)).add_operation (var_sourceVar_12852, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 311)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 311)), inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 311)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@logInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_logInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_logInstructionAST temp_0 = this ;
  cEnumerator_logListAST enumerator_3612 (temp_0.readProperty_mLogList (), kENUMERATION_UP) ;
  while (enumerator_3612.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) enumerator_3612.current_mLogExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 107)) ;
    enumerator_3612.gotoNextObject () ;
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
                                                                GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_logInstructionAST temp_0 = this ;
  cEnumerator_logListAST enumerator_4305 (temp_0.readProperty_mLogList (), kENUMERATION_UP) ;
  while (enumerator_4305.hasCurrentObject ()) {
    GALGAS_semanticExpressionForGeneration var_expression_4588 ;
    callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_4305.current_mLogExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-log.galgas", 126)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_4588, inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 123)) ;
    ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_logInstructionForGeneration::constructor_new (enumerator_4305.current_mLogMessage (HERE), var_expression_4588  COMMA_SOURCE_FILE ("instruction-log.galgas", 132))  COMMA_SOURCE_FILE ("instruction-log.galgas", 132)) ;
    enumerator_4305.gotoNextObject () ;
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
                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string var_logVar_5740 ;
  const GALGAS_logInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mLogExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_logVar_5740, inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 157)) ;
  const GALGAS_logInstructionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_logVar_5740.add_operation (GALGAS_string (".log ("), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 164)).add_operation (temp_1.readProperty_mLogMessage ().readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("instruction-log.galgas", 164)), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 164)), inCompiler  COMMA_SOURCE_FILE ("instruction-log.galgas", 164)) ;
  const GALGAS_logInstructionForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_2.readProperty_mLogMessage ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 165)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 165)), inCompiler  COMMA_SOURCE_FILE ("instruction-log.galgas", 165)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@loopInstructionWithVariantAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_loopInstructionWithVariantAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_loopInstructionWithVariantAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mVariantExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 126)) ;
  const GALGAS_loopInstructionWithVariantAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_1.readProperty_mLoopExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 127)) ;
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
                                                                            GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                            GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration var_variantExpression_5820 ;
  const GALGAS_loopInstructionWithVariantAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mVariantExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-loop-with-variant.galgas", 146)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_variantExpression_5820, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 143)) ;
  {
  routine_checkAssignmentTypeWithImplicitGetterCall (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType (), var_variantExpression_5820.readProperty_mResultType (), var_variantExpression_5820.readProperty_mLocation (), var_variantExpression_5820, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 152)) ;
  }
  GALGAS_semanticExpressionForGeneration var_loopExpression_6663 ;
  const GALGAS_loopInstructionWithVariantAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_1.readProperty_mLoopExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-loop-with-variant.galgas", 166)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_loopExpression_6663, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 163)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsNotEqual, var_loopExpression_6663.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_loopInstructionWithVariantAST temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mEndOfLoopExpression (), GALGAS_string ("the loop expression type should be '@").add_operation (extensionGetter_definition (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 174)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 174)).add_operation (GALGAS_string ("', but it has '@"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 174)).add_operation (extensionGetter_definition (var_loopExpression_6663.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 174)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 174)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 174)), fixItArray4  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 173)) ;
    }
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 177)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_first_5F_instructionList_7541 ;
  {
  const GALGAS_loopInstructionWithVariantAST temp_5 = this ;
  const GALGAS_loopInstructionWithVariantAST temp_6 = this ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-loop-with-variant.galgas", 183)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-loop-with-variant.galgas", 184)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-loop-with-variant.galgas", 185)), temp_5.readProperty_mFirstInstructions (), temp_6.readProperty_mEndOfFirstInstructions (), ioArgument_ioVariableMap, var_first_5F_instructionList_7541, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 179)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_second_5F_instructionList_7940 ;
  {
  const GALGAS_loopInstructionWithVariantAST temp_7 = this ;
  const GALGAS_loopInstructionWithVariantAST temp_8 = this ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-loop-with-variant.galgas", 196)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-loop-with-variant.galgas", 197)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-loop-with-variant.galgas", 198)), temp_7.readProperty_mSecondInstructions (), temp_8.readProperty_mEndOfSecondInstructions (), ioArgument_ioVariableMap, var_second_5F_instructionList_7940, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 192)) ;
  }
  {
  const GALGAS_loopInstructionWithVariantAST temp_9 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_9.readProperty_mEndOfLoopInstruction (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 205)) ;
  }
  const GALGAS_loopInstructionWithVariantAST temp_10 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_loopInstructionWithVariantForGeneration::constructor_new (temp_10.readProperty_mInstructionLocation (), var_variantExpression_5820, var_first_5F_instructionList_7541, var_loopExpression_6663, var_second_5F_instructionList_7940  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 207))  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 207)) ;
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
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string var_variantCppVarName_9531 ;
  const GALGAS_loopInstructionWithVariantForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mVariantExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_variantCppVarName_9531, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 237)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_variantCppVarName_9531, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 244)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 244)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 244)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 245)) ;
  }
  const GALGAS_loopInstructionWithVariantForGeneration temp_1 = this ;
  GALGAS_string var_variantVar_9669 = GALGAS_string ("variant_").add_operation (temp_1.readProperty_mInstructionLocation ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 246)).getter_string (SOURCE_FILE ("instruction-loop-with-variant.galgas", 246)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 246)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("uint32_t ").add_operation (var_variantVar_9669, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 247)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 247)).add_operation (var_variantCppVarName_9531, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 247)).add_operation (GALGAS_string (".uintValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 247)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 247)) ;
  const GALGAS_loopInstructionWithVariantForGeneration temp_2 = this ;
  GALGAS_string var_loopVar_9853 = GALGAS_string ("loop_").add_operation (temp_2.readProperty_mInstructionLocation ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 248)).getter_string (SOURCE_FILE ("instruction-loop-with-variant.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 248)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("bool ").add_operation (var_loopVar_9853, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 249)).add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 249)).add_operation (GALGAS_string ("while ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 249)).add_operation (var_loopVar_9853, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 250)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 250)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 249)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 251)) ;
  }
  {
  const GALGAS_loopInstructionWithVariantForGeneration temp_3 = this ;
  routine_generateInstructionList (ioArgument_ioInclusionSet, temp_3.readProperty_mFirstInstructions (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 252)) ;
  }
  GALGAS_string var_loopExpressionVar_10433 ;
  const GALGAS_loopInstructionWithVariantForGeneration temp_4 = this ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_4.readProperty_mLoopExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_loopExpressionVar_10433, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 260)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_loopVar_9853.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 261)).add_operation (var_loopExpressionVar_10433, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 261)).add_operation (GALGAS_string (".isValid () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 261)).add_operation (GALGAS_string ("if ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 261)).add_operation (var_loopVar_9853, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 262)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 262)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 262)).add_operation (var_loopVar_9853, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 263)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 263)).add_operation (var_loopExpressionVar_10433, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 263)).add_operation (GALGAS_string (".boolValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 263)).add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 263)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 261)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 265)) COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 265)) ;
  }
  const GALGAS_loopInstructionWithVariantForGeneration temp_5 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_loopVar_9853, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 266)).add_operation (GALGAS_string (" && (0 == "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 266)).add_operation (var_variantVar_9669, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 266)).add_operation (GALGAS_string (")) {\n"
    "  "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 266)).add_operation (var_loopVar_9853, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 267)).add_operation (GALGAS_string (" = false ;\n"
    "  "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 267)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 268)).add_operation (GALGAS_string ("->loopRunTimeVariantError ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 268)).add_operation (extensionGetter_sourceFile (temp_5.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 268)).add_operation (GALGAS_string (") ;\n"
    "}\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 268)).add_operation (GALGAS_string ("if ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 269)).add_operation (var_loopVar_9853, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 270)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 270)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 266)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_variantVar_9669, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 271)).add_operation (GALGAS_string (" -- ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 271)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 271)) ;
  {
  const GALGAS_loopInstructionWithVariantForGeneration temp_6 = this ;
  routine_generateInstructionList (ioArgument_ioInclusionSet, temp_6.readProperty_mSecondInstructions (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 272)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 280)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 281)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 282)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 283)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 284)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@loopInstructionWithoutVariantAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_loopInstructionWithoutVariantAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_loopInstructionWithoutVariantAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mLoopExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 108)) ;
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
                                                                               GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                               GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration var_loopExpression_5243 ;
  const GALGAS_loopInstructionWithoutVariantAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mLoopExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-loop-without-variant.galgas", 127)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_loopExpression_5243, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 124)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_loopExpression_5243.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_loopInstructionWithoutVariantAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mEndOfLoopExpression (), GALGAS_string ("the loop expression type should be '@").add_operation (extensionGetter_definition (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 135)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 135)).add_operation (GALGAS_string ("', but it has '@"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 135)).add_operation (extensionGetter_definition (var_loopExpression_5243.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 135)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 135)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 135)), fixItArray3  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 134)) ;
    }
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 138)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_first_5F_instructionList_6121 ;
  {
  const GALGAS_loopInstructionWithoutVariantAST temp_4 = this ;
  const GALGAS_loopInstructionWithoutVariantAST temp_5 = this ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-loop-without-variant.galgas", 144)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-loop-without-variant.galgas", 145)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-loop-without-variant.galgas", 146)), temp_4.readProperty_mFirstInstructions (), temp_5.readProperty_mEndOfFirstInstructions (), ioArgument_ioVariableMap, var_first_5F_instructionList_6121, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 140)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_second_5F_instructionList_6520 ;
  {
  const GALGAS_loopInstructionWithoutVariantAST temp_6 = this ;
  const GALGAS_loopInstructionWithoutVariantAST temp_7 = this ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-loop-without-variant.galgas", 157)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-loop-without-variant.galgas", 158)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-loop-without-variant.galgas", 159)), temp_6.readProperty_mSecondInstructions (), temp_7.readProperty_mEndOfSecondInstructions (), ioArgument_ioVariableMap, var_second_5F_instructionList_6520, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 153)) ;
  }
  {
  const GALGAS_loopInstructionWithoutVariantAST temp_8 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_8.readProperty_mEndOfLoopInstruction (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 166)) ;
  }
  const GALGAS_loopInstructionWithoutVariantAST temp_9 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_loopInstructionWithoutVariantForGeneration::constructor_new (temp_9.readProperty_mInstructionLocation (), var_first_5F_instructionList_6121, var_loopExpression_5243, var_second_5F_instructionList_6520  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 168))  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 168)) ;
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
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_loopInstructionWithoutVariantForGeneration temp_0 = this ;
  GALGAS_string var_loopVar_8154 = GALGAS_string ("loop_").add_operation (temp_0.readProperty_mInstructionLocation ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 194)).getter_string (SOURCE_FILE ("instruction-loop-without-variant.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 194)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("bool ").add_operation (var_loopVar_8154, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 195)).add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 195)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 195)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("while (").add_operation (var_loopVar_8154, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 196)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 196)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 196)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 197)) ;
  }
  {
  const GALGAS_loopInstructionWithoutVariantForGeneration temp_1 = this ;
  routine_generateInstructionList (ioArgument_ioInclusionSet, temp_1.readProperty_mFirstInstructions (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 198)) ;
  }
  GALGAS_string var_loopExpressionVar_8760 ;
  const GALGAS_loopInstructionWithoutVariantForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mLoopExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_loopExpressionVar_8760, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 206)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_loopVar_8154.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 213)).add_operation (var_loopExpressionVar_8760, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 213)).add_operation (GALGAS_string (".isValid () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 213)).add_operation (GALGAS_string ("if ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 213)).add_operation (var_loopVar_8154, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 214)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 214)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 214)).add_operation (var_loopVar_8154, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 215)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 215)).add_operation (var_loopExpressionVar_8760, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 215)).add_operation (GALGAS_string (".boolValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 215)).add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 215)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 213)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_loopVar_8154, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 217)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 217)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 217)) ;
  {
  const GALGAS_loopInstructionWithoutVariantForGeneration temp_3 = this ;
  routine_generateInstructionList (ioArgument_ioInclusionSet, temp_3.readProperty_mSecondInstructions (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 218)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 226)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 227)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 228)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@messageInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_messageInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_messageInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 52)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@messageInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_messageInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                    GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                    const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                    GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                    GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration var_expression_3113 ;
  const GALGAS_messageInstructionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-message.galgas", 69)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_3113, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 66)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_expression_3113.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_messageInstructionAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("the expression has the '@").add_operation (extensionGetter_definition (var_expression_3113.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 77)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 77)).add_operation (GALGAS_string ("' type, but the 'message' instruction requires an '@string' expression"), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 77)), fixItArray3  COMMA_SOURCE_FILE ("instruction-message.galgas", 76)) ;
    }
  }
  const GALGAS_messageInstructionAST temp_4 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_messageInstructionForGeneration::constructor_new (var_expression_3113, temp_4.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("instruction-message.galgas", 80))  COMMA_SOURCE_FILE ("instruction-message.galgas", 80)) ;
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
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string var_messageCppVarName_4631 ;
  const GALGAS_messageInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_messageCppVarName_4631, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 104)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 112)).add_operation (GALGAS_string ("->printMessage ("), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 112)).add_operation (var_messageCppVarName_4631, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 112)), inCompiler  COMMA_SOURCE_FILE ("instruction-message.galgas", 112)) ;
  const GALGAS_messageInstructionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_1.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 113)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 113)), inCompiler  COMMA_SOURCE_FILE ("instruction-message.galgas", 113)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 114)) COMMA_SOURCE_FILE ("instruction-message.galgas", 114)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@methodCallInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_methodCallInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_methodCallInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 70)) ;
  const GALGAS_methodCallInstructionAST temp_1 = this ;
  cEnumerator_actualParameterListAST enumerator_2832 (temp_1.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_2832.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((const cPtr_actualParameterAST *) enumerator_2832.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 72)) ;
    enumerator_2832.gotoNextObject () ;
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
                                                                       GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                       GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration var_receiverExpression_3789 ;
  const GALGAS_methodCallInstructionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-method-call.galgas", 91)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_receiverExpression_3789, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 88)) ;
  GALGAS_methodKind var_kind_3936 ;
  GALGAS_formalParameterSignature var_routineSignature_3962 ;
  GALGAS_bool var_hasCompilerArgument_3998 ;
  GALGAS_instanceMethodMutability var_mutability_4025 ;
  GALGAS_string var_errorMessage_4047 ;
  const GALGAS_methodCallInstructionAST temp_1 = this ;
  GALGAS_location joker_3968 ; // Joker input parameter
  GALGAS_methodQualifier joker_4004 ; // Joker input parameter
  extensionGetter_definition (var_receiverExpression_3789.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 97)).readProperty_mInstanceMethodMap ().method_searchKey (temp_1.readProperty_mMethodName (), var_kind_3936, var_routineSignature_3962, joker_3968, var_hasCompilerArgument_3998, joker_4004, var_mutability_4025, var_errorMessage_4047, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 97)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsNotEqual, var_errorMessage_4047.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_methodCallInstructionAST temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mMethodName ().readProperty_location (), var_errorMessage_4047, fixItArray4  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 108)) ;
    }
  }
  switch (var_mutability_4025.enumValue ()) {
  case GALGAS_instanceMethodMutability::kNotBuilt:
    break ;
  case GALGAS_instanceMethodMutability::kEnum_constantMethod:
    {
    }
    break ;
  case GALGAS_instanceMethodMutability::kEnum_mutatingMethod:
    {
    }
    break ;
  }
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_4696 ;
  {
  const GALGAS_methodCallInstructionAST temp_5 = this ;
  const GALGAS_methodCallInstructionAST temp_6 = this ;
  const GALGAS_methodCallInstructionAST temp_7 = this ;
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_5.readProperty_mMethodName (), GALGAS_string ("'").add_operation (temp_6.readProperty_mMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 121)).add_operation (GALGAS_string ("' instance method header"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 121)), var_routineSignature_3962, temp_7.readProperty_mActualParameterList (), ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_4696, inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 116)) ;
  }
  GALGAS_unifiedTypeMapEntry var_baseType_4762 = var_receiverExpression_3789.readProperty_mResultType () ;
  GALGAS_bool var_searching_4811 = GALGAS_bool (true) ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("instruction-method-call.galgas", 131)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 131)).getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 131)))).boolEnum () ;
    if (kBoolTrue == test_8) {
      if (GALGAS_uint::constructor_max (SOURCE_FILE ("instruction-method-call.galgas", 132)).isValid ()) {
        uint32_t variant_4860 = GALGAS_uint::constructor_max (SOURCE_FILE ("instruction-method-call.galgas", 132)).uintValue () ;
        bool loop_4860 = true ;
        while (loop_4860) {
          loop_4860 = var_searching_4811.isValid () ;
          if (loop_4860) {
            loop_4860 = var_searching_4811.boolValue () ;
          }
          if (loop_4860 && (0 == variant_4860)) {
            loop_4860 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-method-call.galgas", 132)) ;
          }
          if (loop_4860) {
            variant_4860 -- ;
            enumGalgasBool test_9 = kBoolTrue ;
            if (kBoolTrue == test_9) {
              test_9 = extensionGetter_definition (var_baseType_4762, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 133)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("instruction-method-call.galgas", 133)).boolEnum () ;
              if (kBoolTrue == test_9) {
                var_searching_4811 = GALGAS_bool (false) ;
              }
            }
            if (kBoolFalse == test_9) {
              enumGalgasBool test_10 = kBoolTrue ;
              if (kBoolTrue == test_10) {
                const GALGAS_methodCallInstructionAST temp_11 = this ;
                test_10 = extensionGetter_definition (extensionGetter_definition (var_baseType_4762, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 136)).readProperty_mSuperType (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 136)).readProperty_mInstanceMethodMap ().getter_hasKey (temp_11.readProperty_mMethodName ().readProperty_string () COMMA_SOURCE_FILE ("instruction-method-call.galgas", 136)).boolEnum () ;
                if (kBoolTrue == test_10) {
                  var_baseType_4762 = extensionGetter_definition (var_baseType_4762, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 137)).readProperty_mSuperType () ;
                }
              }
              if (kBoolFalse == test_10) {
                var_searching_4811 = GALGAS_bool (false) ;
              }
            }
          }
        }
      }
    }
  }
  const GALGAS_methodCallInstructionAST temp_12 = this ;
  const GALGAS_methodCallInstructionAST temp_13 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_methodCallInstructionForGeneration::constructor_new (temp_12.readProperty_mInstructionLocation (), var_receiverExpression_3789.readProperty_mResultType (), var_receiverExpression_3789, temp_13.readProperty_mMethodName ().readProperty_string (), var_kind_3936, var_actualParameterListForGeneration_4696, var_hasCompilerArgument_3998, var_baseType_4762  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 145))  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 145)) ;
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
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string var_receiverCppName_6868 ;
  const GALGAS_methodCallInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppName_6868, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 181)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (var_receiverCppName_6868 COMMA_SOURCE_FILE ("instruction-method-call.galgas", 182)) ;
  }
  GALGAS_stringlist var_parameterCppNameList_6961 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-method-call.galgas", 184)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_7013 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-method-call.galgas", 185)) ;
  GALGAS_stringlist var_inputVariableList_7054 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-method-call.galgas", 186)) ;
  const GALGAS_methodCallInstructionForGeneration temp_1 = this ;
  cEnumerator_actualParameterListForGeneration enumerator_7095 (temp_1.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_7095.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_7338 ;
    callExtensionMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_7095.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_7013, var_inputVariableList_7054, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_7338, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 188)) ;
    var_parameterCppNameList_6961.addAssign_operation (var_parameterCppName_7338  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 189)) ;
    enumerator_7095.gotoNextObject () ;
  }
  const GALGAS_methodCallInstructionForGeneration temp_2 = this ;
  switch (temp_2.readProperty_mKind ().enumValue ()) {
  case GALGAS_methodKind::kNotBuilt:
    break ;
  case GALGAS_methodKind::kEnum_definedAsExtension:
    {
      const GALGAS_methodCallInstructionForGeneration temp_3 = this ;
      const GALGAS_methodCallInstructionForGeneration temp_4 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (extensionGetter_definition (temp_3.readProperty_mMethodBaseType (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 194)).readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 194)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 194)).add_operation (temp_4.readProperty_mMethodName ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 194))  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 194)) ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        const GALGAS_methodCallInstructionForGeneration temp_6 = this ;
        test_5 = extensionGetter_definition (temp_6.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 195)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("instruction-method-call.galgas", 195)).boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_methodCallInstructionForGeneration temp_7 = this ;
          const GALGAS_methodCallInstructionForGeneration temp_8 = this ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("callExtensionMethod_").add_operation (temp_7.readProperty_mMethodName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 196)).add_operation (GALGAS_string (" ((const cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 196)).add_operation (extensionGetter_identifierRepresentation (temp_8.readProperty_mReceiverExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 197)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 197)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 197)).add_operation (var_receiverCppName_6868, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 198)).add_operation (GALGAS_string (".ptr (), "), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 198)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 196)) ;
        }
      }
      if (kBoolFalse == test_5) {
        const GALGAS_methodCallInstructionForGeneration temp_9 = this ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("extensionMethod_").add_operation (temp_9.readProperty_mMethodName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 200)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 200)).add_operation (var_receiverCppName_6868, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 201)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 201)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 200)) ;
      }
    }
    break ;
  case GALGAS_methodKind::kEnum_definedAsMember:
    {
      const GALGAS_methodCallInstructionForGeneration temp_10 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_6868.add_operation (GALGAS_string (".method_"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 204)).add_operation (temp_10.readProperty_mMethodName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 204)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 204)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 204)) ;
    }
    break ;
  }
  cEnumerator_stringlist enumerator_8273 (var_parameterCppNameList_6961, kENUMERATION_UP) ;
  while (enumerator_8273.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_8273.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 207)) ;
    if (enumerator_8273.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 208)) ;
    }
    enumerator_8273.gotoNextObject () ;
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GALGAS_bool (kIsEqual, var_parameterCppNameList_6961.getter_length (SOURCE_FILE ("instruction-method-call.galgas", 210)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 210)).getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 210)))).boolEnum () ;
    if (kBoolTrue == test_11) {
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        const GALGAS_methodCallInstructionForGeneration temp_13 = this ;
        test_12 = temp_13.readProperty_mHasCompilerArgument ().boolEnum () ;
        if (kBoolTrue == test_12) {
          {
          ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 212)) COMMA_SOURCE_FILE ("instruction-method-call.galgas", 212)) ;
          }
          ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 213)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 213)) ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 214)) ;
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
        ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 217)) COMMA_SOURCE_FILE ("instruction-method-call.galgas", 217)) ;
        }
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 218)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 218)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 219)) ;
      }
    }
    if (kBoolFalse == test_14) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 221)) ;
    }
  }
  const GALGAS_methodCallInstructionForGeneration temp_16 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(extensionGetter_sourceFile (temp_16.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 223)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 223)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 223)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@procCallInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_procCallInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_procCallInstructionAST temp_0 = this ;
  cEnumerator_actualParameterListAST enumerator_2471 (temp_0.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_2471.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((const cPtr_actualParameterAST *) enumerator_2471.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 60)) ;
    enumerator_2471.gotoNextObject () ;
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
                                                                     GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                     GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_procCallInstructionAST temp_0 = this ;
  GALGAS_lstring var_usefulnessName_3168 = function_procedureNameForUsefulEntitiesGraph (temp_0.readProperty_mRoutineName (), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 75)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_3168 COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 76)) ;
  }
  GALGAS_formalParameterSignature var_routineSignature_3473 ;
  GALGAS_bool var_isInternal_3500 ;
  const GALGAS_procCallInstructionAST temp_1 = this ;
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mRoutineMap ().method_searchKey (temp_1.readProperty_mRoutineName (), var_routineSignature_3473, var_isInternal_3500, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 78)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_isInternal_3500.boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_procCallInstructionAST temp_3 = this ;
      GALGAS_location var_procDeclarationLocation_3578 = constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mRoutineMap ().getter_locationForKey (temp_3.readProperty_mRoutineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 85)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        const GALGAS_procCallInstructionAST temp_5 = this ;
        test_4 = GALGAS_bool (kIsNotEqual, temp_5.readProperty_mRoutineName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 86)).objectCompare (var_procDeclarationLocation_3578.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 86)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_procCallInstructionAST temp_6 = this ;
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mRoutineName ().readProperty_location (), GALGAS_string ("this proc is internal to '").add_operation (var_procDeclarationLocation_3578.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 87)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 87)), fixItArray7  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 87)) ;
        }
      }
    }
  }
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_4309 ;
  {
  const GALGAS_procCallInstructionAST temp_8 = this ;
  const GALGAS_procCallInstructionAST temp_9 = this ;
  const GALGAS_procCallInstructionAST temp_10 = this ;
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_8.readProperty_mRoutineName (), GALGAS_string ("'").add_operation (temp_9.readProperty_mRoutineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 96)).add_operation (GALGAS_string ("' routine header"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 96)), var_routineSignature_3473, temp_10.readProperty_mActualParameterList (), ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_4309, inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 91)) ;
  }
  const GALGAS_procCallInstructionAST temp_11 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_procCallInstructionForGeneration::constructor_new (temp_11.readProperty_mRoutineName (), var_actualParameterListForGeneration_4309  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 104))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 104)) ;
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
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_procCallInstructionForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("proc-").add_operation (temp_0.readProperty_mRoutineName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-proc-call.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 127))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 127)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 128)) ;
  GALGAS_stringlist var_parameterCppNameList_5473 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-proc-call.galgas", 130)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_5525 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-proc-call.galgas", 131)) ;
  GALGAS_stringlist var_inputVariableList_5566 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-proc-call.galgas", 132)) ;
  const GALGAS_procCallInstructionForGeneration temp_1 = this ;
  cEnumerator_actualParameterListForGeneration enumerator_5595 (temp_1.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_5595.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_5880 ;
    callExtensionMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_5595.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_5525, var_inputVariableList_5566, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_5880, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 134)) ;
    var_parameterCppNameList_5473.addAssign_operation (var_parameterCppName_5880  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 143)) ;
    enumerator_5595.gotoNextObject () ;
  }
  const GALGAS_procCallInstructionForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("routine_").add_operation (temp_2.readProperty_mRoutineName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-proc-call.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 146)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 146)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 146)) ;
  cEnumerator_stringlist enumerator_6071 (var_parameterCppNameList_5473, kENUMERATION_UP) ;
  while (enumerator_6071.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_6071.current_mValue (HERE).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 148)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 148)) ;
    enumerator_6071.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 150)) COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 150)) ;
  }
  const GALGAS_procCallInstructionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 151)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 151)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mRoutineName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 151)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 151)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 151)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 152)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfAssignmentInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_selfAssignmentInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_selfAssignmentInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 61)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfAssignmentInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_selfAssignmentInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                           GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                           GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMapEntry var_selfType_3055 ;
    GALGAS_bool var_selfIsMutable_3083 ;
    GALGAS_bool var_unused_0_3105 ;
    const bool optionalResult3035 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_3055, var_selfIsMutable_3083, var_unused_0_3105) ;
    if (!optionalResult3035) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_selfIsMutable_3083.operator_not (SOURCE_FILE ("instruction-self-assignment.galgas", 76)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfAssignmentInstructionAST temp_2 = this ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 77)) ;
        }
      }
      GALGAS_semanticExpressionForGeneration var_expression_3508 ;
      const GALGAS_selfAssignmentInstructionAST temp_4 = this ;
      callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_4.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfType_3055, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_3508, inCompiler COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 80)) ;
      {
      const GALGAS_selfAssignmentInstructionAST temp_5 = this ;
      routine_checkAssignmentTypeWithImplicitGetterCall (var_selfType_3055, var_expression_3508.readProperty_mResultType (), temp_5.readProperty_mInstructionLocation (), var_expression_3508, inCompiler  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 89)) ;
      }
      const GALGAS_selfAssignmentInstructionAST temp_6 = this ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_assignmentInstructionForGeneration::constructor_new (var_selfType_3055, constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-self-assignment.galgas", 95)).readProperty_string (), var_expression_3508, temp_6.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 91))  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 91)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfAssignmentInstructionAST temp_7 = this ;
    TC_Array <C_FixItDescription> fixItArray8 ;
    inCompiler->emitSemanticError (temp_7.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray8  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 100)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfPlusEqualExpressionInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_selfPlusEqualExpressionInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_selfPlusEqualExpressionInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 186)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfMinusEqualExpressionInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_selfMinusEqualExpressionInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_selfMinusEqualExpressionInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 192)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfMulEqualExpressionInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_selfMulEqualExpressionInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_selfMulEqualExpressionInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 198)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfDivEqualExpressionInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_selfDivEqualExpressionInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_selfDivEqualExpressionInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 204)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfPlusEqualElementsInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_selfPlusEqualElementsInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
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
                                                                                  GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                  GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMapEntry var_selfType_9003 ;
    GALGAS_bool var_selfIsMutable_9037 ;
    GALGAS_bool var_unused_0_9065 ;
    const bool optionalResult8977 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_9003, var_selfIsMutable_9037, var_unused_0_9065) ;
    if (!optionalResult8977) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_selfIsMutable_9037.operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 230)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfPlusEqualElementsInstructionAST temp_2 = this ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 231)) ;
        }
      }
      GALGAS_functionSignature var_addAssignOperatorArguments_9584 = extensionGetter_definition (var_selfType_9003, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 241)).readProperty_mAddAssignOperatorArguments () ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = GALGAS_bool (kIsEqual, var_addAssignOperatorArguments_9584.getter_length (SOURCE_FILE ("instruction-self-concat.galgas", 242)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 242)).getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 242)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_selfPlusEqualElementsInstructionAST temp_5 = this ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_selfType_9003, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 244)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 244)).add_operation (GALGAS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 244)), fixItArray6  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 243)) ;
        }
      }
      if (kBoolFalse == test_4) {
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          const GALGAS_selfPlusEqualElementsInstructionAST temp_8 = this ;
          test_7 = GALGAS_bool (kIsNotEqual, temp_8.readProperty_mExpressions ().getter_length (SOURCE_FILE ("instruction-self-concat.galgas", 246)).objectCompare (var_addAssignOperatorArguments_9584.getter_length (SOURCE_FILE ("instruction-self-concat.galgas", 246)))).boolEnum () ;
          if (kBoolTrue == test_7) {
            const GALGAS_selfPlusEqualElementsInstructionAST temp_9 = this ;
            const GALGAS_selfPlusEqualElementsInstructionAST temp_10 = this ;
            TC_Array <C_FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (temp_9.readProperty_mInstructionLocation (), GALGAS_string ("calling the '+=' operator on an '@").add_operation (extensionGetter_definition (var_selfType_9003, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 248)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 248)).add_operation (GALGAS_string ("' object requires "), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 248)).add_operation (var_addAssignOperatorArguments_9584.getter_length (SOURCE_FILE ("instruction-self-concat.galgas", 249)).getter_string (SOURCE_FILE ("instruction-self-concat.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 248)).add_operation (GALGAS_string (" parameter(s), while this invocation has "), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 249)).add_operation (temp_10.readProperty_mExpressions ().getter_length (SOURCE_FILE ("instruction-self-concat.galgas", 250)).getter_string (SOURCE_FILE ("instruction-self-concat.galgas", 250)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 249)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 250)), fixItArray11  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 247)) ;
          }
        }
        if (kBoolFalse == test_7) {
          GALGAS_semanticExpressionListForGeneration var_effectiveParameterList_10376 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 252)) ;
          const GALGAS_selfPlusEqualElementsInstructionAST temp_12 = this ;
          cEnumerator_actualOutputExpressionList enumerator_10482 (temp_12.readProperty_mExpressions (), kENUMERATION_UP) ;
          cEnumerator_functionSignature enumerator_10544 (var_addAssignOperatorArguments_9584, kENUMERATION_UP) ;
          while (enumerator_10482.hasCurrentObject () && enumerator_10544.hasCurrentObject ()) {
            GALGAS_semanticExpressionForGeneration var_expression_10855 ;
            callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_10482.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_10544.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_10855, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 254)) ;
            enumGalgasBool test_13 = kBoolTrue ;
            if (kBoolTrue == test_13) {
              test_13 = GALGAS_bool (kIsNotEqual, enumerator_10544.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_10482.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
              if (kBoolTrue == test_13) {
                GALGAS_string temp_14 ;
                const enumGalgasBool test_15 = GALGAS_bool (kIsNotEqual, enumerator_10544.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_15) {
                  temp_14 = enumerator_10544.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 263)) ;
                }else if (kBoolFalse == test_15) {
                  temp_14 = GALGAS_string::makeEmptyString () ;
                }
                GALGAS_string var_s_10954 = GALGAS_string ("!").add_operation (temp_14, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 263)) ;
                TC_Array <C_FixItDescription> fixItArray16 ;
                appendFixItActions (fixItArray16, kFixItReplace, var_s_10954) ;
                inCompiler->emitSemanticError (enumerator_10482.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_10954, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 264)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 264)), fixItArray16  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 264)) ;
              }
            }
            {
            routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_10544.current_mFormalArgumentType (HERE), var_expression_10855.readProperty_mResultType (), enumerator_10482.current_mEndOfExpressionLocation (HERE), var_expression_10855, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 266)) ;
            }
            var_effectiveParameterList_10376.addAssign_operation (var_expression_10855  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 267)) ;
            enumerator_10482.gotoNextObject () ;
            enumerator_10544.gotoNextObject () ;
          }
          const GALGAS_selfPlusEqualElementsInstructionAST temp_17 = this ;
          ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_plusEqualnstructionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), var_selfType_9003, GALGAS_string::makeEmptyString (), temp_17.readProperty_mInstructionLocation (), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 275)), var_effectiveParameterList_10376  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 270))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 270)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfPlusEqualElementsInstructionAST temp_18 = this ;
    TC_Array <C_FixItDescription> fixItArray19 ;
    inCompiler->emitSemanticError (temp_18.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray19  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 280)) ;
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
                                                                                    GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                    GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMapEntry var_selfType_12362 ;
    GALGAS_bool var_selfIsMutable_12396 ;
    GALGAS_bool var_unused_0_12424 ;
    const bool optionalResult12336 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_12362, var_selfIsMutable_12396, var_unused_0_12424) ;
    if (!optionalResult12336) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_selfIsMutable_12396.operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 299)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfPlusEqualExpressionInstructionAST temp_2 = this ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 300)) ;
        }
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = extensionGetter_definition (var_selfType_12362, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 310)).readProperty_mHandledOperatorFlags ().getter_plusEqualOperatorWithExpression (SOURCE_FILE ("instruction-self-concat.galgas", 310)).operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 310)).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_selfPlusEqualExpressionInstructionAST temp_5 = this ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_selfType_12362, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 312)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 312)).add_operation (GALGAS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 312)), fixItArray6  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 311)) ;
        }
      }
      GALGAS_semanticExpressionForGeneration var_expression_13468 ;
      const GALGAS_selfPlusEqualExpressionInstructionAST temp_7 = this ;
      callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_7.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfType_12362, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_13468, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 315)) ;
      {
      const GALGAS_selfPlusEqualExpressionInstructionAST temp_8 = this ;
      routine_checkAssignmentTypeWithImplicitGetterCall (var_selfType_12362, var_expression_13468.readProperty_mResultType (), temp_8.readProperty_mInstructionLocation (), var_expression_13468, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 324)) ;
      }
      const GALGAS_selfPlusEqualExpressionInstructionAST temp_9 = this ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (temp_9.readProperty_mInstructionLocation (), var_selfType_12362, constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), GALGAS_string::makeEmptyString (), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 331)), var_expression_13468, GALGAS_string ("plusAssign_operation")  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 326))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 326)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfPlusEqualExpressionInstructionAST temp_10 = this ;
    TC_Array <C_FixItDescription> fixItArray11 ;
    inCompiler->emitSemanticError (temp_10.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray11  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 336)) ;
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
                                                                                     GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                     GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMapEntry var_selfType_14645 ;
    GALGAS_bool var_selfIsMutable_14679 ;
    GALGAS_bool var_unused_0_14707 ;
    const bool optionalResult14619 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_14645, var_selfIsMutable_14679, var_unused_0_14707) ;
    if (!optionalResult14619) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_selfIsMutable_14679.operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 355)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfMinusEqualExpressionInstructionAST temp_2 = this ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 356)) ;
        }
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = extensionGetter_definition (var_selfType_14645, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 366)).readProperty_mHandledOperatorFlags ().getter_minusEqualOperatorWithExpression (SOURCE_FILE ("instruction-self-concat.galgas", 366)).operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 366)).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_selfMinusEqualExpressionInstructionAST temp_5 = this ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_selfType_14645, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 368)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 368)).add_operation (GALGAS_string ("' type, but this type does not support the '-=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 368)), fixItArray6  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 367)) ;
        }
      }
      GALGAS_semanticExpressionForGeneration var_expression_15752 ;
      const GALGAS_selfMinusEqualExpressionInstructionAST temp_7 = this ;
      callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_7.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfType_14645, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_15752, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 371)) ;
      {
      const GALGAS_selfMinusEqualExpressionInstructionAST temp_8 = this ;
      routine_checkAssignmentTypeWithImplicitGetterCall (var_selfType_14645, var_expression_15752.readProperty_mResultType (), temp_8.readProperty_mInstructionLocation (), var_expression_15752, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 380)) ;
      }
      const GALGAS_selfMinusEqualExpressionInstructionAST temp_9 = this ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (temp_9.readProperty_mInstructionLocation (), var_selfType_14645, constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), GALGAS_string::makeEmptyString (), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 387)), var_expression_15752, GALGAS_string ("minusAssign_operation")  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 382))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 382)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfMinusEqualExpressionInstructionAST temp_10 = this ;
    TC_Array <C_FixItDescription> fixItArray11 ;
    inCompiler->emitSemanticError (temp_10.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray11  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 392)) ;
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
                                                                                   GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                   GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMapEntry var_selfType_16928 ;
    GALGAS_bool var_selfIsMutable_16962 ;
    GALGAS_bool var_unused_0_16990 ;
    const bool optionalResult16902 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_16928, var_selfIsMutable_16962, var_unused_0_16990) ;
    if (!optionalResult16902) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_selfIsMutable_16962.operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 411)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfMulEqualExpressionInstructionAST temp_2 = this ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 412)) ;
        }
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = extensionGetter_definition (var_selfType_16928, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 422)).readProperty_mHandledOperatorFlags ().getter_mulEqualOperatorWithExpression (SOURCE_FILE ("instruction-self-concat.galgas", 422)).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_selfMulEqualExpressionInstructionAST temp_5 = this ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_selfType_16928, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 424)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 424)).add_operation (GALGAS_string ("' type, but this type does not support the '*=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 424)), fixItArray6  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 423)) ;
        }
      }
      GALGAS_semanticExpressionForGeneration var_expression_18029 ;
      const GALGAS_selfMulEqualExpressionInstructionAST temp_7 = this ;
      callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_7.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfType_16928, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_18029, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 427)) ;
      {
      const GALGAS_selfMulEqualExpressionInstructionAST temp_8 = this ;
      routine_checkAssignmentTypeWithImplicitGetterCall (var_selfType_16928, var_expression_18029.readProperty_mResultType (), temp_8.readProperty_mInstructionLocation (), var_expression_18029, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 436)) ;
      }
      const GALGAS_selfMulEqualExpressionInstructionAST temp_9 = this ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (temp_9.readProperty_mInstructionLocation (), var_selfType_16928, constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), GALGAS_string::makeEmptyString (), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 443)), var_expression_18029, GALGAS_string ("mulAssign_operation")  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 438))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 438)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfMulEqualExpressionInstructionAST temp_10 = this ;
    TC_Array <C_FixItDescription> fixItArray11 ;
    inCompiler->emitSemanticError (temp_10.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray11  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 448)) ;
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
                                                                                   GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                   GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMapEntry var_selfType_19203 ;
    GALGAS_bool var_selfIsMutable_19237 ;
    GALGAS_bool var_unused_0_19265 ;
    const bool optionalResult19177 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_19203, var_selfIsMutable_19237, var_unused_0_19265) ;
    if (!optionalResult19177) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_selfIsMutable_19237.operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 467)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfDivEqualExpressionInstructionAST temp_2 = this ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 468)) ;
        }
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = extensionGetter_definition (var_selfType_19203, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 478)).readProperty_mHandledOperatorFlags ().getter_divEqualOperatorWithExpression (SOURCE_FILE ("instruction-self-concat.galgas", 478)).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_selfDivEqualExpressionInstructionAST temp_5 = this ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_selfType_19203, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 480)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 480)).add_operation (GALGAS_string ("' type, but this type does not support the '/=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 480)), fixItArray6  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 479)) ;
        }
      }
      GALGAS_semanticExpressionForGeneration var_expression_20304 ;
      const GALGAS_selfDivEqualExpressionInstructionAST temp_7 = this ;
      callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_7.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfType_19203, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_20304, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 483)) ;
      {
      const GALGAS_selfDivEqualExpressionInstructionAST temp_8 = this ;
      routine_checkAssignmentTypeWithImplicitGetterCall (var_selfType_19203, var_expression_20304.readProperty_mResultType (), temp_8.readProperty_mInstructionLocation (), var_expression_20304, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 492)) ;
      }
      const GALGAS_selfDivEqualExpressionInstructionAST temp_9 = this ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (temp_9.readProperty_mInstructionLocation (), var_selfType_19203, constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), GALGAS_string::makeEmptyString (), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 499)), var_expression_20304, GALGAS_string ("divAssign_operation")  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 494))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 494)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfDivEqualExpressionInstructionAST temp_10 = this ;
    TC_Array <C_FixItDescription> fixItArray11 ;
    inCompiler->emitSemanticError (temp_10.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray11  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 504)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@setterCallInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_setterCallInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_setterCallInstructionAST temp_0 = this ;
  cEnumerator_actualParameterListAST enumerator_5737 (temp_0.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_5737.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((const cPtr_actualParameterAST *) enumerator_5737.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 179)) ;
    enumerator_5737.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfSetterCallInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_selfSetterCallInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_selfSetterCallInstructionAST temp_0 = this ;
  cEnumerator_actualParameterListAST enumerator_6103 (temp_0.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_6103.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((const cPtr_actualParameterAST *) enumerator_6103.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 189)) ;
    enumerator_6103.gotoNextObject () ;
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
                                                                       GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                       GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMapEntry var_receiverType_7043 ;
  GALGAS_string var_targetVariableCppName_7079 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_7129 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_setterCallInstructionAST temp_1 = this ;
    test_0 = temp_1.readProperty_mPrefixedBySelf ().boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GALGAS_unifiedTypeMapEntry var_selfType_7249 ;
        GALGAS_bool var_selfIsMutable_7297 ;
        GALGAS_bool var_unused_0_7339 ;
        const bool optionalResult7209 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_7249, var_selfIsMutable_7297, var_unused_0_7339) ;
        if (!optionalResult7209) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            GALGAS_bool var_isReference_7435 ;
            const bool optionalResult7405 = extensionGetter_definition (var_selfType_7249, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 210)).readProperty_mTypeKindEnum ().optional_classType (var_isReference_7435) ;
            if (!optionalResult7405) {
              test_3 = kBoolFalse ;
            }
            if (kBoolTrue == test_3) {
              test_3 = var_isReference_7435.boolEnum () ;
              if (kBoolTrue == test_3) {
              }
            }
          }
          if (kBoolFalse == test_3) {
            enumGalgasBool test_4 = kBoolTrue ;
            if (kBoolTrue == test_4) {
              test_4 = var_selfIsMutable_7297.operator_not (SOURCE_FILE ("instruction-setter-call.galgas", 211)).boolEnum () ;
              if (kBoolTrue == test_4) {
                const GALGAS_setterCallInstructionAST temp_5 = this ;
                TC_Array <C_FixItDescription> fixItArray6 ;
                inCompiler->emitSemanticError (temp_5.readProperty_mSetterName ().readProperty_location (), GALGAS_string ("'self' not mutable in this context"), fixItArray6  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 212)) ;
              }
            }
          }
          GALGAS_propertyMap var_propertyMap_7591 = extensionGetter_definition (var_selfType_7249, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 214)).readProperty_mPropertyMap () ;
          GALGAS_bool var_isConstant_7696 ;
          const GALGAS_setterCallInstructionAST temp_7 = this ;
          GALGAS_bool joker_7679 ; // Joker input parameter
          var_propertyMap_7591.method_searchKey (temp_7.readProperty_mReceiverName (), joker_7679, var_isConstant_7696, var_receiverType_7043, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 215)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = var_isConstant_7696.boolEnum () ;
            if (kBoolTrue == test_8) {
              const GALGAS_setterCallInstructionAST temp_9 = this ;
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray10  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 217)) ;
            }
          }
          var_nameForCheckingFormalParameterUsing_7129 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName () ;
          const GALGAS_setterCallInstructionAST temp_11 = this ;
          var_targetVariableCppName_7079 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 220)).add_operation (temp_11.readProperty_mReceiverName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 221)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 221)) ;
        }
      }
      if (kBoolFalse == test_2) {
        const GALGAS_setterCallInstructionAST temp_12 = this ;
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (temp_12.readProperty_mSetterName ().readProperty_location (), GALGAS_string ("'self' not available in this context"), fixItArray13  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 223)) ;
        var_receiverType_7043.drop () ; // Release error dropped variable
        var_targetVariableCppName_7079.drop () ; // Release error dropped variable
        var_nameForCheckingFormalParameterUsing_7129.drop () ; // Release error dropped variable
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_setterCallInstructionAST temp_14 = this ;
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_14.readProperty_mReceiverName (), var_receiverType_7043, var_targetVariableCppName_7079, var_nameForCheckingFormalParameterUsing_7129, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 228)) ;
    }
  }
  GALGAS_bool var_ok_8470 = GALGAS_bool (true) ;
  const GALGAS_setterCallInstructionAST temp_15 = this ;
  GALGAS_location var_errorLocation_8497 = temp_15.readProperty_mReceiverName ().readProperty_location () ;
  const GALGAS_setterCallInstructionAST temp_16 = this ;
  cEnumerator_lstringlist enumerator_8541 (temp_16.readProperty_mReceiverStructProperties (), kENUMERATION_UP) ;
  bool bool_17 = var_ok_8470.isValidAndTrue () ;
  if (enumerator_8541.hasCurrentObject () && bool_17) {
    while (enumerator_8541.hasCurrentObject () && bool_17) {
      var_ok_8470 = extensionGetter_definition (var_receiverType_7043, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 239)).readProperty_mTypeKindEnum ().getter_isStructType (SOURCE_FILE ("instruction-setter-call.galgas", 239)) ;
      enumGalgasBool test_18 = kBoolTrue ;
      if (kBoolTrue == test_18) {
        test_18 = var_ok_8470.operator_not (SOURCE_FILE ("instruction-setter-call.galgas", 240)).boolEnum () ;
        if (kBoolTrue == test_18) {
          TC_Array <C_FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticError (var_errorLocation_8497, GALGAS_string ("a structure is required for '.' access"), fixItArray19  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 241)) ;
        }
      }
      if (kBoolFalse == test_18) {
        GALGAS_propertyMap var_propertyMap_8771 = extensionGetter_definition (var_receiverType_7043, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 243)).readProperty_mPropertyMap () ;
        GALGAS_bool var_isPublic_8863 ;
        GALGAS_bool var_isConstant_8879 ;
        var_propertyMap_8771.method_searchKey (enumerator_8541.current_mValue (HERE), var_isPublic_8863, var_isConstant_8879, var_receiverType_7043, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 244)) ;
        var_errorLocation_8497 = enumerator_8541.current_mValue (HERE).readProperty_location () ;
        enumGalgasBool test_20 = kBoolTrue ;
        if (kBoolTrue == test_20) {
          test_20 = var_isPublic_8863.operator_not (SOURCE_FILE ("instruction-setter-call.galgas", 246)).boolEnum () ;
          if (kBoolTrue == test_20) {
            TC_Array <C_FixItDescription> fixItArray21 ;
            inCompiler->emitSemanticError (enumerator_8541.current_mValue (HERE).readProperty_location (), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray21  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 247)) ;
          }
        }
        enumGalgasBool test_22 = kBoolTrue ;
        if (kBoolTrue == test_22) {
          test_22 = var_isConstant_8879.boolEnum () ;
          if (kBoolTrue == test_22) {
            TC_Array <C_FixItDescription> fixItArray23 ;
            inCompiler->emitSemanticError (enumerator_8541.current_mValue (HERE).readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray23  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 250)) ;
          }
        }
      }
      enumerator_8541.gotoNextObject () ;
      if (enumerator_8541.hasCurrentObject ()) {
        bool_17 = var_ok_8470.isValidAndTrue () ;
      }
    }
  }
  GALGAS_unifiedTypeMapEntry var_castType_9216 ;
  enumGalgasBool test_24 = kBoolTrue ;
  if (kBoolTrue == test_24) {
    const GALGAS_setterCallInstructionAST temp_25 = this ;
    test_24 = GALGAS_bool (kIsNotEqual, temp_25.readProperty_mTypeNameForCasting ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_24) {
      const GALGAS_setterCallInstructionAST temp_26 = this ;
      var_castType_9216 = extensionGetter_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), temp_26.readProperty_mTypeNameForCasting (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 257)) ;
      {
      const GALGAS_setterCallInstructionAST temp_27 = this ;
      routine_checkAssignmentTypes (var_receiverType_7043, var_castType_9216, temp_27.readProperty_mTypeNameForCasting ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 258)) ;
      }
    }
  }
  if (kBoolFalse == test_24) {
    var_castType_9216 = var_receiverType_7043 ;
  }
  GALGAS_methodKind var_kind_9597 ;
  GALGAS_formalParameterSignature var_routineSignature_9623 ;
  GALGAS_bool var_hasCompilerArgument_9652 ;
  GALGAS_string var_setterErrorMessage_9687 ;
  const GALGAS_setterCallInstructionAST temp_28 = this ;
  GALGAS_methodQualifier joker_9658 ; // Joker input parameter
  extensionGetter_definition (var_castType_9216, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 263)).readProperty_mSetterMap ().method_searchKey (temp_28.readProperty_mSetterName (), var_kind_9597, var_routineSignature_9623, var_hasCompilerArgument_9652, joker_9658, var_setterErrorMessage_9687, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 263)) ;
  enumGalgasBool test_29 = kBoolTrue ;
  if (kBoolTrue == test_29) {
    test_29 = GALGAS_bool (kIsNotEqual, var_setterErrorMessage_9687.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_29) {
      const GALGAS_setterCallInstructionAST temp_30 = this ;
      TC_Array <C_FixItDescription> fixItArray31 ;
      inCompiler->emitSemanticError (temp_30.readProperty_mSetterName ().readProperty_location (), var_setterErrorMessage_9687, fixItArray31  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 272)) ;
    }
  }
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_10217 ;
  {
  const GALGAS_setterCallInstructionAST temp_32 = this ;
  const GALGAS_setterCallInstructionAST temp_33 = this ;
  const GALGAS_setterCallInstructionAST temp_34 = this ;
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_32.readProperty_mSetterName (), GALGAS_string ("'").add_operation (temp_33.readProperty_mSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 280)).add_operation (GALGAS_string ("' setter header"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 280)), var_routineSignature_9623, temp_34.readProperty_mActualParameterList (), ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_10217, inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 275)) ;
  }
  GALGAS_unifiedTypeMapEntry var_baseType_10283 = var_castType_9216 ;
  GALGAS_bool var_searching_10310 = GALGAS_bool (true) ;
  enumGalgasBool test_35 = kBoolTrue ;
  if (kBoolTrue == test_35) {
    test_35 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("instruction-setter-call.galgas", 290)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 290)).getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 290)))).boolEnum () ;
    if (kBoolTrue == test_35) {
      if (GALGAS_uint::constructor_max (SOURCE_FILE ("instruction-setter-call.galgas", 291)).isValid ()) {
        uint32_t variant_10358 = GALGAS_uint::constructor_max (SOURCE_FILE ("instruction-setter-call.galgas", 291)).uintValue () ;
        bool loop_10358 = true ;
        while (loop_10358) {
          loop_10358 = var_searching_10310.isValid () ;
          if (loop_10358) {
            loop_10358 = var_searching_10310.boolValue () ;
          }
          if (loop_10358 && (0 == variant_10358)) {
            loop_10358 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-setter-call.galgas", 291)) ;
          }
          if (loop_10358) {
            variant_10358 -- ;
            enumGalgasBool test_36 = kBoolTrue ;
            if (kBoolTrue == test_36) {
              test_36 = extensionGetter_definition (var_baseType_10283, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 292)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("instruction-setter-call.galgas", 292)).boolEnum () ;
              if (kBoolTrue == test_36) {
                var_searching_10310 = GALGAS_bool (false) ;
              }
            }
            if (kBoolFalse == test_36) {
              enumGalgasBool test_37 = kBoolTrue ;
              if (kBoolTrue == test_37) {
                const GALGAS_setterCallInstructionAST temp_38 = this ;
                test_37 = extensionGetter_definition (extensionGetter_definition (var_baseType_10283, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 295)).readProperty_mSuperType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 295)).readProperty_mSetterMap ().getter_hasKey (temp_38.readProperty_mSetterName ().readProperty_string () COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 295)).boolEnum () ;
                if (kBoolTrue == test_37) {
                  var_baseType_10283 = extensionGetter_definition (var_baseType_10283, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 296)).readProperty_mSuperType () ;
                }
              }
              if (kBoolFalse == test_37) {
                var_searching_10310 = GALGAS_bool (false) ;
              }
            }
          }
        }
      }
    }
  }
  const GALGAS_setterCallInstructionAST temp_39 = this ;
  const GALGAS_setterCallInstructionAST temp_40 = this ;
  const GALGAS_setterCallInstructionAST temp_41 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_setterCallInstructionForGeneration::constructor_new (temp_39.readProperty_mReceiverName ().readProperty_location (), var_targetVariableCppName_7079, var_nameForCheckingFormalParameterUsing_7129, temp_40.readProperty_mReceiverStructProperties (), var_castType_9216, var_receiverType_7043, temp_41.readProperty_mSetterName (), var_kind_9597, var_actualParameterListForGeneration_10217, var_hasCompilerArgument_9652, var_baseType_10283  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 304))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 304)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfSetterCallInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_selfSetterCallInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                           GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                           GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMapEntry var_selfType_11668 ;
    GALGAS_bool var_selfIsMutable_11702 ;
    GALGAS_bool var_unused_0_11730 ;
    const bool optionalResult11642 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_11668, var_selfIsMutable_11702, var_unused_0_11730) ;
    if (!optionalResult11642) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_selfIsMutable_11702.operator_not (SOURCE_FILE ("instruction-setter-call.galgas", 332)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfSetterCallInstructionAST temp_2 = this ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mSetterName ().readProperty_location (), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 333)) ;
        }
      }
      GALGAS_methodKind var_kind_11946 ;
      GALGAS_formalParameterSignature var_routineSignature_11968 ;
      GALGAS_bool var_hasCompilerArgument_11993 ;
      const GALGAS_selfSetterCallInstructionAST temp_4 = this ;
      GALGAS_methodQualifier joker_11995 ; // Joker input parameter
      GALGAS_string joker_11998 ; // Joker input parameter
      extensionGetter_definition (var_selfType_11668, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 336)).readProperty_mSetterMap ().method_searchKey (temp_4.readProperty_mSetterName (), var_kind_11946, var_routineSignature_11968, var_hasCompilerArgument_11993, joker_11995, joker_11998, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 336)) ;
      GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_12461 ;
      {
      const GALGAS_selfSetterCallInstructionAST temp_5 = this ;
      const GALGAS_selfSetterCallInstructionAST temp_6 = this ;
      const GALGAS_selfSetterCallInstructionAST temp_7 = this ;
      routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_5.readProperty_mSetterName (), GALGAS_string ("'").add_operation (temp_6.readProperty_mSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 343)).add_operation (GALGAS_string ("' setter header"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 343)), var_routineSignature_11968, temp_7.readProperty_mActualParameterList (), ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_12461, inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 338)) ;
      }
      const GALGAS_selfSetterCallInstructionAST temp_8 = this ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_selfSetterCallInstructionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), var_selfType_11668, temp_8.readProperty_mSetterName (), var_kind_11946, var_actualParameterListForGeneration_12461, var_hasCompilerArgument_11993  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 351))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 351)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfSetterCallInstructionAST temp_9 = this ;
    TC_Array <C_FixItDescription> fixItArray10 ;
    inCompiler->emitSemanticError (temp_9.readProperty_mSetterName ().readProperty_location (), GALGAS_string ("'self' not available in this context"), fixItArray10  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 360)) ;
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
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 403)) ;
  const GALGAS_setterCallInstructionForGeneration temp_0 = this ;
  GALGAS_string var_receiverCppName_14620 = temp_0.readProperty_mReceiverCppName () ;
  const GALGAS_setterCallInstructionForGeneration temp_1 = this ;
  cEnumerator_lstringlist enumerator_14658 (temp_1.readProperty_mReceiverStructAttributes (), kENUMERATION_UP) ;
  while (enumerator_14658.hasCurrentObject ()) {
    var_receiverCppName_14620.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_14658.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 406)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 406)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 406)) ;
    enumerator_14658.gotoNextObject () ;
  }
  {
  const GALGAS_setterCallInstructionForGeneration temp_2 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_2.readProperty_mReceiverBaseName () COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 408)) ;
  }
  GALGAS_stringlist var_parameterCppNameList_14904 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 410)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_14956 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 411)) ;
  GALGAS_stringlist var_inputVariableList_14997 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 412)) ;
  const GALGAS_setterCallInstructionForGeneration temp_3 = this ;
  cEnumerator_actualParameterListForGeneration enumerator_15026 (temp_3.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_15026.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_15311 ;
    callExtensionMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_15026.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_14956, var_inputVariableList_14997, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_15311, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 414)) ;
    var_parameterCppNameList_14904.addAssign_operation (var_parameterCppName_15311  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 423)) ;
    enumerator_15026.gotoNextObject () ;
  }
  const GALGAS_setterCallInstructionForGeneration temp_4 = this ;
  switch (temp_4.readProperty_mKind ().enumValue ()) {
  case GALGAS_methodKind::kNotBuilt:
    break ;
  case GALGAS_methodKind::kEnum_definedAsExtension:
    {
      const GALGAS_setterCallInstructionForGeneration temp_5 = this ;
      const GALGAS_setterCallInstructionForGeneration temp_6 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (extensionGetter_definition (temp_5.readProperty_mMethodBaseType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 428)).readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 428)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 428)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 428)).add_operation (temp_6.readProperty_mSetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 428)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 428))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 428)) ;
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        const GALGAS_setterCallInstructionForGeneration temp_8 = this ;
        test_7 = extensionGetter_definition (temp_8.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 429)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("instruction-setter-call.galgas", 429)).boolEnum () ;
        if (kBoolTrue == test_7) {
          enumGalgasBool test_9 = kBoolTrue ;
          if (kBoolTrue == test_9) {
            const GALGAS_setterCallInstructionForGeneration temp_10 = this ;
            test_9 = GALGAS_bool (kIsStrictSup, extensionGetter_definition (temp_10.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 430)).readProperty_mAllTypedPropertyList ().getter_length (SOURCE_FILE ("instruction-setter-call.galgas", 430)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 430)).getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 430)))).boolEnum () ;
            if (kBoolTrue == test_9) {
              ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_14620.add_operation (GALGAS_string (".insulate (HERE) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 431)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 431)) ;
            }
          }
          const GALGAS_setterCallInstructionForGeneration temp_11 = this ;
          GALGAS_string var_pointerUniqueName_15903 = GALGAS_string ("ptr_").add_operation (temp_11.readProperty_mInstructionLocation ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 433)).getter_string (SOURCE_FILE ("instruction-setter-call.galgas", 433)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 433)) ;
          const GALGAS_setterCallInstructionForGeneration temp_12 = this ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cPtr_").add_operation (extensionGetter_identifierRepresentation (temp_12.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 434)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 434)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 434)).add_operation (var_pointerUniqueName_15903, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 434)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 434)) ;
          const GALGAS_setterCallInstructionForGeneration temp_13 = this ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" = (cPtr_").add_operation (extensionGetter_identifierRepresentation (temp_13.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 435)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 435)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 435)).add_operation (var_receiverCppName_14620, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 435)).add_operation (GALGAS_string (".ptr () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 435)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 435)) ;
          enumGalgasBool test_14 = kBoolTrue ;
          if (kBoolTrue == test_14) {
            const GALGAS_setterCallInstructionForGeneration temp_15 = this ;
            const GALGAS_setterCallInstructionForGeneration temp_16 = this ;
            test_14 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (temp_15.readProperty_mCastType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 436)).readProperty_mTypeName ().readProperty_string ().objectCompare (extensionGetter_definition (temp_16.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 436)).readProperty_mTypeName ().readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_14) {
              const GALGAS_setterCallInstructionForGeneration temp_17 = this ;
              ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("class-").add_operation (extensionGetter_definition (temp_17.readProperty_mCastType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 437)).readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 437)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 437))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 437)) ;
              const GALGAS_setterCallInstructionForGeneration temp_18 = this ;
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ((NULL != ").add_operation (var_pointerUniqueName_15903, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 438)).add_operation (GALGAS_string (") && (dynamic_cast <cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 438)).add_operation (extensionGetter_identifierRepresentation (temp_18.readProperty_mCastType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 439)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 439)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 439)).add_operation (var_pointerUniqueName_15903, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 439)).add_operation (GALGAS_string (") == NULL)) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 440)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 438)) ;
              {
              ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 441)) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 441)) ;
              }
              const GALGAS_setterCallInstructionForGeneration temp_19 = this ;
              const GALGAS_setterCallInstructionForGeneration temp_20 = this ;
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 442)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 442)).add_operation (GALGAS_string ("->onTheFlyRunTimeError (\"cannot cast to '@"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 442)).add_operation (extensionGetter_definition (temp_19.readProperty_mCastType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 443)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 442)).add_operation (GALGAS_string ("'\""), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 443)).add_operation (extensionGetter_commaSourceFile (temp_20.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 443)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 443)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 443)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 442)) ;
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_pointerUniqueName_15903, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 444)).add_operation (GALGAS_string (" = NULL ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 444)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 444)) ;
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 445)) ;
            }
          }
          const GALGAS_setterCallInstructionForGeneration temp_21 = this ;
          const GALGAS_setterCallInstructionForGeneration temp_22 = this ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("callExtensionSetter_").add_operation (temp_21.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 447)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 447)).add_operation (GALGAS_string (" ((cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 447)).add_operation (extensionGetter_identifierRepresentation (temp_22.readProperty_mCastType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 448)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 448)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 448)).add_operation (var_pointerUniqueName_15903, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 448)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 448)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 447)) ;
        }
      }
      if (kBoolFalse == test_7) {
        const GALGAS_setterCallInstructionForGeneration temp_23 = this ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("extensionSetter_").add_operation (temp_23.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 450)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 450)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 450)).add_operation (var_receiverCppName_14620, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 450)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 450)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 450)) ;
      }
    }
    break ;
  case GALGAS_methodKind::kEnum_definedAsMember:
    {
      const GALGAS_setterCallInstructionForGeneration temp_24 = this ;
      extensionMethod_addHeaderFileName (temp_24.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 453)) ;
      const GALGAS_setterCallInstructionForGeneration temp_25 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_14620.add_operation (GALGAS_string (".setter_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 454)).add_operation (temp_25.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 454)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 454)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 454)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 454)) ;
    }
    break ;
  }
  cEnumerator_stringlist enumerator_17630 (var_parameterCppNameList_14904, kENUMERATION_UP) ;
  while (enumerator_17630.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_17630.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 457)) ;
    if (enumerator_17630.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 458)) ;
    }
    enumerator_17630.gotoNextObject () ;
  }
  enumGalgasBool test_26 = kBoolTrue ;
  if (kBoolTrue == test_26) {
    const GALGAS_setterCallInstructionForGeneration temp_27 = this ;
    test_26 = temp_27.readProperty_mHasCompilerArgument ().boolEnum () ;
    if (kBoolTrue == test_26) {
      enumGalgasBool test_28 = kBoolTrue ;
      if (kBoolTrue == test_28) {
        test_28 = GALGAS_bool (kIsNotEqual, var_parameterCppNameList_14904.getter_length (SOURCE_FILE ("instruction-setter-call.galgas", 461)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 461)).getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 461)))).boolEnum () ;
        if (kBoolTrue == test_28) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 462)) ;
        }
      }
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 464)) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 464)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 465)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 465)) ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 466)) ;
    }
  }
  if (kBoolFalse == test_26) {
    enumGalgasBool test_29 = kBoolTrue ;
    if (kBoolTrue == test_29) {
      test_29 = GALGAS_bool (kIsNotEqual, var_parameterCppNameList_14904.getter_length (SOURCE_FILE ("instruction-setter-call.galgas", 467)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 467)).getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 467)))).boolEnum () ;
      if (kBoolTrue == test_29) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 468)) ;
      }
    }
  }
  const GALGAS_setterCallInstructionForGeneration temp_30 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(extensionGetter_sourceFile (temp_30.readProperty_mSetterName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 470)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 470)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 470)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 472)) ;
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
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 483)) ;
  {
  const GALGAS_selfSetterCallInstructionForGeneration temp_0 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_0.readProperty_mSelfCppName () COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 484)) ;
  }
  GALGAS_stringlist var_parameterCppNameList_18768 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 486)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_18820 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 487)) ;
  GALGAS_stringlist var_inputVariableList_18861 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 488)) ;
  const GALGAS_selfSetterCallInstructionForGeneration temp_1 = this ;
  cEnumerator_actualParameterListForGeneration enumerator_18902 (temp_1.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_18902.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_19195 ;
    callExtensionMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_18902.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_18820, var_inputVariableList_18861, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_19195, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 490)) ;
    var_parameterCppNameList_18768.addAssign_operation (var_parameterCppName_19195  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 498)) ;
    enumerator_18902.gotoNextObject () ;
  }
  const GALGAS_selfSetterCallInstructionForGeneration temp_2 = this ;
  switch (temp_2.readProperty_mKind ().enumValue ()) {
  case GALGAS_methodKind::kNotBuilt:
    break ;
  case GALGAS_methodKind::kEnum_definedAsExtension:
    {
      const GALGAS_selfSetterCallInstructionForGeneration temp_3 = this ;
      const GALGAS_selfSetterCallInstructionForGeneration temp_4 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (extensionGetter_definition (temp_3.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 503)).readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 503)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 503)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 503)).add_operation (temp_4.readProperty_mSetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 503)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 503))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 503)) ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        const GALGAS_selfSetterCallInstructionForGeneration temp_6 = this ;
        test_5 = extensionGetter_definition (temp_6.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 504)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("instruction-setter-call.galgas", 504)).boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_selfSetterCallInstructionForGeneration temp_7 = this ;
          const GALGAS_selfSetterCallInstructionForGeneration temp_8 = this ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("callExtensionSetter_").add_operation (temp_7.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 505)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 505)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 505)).add_operation (temp_8.readProperty_mSelfCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 505)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 505)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 505)) ;
        }
      }
      if (kBoolFalse == test_5) {
        const GALGAS_selfSetterCallInstructionForGeneration temp_9 = this ;
        const GALGAS_selfSetterCallInstructionForGeneration temp_10 = this ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("extensionSetter_").add_operation (temp_9.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 507)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 507)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 507)).add_operation (temp_10.readProperty_mSelfCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 507)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 507)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 507)) ;
      }
    }
    break ;
  case GALGAS_methodKind::kEnum_definedAsMember:
    {
      enumGalgasBool test_11 = kBoolTrue ;
      if (kBoolTrue == test_11) {
        const GALGAS_selfSetterCallInstructionForGeneration temp_12 = this ;
        test_11 = extensionGetter_definition (temp_12.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 510)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("instruction-setter-call.galgas", 510)).boolEnum () ;
        if (kBoolTrue == test_11) {
          const GALGAS_selfSetterCallInstructionForGeneration temp_13 = this ;
          const GALGAS_selfSetterCallInstructionForGeneration temp_14 = this ;
          ioArgument_ioGeneratedCode.plusAssign_operation(temp_13.readProperty_mSelfCppName ().add_operation (GALGAS_string ("->setter_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 511)).add_operation (temp_14.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 511)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 511)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 511)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 511)) ;
        }
      }
      if (kBoolFalse == test_11) {
        const GALGAS_selfSetterCallInstructionForGeneration temp_15 = this ;
        const GALGAS_selfSetterCallInstructionForGeneration temp_16 = this ;
        ioArgument_ioGeneratedCode.plusAssign_operation(temp_15.readProperty_mSelfCppName ().add_operation (GALGAS_string (".setter_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 513)).add_operation (temp_16.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 513)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 513)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 513)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 513)) ;
      }
    }
    break ;
  }
  cEnumerator_stringlist enumerator_20175 (var_parameterCppNameList_18768, kENUMERATION_UP) ;
  while (enumerator_20175.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_20175.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 517)) ;
    if (enumerator_20175.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 518)) ;
    }
    enumerator_20175.gotoNextObject () ;
  }
  enumGalgasBool test_17 = kBoolTrue ;
  if (kBoolTrue == test_17) {
    const GALGAS_selfSetterCallInstructionForGeneration temp_18 = this ;
    test_17 = temp_18.readProperty_mHasCompilerArgument ().boolEnum () ;
    if (kBoolTrue == test_17) {
      enumGalgasBool test_19 = kBoolTrue ;
      if (kBoolTrue == test_19) {
        test_19 = GALGAS_bool (kIsNotEqual, var_parameterCppNameList_18768.getter_length (SOURCE_FILE ("instruction-setter-call.galgas", 521)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 521)).getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 521)))).boolEnum () ;
        if (kBoolTrue == test_19) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 522)) ;
        }
      }
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 524)) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 524)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 525)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 525)) ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 526)) ;
    }
  }
  if (kBoolFalse == test_17) {
    enumGalgasBool test_20 = kBoolTrue ;
    if (kBoolTrue == test_20) {
      test_20 = GALGAS_bool (kIsNotEqual, var_parameterCppNameList_18768.getter_length (SOURCE_FILE ("instruction-setter-call.galgas", 527)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 527)).getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 527)))).boolEnum () ;
      if (kBoolTrue == test_20) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 528)) ;
      }
    }
  }
  const GALGAS_selfSetterCallInstructionForGeneration temp_21 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(extensionGetter_sourceFile (temp_21.readProperty_mSetterName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 530)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 530)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 530)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 531)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@switchInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_switchInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_switchInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mSwitchExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 224)) ;
  const GALGAS_switchInstructionAST temp_1 = this ;
  cEnumerator_switchBranchesAST enumerator_7374 (temp_1.readProperty_mBranches (), kENUMERATION_UP) ;
  while (enumerator_7374.hasCurrentObject ()) {
    extensionMethod_enterInstructionListInSemanticContext (enumerator_7374.current_mInstructions (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 226)) ;
    enumerator_7374.gotoNextObject () ;
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
                                                                   GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                   GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionForGeneration var_switchExpression_8300 ;
  const GALGAS_switchInstructionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mSwitchExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-switch.galgas", 245)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_switchExpression_8300, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 242)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (var_switchExpression_8300.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 251)).readProperty_mTypeKindEnum ().objectCompare (GALGAS_typeKindEnum::constructor_enumType (SOURCE_FILE ("instruction-switch.galgas", 251)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_switchInstructionAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mEndOfSwitchExpression (), GALGAS_string ("the switch expression type should be an instance of an enumeration type (the '@").add_operation (extensionGetter_definition (var_switchExpression_8300.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 254)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 253)).add_operation (GALGAS_string ("' type is not an enumeration type)"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 254)), fixItArray3  COMMA_SOURCE_FILE ("instruction-switch.galgas", 252)) ;
    }
  }
  GALGAS_constantIndexMap var_enumConstantMap_8735 = extensionGetter_definition (var_switchExpression_8300.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 257)).readProperty_mEnumConstantMap () ;
  GALGAS_stringset var_constantsNamedInSwitchInstruction_8847 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("instruction-switch.galgas", 258)) ;
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 260)) ;
  }
  GALGAS_switchBranchesForGeneration var_switchBranchesForGeneration_8984 = GALGAS_switchBranchesForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 261)) ;
  const GALGAS_switchInstructionAST temp_4 = this ;
  cEnumerator_switchBranchesAST enumerator_9071 (temp_4.readProperty_mBranches (), kENUMERATION_UP) ;
  while (enumerator_9071.hasCurrentObject ()) {
    {
    extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 263)) ;
    }
    GALGAS_extractedAssociatedValuesForGeneration var_extractedAssociatedValuesForGeneration_9213 = GALGAS_extractedAssociatedValuesForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 264)) ;
    GALGAS_bool var_firstConstant_9246 = GALGAS_bool (true) ;
    cEnumerator_lstringlist enumerator_9269 (enumerator_9071.current_mSwitchConstantList (HERE), kENUMERATION_UP) ;
    while (enumerator_9269.hasCurrentObject ()) {
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = var_enumConstantMap_8735.getter_hasKey (enumerator_9269.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("instruction-switch.galgas", 267)).boolEnum () ;
        if (kBoolTrue == test_5) {
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = var_constantsNamedInSwitchInstruction_8847.getter_hasKey (enumerator_9269.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("instruction-switch.galgas", 268)).boolEnum () ;
            if (kBoolTrue == test_6) {
              TC_Array <C_FixItDescription> fixItArray7 ;
              inCompiler->emitSemanticError (enumerator_9269.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_9269.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 270)).add_operation (GALGAS_string ("' constant is already named in this switch instruction"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 270)), fixItArray7  COMMA_SOURCE_FILE ("instruction-switch.galgas", 269)) ;
            }
          }
          var_constantsNamedInSwitchInstruction_8847.addAssign_operation (enumerator_9269.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("instruction-switch.galgas", 272)) ;
          GALGAS_unifiedTypeMapEntryList var_associatedTypeList_9701 ;
          GALGAS_uint joker_9651 ; // Joker input parameter
          var_enumConstantMap_8735.method_searchKey (enumerator_9269.current_mValue (HERE), joker_9651, var_associatedTypeList_9701, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 273)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = GALGAS_bool (kIsStrictSup, var_associatedTypeList_9701.getter_length (SOURCE_FILE ("instruction-switch.galgas", 274)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 274)).getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 274)))).operator_and (GALGAS_bool (kIsEqual, enumerator_9071.current_mAssociatedValuesExtraction (HERE).getter_length (SOURCE_FILE ("instruction-switch.galgas", 274)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 274)).getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 274)))) COMMA_SOURCE_FILE ("instruction-switch.galgas", 274)).boolEnum () ;
            if (kBoolTrue == test_8) {
              TC_Array <C_FixItDescription> fixItArray9 ;
              inCompiler->emitSemanticError (enumerator_9269.current_mValue (HERE).readProperty_location (), GALGAS_string ("the associated values of '").add_operation (enumerator_9269.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 276)).add_operation (GALGAS_string ("' constant should be extracted"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 276)), fixItArray9  COMMA_SOURCE_FILE ("instruction-switch.galgas", 275)) ;
            }
          }
          if (kBoolFalse == test_8) {
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              test_10 = GALGAS_bool (kIsEqual, var_associatedTypeList_9701.getter_length (SOURCE_FILE ("instruction-switch.galgas", 277)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 277)).getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 277)))).operator_and (GALGAS_bool (kIsStrictSup, enumerator_9071.current_mAssociatedValuesExtraction (HERE).getter_length (SOURCE_FILE ("instruction-switch.galgas", 277)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 277)).getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 277)))) COMMA_SOURCE_FILE ("instruction-switch.galgas", 277)).boolEnum () ;
              if (kBoolTrue == test_10) {
                TC_Array <C_FixItDescription> fixItArray11 ;
                inCompiler->emitSemanticError (enumerator_9269.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_9269.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 279)).add_operation (GALGAS_string ("' constant has no associated value"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 279)), fixItArray11  COMMA_SOURCE_FILE ("instruction-switch.galgas", 278)) ;
              }
            }
            if (kBoolFalse == test_10) {
              enumGalgasBool test_12 = kBoolTrue ;
              if (kBoolTrue == test_12) {
                test_12 = GALGAS_bool (kIsNotEqual, var_associatedTypeList_9701.getter_length (SOURCE_FILE ("instruction-switch.galgas", 280)).objectCompare (enumerator_9071.current_mAssociatedValuesExtraction (HERE).getter_length (SOURCE_FILE ("instruction-switch.galgas", 280)))).boolEnum () ;
                if (kBoolTrue == test_12) {
                  GALGAS_string temp_13 ;
                  const enumGalgasBool test_14 = GALGAS_bool (kIsStrictSup, var_associatedTypeList_9701.getter_length (SOURCE_FILE ("instruction-switch.galgas", 283)).objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 283)).getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 283)))).boolEnum () ;
                  if (kBoolTrue == test_14) {
                    temp_13 = GALGAS_string ("s") ;
                  }else if (kBoolFalse == test_14) {
                    temp_13 = GALGAS_string::makeEmptyString () ;
                  }
                  TC_Array <C_FixItDescription> fixItArray15 ;
                  inCompiler->emitSemanticError (enumerator_9269.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_9269.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 282)).add_operation (GALGAS_string ("' constant requires "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 282)).add_operation (var_associatedTypeList_9701.getter_length (SOURCE_FILE ("instruction-switch.galgas", 282)).getter_string (SOURCE_FILE ("instruction-switch.galgas", 282)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 282)).add_operation (GALGAS_string ("  associated value"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 282)).add_operation (temp_13, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 282)), fixItArray15  COMMA_SOURCE_FILE ("instruction-switch.galgas", 281)) ;
                }
              }
              if (kBoolFalse == test_12) {
                GALGAS_bigint var_associatedValueIndex_10435 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 285)) ;
                cEnumerator_unifiedTypeMapEntryList enumerator_10460 (var_associatedTypeList_9701, kENUMERATION_UP) ;
                cEnumerator_switchExtractedValuesListAST enumerator_10545 (enumerator_9071.current_mAssociatedValuesExtraction (HERE), kENUMERATION_UP) ;
                while (enumerator_10460.hasCurrentObject () && enumerator_10545.hasCurrentObject ()) {
                  enumGalgasBool test_16 = kBoolTrue ;
                  if (kBoolTrue == test_16) {
                    test_16 = GALGAS_bool (kIsNotEqual, enumerator_10545.current_mExtractedValueTypeName (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                    if (kBoolTrue == test_16) {
                      enumGalgasBool test_17 = kBoolTrue ;
                      if (kBoolTrue == test_17) {
                        test_17 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (enumerator_10460.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 288)).readProperty_mTypeName ().readProperty_string ().objectCompare (enumerator_10545.current_mExtractedValueTypeName (HERE).readProperty_string ())).boolEnum () ;
                        if (kBoolTrue == test_17) {
                          TC_Array <C_FixItDescription> fixItArray18 ;
                          inCompiler->emitSemanticError (enumerator_10545.current_mExtractedValueTypeName (HERE).readProperty_location (), GALGAS_string ("the required type is '@").add_operation (extensionGetter_definition (enumerator_10460.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 289)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 289)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 289)), fixItArray18  COMMA_SOURCE_FILE ("instruction-switch.galgas", 289)) ;
                        }
                      }
                    }
                  }
                  enumGalgasBool test_19 = kBoolTrue ;
                  if (kBoolTrue == test_19) {
                    test_19 = var_firstConstant_9246.operator_and (GALGAS_bool (kIsNotEqual, enumerator_10545.current_mExtractedValueName (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("instruction-switch.galgas", 292)).boolEnum () ;
                    if (kBoolTrue == test_19) {
                      GALGAS_string var_cppName_10996 = GALGAS_string ("extractedValue_").add_operation (enumerator_10545.current_mExtractedValueName (HERE).readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 293)).getter_string (SOURCE_FILE ("instruction-switch.galgas", 293)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 293)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 293)).add_operation (enumerator_10545.current_mExtractedValueName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 293)) ;
                      var_extractedAssociatedValuesForGeneration_9213.addAssign_operation (enumerator_10460.current_mEntry (HERE), var_cppName_10996, var_associatedValueIndex_10435.getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 294))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 294)) ;
                      enumGalgasBool test_20 = kBoolTrue ;
                      if (kBoolTrue == test_20) {
                        test_20 = enumerator_10545.current_mMarkedAsUnused (HERE).boolEnum () ;
                        if (kBoolTrue == test_20) {
                          {
                          extensionSetter_insertUsedLocalConstant (ioArgument_ioVariableMap, enumerator_10545.current_mExtractedValueName (HERE), enumerator_10460.current_mEntry (HERE), var_cppName_10996, var_cppName_10996, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 296)) ;
                          }
                        }
                      }
                      if (kBoolFalse == test_20) {
                        {
                        extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, enumerator_10545.current_mExtractedValueName (HERE), enumerator_10460.current_mEntry (HERE), var_cppName_10996, var_cppName_10996, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 298)) ;
                        }
                      }
                    }
                  }
                  var_associatedValueIndex_10435.plusAssign_operation(GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 301)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 301)) ;
                  enumerator_10460.gotoNextObject () ;
                  enumerator_10545.gotoNextObject () ;
                }
              }
            }
          }
        }
      }
      if (kBoolFalse == test_5) {
        TC_Array <C_FixItDescription> fixItArray21 ;
        inCompiler->emitSemanticError (enumerator_9269.current_mValue (HERE).readProperty_location (), GALGAS_string ("'").add_operation (enumerator_9269.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 306)).add_operation (GALGAS_string ("' is not a constant of '@"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 306)).add_operation (extensionGetter_definition (var_switchExpression_8300.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 306)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 306)).add_operation (GALGAS_string ("' enumeration type"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 306)), fixItArray21  COMMA_SOURCE_FILE ("instruction-switch.galgas", 305)) ;
      }
      var_firstConstant_9246 = GALGAS_bool (false) ;
      enumerator_9269.gotoNextObject () ;
    }
    GALGAS_semanticInstructionListForGeneration var_instructionList_12167 ;
    {
    routine_analyzeSemanticInstructionListWithoutBranch (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 314)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 315)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 316)), enumerator_9071.current_mInstructions (HERE), ioArgument_ioVariableMap, var_instructionList_12167, inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 310)) ;
    }
    {
    extensionSetter_closeBranch (ioArgument_ioVariableMap, enumerator_9071.current_mEndOfBranch (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 321)) ;
    }
    var_switchBranchesForGeneration_8984.addAssign_operation (enumerator_9071.current_mSwitchConstantList (HERE), var_extractedAssociatedValuesForGeneration_9213, enumerator_9071.current_mEndOfBranch (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 322)), var_instructionList_12167  COMMA_SOURCE_FILE ("instruction-switch.galgas", 322)) ;
    enumerator_9071.gotoNextObject () ;
  }
  {
  const GALGAS_switchInstructionAST temp_22 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_22.readProperty_mEndOf_5F_switch_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 324)) ;
  }
  GALGAS_stringset var_forgottenConstants_12502 = var_enumConstantMap_8735.getter_keySet (SOURCE_FILE ("instruction-switch.galgas", 326)).substract_operation (var_constantsNamedInSwitchInstruction_8847, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 326)) ;
  enumGalgasBool test_23 = kBoolTrue ;
  if (kBoolTrue == test_23) {
    test_23 = GALGAS_bool (kIsStrictSup, var_forgottenConstants_12502.getter_count (SOURCE_FILE ("instruction-switch.galgas", 327)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 327)).getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 327)))).boolEnum () ;
    if (kBoolTrue == test_23) {
      GALGAS_string var_s_12624 = GALGAS_string::makeEmptyString () ;
      cEnumerator_stringset enumerator_12642 (var_forgottenConstants_12502, kENUMERATION_UP) ;
      while (enumerator_12642.hasCurrentObject ()) {
        var_s_12624.plusAssign_operation(GALGAS_string ("\n"
          "  - ").add_operation (enumerator_12642.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 330)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 330)) ;
        enumerator_12642.gotoNextObject () ;
      }
      const GALGAS_switchInstructionAST temp_24 = this ;
      TC_Array <C_FixItDescription> fixItArray25 ;
      inCompiler->emitSemanticError (temp_24.readProperty_mEndOf_5F_switch_5F_instruction (), GALGAS_string ("the switch instruction should name all enumeration constants; missing constants are:").add_operation (var_s_12624, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 333)), fixItArray25  COMMA_SOURCE_FILE ("instruction-switch.galgas", 332)) ;
    }
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_switchInstructionForGeneration::constructor_new (var_switchExpression_8300.readProperty_mResultType (), var_switchExpression_8300, var_switchBranchesForGeneration_8984  COMMA_SOURCE_FILE ("instruction-switch.galgas", 336))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 336)) ;
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
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string var_switchVar_14804 ;
  const GALGAS_switchInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mSwitchExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_switchVar_14804, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 379)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("switch (").add_operation (var_switchVar_14804, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 386)).add_operation (GALGAS_string (".enumValue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 386)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 386)) ;
  const GALGAS_switchInstructionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_1.readProperty_mSwitchExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 387)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 387)).add_operation (GALGAS_string ("::kNotBuilt:\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 387)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 387)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 388)) ;
  const GALGAS_switchInstructionForGeneration temp_2 = this ;
  cEnumerator_switchBranchesForGeneration enumerator_15136 (temp_2.readProperty_mBranches (), kENUMERATION_UP) ;
  while (enumerator_15136.hasCurrentObject ()) {
    cEnumerator_lstringlist enumerator_15174 (enumerator_15136.current_mSwitchConstantList (HERE), kENUMERATION_UP) ;
    while (enumerator_15174.hasCurrentObject ()) {
      const GALGAS_switchInstructionForGeneration temp_3 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_3.readProperty_mSwitchExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 391)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 391)).add_operation (GALGAS_string ("::kEnum_"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 391)).add_operation (enumerator_15174.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-switch.galgas", 391)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 391)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 391)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 391)) ;
      enumerator_15174.gotoNextObject () ;
    }
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 393)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 394)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsStrictSup, enumerator_15136.current_mExtractedAssociatedValuesForGeneration (HERE).getter_length (SOURCE_FILE ("instruction-switch.galgas", 395)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 395)).getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 395)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_switchInstructionForGeneration temp_5 = this ;
        GALGAS_string var_type_15528 = GALGAS_string ("const cEnumAssociatedValues_").add_operation (extensionGetter_identifierRepresentation (temp_5.readProperty_mEnumType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 396)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 396)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 396)).add_operation (enumerator_15136.current_mSwitchConstantList (HERE).getter_mValueAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 397)).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 397)).add_operation (GALGAS_string (" *"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 397)) ;
        GALGAS_string var_varPtr_15690 = GALGAS_string ("extractPtr_").add_operation (enumerator_15136.current_mEndOfBranchLocationIndex (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 398)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 398)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_type_15528, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 399)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 399)).add_operation (var_varPtr_15690, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 399)).add_operation (GALGAS_string (" = ("), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 399)).add_operation (var_type_15528, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 399)).add_operation (GALGAS_string (") ("), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 399)).add_operation (var_switchVar_14804, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 399)).add_operation (GALGAS_string (".unsafePointer ()) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 399)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 399)) ;
        cEnumerator_extractedAssociatedValuesForGeneration enumerator_15882 (enumerator_15136.current_mExtractedAssociatedValuesForGeneration (HERE), kENUMERATION_UP) ;
        while (enumerator_15882.hasCurrentObject ()) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  const GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_15882.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 401)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 401)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 401)).add_operation (enumerator_15882.current_mCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 401)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 401)).add_operation (var_varPtr_15690, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 402)).add_operation (GALGAS_string ("->mAssociatedValue"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 402)).add_operation (enumerator_15882.current_mIndex (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 402)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 402)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 402)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 401)) ;
          enumerator_15882.gotoNextObject () ;
        }
      }
    }
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_15136.current_mInstructions (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 405)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 413)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 414)) ;
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 415)) ;
    }
    enumerator_15136.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 417)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@typeMethodCallInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_typeMethodCallInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_typeMethodCallInstructionAST temp_0 = this ;
  cEnumerator_actualParameterListAST enumerator_2748 (temp_0.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_2748.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((const cPtr_actualParameterAST *) enumerator_2748.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 67)) ;
    enumerator_2748.gotoNextObject () ;
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
                                                                           GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                           GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_typeMethodCallInstructionAST temp_0 = this ;
  GALGAS_unifiedTypeMapEntry var_type_3485 = extensionGetter_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 82)) ;
  GALGAS_formalParameterSignature var_routineSignature_3677 ;
  GALGAS_bool var_hasCompilerArgument_3702 ;
  const GALGAS_typeMethodCallInstructionAST temp_1 = this ;
  extensionGetter_definition (var_type_3485, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 84)).readProperty_mClassMethodMap ().method_searchKey (temp_1.readProperty_mMethodName (), var_routineSignature_3677, var_hasCompilerArgument_3702, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 84)) ;
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_4143 ;
  {
  const GALGAS_typeMethodCallInstructionAST temp_2 = this ;
  const GALGAS_typeMethodCallInstructionAST temp_3 = this ;
  const GALGAS_typeMethodCallInstructionAST temp_4 = this ;
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_2.readProperty_mMethodName (), GALGAS_string ("'").add_operation (temp_3.readProperty_mMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 91)).add_operation (GALGAS_string ("' type proc header"), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 91)), var_routineSignature_3677, temp_4.readProperty_mActualParameterList (), ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_4143, inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 86)) ;
  }
  const GALGAS_typeMethodCallInstructionAST temp_5 = this ;
  const GALGAS_typeMethodCallInstructionAST temp_6 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_typeMethodCallInstructionForGeneration::constructor_new (temp_5.readProperty_mTypeName (), temp_6.readProperty_mMethodName (), var_actualParameterListForGeneration_4143, var_hasCompilerArgument_3702  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 99))  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 99)) ;
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
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 125)) ;
  GALGAS_stringlist var_parameterCppNameList_5357 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-type-method-call.galgas", 127)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_5409 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-type-method-call.galgas", 128)) ;
  GALGAS_stringlist var_inputVariableList_5450 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-type-method-call.galgas", 129)) ;
  const GALGAS_typeMethodCallInstructionForGeneration temp_0 = this ;
  cEnumerator_actualParameterListForGeneration enumerator_5491 (temp_0.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_5491.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_5784 ;
    callExtensionMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_5491.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_5409, var_inputVariableList_5450, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_5784, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 131)) ;
    var_parameterCppNameList_5357.addAssign_operation (var_parameterCppName_5784  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 139)) ;
    enumerator_5491.gotoNextObject () ;
  }
  const GALGAS_typeMethodCallInstructionForGeneration temp_1 = this ;
  const GALGAS_typeMethodCallInstructionForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (temp_1.readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-type-method-call.galgas", 142)), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 142)).add_operation (GALGAS_string ("::class_method_"), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 142)).add_operation (temp_2.readProperty_mMethodName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-type-method-call.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 143)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 143)), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 142)) ;
  cEnumerator_stringlist enumerator_6057 (var_parameterCppNameList_5357, kENUMERATION_UP) ;
  while (enumerator_6057.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_6057.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 145)) ;
    if (enumerator_6057.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 146)) ;
    }
    enumerator_6057.gotoNextObject () ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_typeMethodCallInstructionForGeneration temp_4 = this ;
    test_3 = temp_4.readProperty_mHasCompilerArgument ().boolEnum () ;
    if (kBoolTrue == test_3) {
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 149)) COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 149)) ;
      }
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = GALGAS_bool (kIsStrictSup, var_parameterCppNameList_5357.getter_length (SOURCE_FILE ("instruction-type-method-call.galgas", 150)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 150)).getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 150)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 151)) ;
        }
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 153)), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 153)) ;
    }
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_typeMethodCallInstructionForGeneration temp_7 = this ;
    test_6 = temp_7.readProperty_mHasCompilerArgument ().operator_or (GALGAS_bool (kIsStrictSup, var_parameterCppNameList_5357.getter_length (SOURCE_FILE ("instruction-type-method-call.galgas", 155)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 155)).getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 155)))) COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 155)).boolEnum () ;
    if (kBoolTrue == test_6) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 156)) ;
    }
  }
  const GALGAS_typeMethodCallInstructionForGeneration temp_8 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(extensionGetter_sourceFile (temp_8.readProperty_mMethodName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 158)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 158)), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 158)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 159)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@localVariableDeclarationAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_localVariableDeclarationAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  {
  const GALGAS_localVariableDeclarationAST temp_0 = this ;
  GALGAS_unifiedTypeMapEntry joker_2964 ; // Joker input parameter
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), joker_2964, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 63)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@localVariableDeclarationAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_localVariableDeclarationAST::method_analyzeSemanticInstruction (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                          GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                          GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                          GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_localVariableDeclarationAST temp_0 = this ;
  GALGAS_unifiedTypeMapEntry var_targetType_3631 = extensionGetter_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 78)) ;
  const GALGAS_localVariableDeclarationAST temp_1 = this ;
  const GALGAS_localVariableDeclarationAST temp_2 = this ;
  GALGAS_string var_targetVariableCppName_3733 = GALGAS_string ("var_").add_operation (temp_1.readProperty_mVariableName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-var-declaration.galgas", 79)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 79)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 79)).add_operation (temp_2.readProperty_mVariableName ().readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 79)).getter_string (SOURCE_FILE ("instruction-var-declaration.galgas", 79)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 79)) ;
  {
  const GALGAS_localVariableDeclarationAST temp_3 = this ;
  extensionSetter_insertDeclaredLocalVariable (ioArgument_ioVariableMap, temp_3.readProperty_mVariableName (), var_targetType_3631, var_targetVariableCppName_3733, var_targetVariableCppName_3733, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 80)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableDeclarationForGeneration::constructor_new (var_targetType_3631, var_targetVariableCppName_3733  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 87))  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 87)) ;
}
