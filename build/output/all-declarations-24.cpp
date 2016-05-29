#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-24.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@castInExpressionAST analyzeSemanticExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_castInExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                           const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                           GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                           GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_castInExpressionAST * object = (const cPtr_castInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_castInExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mReceiverExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2777)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2776)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2783)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_expression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2787)).getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2787)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2787)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMap_2D_proxy var_t = var_type ;
    GALGAS_bool var_found = GALGAS_bool (kIsEqual, var_t.objectCompare (var_expression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2790)))) ;
    if (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2791)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2791)).isValid ()) {
      uint32_t variant_123957 = constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2791)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2791)).uintValue () ;
      bool loop_123957 = true ;
      while (loop_123957) {
        loop_123957 = var_found.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2792)).operator_and (var_t.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2792)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2792)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2792)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2792)).isValid () ;
        if (loop_123957) {
          loop_123957 = var_found.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2792)).operator_and (var_t.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2792)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2792)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2792)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2792)).boolValue () ;
        }
        if (loop_123957 && (0 == variant_123957)) {
          loop_123957 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2791)) ;
        }
        if (loop_123957) {
          variant_123957 -- ;
          var_t = var_t.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2793)) ;
          var_found = GALGAS_bool (kIsEqual, var_t.objectCompare (var_expression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2794)))) ;
        }
      }
    }
    const enumGalgasBool test_1 = var_found.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2796)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_location location_2 (object->mAttribute_mTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_2, GALGAS_string ("the '@").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2798)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2798)).add_operation (GALGAS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2798)).add_operation (var_expression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2799)).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2799)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2798)).add_operation (GALGAS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2799))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2797)) ;
    }
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_expression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2801)).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2801)).objectCompare (GALGAS_string ("object"))).boolEnum () ;
    if (kBoolTrue == test_3) {
      inCompiler->emitSemanticError (var_expression.getter_mLocation (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2806)), GALGAS_string ("cast expression should be a class instance or an @object instance: it is an @").add_operation (var_expression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2808)).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2808)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2807)).add_operation (GALGAS_string (" instance"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2808))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2806)) ;
    }
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_expression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2811)).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2811)).objectCompare (GALGAS_string ("object"))).boolEnum () ;
  if (kBoolTrue == test_4) {
    outArgument_outExpression = GALGAS_extractObjectInExpressionForGeneration::constructor_new (var_type, object->mAttribute_mEndOfReceiverExpression, var_expression, object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2816))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2812)) ;
  }else if (kBoolFalse == test_4) {
    outArgument_outExpression = GALGAS_castInExpressionForGeneration::constructor_new (var_type, object->mAttribute_mTypeName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2820)), var_expression, object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2822))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2818)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_castInExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_castInExpressionAST.mSlotID,
                                                  extensionMethod_castInExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_castInExpressionAST_analyzeSemanticExpression (defineExtensionMethod_castInExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    Overriding extension method '@filewrapperObjectInstanciationInExpressionAST enterExpressionInSemanticContext'    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_filewrapperObjectInstanciationInExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                                            GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                            C_Compiler * /* inCompiler */
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_filewrapperObjectInstanciationInExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_filewrapperObjectInstanciationInExpressionAST.mSlotID,
                                                         extensionMethod_filewrapperObjectInstanciationInExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_filewrapperObjectInstanciationInExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_filewrapperObjectInstanciationInExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//       Overriding extension method '@filewrapperObjectInstanciationInExpressionAST analyzeSemanticExpression'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_filewrapperObjectInstanciationInExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                                     const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                     GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                                     GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperObjectInstanciationInExpressionAST * object = (const cPtr_filewrapperObjectInstanciationInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperObjectInstanciationInExpressionAST) ;
  GALGAS_lstring var_filewrapperPath ;
  GALGAS_bool var_isInternal ;
  GALGAS_lstringlist joker_125952_4 ; // Joker input parameter
  GALGAS_wrapperFileMap joker_125952_3 ; // Joker input parameter
  GALGAS_wrapperDirectoryMap joker_125952_2 ; // Joker input parameter
  GALGAS_filewrapperTemplateMap joker_125952_1 ; // Joker input parameter
  constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mFilewrapperMap.method_searchKey (object->mAttribute_mFilewrapperName, var_filewrapperPath, joker_125952_4, joker_125952_3, joker_125952_2, joker_125952_1, var_isInternal, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2841)) ;
  const enumGalgasBool test_0 = var_isInternal.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location var_filewrapperDeclarationLocation = constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mFilewrapperMap.getter_locationForKey (object->mAttribute_mFilewrapperName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2849)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, object->mAttribute_mFilewrapperName.mAttribute_location.getter_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2850)).objectCompare (var_filewrapperDeclarationLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2850)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_location location_2 (object->mAttribute_mFilewrapperName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_2, GALGAS_string ("this filewrapper is internal to '").add_operation (var_filewrapperDeclarationLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2851)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2851)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2851))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2851)) ;
    }
  }
  outArgument_outExpression = GALGAS_filewrapperInExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("filewrapper"), object->mAttribute_mFilewrapperName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2856))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2856)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2856)), object->mAttribute_mFilewrapperName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2857)), object->mAttribute_mFilewrapperName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2858)), var_filewrapperPath.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2859))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2855)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_filewrapperObjectInstanciationInExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_filewrapperObjectInstanciationInExpressionAST.mSlotID,
                                                  extensionMethod_filewrapperObjectInstanciationInExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_filewrapperObjectInstanciationInExpressionAST_analyzeSemanticExpression (defineExtensionMethod_filewrapperObjectInstanciationInExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding extension method '@filewrapperTemplateInExpressionAST enterExpressionInSemanticContext'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_filewrapperTemplateInExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                                 GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperTemplateInExpressionAST * object = (const cPtr_filewrapperTemplateInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperTemplateInExpressionAST) ;
  cEnumerator_actualOutputExpressionList enumerator_126951 (object->mAttribute_mExpressions, kEnumeration_up) ;
  while (enumerator_126951.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) enumerator_126951.current_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2868)) ;
    enumerator_126951.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_filewrapperTemplateInExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_filewrapperTemplateInExpressionAST.mSlotID,
                                                         extensionMethod_filewrapperTemplateInExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_filewrapperTemplateInExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_filewrapperTemplateInExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@filewrapperTemplateInExpressionAST analyzeSemanticExpression'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_filewrapperTemplateInExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                          const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                          GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                          GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperTemplateInExpressionAST * object = (const cPtr_filewrapperTemplateInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperTemplateInExpressionAST) ;
  GALGAS_filewrapperTemplateMap var_filewrapperTemplateMap ;
  GALGAS_bool var_isInternal ;
  GALGAS_lstring joker_127493_4 ; // Joker input parameter
  GALGAS_lstringlist joker_127493_3 ; // Joker input parameter
  GALGAS_wrapperFileMap joker_127493_2 ; // Joker input parameter
  GALGAS_wrapperDirectoryMap joker_127493_1 ; // Joker input parameter
  constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mFilewrapperMap.method_searchKey (object->mAttribute_mFilewrapperName, joker_127493_4, joker_127493_3, joker_127493_2, joker_127493_1, var_filewrapperTemplateMap, var_isInternal, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2880)) ;
  const enumGalgasBool test_0 = var_isInternal.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location var_filewrapperDeclarationLocation = constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mFilewrapperMap.getter_locationForKey (object->mAttribute_mFilewrapperName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2888)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, object->mAttribute_mFilewrapperName.mAttribute_location.getter_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2889)).objectCompare (var_filewrapperDeclarationLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2889)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_location location_2 (object->mAttribute_mFilewrapperName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_2, GALGAS_string ("this filewrapper is internal to '").add_operation (var_filewrapperDeclarationLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2890)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2890)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2890))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2890)) ;
    }
  }
  GALGAS_functionSignature var_templateSignature ;
  GALGAS_lstring joker_128088 ; // Joker input parameter
  var_filewrapperTemplateMap.method_searchKey (object->mAttribute_mFilewrapperTemplateName, var_templateSignature, joker_128088, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2894)) ;
  GALGAS_semanticExpressionListForGeneration var_effectiveParameterList ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, object->mAttribute_mExpressions.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2897)).objectCompare (var_templateSignature.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2897)))).boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_location location_4 (object->mAttribute_mFilewrapperTemplateName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_4, GALGAS_string ("calling the '").add_operation (object->mAttribute_mFilewrapperTemplateName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2899)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2899)).add_operation (GALGAS_string ("' template of '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2899)).add_operation (object->mAttribute_mFilewrapperName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2899)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2899)).add_operation (GALGAS_string ("' filewrapper requires "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2899)).add_operation (var_templateSignature.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2900)).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2900)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2899)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2900)).add_operation (object->mAttribute_mExpressions.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2901)).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2901)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2900)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2901))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2898)) ;
    var_effectiveParameterList.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_3) {
    var_effectiveParameterList = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2904)) ;
    cEnumerator_actualOutputExpressionList enumerator_128667 (object->mAttribute_mExpressions, kEnumeration_up) ;
    cEnumerator_functionSignature enumerator_128692 (var_templateSignature, kEnumeration_up) ;
    while (enumerator_128667.hasCurrentObject () && enumerator_128692.hasCurrentObject ()) {
      const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, enumerator_128692.current_mFormalSelector (HERE).mAttribute_string.objectCompare (enumerator_128667.current_mActualSelector (HERE).mAttribute_string)).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_string temp_6 ;
        const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, enumerator_128692.current_mFormalSelector (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_7) {
          temp_6 = GALGAS_string (":") ;
        }else if (kBoolFalse == test_7) {
          temp_6 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_location location_8 (enumerator_128667.current_mActualSelector (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_8, GALGAS_string ("the selector should be '!").add_operation (enumerator_128692.current_mFormalSelector (HERE).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2907)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2907)).add_operation (temp_6, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2907)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2907))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2907)) ;
      }
      GALGAS_semanticExpressionForGeneration var_exp ;
      callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_128667.current_mExpression (HERE).ptr (), enumerator_128692.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_exp, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2909)) ;
      {
      routine_checkAssignmentTypes (enumerator_128692.current_mFormalArgumentType (HERE), var_exp.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2910)), enumerator_128667.current_mEndOfExpressionLocation (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2910)) ;
      }
      var_effectiveParameterList.addAssign_operation (var_exp  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2911)) ;
      enumerator_128667.gotoNextObject () ;
      enumerator_128692.gotoNextObject () ;
    }
  }
  outArgument_outExpression = GALGAS_filewrapperTemplateInExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType, object->mAttribute_mFilewrapperName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2917)), object->mAttribute_mFilewrapperName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2918)), object->mAttribute_mFilewrapperTemplateName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2919)), var_effectiveParameterList  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2915)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_filewrapperTemplateInExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_filewrapperTemplateInExpressionAST.mSlotID,
                                                  extensionMethod_filewrapperTemplateInExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_filewrapperTemplateInExpressionAST_analyzeSemanticExpression (defineExtensionMethod_filewrapperTemplateInExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@filewrapperInExpressionAST enterExpressionInSemanticContext'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_filewrapperInExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                         GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_filewrapperInExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_filewrapperInExpressionAST.mSlotID,
                                                         extensionMethod_filewrapperInExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_filewrapperInExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_filewrapperInExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@filewrapperInExpressionAST analyzeSemanticExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_filewrapperInExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                  const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                  GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                  GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperInExpressionAST * object = (const cPtr_filewrapperInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperInExpressionAST) ;
  GALGAS_stringlist var_directoryList ;
  GALGAS_string var_fileName ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mFilewrapperPath.mAttribute_string.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2940)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mFilewrapperPath.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("path is empty")  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2941)) ;
    var_directoryList.drop () ; // Release error dropped variable
    var_fileName.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, object->mAttribute_mFilewrapperPath.mAttribute_string.getter_firstCharacterOrNul (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2942)).objectCompare (GALGAS_char (TO_UNICODE (47)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (object->mAttribute_mFilewrapperPath.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_3, GALGAS_string ("the path should not begin with '/'")  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2943)) ;
      var_directoryList.drop () ; // Release error dropped variable
      var_fileName.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      var_directoryList = object->mAttribute_mFilewrapperPath.mAttribute_string.getter_componentsSeparatedByString (GALGAS_string ("/") COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2945)) ;
      {
      var_directoryList.setter_popLast (var_fileName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2946)) ;
      }
    }
  }
  GALGAS_wrapperFileMap var_filewrapperFileMap ;
  GALGAS_wrapperDirectoryMap var_filewrapperDirectoryMap ;
  GALGAS_bool var_isInternal ;
  GALGAS_lstring joker_130654 ; // Joker input parameter
  GALGAS_lstringlist joker_130661 ; // Joker input parameter
  GALGAS_filewrapperTemplateMap joker_130766 ; // Joker input parameter
  constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mFilewrapperMap.method_searchKey (object->mAttribute_mFilewrapperName, joker_130654, joker_130661, var_filewrapperFileMap, var_filewrapperDirectoryMap, joker_130766, var_isInternal, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2949)) ;
  const enumGalgasBool test_4 = var_isInternal.boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_location var_filewrapperDeclarationLocation = constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mFilewrapperMap.getter_locationForKey (object->mAttribute_mFilewrapperName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2960)) ;
    const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, object->mAttribute_mFilewrapperName.mAttribute_location.getter_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2961)).objectCompare (var_filewrapperDeclarationLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2961)))).boolEnum () ;
    if (kBoolTrue == test_5) {
      GALGAS_location location_6 (object->mAttribute_mFilewrapperName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_6, GALGAS_string ("this filewrapper is internal to '").add_operation (var_filewrapperDeclarationLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2962)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2962)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2962))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2962)) ;
    }
  }
  GALGAS_string var_builtPath = GALGAS_string::makeEmptyString () ;
  if (var_filewrapperDirectoryMap.getter_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2967)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2967)).isValid ()) {
    uint32_t variant_131243 = var_filewrapperDirectoryMap.getter_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2967)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2967)).uintValue () ;
    bool loop_131243 = true ;
    while (loop_131243) {
      loop_131243 = GALGAS_bool (kIsStrictSup, var_directoryList.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2968)).objectCompare (GALGAS_uint ((uint32_t) 0U))).isValid () ;
      if (loop_131243) {
        loop_131243 = GALGAS_bool (kIsStrictSup, var_directoryList.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2968)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolValue () ;
      }
      if (loop_131243 && (0 == variant_131243)) {
        loop_131243 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2967)) ;
      }
      if (loop_131243) {
        variant_131243 -- ;
        GALGAS_string var_directoryName ;
        {
        var_directoryList.setter_popFirst (var_directoryName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2970)) ;
        }
        var_builtPath.plusAssign_operation(var_directoryName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2971)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2971)) ;
        const enumGalgasBool test_7 = var_filewrapperDirectoryMap.getter_hasKey (var_directoryName COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2972)).boolEnum () ;
        if (kBoolTrue == test_7) {
          GALGAS_uint joker_131655 ; // Joker input parameter
          var_filewrapperDirectoryMap.method_searchKey (GALGAS_lstring::constructor_new (var_directoryName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2974))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2974)), var_filewrapperFileMap, var_filewrapperDirectoryMap, joker_131655, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2973)) ;
        }else if (kBoolFalse == test_7) {
          GALGAS_location location_8 (object->mAttribute_mFilewrapperPath.getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_8, GALGAS_string ("the '").add_operation (var_builtPath, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2980)).add_operation (GALGAS_string ("' path does not exists for the '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2980)).add_operation (object->mAttribute_mFilewrapperName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2980)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2980)).add_operation (GALGAS_string ("' filewrapper"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2980))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2980)) ;
          var_filewrapperFileMap.drop () ; // Release error dropped variable
          var_directoryList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2981)) ;
        }
      }
    }
  }
  GALGAS_uint var_fileIndex ;
  GALGAS_bool var_isTextFile ;
  const enumGalgasBool test_9 = var_filewrapperFileMap.getter_hasKey (var_fileName COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2986)).boolEnum () ;
  if (kBoolTrue == test_9) {
    GALGAS_string joker_132061 ; // Joker input parameter
    GALGAS_uint joker_132076 ; // Joker input parameter
    var_filewrapperFileMap.method_searchKey (GALGAS_lstring::constructor_new (var_fileName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2987))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2987)), joker_132061, var_isTextFile, joker_132076, var_fileIndex, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2987)) ;
  }else if (kBoolFalse == test_9) {
    GALGAS_location location_10 (object->mAttribute_mFilewrapperPath.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_10, GALGAS_string ("the '").add_operation (var_fileName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2990)).add_operation (GALGAS_string ("' file does not exist in the '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2990)).add_operation (var_builtPath, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2990)).add_operation (GALGAS_string ("' directory of '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2990)).add_operation (object->mAttribute_mFilewrapperName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2990)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2990)).add_operation (GALGAS_string ("' filewrapper"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2990))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2989)) ;
    var_fileIndex.drop () ; // Release error dropped variable
    var_isTextFile.drop () ; // Release error dropped variable
  }
  GALGAS_unifiedTypeMap_2D_proxy temp_11 ;
  const enumGalgasBool test_12 = var_isTextFile.boolEnum () ;
  if (kBoolTrue == test_12) {
    temp_11 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType ;
  }else if (kBoolFalse == test_12) {
    temp_11 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("data"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2997))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2997)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2997)) ;
  }
  outArgument_outExpression = GALGAS_filewrapperStaticPathInExpressionForGeneration::constructor_new (temp_11, object->mAttribute_mFilewrapperName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2999)), object->mAttribute_mFilewrapperName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3000)), var_fileIndex, var_isTextFile  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2994)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_filewrapperInExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_filewrapperInExpressionAST.mSlotID,
                                                  extensionMethod_filewrapperInExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_filewrapperInExpressionAST_analyzeSemanticExpression (defineExtensionMethod_filewrapperInExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@lexiqueIntrospectionExpressionAST enterExpressionInSemanticContext'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexiqueIntrospectionExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                                GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexiqueIntrospectionExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_lexiqueIntrospectionExpressionAST.mSlotID,
                                                         extensionMethod_lexiqueIntrospectionExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexiqueIntrospectionExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_lexiqueIntrospectionExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@lexiqueIntrospectionExpressionAST analyzeSemanticExpression'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexiqueIntrospectionExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                         const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                         const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                         GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                         GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexiqueIntrospectionExpressionAST * object = (const cPtr_lexiqueIntrospectionExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexiqueIntrospectionExpressionAST) ;
  GALGAS_terminalMap joker_133455_3 ; // Joker input parameter
  GALGAS_indexingListAST joker_133455_2 ; // Joker input parameter
  GALGAS_lstring joker_133455_1 ; // Joker input parameter
  constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mLexiqueComponentMapForSemanticAnalysis.method_searchKey (object->mAttribute_mLexiqueComponentName, joker_133455_3, joker_133455_2, joker_133455_1, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3020)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mLexiqueGetterName.mAttribute_string.objectCompare (GALGAS_string ("symbols"))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mLexiqueGetterName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("unknown getter")  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3026)) ;
  }
  outArgument_outExpression = GALGAS_lexiqueIntrospectionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, GALGAS_string ("stringlist").getter_nowhere (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3030)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3030)), object->mAttribute_mLexiqueComponentName.mAttribute_location, object->mAttribute_mLexiqueComponentName.mAttribute_string, object->mAttribute_mLexiqueGetterName.mAttribute_string  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3029)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexiqueIntrospectionExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_lexiqueIntrospectionExpressionAST.mSlotID,
                                                  extensionMethod_lexiqueIntrospectionExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexiqueIntrospectionExpressionAST_analyzeSemanticExpression (defineExtensionMethod_lexiqueIntrospectionExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@expressionCollectionValue enterInSemanticContext'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_expressionCollectionValue_enterInSemanticContext (const cPtr_abstractCollectionValueElement * inObject,
                                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_expressionCollectionValue * object = (const cPtr_expressionCollectionValue *) inObject ;
  macroValidSharedObject (object, cPtr_expressionCollectionValue) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3045)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_expressionCollectionValue_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_expressionCollectionValue.mSlotID,
                                               extensionMethod_expressionCollectionValue_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_expressionCollectionValue_enterInSemanticContext (defineExtensionMethod_expressionCollectionValue_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@expressionListCollectionValue enterInSemanticContext'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_expressionListCollectionValue_enterInSemanticContext (const cPtr_abstractCollectionValueElement * inObject,
                                                                                  GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_expressionListCollectionValue * object = (const cPtr_expressionListCollectionValue *) inObject ;
  macroValidSharedObject (object, cPtr_expressionListCollectionValue) ;
  extensionMethod_enterInSemanticContext (object->mAttribute_mExpressionList, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3051)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_expressionListCollectionValue_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_expressionListCollectionValue.mSlotID,
                                               extensionMethod_expressionListCollectionValue_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_expressionListCollectionValue_enterInSemanticContext (defineExtensionMethod_expressionListCollectionValue_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@expressionCollectionValue analyze'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_expressionCollectionValue_analyze (const cPtr_abstractCollectionValueElement * inObject,
                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                               const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inElementType,
                                                               GALGAS_variableMap & ioArgument_ioVariableMap,
                                                               GALGAS_collectionValueElementListForGeneration & ioArgument_ioCollectionValueElementListForGeneration,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_expressionCollectionValue * object = (const cPtr_expressionCollectionValue *) inObject ;
  macroValidSharedObject (object, cPtr_expressionCollectionValue) ;
  GALGAS_semanticExpressionForGeneration var_expression ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inElementType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3069)) ;
  {
  routine_checkAssignmentTypes (constinArgument_inElementType, var_expression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3076)), object->mAttribute_mExpressionLocation, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3076)) ;
  }
  ioArgument_ioCollectionValueElementListForGeneration.addAssign_operation (GALGAS_expressionCollectionValueForGeneration::constructor_new (object->mAttribute_mExpressionLocation, var_expression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3078))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3078)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_expressionCollectionValue_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_expressionCollectionValue.mSlotID,
                                extensionMethod_expressionCollectionValue_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_expressionCollectionValue_analyze (defineExtensionMethod_expressionCollectionValue_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@expressionListCollectionValue analyze'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_expressionListCollectionValue_analyze (const cPtr_abstractCollectionValueElement * inObject,
                                                                   const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                   const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inElementType,
                                                                   GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                   GALGAS_collectionValueElementListForGeneration & ioArgument_ioCollectionValueElementListForGeneration,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_expressionListCollectionValue * object = (const cPtr_expressionListCollectionValue *) inObject ;
  macroValidSharedObject (object, cPtr_expressionListCollectionValue) ;
  GALGAS_functionSignature var_formalParameterTypeList = constinArgument_inElementType.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3088)) ;
  GALGAS_semanticExpressionListForGeneration var_semanticExpressionListForGeneration ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_formalParameterTypeList.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3090)).objectCompare (object->mAttribute_mExpressionList.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3090)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfExpressionLocation, GALGAS_string ("element of of '@").add_operation (constinArgument_inElementType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3091)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3091)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3091)).add_operation (var_formalParameterTypeList.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3092)).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3091)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3091)).add_operation (GALGAS_string (" parameter(s), while this list has "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3092)).add_operation (object->mAttribute_mExpressionList.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3093)).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3092)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3092)).add_operation (GALGAS_string (" element(s)"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3093))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3091)) ;
    var_semanticExpressionListForGeneration.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    var_semanticExpressionListForGeneration = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3095)) ;
    cEnumerator_actualOutputExpressionList enumerator_136980 (object->mAttribute_mExpressionList, kEnumeration_up) ;
    cEnumerator_functionSignature enumerator_137011 (var_formalParameterTypeList, kEnumeration_up) ;
    while (enumerator_136980.hasCurrentObject () && enumerator_137011.hasCurrentObject ()) {
      GALGAS_semanticExpressionForGeneration var_exp ;
      callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_136980.current (HERE).mAttribute_mExpression.ptr (), enumerator_137011.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_exp, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3097)) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, enumerator_137011.current_mFormalSelector (HERE).mAttribute_string.objectCompare (enumerator_136980.current (HERE).mAttribute_mActualSelector.mAttribute_string)).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_string temp_2 ;
        const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, enumerator_137011.current_mFormalSelector (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_3) {
          temp_2 = GALGAS_string (":") ;
        }else if (kBoolFalse == test_3) {
          temp_2 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_location location_4 (enumerator_136980.current (HERE).mAttribute_mActualSelector.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_4, GALGAS_string ("the selector should be '!").add_operation (enumerator_137011.current_mFormalSelector (HERE).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3099)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3099)).add_operation (temp_2, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3099)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3099))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3099)) ;
      }
      {
      routine_checkAssignmentTypes (enumerator_137011.current_mFormalArgumentType (HERE), var_exp.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3101)), object->mAttribute_mEndOfExpressionLocation, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3101)) ;
      }
      var_semanticExpressionListForGeneration.addAssign_operation (var_exp  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3102)) ;
      enumerator_136980.gotoNextObject () ;
      enumerator_137011.gotoNextObject () ;
    }
    ioArgument_ioCollectionValueElementListForGeneration.addAssign_operation (GALGAS_expressionListCollectionForGeneration::constructor_new (object->mAttribute_mEndOfExpressionLocation, var_semanticExpressionListForGeneration  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3104))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3104)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_expressionListCollectionValue_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_expressionListCollectionValue.mSlotID,
                                extensionMethod_expressionListCollectionValue_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_expressionListCollectionValue_analyze (defineExtensionMethod_expressionListCollectionValue_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@collectionValueAST enterExpressionInSemanticContext'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_collectionValueAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                 GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_collectionValueAST * object = (const cPtr_collectionValueAST *) inObject ;
  macroValidSharedObject (object, cPtr_collectionValueAST) ;
  cEnumerator_collectionValueElementList enumerator_139231 (object->mAttribute_mElementList, kEnumeration_up) ;
  while (enumerator_139231.hasCurrentObject ()) {
    callExtensionMethod_enterInSemanticContext ((const cPtr_abstractCollectionValueElement *) enumerator_139231.current_mElement (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3144)) ;
    enumerator_139231.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_collectionValueAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_collectionValueAST.mSlotID,
                                                         extensionMethod_collectionValueAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_collectionValueAST_enterExpressionInSemanticContext (defineExtensionMethod_collectionValueAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@collectionValueAST analyzeSemanticExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_collectionValueAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                          const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inType,
                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                          GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                          GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_collectionValueAST * object = (const cPtr_collectionValueAST *) inObject ;
  macroValidSharedObject (object, cPtr_collectionValueAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_targetType = constinArgument_inType ;
  }else if (kBoolFalse == test_0) {
    var_targetType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3161)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_targetType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3164)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_location location_2 (object->mAttribute_mTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_2, GALGAS_string ("Cannot infer type")  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3165)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_1) {
    const enumGalgasBool test_3 = var_targetType.getter_mSupportCollectionValue (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3166)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3166)).boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_location location_4 (object->mAttribute_mTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_4, GALGAS_string ("the @").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3167)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3167)).add_operation (GALGAS_string (" type does not support collection value"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3167))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3167)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_3) {
      const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, object->mAttribute_mElementList.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3169)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_5) {
        outArgument_outExpression = GALGAS_defaultConstructorExpressionForGeneration::constructor_new (var_targetType, object->mAttribute_mTypeName.mAttribute_location  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3170)) ;
      }else if (kBoolFalse == test_5) {
        GALGAS_collectionValueElementListForGeneration var_collectionValueElementListForGeneration = GALGAS_collectionValueElementListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3174)) ;
        cEnumerator_collectionValueElementList enumerator_140388 (object->mAttribute_mElementList, kEnumeration_up) ;
        while (enumerator_140388.hasCurrentObject ()) {
          callExtensionMethod_analyze ((const cPtr_abstractCollectionValueElement *) enumerator_140388.current_mElement (HERE).ptr (), constinArgument_inAnalysisContext, var_targetType, ioArgument_ioVariableMap, var_collectionValueElementListForGeneration, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3176)) ;
          enumerator_140388.gotoNextObject () ;
        }
        outArgument_outExpression = GALGAS_expressionCollectionForGeneration::constructor_new (var_targetType, object->mAttribute_mEndOfCollectionValue, var_collectionValueElementListForGeneration  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3183)) ;
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_collectionValueAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_collectionValueAST.mSlotID,
                                                  extensionMethod_collectionValueAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_collectionValueAST_analyzeSemanticExpression (defineExtensionMethod_collectionValueAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//Overriding extension method '@localVariableOrConstantDeclarationWithDefaultConstructorAST enterInstructionInSemanticContext'*
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_localVariableOrConstantDeclarationWithDefaultConstructorAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                                                           GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                                           C_Compiler * /* inCompiler */
                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_localVariableOrConstantDeclarationWithDefaultConstructorAST * object = (const cPtr_localVariableOrConstantDeclarationWithDefaultConstructorAST *) inObject ;
  macroValidSharedObject (object, cPtr_localVariableOrConstantDeclarationWithDefaultConstructorAST) ;
  {
  GALGAS_unifiedTypeMap_2D_proxy joker_4767 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioTypeMap, object->mAttribute_mTypeName, joker_4767 COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 87)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_localVariableOrConstantDeclarationWithDefaultConstructorAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithDefaultConstructorAST.mSlotID,
                                                          extensionMethod_localVariableOrConstantDeclarationWithDefaultConstructorAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_localVariableOrConstantDeclarationWithDefaultConstructorAST_enterInstructionInSemanticContext (defineExtensionMethod_localVariableOrConstantDeclarationWithDefaultConstructorAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//Overriding extension method '@localVariableOrConstantDeclarationWithDefaultConstructorAST analyzeSemanticInstruction'*
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_localVariableOrConstantDeclarationWithDefaultConstructorAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                                                    const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                                    GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                                                    GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_localVariableOrConstantDeclarationWithDefaultConstructorAST * object = (const cPtr_localVariableOrConstantDeclarationWithDefaultConstructorAST *) inObject ;
  macroValidSharedObject (object, cPtr_localVariableOrConstantDeclarationWithDefaultConstructorAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 97)) ;
  const enumGalgasBool test_0 = var_targetType.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 101)).operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 101)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("an abstract class does not support the default constructor")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 102)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_targetType.getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 103)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (object->mAttribute_mTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_3, GALGAS_string ("this class does not support the default constructor")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 104)) ;
    }
  }
  GALGAS_string var_targetVariableCppName = GALGAS_string ("var_").add_operation (object->mAttribute_mVariableName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 107)) ;
  const enumGalgasBool test_4 = object->mAttribute_mIsConstant.boolEnum () ;
  if (kBoolTrue == test_4) {
    {
    ioArgument_ioVariableMap.setter_insertLocalConstant (object->mAttribute_mVariableName, var_targetType, var_targetVariableCppName, var_targetVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 109)) ;
    }
  }else if (kBoolFalse == test_4) {
    {
    ioArgument_ioVariableMap.setter_insertDefinedLocalVariable (object->mAttribute_mVariableName, var_targetType, var_targetVariableCppName, var_targetVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 111)) ;
    }
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_targetType, object->mAttribute_mIsConstant, var_targetVariableCppName  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 114))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 114)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_localVariableOrConstantDeclarationWithDefaultConstructorAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithDefaultConstructorAST.mSlotID,
                                                   extensionMethod_localVariableOrConstantDeclarationWithDefaultConstructorAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_localVariableOrConstantDeclarationWithDefaultConstructorAST_analyzeSemanticInstruction (defineExtensionMethod_localVariableOrConstantDeclarationWithDefaultConstructorAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//Overriding extension method '@localVariableOrConstantDeclarationWithConstructorCallAST enterInstructionInSemanticContext'*
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_localVariableOrConstantDeclarationWithConstructorCallAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_localVariableOrConstantDeclarationWithConstructorCallAST * object = (const cPtr_localVariableOrConstantDeclarationWithConstructorCallAST *) inObject ;
  macroValidSharedObject (object, cPtr_localVariableOrConstantDeclarationWithConstructorCallAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mOptionalTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    GALGAS_unifiedTypeMap_2D_proxy joker_6583 ; // Joker input parameter
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioTypeMap, object->mAttribute_mOptionalTypeName, joker_6583 COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 127)) ;
    }
  }
  extensionMethod_enterInSemanticContext (object->mAttribute_mConstructorExpressions, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 129)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_localVariableOrConstantDeclarationWithConstructorCallAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithConstructorCallAST.mSlotID,
                                                          extensionMethod_localVariableOrConstantDeclarationWithConstructorCallAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_localVariableOrConstantDeclarationWithConstructorCallAST_enterInstructionInSemanticContext (defineExtensionMethod_localVariableOrConstantDeclarationWithConstructorCallAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
// Overriding extension method '@localVariableOrConstantDeclarationWithConstructorCallAST analyzeSemanticInstruction'  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_localVariableOrConstantDeclarationWithConstructorCallAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                                 GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                                                 GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_localVariableOrConstantDeclarationWithConstructorCallAST * object = (const cPtr_localVariableOrConstantDeclarationWithConstructorCallAST *) inObject ;
  macroValidSharedObject (object, cPtr_localVariableOrConstantDeclarationWithConstructorCallAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mOptionalTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 138)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_returnedType ;
  GALGAS_semanticExpressionListForGeneration var_constructorEffectiveParameterList ;
  GALGAS_bool var_hasCompilerArgument ;
  {
  GALGAS_unifiedTypeMap_2D_proxy joker_7391 ; // Joker input parameter
  routine_analyzeConstructorInvocation (var_targetType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, object->mAttribute_mOptionalTypeName, object->mAttribute_mConstructorName, object->mAttribute_mConstructorExpressions, var_returnedType, joker_7391, var_constructorEffectiveParameterList, var_hasCompilerArgument, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 140)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_targetType.objectCompare (var_returnedType)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mConstructorName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("this constructor returns an '@").add_operation (var_returnedType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 155)).add_operation (GALGAS_string ("' object, you should use a constructor that return an '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 155)).add_operation (object->mAttribute_mOptionalTypeName.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 155)).add_operation (GALGAS_string ("' object"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 155))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 154)) ;
  }
  GALGAS_string var_targetVariableCppName = GALGAS_string ("var_").add_operation (object->mAttribute_mVariableName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 158)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 158)) ;
  const enumGalgasBool test_2 = object->mAttribute_mIsConstant.boolEnum () ;
  if (kBoolTrue == test_2) {
    {
    ioArgument_ioVariableMap.setter_insertLocalConstant (object->mAttribute_mVariableName, var_targetType, var_targetVariableCppName, var_targetVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 160)) ;
    }
  }else if (kBoolFalse == test_2) {
    {
    ioArgument_ioVariableMap.setter_insertDefinedLocalVariable (object->mAttribute_mVariableName, var_targetType, var_targetVariableCppName, var_targetVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 162)) ;
    }
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithConstructorCallForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_targetType, object->mAttribute_mIsConstant, var_targetVariableCppName, object->mAttribute_mConstructorName.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 170)), var_constructorEffectiveParameterList, var_hasCompilerArgument  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 165))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 165)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_localVariableOrConstantDeclarationWithConstructorCallAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithConstructorCallAST.mSlotID,
                                                   extensionMethod_localVariableOrConstantDeclarationWithConstructorCallAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_localVariableOrConstantDeclarationWithConstructorCallAST_analyzeSemanticInstruction (defineExtensionMethod_localVariableOrConstantDeclarationWithConstructorCallAST_analyzeSemanticInstruction, NULL) ;

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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mSourceExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 180)) ;
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
                                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                  GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                                  GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_localVariableDeclarationWithAssignmentAST * object = (const cPtr_localVariableDeclarationWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_localVariableDeclarationWithAssignmentAST) ;
  GALGAS_semanticExpressionForGeneration var_expression ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mSourceExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 191)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 190)) ;
  GALGAS_string var_targetVariableCppName = GALGAS_string ("var_").add_operation (object->mAttribute_mVariableName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 197)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 197)) ;
  {
  ioArgument_ioVariableMap.setter_insertDefinedLocalVariable (object->mAttribute_mVariableName, var_expression.getter_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 198)), var_targetVariableCppName, var_targetVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 198)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::constructor_new (var_expression.getter_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 201)), GALGAS_bool (false), var_targetVariableCppName, var_expression  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 200))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 200)) ;
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
  GALGAS_unifiedTypeMap_2D_proxy joker_10115 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioTypeMap, object->mAttribute_mTypeName, joker_10115 COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 213)) ;
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
                                                                                    const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                    GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                    GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_localVariableDeclarationAST * object = (const cPtr_localVariableDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_localVariableDeclarationAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 223)) ;
  GALGAS_string var_targetVariableCppName = GALGAS_string ("var_").add_operation (object->mAttribute_mVariableName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 224)) ;
  const enumGalgasBool test_0 = object->mAttribute_mIsUndefinedConstant.boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_ioVariableMap.setter_insertUndefinedLocalConstant (object->mAttribute_mVariableName, var_targetType, var_targetVariableCppName, var_targetVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 226)) ;
    }
  }else if (kBoolFalse == test_0) {
    {
    ioArgument_ioVariableMap.setter_insertUndefinedLocalVariable (object->mAttribute_mVariableName, var_targetType, var_targetVariableCppName, var_targetVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 228)) ;
    }
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableDeclarationForGeneration::constructor_new (var_targetType, var_targetVariableCppName  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 231))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 231)) ;
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
//              Overriding extension method '@assignmentInstructionAST enterInstructionInSemanticContext'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_assignmentInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assignmentInstructionAST * object = (const cPtr_assignmentInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_assignmentInstructionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mSourceExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 242)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_assignmentInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_assignmentInstructionAST.mSlotID,
                                                          extensionMethod_assignmentInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_assignmentInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_assignmentInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@assignmentInstructionAST analyzeSemanticInstruction'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_assignmentInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                 GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assignmentInstructionAST * object = (const cPtr_assignmentInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_assignmentInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mStructAttributeList.getter_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 254)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    GALGAS_string joker_11965 ; // Joker input parameter
    GALGAS_string joker_11974 ; // Joker input parameter
    ioArgument_ioVariableMap.setter_neutralAccess (object->mAttribute_mTargetVariableName, var_targetType, joker_11965, joker_11974, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 255)) ;
    }
  }else if (kBoolFalse == test_0) {
    {
    GALGAS_string joker_12076 ; // Joker input parameter
    GALGAS_string joker_12085 ; // Joker input parameter
    ioArgument_ioVariableMap.setter_neutralAccess (object->mAttribute_mTargetVariableName, var_targetType, joker_12076, joker_12085, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 262)) ;
    }
    cEnumerator_lstringlist enumerator_12127 (object->mAttribute_mStructAttributeList, kEnumeration_up) ;
    while (enumerator_12127.hasCurrentObject ()) {
      GALGAS_attributeMap var_attributeMap = var_targetType.getter_mAttributeMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 269)) ;
      var_attributeMap.method_searchKey (enumerator_12127.current_mValue (HERE), var_targetType, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 270)) ;
      enumerator_12127.gotoNextObject () ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mSourceExpression.ptr (), var_targetType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 281)) ;
  {
  routine_checkAssignmentTypes (var_targetType, var_expression.getter_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 288)), object->mAttribute_mInstructionLocation, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 288)) ;
  }
  GALGAS_string var_targetVariableCppName ;
  GALGAS_string var_nameForCheckingFormalParameterUsing ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mAttribute_mStructAttributeList.getter_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 292)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    GALGAS_unifiedTypeMap_2D_proxy joker_13009 ; // Joker input parameter
    ioArgument_ioVariableMap.setter_searchForWriteAccess (object->mAttribute_mTargetVariableName, joker_13009, var_targetVariableCppName, var_nameForCheckingFormalParameterUsing, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 293)) ;
    }
  }else if (kBoolFalse == test_1) {
    {
    GALGAS_unifiedTypeMap_2D_proxy joker_13176 ; // Joker input parameter
    ioArgument_ioVariableMap.setter_searchForReadWriteAccess (object->mAttribute_mTargetVariableName, joker_13176, var_targetVariableCppName, var_nameForCheckingFormalParameterUsing, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 300)) ;
    }
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_assignmentInstructionForGeneration::constructor_new (var_targetType, var_targetVariableCppName, var_nameForCheckingFormalParameterUsing, object->mAttribute_mStructAttributeList, var_expression  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 308))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 308)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_assignmentInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_assignmentInstructionAST.mSlotID,
                                                   extensionMethod_assignmentInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_assignmentInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_assignmentInstructionAST_analyzeSemanticInstruction, NULL) ;

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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mSourceExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 322)) ;
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
                                                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                     GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                     GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfAssignmentInstructionAST * object = (const cPtr_selfAssignmentInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfAssignmentInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mSourceExpression.ptr (), constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 332)) ;
  const enumGalgasBool test_0 = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy.getter_isNull (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 339)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("'self' can be used only in extension setters")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 340)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 341)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 341)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("'self' assignment is not allowed for class instances")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 342)) ;
    }
  }
  {
  routine_checkAssignmentTypes (constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy, var_expression.getter_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 345)), object->mAttribute_mInstructionLocation, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 345)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_assignmentInstructionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy, constinArgument_inAnalysisContext.mAttribute_mSelfObjectCppName, constinArgument_inAnalysisContext.mAttribute_mSelfObjectCppName, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 351)), var_expression  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 347))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 347)) ;
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
//                 Overriding extension method '@outputActualParameterAST checkAgainstFormalArgument'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_outputActualParameterAST_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                 const GALGAS_lstring constinArgument_inFormalSelector,
                                                                                 const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inFormalArgumentType,
                                                                                 const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                 GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                 GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                 GALGAS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                                 GALGAS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_outputActualParameterAST * object = (const cPtr_outputActualParameterAST *) inObject ;
  macroValidSharedObject (object, cPtr_outputActualParameterAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 390)))).operator_and (GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 391)))) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 390)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mActualSelector.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 393)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 393)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 393)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 394)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 394)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 394))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 392)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.mAttribute_string.objectCompare (object->mAttribute_mActualSelector.mAttribute_string)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_string temp_3 ;
      const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_4) {
        temp_3 = GALGAS_string (":") ;
      }else if (kBoolFalse == test_4) {
        temp_3 = GALGAS_string::makeEmptyString () ;
      }
      GALGAS_location location_5 (object->mAttribute_mActualSelector.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_5, GALGAS_string ("the selector should be '!").add_operation (constinArgument_inFormalSelector.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 397)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 397)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 397)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 397))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 397)) ;
    }
    GALGAS_semanticExpressionForGeneration var_expression ;
    callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mOutputActualParameterExpression.ptr (), constinArgument_inFormalArgumentType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 399)) ;
    {
    routine_checkAssignmentTypes (constinArgument_inFormalArgumentType, var_expression.getter_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 406)), object->mAttribute_mEndOfExpressionLocation, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 406)) ;
    }
    ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_outputActualParameterForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_expression  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 408))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 408)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_outputActualParameterAST_checkAgainstFormalArgument (void) {
  enterExtensionMethod_checkAgainstFormalArgument (kTypeDescriptor_GALGAS_outputActualParameterAST.mSlotID,
                                                   extensionMethod_outputActualParameterAST_checkAgainstFormalArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_outputActualParameterAST_checkAgainstFormalArgument (defineExtensionMethod_outputActualParameterAST_checkAgainstFormalArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@outputInputActualParameterAST checkAgainstFormalArgument'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_outputInputActualParameterAST_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
                                                                                      const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                      const GALGAS_lstring constinArgument_inFormalSelector,
                                                                                      const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inFormalArgumentType,
                                                                                      const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                      GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                      GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                      GALGAS_stringset & ioArgument_ioExclusiveVariableSet,
                                                                                      GALGAS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_outputInputActualParameterAST * object = (const cPtr_outputInputActualParameterAST *) inObject ;
  macroValidSharedObject (object, cPtr_outputInputActualParameterAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 425)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mActualSelector.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 427)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 427)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 427)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 428)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 428)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 428))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 426)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.mAttribute_string.objectCompare (object->mAttribute_mActualSelector.mAttribute_string)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_string temp_3 ;
      const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_4) {
        temp_3 = GALGAS_string (":") ;
      }else if (kBoolFalse == test_4) {
        temp_3 = GALGAS_string::makeEmptyString () ;
      }
      GALGAS_location location_5 (object->mAttribute_mActualSelector.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_5, GALGAS_string ("the selector should be '!\?").add_operation (constinArgument_inFormalSelector.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 430)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 430)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 430)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 430))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 430)) ;
    }
  }
  GALGAS_string var_variableCppName ;
  GALGAS_unifiedTypeMap_2D_proxy var_parameterType ;
  {
  GALGAS_string joker_19312 ; // Joker input parameter
  ioArgument_ioVariableMap.setter_searchForReadWriteAccess (object->mAttribute_mOutputInputActualParameterName, var_parameterType, var_variableCppName, joker_19312, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 434)) ;
  }
  GALGAS_unifiedTypeMapProxyList var_typeList = GALGAS_unifiedTypeMapProxyList::constructor_listWithValue (var_parameterType  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 435)) ;
  cEnumerator_lstringlist enumerator_19421 (object->mAttribute_mStructAttributeList, kEnumeration_up) ;
  while (enumerator_19421.hasCurrentObject ()) {
    GALGAS_attributeMap var_attributeMap = var_parameterType.getter_mAttributeMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 437)) ;
    var_attributeMap.method_searchKey (enumerator_19421.current_mValue (HERE), var_parameterType, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 438)) ;
    var_typeList.addAssign_operation (var_parameterType  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 446)) ;
    enumerator_19421.gotoNextObject () ;
  }
  const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType)).boolEnum () ;
  if (kBoolTrue == test_6) {
    GALGAS_location location_7 (object->mAttribute_mOutputInputActualParameterName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_7, GALGAS_string ("the parameter object has the '@").add_operation (var_parameterType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 451)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 451)).add_operation (GALGAS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 451)).add_operation (constinArgument_inFormalArgumentType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 452)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 452)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 452))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 450)) ;
  }
  const enumGalgasBool test_8 = ioArgument_ioExclusiveVariableSet.getter_hasKey (object->mAttribute_mOutputInputActualParameterName.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 455)) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 455)).boolEnum () ;
  if (kBoolTrue == test_8) {
    GALGAS_location location_9 (object->mAttribute_mOutputInputActualParameterName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_9, GALGAS_string ("this variable is already named as input or output/input effective parameter")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 456)) ;
  }
  ioArgument_ioExclusiveVariableSet.addAssign_operation (object->mAttribute_mOutputInputActualParameterName.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 459))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 459)) ;
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_outputInputActualParameterForGeneration::constructor_new (var_parameterType, var_variableCppName, object->mAttribute_mStructAttributeList, var_typeList  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 461))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 461)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_outputInputActualParameterAST_checkAgainstFormalArgument (void) {
  enterExtensionMethod_checkAgainstFormalArgument (kTypeDescriptor_GALGAS_outputInputActualParameterAST.mSlotID,
                                                   extensionMethod_outputInputActualParameterAST_checkAgainstFormalArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_outputInputActualParameterAST_checkAgainstFormalArgument (defineExtensionMethod_outputInputActualParameterAST_checkAgainstFormalArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@outputInputSingleJokerParameterAST checkAgainstFormalArgument'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_outputInputSingleJokerParameterAST_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
                                                                                           const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                           const GALGAS_lstring constinArgument_inFormalSelector,
                                                                                           const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inFormalArgumentType,
                                                                                           const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                           GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                           GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                           GALGAS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                                           GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_outputInputSingleJokerParameterAST * object = (const cPtr_outputInputSingleJokerParameterAST *) inObject ;
  macroValidSharedObject (object, cPtr_outputInputSingleJokerParameterAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 479)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mActualSelector.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 481)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 481)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 481)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 482)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 482)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 482))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 480)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.mAttribute_string.objectCompare (object->mAttribute_mActualSelector.mAttribute_string)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_string temp_3 ;
      const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_4) {
        temp_3 = GALGAS_string (":") ;
      }else if (kBoolFalse == test_4) {
        temp_3 = GALGAS_string::makeEmptyString () ;
      }
      GALGAS_location location_5 (object->mAttribute_mActualSelector.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_5, GALGAS_string ("the selector should be '!\?").add_operation (constinArgument_inFormalSelector.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 484)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 484)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 484)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 484))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 484)) ;
    }
  }
  GALGAS_string var_defaultConstructorName = constinArgument_inFormalArgumentType.getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 486)) ;
  const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_defaultConstructorName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_6) {
    GALGAS_location location_7 (object->mAttribute_mActualSelector.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_7, GALGAS_string ("the formal parameter type @").add_operation (constinArgument_inFormalArgumentType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 488)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 488)).add_operation (GALGAS_string (" should support the default constructor"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 488))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 488)) ;
  }
  GALGAS_string var_cppVarName = GALGAS_string ("joker_").add_operation (object->mAttribute_mActualSelector.mAttribute_location.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 491)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 491)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 491)) ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::constructor_new (constinArgument_inFormalArgumentType, GALGAS_bool (false), var_cppVarName, GALGAS_defaultConstructorExpressionForGeneration::constructor_new (constinArgument_inFormalArgumentType, object->mAttribute_mActualSelector.mAttribute_location  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 496))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 492))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 492)) ;
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_outputInputActualParameterForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_cppVarName, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 500)), GALGAS_unifiedTypeMapProxyList::constructor_listWithValue (constinArgument_inFormalArgumentType  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 501))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 497))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 497)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_outputInputSingleJokerParameterAST_checkAgainstFormalArgument (void) {
  enterExtensionMethod_checkAgainstFormalArgument (kTypeDescriptor_GALGAS_outputInputSingleJokerParameterAST.mSlotID,
                                                   extensionMethod_outputInputSingleJokerParameterAST_checkAgainstFormalArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_outputInputSingleJokerParameterAST_checkAgainstFormalArgument (defineExtensionMethod_outputInputSingleJokerParameterAST_checkAgainstFormalArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@outputInputJokerParameterAST checkAgainstFormalArgument'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_outputInputJokerParameterAST_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
                                                                                     const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                     const GALGAS_lstring /* constinArgument_inFormalSelector */,
                                                                                     const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inFormalArgumentType,
                                                                                     const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                     GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                     GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                     GALGAS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                                     GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_outputInputJokerParameterAST * object = (const cPtr_outputInputJokerParameterAST *) inObject ;
  macroValidSharedObject (object, cPtr_outputInputJokerParameterAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 515)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mQualifierLocation, GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 517)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 517)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 517)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 518)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 518)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 518))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 516)) ;
  }
  GALGAS_string var_defaultConstructorName = constinArgument_inFormalArgumentType.getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 520)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_defaultConstructorName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mQualifierLocation, GALGAS_string ("the formal parameter type @").add_operation (constinArgument_inFormalArgumentType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 522)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 522)).add_operation (GALGAS_string (" should support the default constructor"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 522))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 522)) ;
  }
  GALGAS_string var_cppVarName = GALGAS_string ("joker_").add_operation (object->mAttribute_mQualifierLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 525)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 525)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 525)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 525)).add_operation (object->mAttribute_mJokerIndex.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 525)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 525)) ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::constructor_new (constinArgument_inFormalArgumentType, GALGAS_bool (false), var_cppVarName, GALGAS_defaultConstructorExpressionForGeneration::constructor_new (constinArgument_inFormalArgumentType, object->mAttribute_mQualifierLocation  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 530))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 526))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 526)) ;
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_outputInputActualParameterForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_cppVarName, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 534)), GALGAS_unifiedTypeMapProxyList::constructor_listWithValue (constinArgument_inFormalArgumentType  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 535))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 531))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 531)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_outputInputJokerParameterAST_checkAgainstFormalArgument (void) {
  enterExtensionMethod_checkAgainstFormalArgument (kTypeDescriptor_GALGAS_outputInputJokerParameterAST.mSlotID,
                                                   extensionMethod_outputInputJokerParameterAST_checkAgainstFormalArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_outputInputJokerParameterAST_checkAgainstFormalArgument (defineExtensionMethod_outputInputJokerParameterAST_checkAgainstFormalArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@inputActualExistingVariableParameterAST checkAgainstFormalArgument'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_inputActualExistingVariableParameterAST_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
                                                                                                const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                                const GALGAS_lstring constinArgument_inFormalSelector,
                                                                                                const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inFormalArgumentType,
                                                                                                const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                                GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                                GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                                GALGAS_stringset & ioArgument_ioExclusiveVariableSet,
                                                                                                GALGAS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inputActualExistingVariableParameterAST * object = (const cPtr_inputActualExistingVariableParameterAST *) inObject ;
  macroValidSharedObject (object, cPtr_inputActualExistingVariableParameterAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 549)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mActualSelector.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 551)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 551)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 551)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 552)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 552)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 552))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 550)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.mAttribute_string.objectCompare (object->mAttribute_mActualSelector.mAttribute_string)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_string temp_3 ;
      const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_4) {
        temp_3 = GALGAS_string (":") ;
      }else if (kBoolFalse == test_4) {
        temp_3 = GALGAS_string::makeEmptyString () ;
      }
      GALGAS_location location_5 (object->mAttribute_mActualSelector.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_5, GALGAS_string ("the selector should be '\?").add_operation (constinArgument_inFormalSelector.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 554)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 554)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 554)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 554))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 554)) ;
    }
  }
  GALGAS_unifiedTypeMap_2D_proxy var_parameterType ;
  GALGAS_string var_targetVariableCppName ;
  {
  GALGAS_string joker_25748 ; // Joker input parameter
  ioArgument_ioVariableMap.setter_searchForWriteAccess (object->mAttribute_mInputActualParameterName, var_parameterType, var_targetVariableCppName, joker_25748, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 556)) ;
  }
  const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType)).boolEnum () ;
  if (kBoolTrue == test_6) {
    GALGAS_location location_7 (object->mAttribute_mInputActualParameterName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_7, GALGAS_string ("the parameter object has the '@").add_operation (var_parameterType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 565)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 565)).add_operation (GALGAS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 565)).add_operation (constinArgument_inFormalArgumentType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 566)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 566)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 566))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 564)) ;
  }
  const enumGalgasBool test_8 = ioArgument_ioExclusiveVariableSet.getter_hasKey (object->mAttribute_mInputActualParameterName.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 569)) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 569)).boolEnum () ;
  if (kBoolTrue == test_8) {
    GALGAS_location location_9 (object->mAttribute_mInputActualParameterName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_9, GALGAS_string ("this variable is already named as input or output/input effective parameter")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 570)) ;
  }
  ioArgument_ioExclusiveVariableSet.addAssign_operation (object->mAttribute_mInputActualParameterName.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 573))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 573)) ;
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputActualParameterForGeneration::constructor_new (var_parameterType, var_targetVariableCppName  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 575))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 575)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_inputActualExistingVariableParameterAST_checkAgainstFormalArgument (void) {
  enterExtensionMethod_checkAgainstFormalArgument (kTypeDescriptor_GALGAS_inputActualExistingVariableParameterAST.mSlotID,
                                                   extensionMethod_inputActualExistingVariableParameterAST_checkAgainstFormalArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputActualExistingVariableParameterAST_checkAgainstFormalArgument (defineExtensionMethod_inputActualExistingVariableParameterAST_checkAgainstFormalArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@inputActualNewVariableParameterAST checkAgainstFormalArgument'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_inputActualNewVariableParameterAST_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
                                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                           const GALGAS_lstring constinArgument_inFormalSelector,
                                                                                           const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inFormalArgumentType,
                                                                                           const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                           GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                           GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                           GALGAS_stringset & ioArgument_ioExclusiveVariableSet,
                                                                                           GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inputActualNewVariableParameterAST * object = (const cPtr_inputActualNewVariableParameterAST *) inObject ;
  macroValidSharedObject (object, cPtr_inputActualNewVariableParameterAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 592)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mActualSelector.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 594)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 594)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 594)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 595)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 595)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 595))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 593)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.mAttribute_string.objectCompare (object->mAttribute_mActualSelector.mAttribute_string)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_string temp_3 ;
      const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_4) {
        temp_3 = GALGAS_string (":") ;
      }else if (kBoolFalse == test_4) {
        temp_3 = GALGAS_string::makeEmptyString () ;
      }
      GALGAS_location location_5 (object->mAttribute_mActualSelector.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_5, GALGAS_string ("the selector should be '\?").add_operation (constinArgument_inFormalSelector.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 597)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 597)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 597)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 597))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 597)) ;
    }
  }
  const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, object->mAttribute_mInputOptionalActualTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_6) {
    GALGAS_unifiedTypeMap_2D_proxy var_parameterType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mInputOptionalActualTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 602)) ;
    const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType)).boolEnum () ;
    if (kBoolTrue == test_7) {
      GALGAS_location location_8 (object->mAttribute_mInputActualParameterName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_8, GALGAS_string ("the parameter object has the '@").add_operation (var_parameterType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 608)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 608)).add_operation (GALGAS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 608)).add_operation (constinArgument_inFormalArgumentType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 609)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 609)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 609))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 607)) ;
    }
  }
  GALGAS_string var_targetVariableCppName = GALGAS_string ("var_").add_operation (object->mAttribute_mInputActualParameterName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 613)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 613)) ;
  {
  ioArgument_ioVariableMap.setter_insertDefinedLocalVariable (object->mAttribute_mInputActualParameterName, constinArgument_inFormalArgumentType, var_targetVariableCppName, var_targetVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 614)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableDeclarationForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_targetVariableCppName  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 621))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 621)) ;
  const enumGalgasBool test_9 = ioArgument_ioExclusiveVariableSet.getter_hasKey (object->mAttribute_mInputActualParameterName.mAttribute_string COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 625)).boolEnum () ;
  if (kBoolTrue == test_9) {
    GALGAS_location location_10 (object->mAttribute_mInputActualParameterName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_10, GALGAS_string ("this variable is already named as input or output/input effective parameter")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 626)) ;
  }
  ioArgument_ioExclusiveVariableSet.addAssign_operation (object->mAttribute_mInputActualParameterName.mAttribute_string  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 629)) ;
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputActualParameterForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_targetVariableCppName  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 631))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 631)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_inputActualNewVariableParameterAST_checkAgainstFormalArgument (void) {
  enterExtensionMethod_checkAgainstFormalArgument (kTypeDescriptor_GALGAS_inputActualNewVariableParameterAST.mSlotID,
                                                   extensionMethod_inputActualNewVariableParameterAST_checkAgainstFormalArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputActualNewVariableParameterAST_checkAgainstFormalArgument (defineExtensionMethod_inputActualNewVariableParameterAST_checkAgainstFormalArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@inputActualNewConstantParameterAST checkAgainstFormalArgument'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_inputActualNewConstantParameterAST_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
                                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                           const GALGAS_lstring constinArgument_inFormalSelector,
                                                                                           const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inFormalArgumentType,
                                                                                           const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                           GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                           GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                           GALGAS_stringset & ioArgument_ioExclusiveVariableSet,
                                                                                           GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inputActualNewConstantParameterAST * object = (const cPtr_inputActualNewConstantParameterAST *) inObject ;
  macroValidSharedObject (object, cPtr_inputActualNewConstantParameterAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 648)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mActualSelector.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 650)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 650)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 650)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 651)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 651)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 651))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 649)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.mAttribute_string.objectCompare (object->mAttribute_mActualSelector.mAttribute_string)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_string temp_3 ;
      const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_4) {
        temp_3 = GALGAS_string (":") ;
      }else if (kBoolFalse == test_4) {
        temp_3 = GALGAS_string::makeEmptyString () ;
      }
      GALGAS_location location_5 (object->mAttribute_mActualSelector.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_5, GALGAS_string ("the selector should be '\?").add_operation (constinArgument_inFormalSelector.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 653)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 653)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 653)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 653))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 653)) ;
    }
  }
  const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, object->mAttribute_mInputOptionalActualTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_6) {
    GALGAS_unifiedTypeMap_2D_proxy var_parameterType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mInputOptionalActualTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 657)) ;
    const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType)).boolEnum () ;
    if (kBoolTrue == test_7) {
      GALGAS_location location_8 (object->mAttribute_mInputActualParameterName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_8, GALGAS_string ("the parameter object has the '@").add_operation (var_parameterType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 663)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 663)).add_operation (GALGAS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 663)).add_operation (constinArgument_inFormalArgumentType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 664)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 664)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 664))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 662)) ;
    }
  }
  GALGAS_string var_targetVariableCppName = GALGAS_string ("var_").add_operation (object->mAttribute_mInputActualParameterName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 668)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 668)) ;
  const enumGalgasBool test_9 = object->mAttribute_mMarkedAsUnused.boolEnum () ;
  if (kBoolTrue == test_9) {
    {
    ioArgument_ioVariableMap.setter_insertUsedLocalConstant (object->mAttribute_mInputActualParameterName, constinArgument_inFormalArgumentType, var_targetVariableCppName, var_targetVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 670)) ;
    }
  }else if (kBoolFalse == test_9) {
    {
    ioArgument_ioVariableMap.setter_insertLocalConstant (object->mAttribute_mInputActualParameterName, constinArgument_inFormalArgumentType, var_targetVariableCppName, var_targetVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 677)) ;
    }
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableDeclarationForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_targetVariableCppName  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 685))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 685)) ;
  const enumGalgasBool test_10 = ioArgument_ioExclusiveVariableSet.getter_hasKey (object->mAttribute_mInputActualParameterName.mAttribute_string COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 690)).boolEnum () ;
  if (kBoolTrue == test_10) {
    GALGAS_location location_11 (object->mAttribute_mInputActualParameterName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_11, GALGAS_string ("this variable is already named as input or output/input effective parameter")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 691)) ;
  }
  ioArgument_ioExclusiveVariableSet.addAssign_operation (object->mAttribute_mInputActualParameterName.mAttribute_string  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 694)) ;
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputActualParameterForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_targetVariableCppName  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 696))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 696)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_inputActualNewConstantParameterAST_checkAgainstFormalArgument (void) {
  enterExtensionMethod_checkAgainstFormalArgument (kTypeDescriptor_GALGAS_inputActualNewConstantParameterAST.mSlotID,
                                                   extensionMethod_inputActualNewConstantParameterAST_checkAgainstFormalArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputActualNewConstantParameterAST_checkAgainstFormalArgument (defineExtensionMethod_inputActualNewConstantParameterAST_checkAgainstFormalArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@inputSingleJokerActualParameterAST checkAgainstFormalArgument'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_inputSingleJokerActualParameterAST_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
                                                                                           const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                           const GALGAS_lstring constinArgument_inFormalSelector,
                                                                                           const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inFormalArgumentType,
                                                                                           const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                           GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                           GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                           GALGAS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                                           GALGAS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inputSingleJokerActualParameterAST * object = (const cPtr_inputSingleJokerActualParameterAST *) inObject ;
  macroValidSharedObject (object, cPtr_inputSingleJokerActualParameterAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 713)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mActualSelector.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 715)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 715)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 715)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 716)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 716)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 716))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 714)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.mAttribute_string.objectCompare (object->mAttribute_mActualSelector.mAttribute_string)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_string temp_3 ;
      const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_4) {
        temp_3 = GALGAS_string (":") ;
      }else if (kBoolFalse == test_4) {
        temp_3 = GALGAS_string::makeEmptyString () ;
      }
      GALGAS_location location_5 (object->mAttribute_mActualSelector.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_5, GALGAS_string ("the selector should be '\?").add_operation (constinArgument_inFormalSelector.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 718)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 718)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 718)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 718))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 718)) ;
    }else if (kBoolFalse == test_2) {
      GALGAS_string var_cppVarName = GALGAS_string ("joker_").add_operation (object->mAttribute_mActualSelector.mAttribute_location.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 720)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 720)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 720)) ;
      ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputJokerParameterForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_cppVarName  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 722))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 722)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_inputSingleJokerActualParameterAST_checkAgainstFormalArgument (void) {
  enterExtensionMethod_checkAgainstFormalArgument (kTypeDescriptor_GALGAS_inputSingleJokerActualParameterAST.mSlotID,
                                                   extensionMethod_inputSingleJokerActualParameterAST_checkAgainstFormalArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputSingleJokerActualParameterAST_checkAgainstFormalArgument (defineExtensionMethod_inputSingleJokerActualParameterAST_checkAgainstFormalArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@inputJokerActualParameterAST checkAgainstFormalArgument'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_inputJokerActualParameterAST_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
                                                                                     const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                     const GALGAS_lstring /* constinArgument_inFormalSelector */,
                                                                                     const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inFormalArgumentType,
                                                                                     const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                     GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                     GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                     GALGAS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                                     GALGAS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inputJokerActualParameterAST * object = (const cPtr_inputJokerActualParameterAST *) inObject ;
  macroValidSharedObject (object, cPtr_inputJokerActualParameterAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 739)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mQualifierLocation, GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 741)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 741)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 741)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 742)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 742)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 742))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 740)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_string var_cppVarName = GALGAS_string ("joker_").add_operation (object->mAttribute_mQualifierLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 744)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 744)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 744)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 744)).add_operation (object->mAttribute_mJokerIndex.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 744)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 744)) ;
    ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputJokerParameterForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_cppVarName  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 746))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 746)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_inputJokerActualParameterAST_checkAgainstFormalArgument (void) {
  enterExtensionMethod_checkAgainstFormalArgument (kTypeDescriptor_GALGAS_inputJokerActualParameterAST.mSlotID,
                                                   extensionMethod_inputJokerActualParameterAST_checkAgainstFormalArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputJokerActualParameterAST_checkAgainstFormalArgument (defineExtensionMethod_inputJokerActualParameterAST_checkAgainstFormalArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//       Overriding extension method '@inputActualExistingVariableParameterAST enterParameterInSemanticContext'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_inputActualExistingVariableParameterAST_enterParameterInSemanticContext (const cPtr_actualParameterAST * /* inObject */,
                                                                                                     GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                     C_Compiler * /* inCompiler */
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_inputActualExistingVariableParameterAST_enterParameterInSemanticContext (void) {
  enterExtensionMethod_enterParameterInSemanticContext (kTypeDescriptor_GALGAS_inputActualExistingVariableParameterAST.mSlotID,
                                                        extensionMethod_inputActualExistingVariableParameterAST_enterParameterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputActualExistingVariableParameterAST_enterParameterInSemanticContext (defineExtensionMethod_inputActualExistingVariableParameterAST_enterParameterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@inputActualNewConstantParameterAST enterParameterInSemanticContext'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_inputActualNewConstantParameterAST_enterParameterInSemanticContext (const cPtr_actualParameterAST * /* inObject */,
                                                                                                GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_inputActualNewConstantParameterAST_enterParameterInSemanticContext (void) {
  enterExtensionMethod_enterParameterInSemanticContext (kTypeDescriptor_GALGAS_inputActualNewConstantParameterAST.mSlotID,
                                                        extensionMethod_inputActualNewConstantParameterAST_enterParameterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputActualNewConstantParameterAST_enterParameterInSemanticContext (defineExtensionMethod_inputActualNewConstantParameterAST_enterParameterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@inputActualNewVariableParameterAST enterParameterInSemanticContext'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_inputActualNewVariableParameterAST_enterParameterInSemanticContext (const cPtr_actualParameterAST * /* inObject */,
                                                                                                GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_inputActualNewVariableParameterAST_enterParameterInSemanticContext (void) {
  enterExtensionMethod_enterParameterInSemanticContext (kTypeDescriptor_GALGAS_inputActualNewVariableParameterAST.mSlotID,
                                                        extensionMethod_inputActualNewVariableParameterAST_enterParameterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputActualNewVariableParameterAST_enterParameterInSemanticContext (defineExtensionMethod_inputActualNewVariableParameterAST_enterParameterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@inputJokerActualParameterAST enterParameterInSemanticContext'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_inputJokerActualParameterAST_enterParameterInSemanticContext (const cPtr_actualParameterAST * /* inObject */,
                                                                                          GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_inputJokerActualParameterAST_enterParameterInSemanticContext (void) {
  enterExtensionMethod_enterParameterInSemanticContext (kTypeDescriptor_GALGAS_inputJokerActualParameterAST.mSlotID,
                                                        extensionMethod_inputJokerActualParameterAST_enterParameterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputJokerActualParameterAST_enterParameterInSemanticContext (defineExtensionMethod_inputJokerActualParameterAST_enterParameterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@inputSingleJokerActualParameterAST enterParameterInSemanticContext'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_inputSingleJokerActualParameterAST_enterParameterInSemanticContext (const cPtr_actualParameterAST * /* inObject */,
                                                                                                GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_inputSingleJokerActualParameterAST_enterParameterInSemanticContext (void) {
  enterExtensionMethod_enterParameterInSemanticContext (kTypeDescriptor_GALGAS_inputSingleJokerActualParameterAST.mSlotID,
                                                        extensionMethod_inputSingleJokerActualParameterAST_enterParameterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputSingleJokerActualParameterAST_enterParameterInSemanticContext (defineExtensionMethod_inputSingleJokerActualParameterAST_enterParameterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@outputActualParameterAST enterParameterInSemanticContext'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_outputActualParameterAST_enterParameterInSemanticContext (const cPtr_actualParameterAST * inObject,
                                                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_outputActualParameterAST * object = (const cPtr_outputActualParameterAST *) inObject ;
  macroValidSharedObject (object, cPtr_outputActualParameterAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mOutputActualParameterExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 785)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_outputActualParameterAST_enterParameterInSemanticContext (void) {
  enterExtensionMethod_enterParameterInSemanticContext (kTypeDescriptor_GALGAS_outputActualParameterAST.mSlotID,
                                                        extensionMethod_outputActualParameterAST_enterParameterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_outputActualParameterAST_enterParameterInSemanticContext (defineExtensionMethod_outputActualParameterAST_enterParameterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@outputInputActualParameterAST enterParameterInSemanticContext'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_outputInputActualParameterAST_enterParameterInSemanticContext (const cPtr_actualParameterAST * /* inObject */,
                                                                                           GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                           C_Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_outputInputActualParameterAST_enterParameterInSemanticContext (void) {
  enterExtensionMethod_enterParameterInSemanticContext (kTypeDescriptor_GALGAS_outputInputActualParameterAST.mSlotID,
                                                        extensionMethod_outputInputActualParameterAST_enterParameterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_outputInputActualParameterAST_enterParameterInSemanticContext (defineExtensionMethod_outputInputActualParameterAST_enterParameterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@outputInputJokerParameterAST enterParameterInSemanticContext'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_outputInputJokerParameterAST_enterParameterInSemanticContext (const cPtr_actualParameterAST * /* inObject */,
                                                                                          GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_outputInputJokerParameterAST_enterParameterInSemanticContext (void) {
  enterExtensionMethod_enterParameterInSemanticContext (kTypeDescriptor_GALGAS_outputInputJokerParameterAST.mSlotID,
                                                        extensionMethod_outputInputJokerParameterAST_enterParameterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_outputInputJokerParameterAST_enterParameterInSemanticContext (defineExtensionMethod_outputInputJokerParameterAST_enterParameterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@outputInputSingleJokerParameterAST enterParameterInSemanticContext'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_outputInputSingleJokerParameterAST_enterParameterInSemanticContext (const cPtr_actualParameterAST * /* inObject */,
                                                                                                GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_outputInputSingleJokerParameterAST_enterParameterInSemanticContext (void) {
  enterExtensionMethod_enterParameterInSemanticContext (kTypeDescriptor_GALGAS_outputInputSingleJokerParameterAST.mSlotID,
                                                        extensionMethod_outputInputSingleJokerParameterAST_enterParameterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_outputInputSingleJokerParameterAST_enterParameterInSemanticContext (defineExtensionMethod_outputInputSingleJokerParameterAST_enterParameterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//  Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultNone analyzeGrammarInstructionSDT'  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeGrammarInstructionSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * /* inObject */,
                                                                                                                const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                                                const GALGAS_bool /* constinArgument_inHasTranslateFeature */,
                                                                                                                const GALGAS_string /* constinArgument_inSyntaxDirectedTranslationResultVarName */,
                                                                                                                GALGAS_stringlist & /* ioArgument_ioAssignementList */,
                                                                                                                GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                                                C_Compiler * /* inCompiler */
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeGrammarInstructionSDT (void) {
  enterExtensionMethod_analyzeGrammarInstructionSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone.mSlotID,
                                                     extensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeGrammarInstructionSDT) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeGrammarInstructionSDT (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeGrammarInstructionSDT, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//  Overriding extension method '@grammarInstructionSyntaxDirectedTranslationDropResult analyzeGrammarInstructionSDT'  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeGrammarInstructionSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                                const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                                                const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                                                const GALGAS_string /* constinArgument_inSyntaxDirectedTranslationResultVarName */,
                                                                                                                GALGAS_stringlist & /* ioArgument_ioAssignementList */,
                                                                                                                GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationDropResult * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationDropResult *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationDropResult) ;
  const enumGalgasBool test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 967)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mLocation, GALGAS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 968)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeGrammarInstructionSDT (void) {
  enterExtensionMethod_analyzeGrammarInstructionSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult.mSlotID,
                                                     extensionMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeGrammarInstructionSDT) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeGrammarInstructionSDT (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeGrammarInstructionSDT, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
// Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInVar analyzeGrammarInstructionSDT'  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeGrammarInstructionSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                                 const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                                                 const GALGAS_string constinArgument_inSyntaxDirectedTranslationResultVarName,
                                                                                                                 GALGAS_stringlist & ioArgument_ioAssignementList,
                                                                                                                 GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar) ;
  const enumGalgasBool test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 980)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mActualParameterName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 981)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_type ;
  GALGAS_string var_cppName ;
  {
  GALGAS_string joker_44835 ; // Joker input parameter
  ioArgument_ioVariableMap.setter_searchForWriteAccess (object->mAttribute_mActualParameterName, var_type, var_cppName, joker_44835, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 983)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_expectedType.objectCompare (var_type)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mActualParameterName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_3, GALGAS_string ("the '").add_operation (object->mAttribute_mActualParameterName.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 987)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 987)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 987)).add_operation (var_type.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 987)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 987)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 987)).add_operation (var_expectedType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 988)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 988)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 988))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 986)) ;
  }
  ioArgument_ioAssignementList.addAssign_operation (var_cppName.add_operation (GALGAS_string (" = GALGAS_string ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 990)).add_operation (constinArgument_inSyntaxDirectedTranslationResultVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 990)).add_operation (GALGAS_string (") ;"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 990))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 990)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeGrammarInstructionSDT (void) {
  enterExtensionMethod_analyzeGrammarInstructionSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar.mSlotID,
                                                     extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeGrammarInstructionSDT) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeGrammarInstructionSDT (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeGrammarInstructionSDT, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar analyzeGrammarInstructionSDT'*
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeGrammarInstructionSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                                         const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                                         const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                                                         const GALGAS_string constinArgument_inSyntaxDirectedTranslationResultVarName,
                                                                                                                         GALGAS_stringlist & ioArgument_ioAssignementList,
                                                                                                                         GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                                                         C_Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar) ;
  const enumGalgasBool test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1001)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mActualParameterName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1002)) ;
  }
  GALGAS_string var_cppName = GALGAS_string ("var_").add_operation (object->mAttribute_mActualParameterName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1004)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1004)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mActualParameterTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1005)) ;
  {
  ioArgument_ioVariableMap.setter_insertDefinedLocalVariable (object->mAttribute_mActualParameterName, var_type, var_cppName, var_cppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1006)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_expectedType.objectCompare (var_type)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mActualParameterName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_3, GALGAS_string ("the '").add_operation (object->mAttribute_mActualParameterName.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1010)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1010)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1010)).add_operation (var_type.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1010)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1010)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1010)).add_operation (var_expectedType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1011)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1011)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1011))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1009)) ;
  }
  ioArgument_ioAssignementList.addAssign_operation (GALGAS_string ("GALGAS_string ").add_operation (var_cppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1013)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1013)).add_operation (constinArgument_inSyntaxDirectedTranslationResultVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1013)).add_operation (GALGAS_string (") ;"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1013))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1013)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeGrammarInstructionSDT (void) {
  enterExtensionMethod_analyzeGrammarInstructionSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar.mSlotID,
                                                     extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeGrammarInstructionSDT) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeGrammarInstructionSDT (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeGrammarInstructionSDT, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst analyzeGrammarInstructionSDT'*
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeGrammarInstructionSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                                           const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                                                           const GALGAS_string constinArgument_inSyntaxDirectedTranslationResultVarName,
                                                                                                                           GALGAS_stringlist & ioArgument_ioAssignementList,
                                                                                                                           GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                                                           C_Compiler * inCompiler
                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst) ;
  const enumGalgasBool test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1024)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mActualParameterName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1025)) ;
  }
  GALGAS_string var_cppName = GALGAS_string ("var_").add_operation (object->mAttribute_mActualParameterName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1027)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1027)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mActualParameterTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1028)) ;
  {
  ioArgument_ioVariableMap.setter_insertLocalConstant (object->mAttribute_mActualParameterName, var_type, var_cppName, var_cppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1029)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_expectedType.objectCompare (var_type)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mActualParameterName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_3, GALGAS_string ("the '").add_operation (object->mAttribute_mActualParameterName.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1033)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1033)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1033)).add_operation (var_type.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1033)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1033)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1033)).add_operation (var_expectedType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1034)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1034)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1034))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1032)) ;
  }
  ioArgument_ioAssignementList.addAssign_operation (GALGAS_string ("const GALGAS_string ").add_operation (var_cppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1036)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1036)).add_operation (constinArgument_inSyntaxDirectedTranslationResultVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1036)).add_operation (GALGAS_string (") ;"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1036))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1036)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeGrammarInstructionSDT (void) {
  enterExtensionMethod_analyzeGrammarInstructionSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst.mSlotID,
                                                     extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeGrammarInstructionSDT) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeGrammarInstructionSDT (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeGrammarInstructionSDT, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@predefinedTypeAST semanticAnalysis'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_predefinedTypeAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_predefinedTypeAST * object = (const cPtr_predefinedTypeAST *) inObject ;
  macroValidSharedObject (object, cPtr_predefinedTypeAST) ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("Predefined type ").add_operation (object->mAttribute_mPredefinedTypeName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 108)), GALGAS_primitiveTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (object->mAttribute_mPredefinedTypeName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 110))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 110)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 110)), object->mAttribute_mPredefinedTypeName, object->mAttribute_mKind  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 109)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 107)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_predefinedTypeAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_predefinedTypeAST.mSlotID,
                                         extensionMethod_predefinedTypeAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_predefinedTypeAST_semanticAnalysis (defineExtensionMethod_predefinedTypeAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@graphDeclarationAST semanticAnalysis'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_graphDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                  const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                  const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                  const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                  GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_graphDeclarationAST * object = (const cPtr_graphDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_graphDeclarationAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_graphTypeProxy = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mGraphTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 132)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_associatedListTypeProxy = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mAssociatedListTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 133)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_associatedListElementTypeProxy = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (object->mAttribute_mAssociatedListTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 136)), object->mAttribute_mAssociatedListTypeName.mAttribute_location  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 136)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 134)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_associatedListTypeProxy.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 137)).objectCompare (GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("semanticAnalysis.galgas", 137)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mAssociatedListTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the '@").add_operation (object->mAttribute_mAssociatedListTypeName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 138)).add_operation (GALGAS_string ("' type should be a list"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 138))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 138)) ;
  }
  GALGAS_stringset var_reservedModifierNames = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 141)) ;
  var_reservedModifierNames.addAssign_operation (GALGAS_string ("noteNode")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 142)) ;
  var_reservedModifierNames.addAssign_operation (GALGAS_string ("addArc")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 143)) ;
  cEnumerator_graphInsertModifierList enumerator_9276 (object->mAttribute_mInsertModifierList, kEnumeration_up) ;
  while (enumerator_9276.hasCurrentObject ()) {
    const enumGalgasBool test_2 = var_reservedModifierNames.getter_hasKey (enumerator_9276.current_mInsertModifierName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 145)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 145)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (enumerator_9276.current_mInsertModifierName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_3, GALGAS_string ("the '").add_operation (enumerator_9276.current_mInsertModifierName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 146)).add_operation (GALGAS_string ("' setter name is reserved for a graph type"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 146))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 146)) ;
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters (enumerator_9276.current_mInsertErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 148)) ;
    }
    enumerator_9276.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("graph ").add_operation (object->mAttribute_mGraphTypeName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 152)), GALGAS_graphDeclarationForGeneration::constructor_new (var_graphTypeProxy, var_associatedListTypeProxy, var_associatedListElementTypeProxy, object->mAttribute_mInsertModifierList  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 153)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 151)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_graphDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_graphDeclarationAST.mSlotID,
                                         extensionMethod_graphDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_graphDeclarationAST_semanticAnalysis (defineExtensionMethod_graphDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@externTypeDeclarationAST semanticAnalysis'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_externTypeDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                       const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                       const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                       const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                       GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externTypeDeclarationAST * object = (const cPtr_externTypeDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externTypeDeclarationAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_externTypeProxy = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mExternTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 168)) ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extern type ").add_operation (object->mAttribute_mExternTypeName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 171)), GALGAS_externTypeDeclarationForGeneration::constructor_new (var_externTypeProxy, object->mAttribute_mExternTypeName.mAttribute_string, object->mAttribute_mCppPreDeclarationCode, object->mAttribute_mCppClassCode  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 172)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 170)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_externTypeDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_externTypeDeclarationAST.mSlotID,
                                         extensionMethod_externTypeDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_externTypeDeclarationAST_semanticAnalysis (defineExtensionMethod_externTypeDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@arrayDeclarationAST semanticAnalysis'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_arrayDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                  const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                  const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                  const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                  GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_arrayDeclarationAST * object = (const cPtr_arrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_arrayDeclarationAST) ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("array ").add_operation (object->mAttribute_mArrayTypeName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 189)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 189)), GALGAS_arrayTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mArrayTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 191)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mElementTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 192)), object->mAttribute_mDimension.getter_uint (SOURCE_FILE ("semanticAnalysis.galgas", 193))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 190)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 188)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_arrayDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_arrayDeclarationAST.mSlotID,
                                         extensionMethod_arrayDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_arrayDeclarationAST_semanticAnalysis (defineExtensionMethod_arrayDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@listmapDeclarationAST semanticAnalysis'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_listmapDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                    const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                    const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                    const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                    GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listmapDeclarationAST * object = (const cPtr_listmapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listmapDeclarationAST) ;
  GALGAS_typeKindEnum var_typeKindEnum ;
  GALGAS_typedPropertyList var_listTypeAttributeList ;
  GALGAS_bool joker_11913_3 ; // Joker input parameter
  GALGAS_bool joker_11913_2 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_11913_1 ; // Joker input parameter
  GALGAS_bool joker_11957 ; // Joker input parameter
  GALGAS_attributeMap joker_12014_20 ; // Joker input parameter
  GALGAS_typedPropertyList joker_12014_19 ; // Joker input parameter
  GALGAS_constructorMap joker_12014_18 ; // Joker input parameter
  GALGAS_getterMap joker_12014_17 ; // Joker input parameter
  GALGAS_setterMap joker_12014_16 ; // Joker input parameter
  GALGAS_instanceMethodMap joker_12014_15 ; // Joker input parameter
  GALGAS_classMethodMap joker_12014_14 ; // Joker input parameter
  GALGAS_enumerationDescriptorList joker_12014_13 ; // Joker input parameter
  GALGAS_stringlist joker_12014_12 ; // Joker input parameter
  GALGAS_uint joker_12014_11 ; // Joker input parameter
  GALGAS_functionSignature joker_12014_10 ; // Joker input parameter
  GALGAS_constantIndexMap joker_12014_9 ; // Joker input parameter
  GALGAS_enumConstantList joker_12014_8 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_12014_7 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_12014_6 ; // Joker input parameter
  GALGAS_bool joker_12014_5 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_12014_4 ; // Joker input parameter
  GALGAS_string joker_12014_3 ; // Joker input parameter
  GALGAS_string joker_12014_2 ; // Joker input parameter
  GALGAS_headerKind joker_12014_1 ; // Joker input parameter
  constinArgument_inSemanticContext.mAttribute_mTypeMap.method_searchKey (object->mAttribute_mAssociatedListTypeName, joker_11913_3, joker_11913_2, joker_11913_1, var_typeKindEnum, joker_11957, var_listTypeAttributeList, joker_12014_20, joker_12014_19, joker_12014_18, joker_12014_17, joker_12014_16, joker_12014_15, joker_12014_14, joker_12014_13, joker_12014_12, joker_12014_11, joker_12014_10, joker_12014_9, joker_12014_8, joker_12014_7, joker_12014_6, joker_12014_5, joker_12014_4, joker_12014_3, joker_12014_2, joker_12014_1, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 207)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_typeKindEnum.objectCompare (GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("semanticAnalysis.galgas", 216)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mAssociatedListTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("associated type should be a list type")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 217)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("list map ").add_operation (object->mAttribute_mListmapTypeName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 221)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 221)), GALGAS_listmapTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mListmapTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 223)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mAssociatedListTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 224)), var_listTypeAttributeList, GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (object->mAttribute_mListmapTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 226)), object->mAttribute_mListmapTypeName.mAttribute_location  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 226)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 226))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 222)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 220)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_listmapDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_listmapDeclarationAST.mSlotID,
                                         extensionMethod_listmapDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_listmapDeclarationAST_semanticAnalysis (defineExtensionMethod_listmapDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@mapDeclarationAST semanticAnalysis'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_mapDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapDeclarationAST * object = (const cPtr_mapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapDeclarationAST) ;
  GALGAS_typedPropertyList var_typedAttributeList = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 299)) ;
  GALGAS_attributeIndexMap var_attributeMap = GALGAS_attributeIndexMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 300)) ;
  cEnumerator_propertyInCollectionListAST enumerator_15745 (object->mAttribute_mPropertyList, kEnumeration_up) ;
  while (enumerator_15745.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_t = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_15745.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 302)) ;
    GALGAS_bool var_hasSetter = GALGAS_bool (true) ;
    GALGAS_bool var_hasGetter = GALGAS_bool (true) ;
    var_typedAttributeList.addAssign_operation (var_t, enumerator_15745.current_mPropertyName (HERE), var_hasSetter, var_hasGetter  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 305)) ;
    const enumGalgasBool test_0 = function_forbiddenKeysForMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 310)).getter_hasKey (enumerator_15745.current_mPropertyName (HERE).mAttribute_string COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 310)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_m = GALGAS_string ("an attribute cannot be named:") ;
      cEnumerator_stringset enumerator_16137 (function_forbiddenKeysForMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 312)), kEnumeration_up) ;
      while (enumerator_16137.hasCurrentObject ()) {
        var_m.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_16137.current (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 313)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 313)) ;
        enumerator_16137.gotoNextObject () ;
      }
      var_m.plusAssign_operation(GALGAS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 315)) ;
      GALGAS_location location_1 (enumerator_15745.current_mPropertyName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_1, var_m  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 316)) ;
    }
    {
    var_attributeMap.setter_insertKey (enumerator_15745.current_mPropertyName (HERE), var_t, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 318)) ;
    }
    enumerator_15745.gotoNextObject () ;
  }
  GALGAS_insertMethodMap var_insertMethodMap = GALGAS_insertMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 321)) ;
  cEnumerator_insertMethodListAST enumerator_16410 (object->mAttribute_mInsertMethodList, kEnumeration_up) ;
  while (enumerator_16410.hasCurrentObject ()) {
    {
    var_insertMethodMap.setter_insertKey (enumerator_16410.current_mInsertMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 323)) ;
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters (enumerator_16410.current_mErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 324)) ;
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters (enumerator_16410.current_mShadowErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 325)) ;
    }
    enumerator_16410.gotoNextObject () ;
  }
  GALGAS_searchMethodMap var_searchMethodMap = GALGAS_searchMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 328)) ;
  cEnumerator_mapSearchMethodListAST enumerator_16685 (object->mAttribute_mSearchMethodList, kEnumeration_up) ;
  while (enumerator_16685.hasCurrentObject ()) {
    {
    var_searchMethodMap.setter_insertKey (enumerator_16685.current_mSearchMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 330)) ;
    }
    {
    routine_check_5F_K_5F_escapeCharacters (enumerator_16685.current_mErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 331)) ;
    }
    enumerator_16685.gotoNextObject () ;
  }
  cEnumerator_mapRemoveMethodListAST enumerator_16851 (object->mAttribute_mRemoveMethodList, kEnumeration_up) ;
  while (enumerator_16851.hasCurrentObject ()) {
    {
    var_insertMethodMap.setter_insertKey (enumerator_16851.current_mMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 335)) ;
    }
    {
    routine_check_5F_K_5F_escapeCharacters (enumerator_16851.current_mErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 336)) ;
    }
    enumerator_16851.gotoNextObject () ;
  }
  cEnumerator_insertOrReplaceDeclarationListAST enumerator_17068 (object->mAttribute_mInsertOrReplaceDeclarationListAST, kEnumeration_up) ;
  GALGAS_uint index_17027 ((uint32_t) 0) ;
  while (enumerator_17068.hasCurrentObject ()) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, index_17027.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      inCompiler->emitSemanticWarning (enumerator_17068.current_mInsertOrReplaceDeclarationLocation (HERE), GALGAS_string ("the 'insertOrReplace' setter is already declared")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 341)) ;
    }
    enumerator_17068.gotoNextObject () ;
    index_17027.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 339)) ;
  }
  GALGAS_bool var_hasInsertOrReplaceModifier = GALGAS_bool (kIsStrictSup, object->mAttribute_mInsertOrReplaceDeclarationListAST.getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 344)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  const enumGalgasBool test_3 = var_hasInsertOrReplaceModifier.operator_and (var_insertMethodMap.getter_hasKey (GALGAS_string ("insertOrReplace") COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 345)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 345)).boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_location var_insertOrReplaceDeclarationLocation ;
    object->mAttribute_mInsertOrReplaceDeclarationListAST.method_first (var_insertOrReplaceDeclarationLocation, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 347)) ;
    inCompiler->emitSemanticError (var_insertOrReplaceDeclarationLocation, GALGAS_string ("the insertOrReplace' setter cannot be declared : an insert modifier or a remove modifier has been declared with this name")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 348)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("map ").add_operation (object->mAttribute_mMapTypeName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 361)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 361)), GALGAS_mapTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mMapTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 363)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (object->mAttribute_mMapTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 364)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 364)), object->mAttribute_mMapTypeName.mAttribute_location  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 364)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 364)), object->mAttribute_mMapTypeName, var_typedAttributeList, object->mAttribute_mInsertMethodList, object->mAttribute_mSearchMethodList, object->mAttribute_mRemoveMethodList, var_hasInsertOrReplaceModifier  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 362)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 360)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_mapDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_mapDeclarationAST.mSlotID,
                                         extensionMethod_mapDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_mapDeclarationAST_semanticAnalysis (defineExtensionMethod_mapDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@externFunctionDeclarationAST semanticAnalysis'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_externFunctionDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                           const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                           const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                           const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                           GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externFunctionDeclarationAST * object = (const cPtr_externFunctionDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externFunctionDeclarationAST) ;
  GALGAS_formalInputParameterListForGeneration var_formalArgumentList = GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 488)) ;
  cEnumerator_formalInputParameterListAST enumerator_24040 (object->mAttribute_mFormalArgumentList, kEnumeration_up) ;
  while (enumerator_24040.hasCurrentObject ()) {
    var_formalArgumentList.addAssign_operation (enumerator_24040.current_mFormalSelector (HERE), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_24040.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 492)), enumerator_24040.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 493)), enumerator_24040.current_mFormalArgumentName (HERE), enumerator_24040.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 490)) ;
    enumerator_24040.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extern func ").add_operation (object->mAttribute_mFunctionName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 498)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 498)), GALGAS_functionPrototypeDeclarationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("func-").add_operation (object->mAttribute_mFunctionName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 501)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 501)), object->mAttribute_mFunctionName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 502)), var_formalArgumentList, GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mResultTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 504))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 499)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 497)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_externFunctionDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_externFunctionDeclarationAST.mSlotID,
                                         extensionMethod_externFunctionDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_externFunctionDeclarationAST_semanticAnalysis (defineExtensionMethod_externFunctionDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@externRoutineDeclarationAST semanticAnalysis'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_externRoutineDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                          const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                          const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                          const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                          GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externRoutineDeclarationAST * object = (const cPtr_externRoutineDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externRoutineDeclarationAST) ;
  GALGAS_formalParameterListForGeneration var_formalArgumentList = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 515)) ;
  cEnumerator_formalParameterListAST enumerator_25141 (object->mAttribute_mFormalArgumentList, kEnumeration_up) ;
  while (enumerator_25141.hasCurrentObject ()) {
    var_formalArgumentList.addAssign_operation (enumerator_25141.current_mFormalSelector (HERE), enumerator_25141.current_mFormalArgumentPassingMode (HERE), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_25141.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 520)), enumerator_25141.current_mFormalArgumentName (HERE), enumerator_25141.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 522))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 517)) ;
    enumerator_25141.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extern proc ").add_operation (object->mAttribute_mRoutineName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 525)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 525)), GALGAS_routinePrototypeDeclarationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("proc-").add_operation (object->mAttribute_mRoutineName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 528)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 528)), object->mAttribute_mRoutineName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 529)), var_formalArgumentList  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 526)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 524)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_externRoutineDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_externRoutineDeclarationAST.mSlotID,
                                         extensionMethod_externRoutineDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_externRoutineDeclarationAST_semanticAnalysis (defineExtensionMethod_externRoutineDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@routineDeclarationAST semanticAnalysis'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_routineDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                    const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                    const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                    const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                    GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_routineDeclarationAST * object = (const cPtr_routineDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_routineDeclarationAST) ;
  GALGAS_formalParameterListForGeneration var_formalArgumentList = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 542)) ;
  GALGAS_semanticInstructionListForGeneration var_instructionList ;
  GALGAS_analysisContext var_analysisContext = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 547)), GALGAS_string::makeEmptyString (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 549))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 544)) ;
  {
  routine_analyzeRoutineBody (var_analysisContext, object->mAttribute_mFormalArgumentList, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 553)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 554)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 555)), GALGAS_string::makeEmptyString (), object->mAttribute_mRoutineInstructionList, object->mAttribute_mEndOfRoutineInstructionList, var_instructionList, var_formalArgumentList, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 550)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("proc ").add_operation (object->mAttribute_mRoutineName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 564)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 564)), GALGAS_routineImplementationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("proc-").add_operation (object->mAttribute_mRoutineName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 567)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 567)), object->mAttribute_mRoutineName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 568)), var_formalArgumentList, GALGAS_bool (false), var_instructionList  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 565)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 563)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_routineDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_routineDeclarationAST.mSlotID,
                                         extensionMethod_routineDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_routineDeclarationAST_semanticAnalysis (defineExtensionMethod_routineDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@classDeclarationAST semanticAnalysis'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_classDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                  const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                  const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                  const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                  GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classDeclarationAST * object = (const cPtr_classDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_classDeclarationAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mClassTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 583)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_superClassProxy ;
  GALGAS_typedPropertyList var_allAttributeList ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mSuperClassName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 589)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_superClassProxy = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 590)) ;
    var_allAttributeList = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 591)) ;
    GALGAS_bool var_generatedInSeparateFileFeature = GALGAS_bool (false) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, object->mAttribute_mClassFeatureList.getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 593)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      cEnumerator_lstringlist enumerator_28031 (object->mAttribute_mClassFeatureList, kEnumeration_up) ;
      while (enumerator_28031.hasCurrentObject ()) {
        const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_28031.current_mValue (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 595)).objectCompare (GALGAS_string ("generatedInSeparateFile"))).boolEnum () ;
        if (kBoolTrue == test_2) {
          const enumGalgasBool test_3 = var_generatedInSeparateFileFeature.boolEnum () ;
          if (kBoolTrue == test_3) {
            GALGAS_location location_4 (enumerator_28031.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
            inCompiler->emitSemanticError (location_4, GALGAS_string ("the 'generatedInSeparateFile' is already named")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 597)) ;
          }
          var_generatedInSeparateFileFeature = GALGAS_bool (true) ;
        }else if (kBoolFalse == test_2) {
          GALGAS_location location_5 (enumerator_28031.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_5, GALGAS_string ("only the 'generatedInSeparateFile' feature is allowed here")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 601)) ;
        }
        enumerator_28031.gotoNextObject () ;
      }
    }
  }else if (kBoolFalse == test_0) {
    var_superClassProxy = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mSuperClassName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 606)) ;
    var_allAttributeList = var_superClassProxy.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 607)) ;
    const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, object->mAttribute_mClassFeatureList.getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 608)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_6) {
      cEnumerator_lstringlist enumerator_28656 (object->mAttribute_mClassFeatureList, kEnumeration_up) ;
      while (enumerator_28656.hasCurrentObject ()) {
        GALGAS_location location_7 (enumerator_28656.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_7, GALGAS_string ("a class that has a super class does not accept any feature")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 610)) ;
        enumerator_28656.gotoNextObject () ;
      }
    }
  }
  GALGAS_typedPropertyList var_typedAttributeList = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 615)) ;
  GALGAS_attributeIndexMap var_attributeMap = GALGAS_attributeIndexMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 616)) ;
  cEnumerator_propertyInCollectionListAST enumerator_28924 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_28924.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_t = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_28924.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 618)) ;
    GALGAS_bool var_hasSetter = GALGAS_bool (false) ;
    GALGAS_bool var_hasGetter = GALGAS_bool (true) ;
    cEnumerator_lstringlist enumerator_29102 (enumerator_28924.current_mFeatureList (HERE), kEnumeration_up) ;
    while (enumerator_29102.hasCurrentObject ()) {
      const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, enumerator_29102.current_mValue (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 622)).objectCompare (GALGAS_string ("setter"))).boolEnum () ;
      if (kBoolTrue == test_8) {
        const enumGalgasBool test_9 = var_hasSetter.boolEnum () ;
        if (kBoolTrue == test_9) {
          GALGAS_location location_10 (enumerator_29102.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_10, GALGAS_string ("the 'setter' feature is already named")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 624)) ;
        }
        var_hasSetter = GALGAS_bool (true) ;
      }else if (kBoolFalse == test_8) {
        const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, enumerator_29102.current_mValue (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 627)).objectCompare (GALGAS_string ("nogetter"))).boolEnum () ;
        if (kBoolTrue == test_11) {
          const enumGalgasBool test_12 = var_hasGetter.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 628)).boolEnum () ;
          if (kBoolTrue == test_12) {
            GALGAS_location location_13 (enumerator_29102.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
            inCompiler->emitSemanticError (location_13, GALGAS_string ("the 'nogetter' feature is already named")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 629)) ;
          }
          var_hasGetter = GALGAS_bool (false) ;
        }else if (kBoolFalse == test_11) {
          GALGAS_location location_14 (enumerator_29102.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_14, GALGAS_string ("only the 'setter' or 'nogetter' are allowed here")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 633)) ;
        }
      }
      enumerator_29102.gotoNextObject () ;
    }
    var_typedAttributeList.addAssign_operation (var_t, enumerator_28924.current_mPropertyName (HERE), var_hasSetter, var_hasGetter  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 636)) ;
    var_allAttributeList.addAssign_operation (var_t, enumerator_28924.current_mPropertyName (HERE), var_hasSetter, var_hasGetter  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 641)) ;
    {
    var_attributeMap.setter_insertKey (enumerator_28924.current_mPropertyName (HERE), var_t, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 646)) ;
    }
    enumerator_28924.gotoNextObject () ;
  }
  GALGAS_string var_sortString = var_selfType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 649)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_t = var_selfType.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 650)) ;
  if (constinArgument_inSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 651)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 651)).isValid ()) {
    uint32_t variant_29950 = constinArgument_inSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 651)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 651)).uintValue () ;
    bool loop_29950 = true ;
    while (loop_29950) {
      loop_29950 = var_t.getter_isNull (SOURCE_FILE ("semanticAnalysis.galgas", 652)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 652)).isValid () ;
      if (loop_29950) {
        loop_29950 = var_t.getter_isNull (SOURCE_FILE ("semanticAnalysis.galgas", 652)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 652)).boolValue () ;
      }
      if (loop_29950 && (0 == variant_29950)) {
        loop_29950 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticAnalysis.galgas", 651)) ;
      }
      if (loop_29950) {
        variant_29950 -- ;
        var_sortString = var_t.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 653)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 653)).add_operation (var_sortString, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 653)) ;
        var_t = var_t.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 654)) ;
      }
    }
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("class ").add_operation (object->mAttribute_mClassTypeName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 658)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 658)), GALGAS_classTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mClassTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 660)), object->mAttribute_mIsAbstract, object->mAttribute_mClassTypeName, var_superClassProxy, var_allAttributeList, var_typedAttributeList, var_selfType.getter_mGenerateHeaderInSeparateFile (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 666))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 659)), var_sortString  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 657)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_classDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_classDeclarationAST.mSlotID,
                                         extensionMethod_classDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_classDeclarationAST_semanticAnalysis (defineExtensionMethod_classDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@functionDeclarationAST semanticAnalysis'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_functionDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                     const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                     const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                     const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                     GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_functionDeclarationAST * object = (const cPtr_functionDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_functionDeclarationAST) ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration ;
  GALGAS_formalInputParameterListForGeneration var_formalInputParameterList ;
  GALGAS_unifiedTypeMap_2D_proxy var_returnType ;
  GALGAS_string var_resultVariableCppName ;
  GALGAS_analysisContext var_analysisContext = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 759)), GALGAS_string::makeEmptyString (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 761))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 756)) ;
  {
  routine_analyzeFunctionBody (var_analysisContext, object->mAttribute_mFormalArgumentList, GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 765)), GALGAS_string::makeEmptyString (), object->mAttribute_mFunctionInstructionList, object->mAttribute_mResultVariableName, object->mAttribute_mResultTypeName, object->mAttribute_mEndOfFunctionInstructionList, var_formalInputParameterList, var_returnType, var_resultVariableCppName, var_semanticInstructionListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 762)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("function ").add_operation (object->mAttribute_mFunctionName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 778)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 778)), GALGAS_functionImplementationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("func-").add_operation (object->mAttribute_mFunctionName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 781)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 781)), object->mAttribute_mFunctionName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 782)), var_formalInputParameterList, var_returnType, var_resultVariableCppName, var_semanticInstructionListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 779)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 777)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_functionDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_functionDeclarationAST.mSlotID,
                                         extensionMethod_functionDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_functionDeclarationAST_semanticAnalysis (defineExtensionMethod_functionDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@onceFunctionDeclarationAST semanticAnalysis'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_onceFunctionDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                         const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                         const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                         const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                         GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_onceFunctionDeclarationAST * object = (const cPtr_onceFunctionDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_onceFunctionDeclarationAST) ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration ;
  GALGAS_unifiedTypeMap_2D_proxy var_returnType ;
  GALGAS_string var_resultVariableCppName ;
  GALGAS_analysisContext var_analysisContext = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 804)), GALGAS_string::makeEmptyString (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 806))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 801)) ;
  {
  GALGAS_formalInputParameterListForGeneration joker_36190 ; // Joker input parameter
  routine_analyzeFunctionBody (var_analysisContext, GALGAS_formalInputParameterListAST::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 809)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 810)), GALGAS_string::makeEmptyString (), object->mAttribute_mFunctionInstructionList, object->mAttribute_mResultVariableName, object->mAttribute_mResultTypeName, object->mAttribute_mEndOfFunctionInstructionList, joker_36190, var_returnType, var_resultVariableCppName, var_semanticInstructionListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 807)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("once function ").add_operation (object->mAttribute_mFunctionName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 823)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 823)), GALGAS_onceFunctionDeclarationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("func-").add_operation (object->mAttribute_mFunctionName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 826)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 826)), object->mAttribute_mFunctionName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 827)), var_returnType, var_resultVariableCppName, var_semanticInstructionListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 824)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 822)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_onceFunctionDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_onceFunctionDeclarationAST.mSlotID,
                                         extensionMethod_onceFunctionDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_onceFunctionDeclarationAST_semanticAnalysis (defineExtensionMethod_onceFunctionDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@filewrapperDeclarationAST semanticAnalysis'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_filewrapperDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                        const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                        const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                        const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                        GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperDeclarationAST * object = (const cPtr_filewrapperDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperDeclarationAST) ;
  GALGAS_wrapperFileMap var_wrapperFileMap ;
  GALGAS_wrapperDirectoryMap var_wrapperDirectoryMap ;
  GALGAS_lstring joker_37604 ; // Joker input parameter
  GALGAS_lstringlist joker_37611 ; // Joker input parameter
  GALGAS_filewrapperTemplateMap joker_37708_2 ; // Joker input parameter
  GALGAS_bool joker_37708_1 ; // Joker input parameter
  constinArgument_inSemanticContext.mAttribute_mFilewrapperMap.method_searchKey (object->mAttribute_mFilewrapperName, joker_37604, joker_37611, var_wrapperFileMap, var_wrapperDirectoryMap, joker_37708_2, joker_37708_1, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 846)) ;
  GALGAS_string var_absoluteSourcePath ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mFilewrapperPath.mAttribute_string.getter_firstCharacterOrNul (SOURCE_FILE ("semanticAnalysis.galgas", 856)).objectCompare (GALGAS_char (TO_UNICODE (47)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_absoluteSourcePath = object->mAttribute_mFilewrapperPath.mAttribute_string ;
  }else if (kBoolFalse == test_0) {
    var_absoluteSourcePath = object->mAttribute_mSourceFileAbsolutePath.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("semanticAnalysis.galgas", 859)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 859)).add_operation (object->mAttribute_mFilewrapperPath.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 859)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 859)) ;
  }
  const enumGalgasBool test_1 = var_absoluteSourcePath.getter_directoryExists (SOURCE_FILE ("semanticAnalysis.galgas", 861)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 861)).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_location location_2 (object->mAttribute_mFilewrapperPath.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_2, GALGAS_string ("The '").add_operation (var_absoluteSourcePath, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 862)).add_operation (GALGAS_string ("' directory does not exist"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 862))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 862)) ;
  }else if (kBoolFalse == test_1) {
    GALGAS_filewrapperTemplateListForGeneration var_filewrapperTemplateListForGeneration = GALGAS_filewrapperTemplateListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 865)) ;
    cEnumerator_filewrapperTemplateListAST enumerator_38331 (object->mAttribute_mFilewrapperTemplateList, kEnumeration_up) ;
    while (enumerator_38331.hasCurrentObject ()) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_38331.current_mFilewrapperTemplatePath (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 867)).getter_firstCharacterOrNul (SOURCE_FILE ("semanticAnalysis.galgas", 867)).objectCompare (GALGAS_char (TO_UNICODE (47)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_location location_4 (enumerator_38331.current_mFilewrapperTemplatePath (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_4, GALGAS_string ("the path should not begin with a '/'; it is relative to filewrapper path '").add_operation (var_absoluteSourcePath, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 868)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 868))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 868)) ;
      }
      GALGAS_string var_absoluteTemplatePath = var_absoluteSourcePath.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 870)).add_operation (enumerator_38331.current_mFilewrapperTemplatePath (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 870)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 870)) ;
      GALGAS_templateInstructionListAST var_resultingInstructionList ;
      var_resultingInstructionList.drop () ;
      cGrammar_templateGrammar::_performSourceFileParsing_ (inCompiler, GALGAS_lstring::constructor_new (var_absoluteTemplatePath, enumerator_38331.current_mFilewrapperTemplatePath (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 873))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 873)), var_resultingInstructionList  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 873)) ;
      GALGAS_templateVariableMap var_templateVariableMap = GALGAS_templateVariableMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 875)) ;
      GALGAS_formalInputParameterListForGeneration var_filewrapperTemplateFormalInputParameters = GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 876)) ;
      cEnumerator_formalTemplateInputParameterListAST enumerator_39125 (enumerator_38331.current_mFilewrapperTemplateFormalInputParameters (HERE), kEnumeration_up) ;
      while (enumerator_39125.hasCurrentObject ()) {
        GALGAS_unifiedTypeMap_2D_proxy var_type = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_39125.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 878)) ;
        GALGAS_string var_cppVarName = GALGAS_string ("in_").add_operation (enumerator_39125.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 879)).getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 879)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 879)) ;
        {
        var_templateVariableMap.setter_insertKey (enumerator_39125.current_mFormalArgumentName (HERE), var_type, var_cppVarName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 880)) ;
        }
        var_filewrapperTemplateFormalInputParameters.addAssign_operation (enumerator_39125.current_mFormalTemplateSelector (HERE), var_type, var_cppVarName, enumerator_39125.current_mFormalArgumentName (HERE), GALGAS_bool (true)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 881)) ;
        enumerator_39125.gotoNextObject () ;
      }
      GALGAS_templateInstructionListForGeneration var_templateInstructionListForGeneration = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 884)) ;
      GALGAS_templateAnalysisContext var_templateAnalysisContext = GALGAS_templateAnalysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_templateVariableMap  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 885)) ;
      {
      routine_templateInstructionListAnalysis (var_templateAnalysisContext, var_resultingInstructionList, var_templateInstructionListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 889)) ;
      }
      var_filewrapperTemplateListForGeneration.addAssign_operation (enumerator_38331.current_mFilewrapperTemplateName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 892)), var_filewrapperTemplateFormalInputParameters, var_templateInstructionListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 891)) ;
      enumerator_38331.gotoNextObject () ;
    }
    ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("filewrapper ").add_operation (object->mAttribute_mFilewrapperName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 898)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 898)), GALGAS_filewrapperDeclarationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("filewrapper-").add_operation (object->mAttribute_mFilewrapperName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 901)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 901)), object->mAttribute_mFilewrapperName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 902)), object->mAttribute_mFilewrapperPath.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 903)), var_wrapperFileMap, var_wrapperDirectoryMap, var_filewrapperTemplateListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 899)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 897)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_filewrapperDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_filewrapperDeclarationAST.mSlotID,
                                         extensionMethod_filewrapperDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_filewrapperDeclarationAST_semanticAnalysis (defineExtensionMethod_filewrapperDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@optionComponentDeclarationAST semanticAnalysis'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_optionComponentDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                            const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                            const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                            const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                            GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_optionComponentDeclarationAST * object = (const cPtr_optionComponentDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_optionComponentDeclarationAST) ;
  GALGAS_bool var_isPredefined ;
  GALGAS_commandLineOptionMap var_boolOptionMap ;
  GALGAS_commandLineOptionMap var_uintOptionMap ;
  GALGAS_commandLineOptionMap var_stringOptionMap ;
  GALGAS_commandLineOptionMap var_stringListOptionMap ;
  constinArgument_inSemanticContext.mAttribute_mOptionComponentMapForSemanticAnalysis.method_searchKey (object->mAttribute_mOptionComponentName, var_isPredefined, var_boolOptionMap, var_uintOptionMap, var_stringOptionMap, var_stringListOptionMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 923)) ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("option ").add_operation (object->mAttribute_mOptionComponentName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 933)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 933)), GALGAS_optionComponentForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("option-").add_operation (object->mAttribute_mOptionComponentName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 936)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 936)), var_isPredefined, object->mAttribute_mOptionComponentName.mAttribute_string, var_boolOptionMap, var_uintOptionMap, var_stringOptionMap, var_stringListOptionMap  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 934)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 932)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_optionComponentDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_optionComponentDeclarationAST.mSlotID,
                                         extensionMethod_optionComponentDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_optionComponentDeclarationAST_semanticAnalysis (defineExtensionMethod_optionComponentDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@abstractExtensionMethodAST semanticAnalysis'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_abstractExtensionMethodAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                         const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                         const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                         const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                         GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractExtensionMethodAST * object = (const cPtr_abstractExtensionMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractExtensionMethodAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 955)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 957)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 957)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mAbstractExtensionMethodName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("cannot declare a extension method: '@").add_operation (var_selfType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 958)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 958)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 958))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 958)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = var_selfType.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 959)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (object->mAttribute_mAbstractExtensionMethodName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_3, GALGAS_string ("cannot declare an abstract extension method: '@").add_operation (var_selfType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 960)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 960)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 960))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 960)) ;
    }
  }
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 963)) ;
  cEnumerator_formalParameterListAST enumerator_43350 (object->mAttribute_mAbstractExtensionMethodFormalParameterList, kEnumeration_up) ;
  while (enumerator_43350.hasCurrentObject ()) {
    var_formalParameterListForGeneration.addAssign_operation (enumerator_43350.current_mFormalSelector (HERE), enumerator_43350.current_mFormalArgumentPassingMode (HERE), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_43350.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 968)), enumerator_43350.current_mFormalArgumentName (HERE), enumerator_43350.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 970))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 965)) ;
    enumerator_43350.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("abstract extension method ").add_operation (object->mAttribute_mAbstractExtensionMethodName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 974)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 974)), GALGAS_abstractExtensionMethodForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("method-").add_operation (var_selfType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 977)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 977)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 977)).add_operation (object->mAttribute_mAbstractExtensionMethodName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 977)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 977)), var_selfType, object->mAttribute_mAbstractExtensionMethodName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 979)), var_formalParameterListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 975)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 973)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_abstractExtensionMethodAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_abstractExtensionMethodAST.mSlotID,
                                         extensionMethod_abstractExtensionMethodAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractExtensionMethodAST_semanticAnalysis (defineExtensionMethod_abstractExtensionMethodAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@extensionMethodAST semanticAnalysis'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_extensionMethodAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                 const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                 const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                 const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                 GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extensionMethodAST * object = (const cPtr_extensionMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_extensionMethodAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 992)) ;
  GALGAS_string var_selfObjectName ;
  GALGAS_string var_selfObjectAccessor ;
  GALGAS_bool var_implementedAsFunction ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_selfType.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 997)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 997)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_selfObjectName = GALGAS_string ("object") ;
    var_selfObjectAccessor = GALGAS_string ("object->") ;
    var_implementedAsFunction = GALGAS_bool (false) ;
  }else if (kBoolFalse == test_0) {
    var_selfObjectName = GALGAS_string ("inObject") ;
    var_selfObjectAccessor = GALGAS_string ("inObject.") ;
    var_implementedAsFunction = GALGAS_bool (true) ;
  }
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1007)) ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration ;
  GALGAS_analysisContext var_analysisContext = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfType, var_selfObjectName, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 1014))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1009)) ;
  {
  GALGAS_typedPropertyList temp_1 ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_selfType.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1019)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 1019)))).operator_or (GALGAS_bool (kIsEqual, var_selfType.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1019)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("semanticAnalysis.galgas", 1019)))) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1019)).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = var_selfType.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1020)) ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1021)) ;
  }
  routine_analyzeRoutineBody (var_analysisContext, object->mAttribute_mExtensionMethodFormalParameterList, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1018)), temp_1, GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1023)), var_selfObjectAccessor, object->mAttribute_mExtensionMethodInstructionList, object->mAttribute_mEndOfMethodLocation, var_semanticInstructionListForGeneration, var_formalParameterListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1015)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extension method ").add_operation (object->mAttribute_mExtensionMethodName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1032)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1032)), GALGAS_extensionMethodForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("method-").add_operation (var_selfType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1035)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1035)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1035)).add_operation (object->mAttribute_mExtensionMethodName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1035)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1035)), var_selfType, object->mAttribute_mExtensionMethodName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1037)), var_implementedAsFunction, var_formalParameterListForGeneration, var_selfType.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1040)), var_semanticInstructionListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1033)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1031)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extensionMethodAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_extensionMethodAST.mSlotID,
                                         extensionMethod_extensionMethodAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extensionMethodAST_semanticAnalysis (defineExtensionMethod_extensionMethodAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@overridingExtensionMethodAST semanticAnalysis'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_overridingExtensionMethodAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                           const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                           const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                           const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                           GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingExtensionMethodAST * object = (const cPtr_overridingExtensionMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingExtensionMethodAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1053)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1055)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 1055)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mOverridingExtensionMethodName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("cannot declare a extension method: '@").add_operation (var_selfType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1056)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1056)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1056))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1056)) ;
  }
  GALGAS_string var_baseTypeName = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMap_2D_proxy var_superType = var_selfType.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1060)) ;
  GALGAS_formalParameterSignature var_inheritedSignature = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1061)) ;
  GALGAS_location var_inheritedDeclarationLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1062)) ;
  if (constinArgument_inSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 1063)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1063)).isValid ()) {
    uint32_t variant_47255 = constinArgument_inSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 1063)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1063)).uintValue () ;
    bool loop_47255 = true ;
    while (loop_47255) {
      loop_47255 = var_superType.getter_isNull (SOURCE_FILE ("semanticAnalysis.galgas", 1064)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1064)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1064)).isValid () ;
      if (loop_47255) {
        loop_47255 = var_superType.getter_isNull (SOURCE_FILE ("semanticAnalysis.galgas", 1064)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1064)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1064)).boolValue () ;
      }
      if (loop_47255 && (0 == variant_47255)) {
        loop_47255 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticAnalysis.galgas", 1063)) ;
      }
      if (loop_47255) {
        variant_47255 -- ;
        const enumGalgasBool test_2 = var_superType.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1065)).getter_hasKey (object->mAttribute_mOverridingExtensionMethodName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1065)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1065)).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_methodQualifier var_qualifier ;
          GALGAS_methodKind joker_47563 ; // Joker input parameter
          GALGAS_bool joker_47616 ; // Joker input parameter
          GALGAS_string joker_47630 ; // Joker input parameter
          var_superType.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1067)).method_searchKey (object->mAttribute_mOverridingExtensionMethodName, joker_47563, var_inheritedSignature, var_inheritedDeclarationLocation, joker_47616, var_qualifier, joker_47630, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1067)) ;
          const enumGalgasBool test_3 = GALGAS_bool (kIsInfOrEqual, var_qualifier.objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticAnalysis.galgas", 1068)))).boolEnum () ;
          if (kBoolTrue == test_3) {
            var_baseTypeName = var_superType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1069)) ;
          }
        }
        var_superType = var_superType.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1072)) ;
      }
    }
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_location location_5 (object->mAttribute_mOverridingExtensionMethodName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_5, GALGAS_string ("this method is not declared by a super class")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1075)) ;
  }
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1078)) ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration ;
  GALGAS_analysisContext var_analysisContext = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfType, GALGAS_string ("object"), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 1085))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1080)) ;
  {
  GALGAS_typedPropertyList temp_6 ;
  const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, var_selfType.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1090)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 1090)))).operator_or (GALGAS_bool (kIsEqual, var_selfType.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1090)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("semanticAnalysis.galgas", 1090)))) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1090)).boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = var_selfType.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1091)) ;
  }else if (kBoolFalse == test_7) {
    temp_6 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1092)) ;
  }
  routine_analyzeRoutineBody (var_analysisContext, object->mAttribute_mOverridingExtensionMethodFormalParameterList, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1089)), temp_6, GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1094)), GALGAS_string ("object->"), object->mAttribute_mOverridingExtensionMethodInstructionList, object->mAttribute_mEndOfMethodLocation, var_semanticInstructionListForGeneration, var_formalParameterListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1086)) ;
  }
  const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_8) {
    {
    routine_checkMethodSignatures (var_formalParameterListForGeneration, object->mAttribute_mOverridingExtensionMethodName.getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1105)), var_inheritedSignature, var_inheritedDeclarationLocation, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1103)) ;
    }
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("override extension method ").add_operation (object->mAttribute_mOverridingExtensionMethodName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1112)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1112)), GALGAS_overridingExtensionMethodForGeneration::constructor_new (GALGAS_bool (false), GALGAS_string ("method-").add_operation (var_selfType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1115)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1115)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1115)).add_operation (object->mAttribute_mOverridingExtensionMethodName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1115)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1115)), var_selfType, var_baseTypeName, object->mAttribute_mOverridingExtensionMethodName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1118)), var_formalParameterListForGeneration, var_selfType.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1120)), var_semanticInstructionListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1113)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1111)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_overridingExtensionMethodAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_overridingExtensionMethodAST.mSlotID,
                                         extensionMethod_overridingExtensionMethodAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingExtensionMethodAST_semanticAnalysis (defineExtensionMethod_overridingExtensionMethodAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@overridingAbstractExtensionMethodAST semanticAnalysis'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_overridingAbstractExtensionMethodAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                                   const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                                   const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                   const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                                   GALGAS_semanticDeclarationSortedListForGeneration & /* ioArgument_ioSemanticDeclarationListForGeneration */,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingAbstractExtensionMethodAST * object = (const cPtr_overridingAbstractExtensionMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractExtensionMethodAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1133)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1135)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 1135)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mOverridingExtensionMethodName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("cannot declare a extension method: '@").add_operation (var_selfType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1136)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1136)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1136))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1136)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = var_selfType.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1137)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (object->mAttribute_mOverridingExtensionMethodName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_3, GALGAS_string ("cannot declare an abstract extension method: '@").add_operation (var_selfType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1138)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1138)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1138))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1138)) ;
    }
  }
  GALGAS_string var_baseTypeName = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMap_2D_proxy var_superType = var_selfType.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1142)) ;
  GALGAS_formalParameterSignature var_inheritedSignature = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1143)) ;
  GALGAS_location var_inheritedDeclarationLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1144)) ;
  if (constinArgument_inSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 1145)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1145)).isValid ()) {
    uint32_t variant_50758 = constinArgument_inSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 1145)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1145)).uintValue () ;
    bool loop_50758 = true ;
    while (loop_50758) {
      loop_50758 = var_superType.getter_isNull (SOURCE_FILE ("semanticAnalysis.galgas", 1146)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1146)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1146)).isValid () ;
      if (loop_50758) {
        loop_50758 = var_superType.getter_isNull (SOURCE_FILE ("semanticAnalysis.galgas", 1146)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1146)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1146)).boolValue () ;
      }
      if (loop_50758 && (0 == variant_50758)) {
        loop_50758 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticAnalysis.galgas", 1145)) ;
      }
      if (loop_50758) {
        variant_50758 -- ;
        const enumGalgasBool test_4 = var_superType.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1147)).getter_hasKey (object->mAttribute_mOverridingExtensionMethodName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1147)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1147)).boolEnum () ;
        if (kBoolTrue == test_4) {
          GALGAS_methodQualifier var_qualifier ;
          GALGAS_methodKind joker_51066 ; // Joker input parameter
          GALGAS_bool joker_51119 ; // Joker input parameter
          GALGAS_string joker_51133 ; // Joker input parameter
          var_superType.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1149)).method_searchKey (object->mAttribute_mOverridingExtensionMethodName, joker_51066, var_inheritedSignature, var_inheritedDeclarationLocation, joker_51119, var_qualifier, joker_51133, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1149)) ;
          const enumGalgasBool test_5 = GALGAS_bool (kIsInfOrEqual, var_qualifier.objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticAnalysis.galgas", 1150)))).boolEnum () ;
          if (kBoolTrue == test_5) {
            var_baseTypeName = var_superType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1151)) ;
          }
        }
        var_superType = var_superType.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1154)) ;
      }
    }
  }
  const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_6) {
    GALGAS_location location_7 (object->mAttribute_mOverridingExtensionMethodName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_7, GALGAS_string ("this getter is not declared by a super class")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1157)) ;
  }
  GALGAS_variableMap var_variableMap = GALGAS_variableMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 1160)) ;
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration ;
  {
  routine_buildLocalVariableMapAndSignature (constinArgument_inSemanticContext, object->mAttribute_mOverridingExtensionMethodFormalParameterList, var_variableMap, var_formalParameterListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1162)) ;
  }
  const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_8) {
    {
    routine_checkMethodSignatures (var_formalParameterListForGeneration, object->mAttribute_mOverridingExtensionMethodName.getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1172)), var_inheritedSignature, var_inheritedDeclarationLocation, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1170)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_overridingAbstractExtensionMethodAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_overridingAbstractExtensionMethodAST.mSlotID,
                                         extensionMethod_overridingAbstractExtensionMethodAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingAbstractExtensionMethodAST_semanticAnalysis (defineExtensionMethod_overridingAbstractExtensionMethodAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@abstractExtensionModifierAST semanticAnalysis'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_abstractExtensionModifierAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                           const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                           const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                           const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                           GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractExtensionModifierAST * object = (const cPtr_abstractExtensionModifierAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractExtensionModifierAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1187)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1189)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 1189)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mAbstractExtensionModifierName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("cannot declare a extension setter: '@").add_operation (var_selfType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1190)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1190)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1190))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1190)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = var_selfType.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1191)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (object->mAttribute_mAbstractExtensionModifierName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_3, GALGAS_string ("cannot declare an abstract extension setter: '@").add_operation (var_selfType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1192)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1192)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1192))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1192)) ;
    }
  }
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1195)) ;
  cEnumerator_formalParameterListAST enumerator_53094 (object->mAttribute_mAbstractExtensionModifierFormalParameterList, kEnumeration_up) ;
  while (enumerator_53094.hasCurrentObject ()) {
    var_formalParameterListForGeneration.addAssign_operation (enumerator_53094.current_mFormalSelector (HERE), enumerator_53094.current_mFormalArgumentPassingMode (HERE), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_53094.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1200)), enumerator_53094.current_mFormalArgumentName (HERE), enumerator_53094.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1202))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1197)) ;
    enumerator_53094.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string (" abstract extension setter ").add_operation (object->mAttribute_mAbstractExtensionModifierName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1206)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1206)), GALGAS_abstractExtensionModifierForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("setter-").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1209)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1209)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1209)).add_operation (object->mAttribute_mAbstractExtensionModifierName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1209)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1209)), var_selfType, object->mAttribute_mAbstractExtensionModifierName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1211)), var_formalParameterListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1207)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1205)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_abstractExtensionModifierAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_abstractExtensionModifierAST.mSlotID,
                                         extensionMethod_abstractExtensionModifierAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractExtensionModifierAST_semanticAnalysis (defineExtensionMethod_abstractExtensionModifierAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@extensionModifierAST semanticAnalysis'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_extensionModifierAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                   const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                   const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                   const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                   GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extensionModifierAST * object = (const cPtr_extensionModifierAST *) inObject ;
  macroValidSharedObject (object, cPtr_extensionModifierAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1224)) ;
  GALGAS_string var_selfObjectName ;
  GALGAS_string var_selfObjectAccessor ;
  GALGAS_bool var_implementedAsFunction ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_selfType.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1229)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 1229)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_selfObjectName = GALGAS_string ("object") ;
    var_selfObjectAccessor = GALGAS_string ("object->") ;
    var_implementedAsFunction = GALGAS_bool (false) ;
  }else if (kBoolFalse == test_0) {
    var_selfObjectName = GALGAS_string ("ioObject") ;
    var_selfObjectAccessor = GALGAS_string ("ioObject.") ;
    var_implementedAsFunction = GALGAS_bool (true) ;
  }
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1239)) ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration ;
  GALGAS_analysisContext var_analysisContext = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfType, var_selfObjectName, var_selfType  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1241)) ;
  {
  routine_analyzeRoutineBody (var_analysisContext, object->mAttribute_mExtensionModifierFormalParameterList, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1250)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1251)), var_selfType.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1252)), var_selfObjectAccessor, object->mAttribute_mExtensionModifierInstructionList, object->mAttribute_mEndOfModifierLocation, var_semanticInstructionListForGeneration, var_formalParameterListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1247)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extension setter ").add_operation (object->mAttribute_mExtensionModifierName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1261)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1261)), GALGAS_extensionModifierForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("setter-").add_operation (var_selfType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1264)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1264)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1264)).add_operation (object->mAttribute_mExtensionModifierName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1264)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1264)), var_selfType, object->mAttribute_mExtensionModifierName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1266)), var_implementedAsFunction, var_formalParameterListForGeneration, var_selfType.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1269)), var_semanticInstructionListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1262)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1260)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extensionModifierAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_extensionModifierAST.mSlotID,
                                         extensionMethod_extensionModifierAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extensionModifierAST_semanticAnalysis (defineExtensionMethod_extensionModifierAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@overridingExtensionModifierAST semanticAnalysis'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_overridingExtensionModifierAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                             const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                             const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                             const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                             GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingExtensionModifierAST * object = (const cPtr_overridingExtensionModifierAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingExtensionModifierAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1282)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1284)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 1284)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mOverridingExtensionModifierName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("cannot declare a extension setter: '@").add_operation (var_selfType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1285)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1285)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1285))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1285)) ;
  }
  GALGAS_string var_baseTypeName = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMap_2D_proxy var_superType = var_selfType.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1289)) ;
  GALGAS_formalParameterSignature var_inheritedSignature = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1290)) ;
  GALGAS_location var_inheritedDeclarationLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1291)) ;
  if (constinArgument_inSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 1292)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1292)).isValid ()) {
    uint32_t variant_56824 = constinArgument_inSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 1292)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1292)).uintValue () ;
    bool loop_56824 = true ;
    while (loop_56824) {
      loop_56824 = var_superType.getter_isNull (SOURCE_FILE ("semanticAnalysis.galgas", 1293)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1293)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1293)).isValid () ;
      if (loop_56824) {
        loop_56824 = var_superType.getter_isNull (SOURCE_FILE ("semanticAnalysis.galgas", 1293)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1293)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1293)).boolValue () ;
      }
      if (loop_56824 && (0 == variant_56824)) {
        loop_56824 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticAnalysis.galgas", 1292)) ;
      }
      if (loop_56824) {
        variant_56824 -- ;
        const enumGalgasBool test_2 = var_superType.getter_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1294)).getter_hasKey (object->mAttribute_mOverridingExtensionModifierName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1294)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1294)).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_methodQualifier var_qualifier ;
          GALGAS_methodKind joker_57124 ; // Joker input parameter
          GALGAS_bool joker_57147 ; // Joker input parameter
          GALGAS_string joker_57161 ; // Joker input parameter
          var_superType.getter_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1296)).method_searchKey (object->mAttribute_mOverridingExtensionModifierName, joker_57124, var_inheritedSignature, joker_57147, var_qualifier, joker_57161, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1296)) ;
          const enumGalgasBool test_3 = GALGAS_bool (kIsInfOrEqual, var_qualifier.objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticAnalysis.galgas", 1297)))).boolEnum () ;
          if (kBoolTrue == test_3) {
            var_baseTypeName = var_superType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1298)) ;
          }
        }
        var_superType = var_superType.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1301)) ;
      }
    }
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_location location_5 (object->mAttribute_mOverridingExtensionModifierName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_5, GALGAS_string ("this setter is not declared by a super class")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1304)) ;
  }
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1307)) ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration ;
  GALGAS_analysisContext var_analysisContext = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfType, GALGAS_string ("object"), var_selfType  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1309)) ;
  {
  routine_analyzeRoutineBody (var_analysisContext, object->mAttribute_mOverridingExtensionModifierFormalParameterList, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1318)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1319)), var_selfType.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1320)), GALGAS_string ("object->"), object->mAttribute_mOverridingExtensionModifierInstructionList, object->mAttribute_mEndOfModifierLocation, var_semanticInstructionListForGeneration, var_formalParameterListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1315)) ;
  }
  const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_6) {
    {
    routine_checkMethodSignatures (var_formalParameterListForGeneration, object->mAttribute_mOverridingExtensionModifierName.getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1331)), var_inheritedSignature, var_inheritedDeclarationLocation, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1329)) ;
    }
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string (" overriding extension setter ").add_operation (object->mAttribute_mOverridingExtensionModifierName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1338)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1338)), GALGAS_overridingExtensionModifierForGeneration::constructor_new (GALGAS_bool (false), GALGAS_string ("setter-").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1341)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1341)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1341)).add_operation (object->mAttribute_mOverridingExtensionModifierName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1341)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1341)), var_selfType, var_baseTypeName, object->mAttribute_mOverridingExtensionModifierName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1344)), var_formalParameterListForGeneration, var_selfType.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1346)), var_semanticInstructionListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1339)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1337)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_overridingExtensionModifierAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_overridingExtensionModifierAST.mSlotID,
                                         extensionMethod_overridingExtensionModifierAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingExtensionModifierAST_semanticAnalysis (defineExtensionMethod_overridingExtensionModifierAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@overridingAbstractExtensionModifierAST semanticAnalysis'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_overridingAbstractExtensionModifierAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                                     const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                                     const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                     const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                                     GALGAS_semanticDeclarationSortedListForGeneration & /* ioArgument_ioSemanticDeclarationListForGeneration */,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingAbstractExtensionModifierAST * object = (const cPtr_overridingAbstractExtensionModifierAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractExtensionModifierAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1359)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1361)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 1361)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mOverridingExtensionModifierName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("cannot declare a extension setter: '@").add_operation (var_selfType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1362)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1362)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1362))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1362)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = var_selfType.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1363)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (object->mAttribute_mOverridingExtensionModifierName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_3, GALGAS_string ("cannot declare an abstract extension setter: '@").add_operation (var_selfType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1364)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1364)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1364))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1364)) ;
    }
  }
  GALGAS_string var_baseTypeName = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMap_2D_proxy var_superType = var_selfType.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1368)) ;
  GALGAS_formalParameterSignature var_inheritedSignature = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1369)) ;
  GALGAS_location var_inheritedDeclarationLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1370)) ;
  if (constinArgument_inSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 1371)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1371)).isValid ()) {
    uint32_t variant_60113 = constinArgument_inSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 1371)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1371)).uintValue () ;
    bool loop_60113 = true ;
    while (loop_60113) {
      loop_60113 = var_superType.getter_isNull (SOURCE_FILE ("semanticAnalysis.galgas", 1372)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1372)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1372)).isValid () ;
      if (loop_60113) {
        loop_60113 = var_superType.getter_isNull (SOURCE_FILE ("semanticAnalysis.galgas", 1372)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1372)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1372)).boolValue () ;
      }
      if (loop_60113 && (0 == variant_60113)) {
        loop_60113 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticAnalysis.galgas", 1371)) ;
      }
      if (loop_60113) {
        variant_60113 -- ;
        const enumGalgasBool test_4 = var_superType.getter_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1373)).getter_hasKey (object->mAttribute_mOverridingExtensionModifierName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1373)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1373)).boolEnum () ;
        if (kBoolTrue == test_4) {
          GALGAS_methodQualifier var_qualifier ;
          GALGAS_methodKind joker_60413 ; // Joker input parameter
          GALGAS_bool joker_60436 ; // Joker input parameter
          GALGAS_string joker_60450 ; // Joker input parameter
          var_superType.getter_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1375)).method_searchKey (object->mAttribute_mOverridingExtensionModifierName, joker_60413, var_inheritedSignature, joker_60436, var_qualifier, joker_60450, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1375)) ;
          const enumGalgasBool test_5 = GALGAS_bool (kIsInfOrEqual, var_qualifier.objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticAnalysis.galgas", 1376)))).boolEnum () ;
          if (kBoolTrue == test_5) {
            var_baseTypeName = var_superType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1377)) ;
          }
        }
        var_superType = var_superType.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1380)) ;
      }
    }
  }
  const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_6) {
    GALGAS_location location_7 (object->mAttribute_mOverridingExtensionModifierName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_7, GALGAS_string ("this setter is not declared by a super class")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1383)) ;
  }
  GALGAS_variableMap var_variableMap = GALGAS_variableMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 1386)) ;
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration ;
  {
  routine_buildLocalVariableMapAndSignature (constinArgument_inSemanticContext, object->mAttribute_mOverridingExtensionModifierFormalParameterList, var_variableMap, var_formalParameterListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1388)) ;
  }
  const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_8) {
    {
    routine_checkMethodSignatures (var_formalParameterListForGeneration, object->mAttribute_mOverridingExtensionModifierName.getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1398)), var_inheritedSignature, var_inheritedDeclarationLocation, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1396)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_overridingAbstractExtensionModifierAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_overridingAbstractExtensionModifierAST.mSlotID,
                                         extensionMethod_overridingAbstractExtensionModifierAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingAbstractExtensionModifierAST_semanticAnalysis (defineExtensionMethod_overridingAbstractExtensionModifierAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@abstractExtensionGetterAST semanticAnalysis'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_abstractExtensionGetterAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                         const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                         const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                         const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                         GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractExtensionGetterAST * object = (const cPtr_abstractExtensionGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractExtensionGetterAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1413)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1415)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 1415)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mAbstractExtensionGetterName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("cannot declare a extension getter: '@").add_operation (var_selfType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1416)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1416)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1416))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1416)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = var_selfType.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1417)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (object->mAttribute_mAbstractExtensionGetterName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_3, GALGAS_string ("cannot declare an abstract extension getter: '@").add_operation (var_selfType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1418)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1418)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1418))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1418)) ;
    }
  }
  GALGAS_formalInputParameterListForGeneration var_formalParameterListForGeneration = GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1421)) ;
  cEnumerator_formalInputParameterListAST enumerator_62419 (object->mAttribute_mAbstractExtensionGetterFormalInputParameterList, kEnumeration_up) ;
  while (enumerator_62419.hasCurrentObject ()) {
    var_formalParameterListForGeneration.addAssign_operation (enumerator_62419.current_mFormalSelector (HERE), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_62419.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1425)), enumerator_62419.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1426)), enumerator_62419.current_mFormalArgumentName (HERE), enumerator_62419.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1423)) ;
    enumerator_62419.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("abstract extension getter ").add_operation (object->mAttribute_mAbstractExtensionGetterName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1432)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1432)), GALGAS_abstractExtensionGetterForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("getter-").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1435)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1435)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1435)).add_operation (object->mAttribute_mAbstractExtensionGetterName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1435)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1435)), var_selfType, object->mAttribute_mAbstractExtensionGetterName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1437)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mAbstractExtensionGetterReturnedTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1438)), var_formalParameterListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1433)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1431)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_abstractExtensionGetterAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_abstractExtensionGetterAST.mSlotID,
                                         extensionMethod_abstractExtensionGetterAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractExtensionGetterAST_semanticAnalysis (defineExtensionMethod_abstractExtensionGetterAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@extensionGetterAST semanticAnalysis'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_extensionGetterAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                 const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                 const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                 const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                 GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extensionGetterAST * object = (const cPtr_extensionGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_extensionGetterAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1454)) ;
  GALGAS_string var_selfObjectName ;
  GALGAS_string var_selfObjectAccessor ;
  GALGAS_bool var_implementedAsFunction ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_selfType.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1459)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 1459)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_selfObjectName = GALGAS_string ("object") ;
    var_selfObjectAccessor = GALGAS_string ("object->") ;
    var_implementedAsFunction = GALGAS_bool (false) ;
  }else if (kBoolFalse == test_0) {
    var_selfObjectName = GALGAS_string ("inObject") ;
    var_selfObjectAccessor = GALGAS_string ("inObject.") ;
    var_implementedAsFunction = GALGAS_bool (true) ;
  }
  GALGAS_analysisContext var_analysisContext = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfType, var_selfObjectName, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 1474))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1469)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_returnType ;
  GALGAS_string var_returnVariableCppName ;
  GALGAS_formalInputParameterListForGeneration var_formalParameterListForGeneration ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration ;
  {
  GALGAS_typedPropertyList temp_1 ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_selfType.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1482)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 1482)))).operator_or (GALGAS_bool (kIsEqual, var_selfType.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1482)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("semanticAnalysis.galgas", 1482)))) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1482)).operator_or (GALGAS_bool (kIsEqual, var_selfType.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1482)).objectCompare (GALGAS_typeKindEnum::constructor_mapProxyType (SOURCE_FILE ("semanticAnalysis.galgas", 1482)))) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1482)).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = var_selfType.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1483)) ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1484)) ;
  }
  routine_analyzeFunctionBody (var_analysisContext, object->mAttribute_mExtensionGetterFormalInputParameterList, temp_1, var_selfObjectAccessor, object->mAttribute_mExtensionGetterInstructionList, object->mAttribute_mExtensionGetterReturnedVariableName, object->mAttribute_mExtensionGetterReturnedTypeName, object->mAttribute_mEndOfReaderLocation, var_formalParameterListForGeneration, var_returnType, var_returnVariableCppName, var_semanticInstructionListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1479)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extension getter ").add_operation (object->mAttribute_mExtensionGetterName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1498)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1498)), GALGAS_extensionGetterForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("getter-").add_operation (var_selfType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1501)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1501)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1501)).add_operation (object->mAttribute_mExtensionGetterName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1501)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1501)), var_selfType, object->mAttribute_mExtensionGetterName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1503)), var_implementedAsFunction, var_returnType, var_returnVariableCppName, var_formalParameterListForGeneration, var_selfType.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1508)), var_semanticInstructionListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1499)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1497)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extensionGetterAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_extensionGetterAST.mSlotID,
                                         extensionMethod_extensionGetterAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extensionGetterAST_semanticAnalysis (defineExtensionMethod_extensionGetterAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@overridingExtensionGetterAST semanticAnalysis'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_overridingExtensionGetterAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                           const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                           const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                           const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                           GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingExtensionGetterAST * object = (const cPtr_overridingExtensionGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingExtensionGetterAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1521)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1523)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 1523)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mOverridingExtensionGetterName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("cannot declare a extension getter: '@").add_operation (var_selfType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1524)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1524)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1524))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1524)) ;
  }
  GALGAS_string var_baseTypeName = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMap_2D_proxy var_superType = var_selfType.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1528)) ;
  GALGAS_functionSignature var_inheritedSignature = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1529)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_inheritedReturnType = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 1530)) ;
  GALGAS_location var_inheritedDeclarationLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1531)) ;
  if (constinArgument_inSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 1532)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1532)).isValid ()) {
    uint32_t variant_66680 = constinArgument_inSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 1532)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1532)).uintValue () ;
    bool loop_66680 = true ;
    while (loop_66680) {
      loop_66680 = var_superType.getter_isNull (SOURCE_FILE ("semanticAnalysis.galgas", 1533)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1533)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1533)).isValid () ;
      if (loop_66680) {
        loop_66680 = var_superType.getter_isNull (SOURCE_FILE ("semanticAnalysis.galgas", 1533)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1533)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1533)).boolValue () ;
      }
      if (loop_66680 && (0 == variant_66680)) {
        loop_66680 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticAnalysis.galgas", 1532)) ;
      }
      if (loop_66680) {
        variant_66680 -- ;
        const enumGalgasBool test_2 = var_superType.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1534)).getter_hasKey (object->mAttribute_mOverridingExtensionGetterName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1534)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1534)).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_methodQualifier var_qualifier ;
          GALGAS_methodKind joker_66955 ; // Joker input parameter
          GALGAS_bool joker_67032 ; // Joker input parameter
          GALGAS_string joker_67112 ; // Joker input parameter
          var_superType.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1535)).method_searchKey (object->mAttribute_mOverridingExtensionGetterName, joker_66955, var_inheritedSignature, var_inheritedDeclarationLocation, joker_67032, var_inheritedReturnType, var_qualifier, joker_67112, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1535)) ;
          const enumGalgasBool test_3 = GALGAS_bool (kIsInfOrEqual, var_qualifier.objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticAnalysis.galgas", 1545)))).boolEnum () ;
          if (kBoolTrue == test_3) {
            var_baseTypeName = var_superType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1546)) ;
          }
        }
        var_superType = var_superType.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1549)) ;
      }
    }
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_location location_5 (object->mAttribute_mOverridingExtensionGetterName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_5, GALGAS_string ("this getter is not declared by a super class")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1552)) ;
  }
  GALGAS_analysisContext var_analysisContext = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfType, GALGAS_string ("object"), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 1560))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1555)) ;
  GALGAS_formalInputParameterListForGeneration var_formalParameterListForGeneration ;
  GALGAS_unifiedTypeMap_2D_proxy var_returnType ;
  GALGAS_string var_returnVariableCppName ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration ;
  {
  GALGAS_typedPropertyList temp_6 ;
  const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, var_selfType.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1564)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 1564)))).operator_or (GALGAS_bool (kIsEqual, var_selfType.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1564)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("semanticAnalysis.galgas", 1564)))) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1564)).boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = var_selfType.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1565)) ;
  }else if (kBoolFalse == test_7) {
    temp_6 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1566)) ;
  }
  routine_analyzeFunctionBody (var_analysisContext, object->mAttribute_mOverridingExtensionGetterFormalInputParameterList, temp_6, GALGAS_string ("object->"), object->mAttribute_mOverridingExtensionGetterInstructionList, object->mAttribute_mOverridingExtensionGetterReturnedVariableName, object->mAttribute_mOverridingExtensionGetterReturnedTypeName, object->mAttribute_mEndOfReaderLocation, var_formalParameterListForGeneration, var_returnType, var_returnVariableCppName, var_semanticInstructionListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1561)) ;
  }
  const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_8) {
    {
    routine_checkReaderSignatures (var_formalParameterListForGeneration, var_returnType, object->mAttribute_mOverridingExtensionGetterName.getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1583)), var_inheritedSignature, var_inheritedReturnType, var_inheritedDeclarationLocation, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1580)) ;
    }
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("override extension getter ").add_operation (object->mAttribute_mOverridingExtensionGetterName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1591)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1591)), GALGAS_overrideExtensionGetterForGeneration::constructor_new (GALGAS_bool (false), GALGAS_string ("getter-").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1594)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1594)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1594)).add_operation (object->mAttribute_mOverridingExtensionGetterName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1594)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1594)), var_selfType, var_baseTypeName, object->mAttribute_mOverridingExtensionGetterName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1597)), var_returnType, var_returnVariableCppName, var_formalParameterListForGeneration, var_selfType.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1601)), var_semanticInstructionListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1592)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1590)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_overridingExtensionGetterAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_overridingExtensionGetterAST.mSlotID,
                                         extensionMethod_overridingExtensionGetterAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingExtensionGetterAST_semanticAnalysis (defineExtensionMethod_overridingExtensionGetterAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@overridingAbstractExtensionGetterAST semanticAnalysis'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_overridingAbstractExtensionGetterAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                                   const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                                   const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                   const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                                   GALGAS_semanticDeclarationSortedListForGeneration & /* ioArgument_ioSemanticDeclarationListForGeneration */,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingAbstractExtensionGetterAST * object = (const cPtr_overridingAbstractExtensionGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractExtensionGetterAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1614)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_returnType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mAbstractExtensionGetterReturnedTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1616)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1618)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 1618)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mAbstractExtensionGetterName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("cannot declare a extension getter: '@").add_operation (var_selfType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1619)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1619)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1619))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1619)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = var_selfType.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1620)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (object->mAttribute_mAbstractExtensionGetterName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_3, GALGAS_string ("cannot declare an abstract extension getter: '@").add_operation (var_selfType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1621)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1621)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1621))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1621)) ;
    }
  }
  GALGAS_string var_baseTypeName = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMap_2D_proxy var_superType = var_selfType.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1625)) ;
  GALGAS_functionSignature var_inheritedSignature = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1626)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_inheritedReturnType = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 1627)) ;
  GALGAS_location var_inheritedDeclarationLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1628)) ;
  if (constinArgument_inSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 1629)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1629)).isValid ()) {
    uint32_t variant_70566 = constinArgument_inSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 1629)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1629)).uintValue () ;
    bool loop_70566 = true ;
    while (loop_70566) {
      loop_70566 = var_superType.getter_isNull (SOURCE_FILE ("semanticAnalysis.galgas", 1630)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1630)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1630)).isValid () ;
      if (loop_70566) {
        loop_70566 = var_superType.getter_isNull (SOURCE_FILE ("semanticAnalysis.galgas", 1630)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1630)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1630)).boolValue () ;
      }
      if (loop_70566 && (0 == variant_70566)) {
        loop_70566 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticAnalysis.galgas", 1629)) ;
      }
      if (loop_70566) {
        variant_70566 -- ;
        const enumGalgasBool test_4 = var_superType.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1631)).getter_hasKey (object->mAttribute_mAbstractExtensionGetterName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1631)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1631)).boolEnum () ;
        if (kBoolTrue == test_4) {
          GALGAS_methodQualifier var_qualifier ;
          GALGAS_methodKind joker_70870 ; // Joker input parameter
          GALGAS_bool joker_70947 ; // Joker input parameter
          GALGAS_string joker_71006 ; // Joker input parameter
          var_superType.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1633)).method_searchKey (object->mAttribute_mAbstractExtensionGetterName, joker_70870, var_inheritedSignature, var_inheritedDeclarationLocation, joker_70947, var_inheritedReturnType, var_qualifier, joker_71006, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1633)) ;
          const enumGalgasBool test_5 = GALGAS_bool (kIsInfOrEqual, var_qualifier.objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticAnalysis.galgas", 1643)))).boolEnum () ;
          if (kBoolTrue == test_5) {
            var_baseTypeName = var_superType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1644)) ;
          }
        }
        var_superType = var_superType.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1647)) ;
      }
    }
  }
  const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_6) {
    GALGAS_location location_7 (object->mAttribute_mAbstractExtensionGetterName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_7, GALGAS_string ("this getter is not declared by a super class")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1650)) ;
  }
  const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_8) {
    GALGAS_formalInputParameterListForGeneration var_formalParameterListForGeneration = GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1654)) ;
    cEnumerator_formalInputParameterListAST enumerator_71502 (object->mAttribute_mAbstractExtensionGetterFormalInputParameterList, kEnumeration_up) ;
    while (enumerator_71502.hasCurrentObject ()) {
      var_formalParameterListForGeneration.addAssign_operation (enumerator_71502.current_mFormalSelector (HERE), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_71502.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1658)), enumerator_71502.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1659)), enumerator_71502.current_mFormalArgumentName (HERE), enumerator_71502.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1656)) ;
      enumerator_71502.gotoNextObject () ;
    }
    {
    routine_checkReaderSignatures (var_formalParameterListForGeneration, var_returnType, object->mAttribute_mAbstractExtensionGetterName.getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1666)), var_inheritedSignature, var_inheritedReturnType, var_inheritedDeclarationLocation, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1663)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_overridingAbstractExtensionGetterAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_overridingAbstractExtensionGetterAST.mSlotID,
                                         extensionMethod_overridingAbstractExtensionGetterAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingAbstractExtensionGetterAST_semanticAnalysis (defineExtensionMethod_overridingAbstractExtensionGetterAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@galgas3SyntaxComponentAST semanticAnalysis'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_galgas_33_SyntaxComponentAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                           const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                           const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                           const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                           GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_galgas_33_SyntaxComponentAST * object = (const cPtr_galgas_33_SyntaxComponentAST *) inObject ;
  macroValidSharedObject (object, cPtr_galgas_33_SyntaxComponentAST) ;
  GALGAS_string var_componentName = object->mAttribute_mSyntaxComponentName.mAttribute_string ;
  GALGAS_terminalMap var_terminalMap ;
  GALGAS_indexingListAST var_indexingListAST ;
  GALGAS_lstring var_indexingDirectory ;
  constinArgument_inSemanticContext.mAttribute_mLexiqueComponentMapForSemanticAnalysis.method_searchKey (object->mAttribute_mLexiqueName, var_terminalMap, var_indexingListAST, var_indexingDirectory, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1683)) ;
  GALGAS_stringset var_indexNameSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 1690)) ;
  cEnumerator_indexingListAST enumerator_72844 (var_indexingListAST, kEnumeration_up) ;
  while (enumerator_72844.hasCurrentObject ()) {
    var_indexNameSet.addAssign_operation (enumerator_72844.current_mIndexName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1692)) ;
    enumerator_72844.gotoNextObject () ;
  }
  GALGAS_bool var_hasIndexing = var_indexingDirectory.mAttribute_location.getter_isNowhere (SOURCE_FILE ("semanticAnalysis.galgas", 1694)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1694)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("semanticAnalysis.galgas", 1696)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string var_lexiqueName = object->mAttribute_mLexiqueName.mAttribute_string ;
    GALGAS_syntaxDeclarationForGeneration var_syntaxDeclarationForGeneration ;
    {
    routine_semanticAnalysisOfSyntaxComponent (object->mAttribute_mNonterminalDeclarationList, object->mAttribute_mRuleList, var_componentName, var_lexiqueName, constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_terminalMap, var_indexNameSet, var_hasIndexing, object->mAttribute_mHasTranslateFeature, var_syntaxDeclarationForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1698)) ;
    }
    ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string::makeEmptyString (), var_syntaxDeclarationForGeneration, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1711)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_galgas_33_SyntaxComponentAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentAST.mSlotID,
                                         extensionMethod_galgas_33_SyntaxComponentAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_galgas_33_SyntaxComponentAST_semanticAnalysis (defineExtensionMethod_galgas_33_SyntaxComponentAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@galgas3GrammarComponentAST semanticAnalysis'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_galgas_33_GrammarComponentAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                            const GALGAS_string constinArgument_inProductDirectory,
                                                                            const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                            const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                            GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_galgas_33_GrammarComponentAST * object = (const cPtr_galgas_33_GrammarComponentAST *) inObject ;
  macroValidSharedObject (object, cPtr_galgas_33_GrammarComponentAST) ;
  const enumGalgasBool test_0 = GALGAS_application::constructor_verboseOutput (SOURCE_FILE ("semanticAnalysis.galgas", 1726)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->printMessage (GALGAS_string ("*** Analyzing '").add_operation (object->mAttribute_mGrammarComponentName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1727)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1727)).add_operation (GALGAS_string ("' grammar\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1727))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1727)) ;
  }
  GALGAS_terminalSymbolsMapForGrammarAnalysis var_actuallyUsedTerminalSymbolMap = GALGAS_terminalSymbolsMapForGrammarAnalysis::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 1730)) ;
  GALGAS_nonTerminalSymbolMapForGrammarAnalysis var_nonTerminalMapForGrammarAnalysis = GALGAS_nonTerminalSymbolMapForGrammarAnalysis::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 1731)) ;
  GALGAS_lstring var_lexiqueComponentName = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticAnalysis.galgas", 1732)) ;
  GALGAS_syntaxComponentListForGrammarAnalysis var_syntaxComponentListForGrammarAnalysis = GALGAS_syntaxComponentListForGrammarAnalysis::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1733)) ;
  GALGAS_nonTerminalToAddList var_nonTerminalToAddList = GALGAS_nonTerminalToAddList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1734)) ;
  GALGAS_uint var_addedNonTerminalCount = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_lstringlist enumerator_74633 (object->mAttribute_mSyntaxComponents, kEnumeration_up) ;
  while (enumerator_74633.hasCurrentObject ()) {
    GALGAS_uint var_addedNonTerminalCountRef = var_addedNonTerminalCount ;
    GALGAS_string var_syntaxComponentName = enumerator_74633.current_mValue (HERE).mAttribute_string ;
    GALGAS_lstring var_lexiqueName ;
    GALGAS_nonterminalDeclarationListAST var_nonterminalDeclarationList ;
    GALGAS_syntaxRuleListAST var_ruleList ;
    GALGAS_bool var_hasTranslateFeature ;
    constinArgument_inSemanticContext.mAttribute_mSyntaxComponentMapForSemanticAnalysis.method_searchKey (enumerator_74633.current_mValue (HERE), var_lexiqueName, var_nonterminalDeclarationList, var_ruleList, var_hasTranslateFeature, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1739)) ;
    const enumGalgasBool test_1 = object->mAttribute_mHasTranslateFeature.operator_and (var_hasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1747)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1747)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_location location_2 (enumerator_74633.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_2, GALGAS_string ("as '").add_operation (object->mAttribute_mGrammarComponentName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1748)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1748)).add_operation (GALGAS_string ("' grammar declares 'translate' feature, this syntax component should do so"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1748))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1748)) ;
    }else if (kBoolFalse == test_1) {
      const enumGalgasBool test_3 = var_hasTranslateFeature.operator_and (object->mAttribute_mHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1749)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1749)).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_location location_4 (object->mAttribute_mGrammarComponentName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_4, GALGAS_string ("as '").add_operation (enumerator_74633.current_mValue (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1750)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1750)).add_operation (GALGAS_string ("' syntax component declares 'translate' feature, this grammar should do so"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1750))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1750)) ;
      }
    }
    const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, var_lexiqueComponentName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_5) {
      var_lexiqueComponentName = var_lexiqueName ;
    }else if (kBoolFalse == test_5) {
      const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, var_lexiqueName.mAttribute_string.objectCompare (var_lexiqueComponentName.mAttribute_string)).boolEnum () ;
      if (kBoolTrue == test_6) {
        GALGAS_location location_7 (enumerator_74633.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_7, GALGAS_string ("this syntax component uses '").add_operation (var_lexiqueName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1756)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1756)).add_operation (GALGAS_string ("' lexique component, but the first syntax component uses the '"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1757)).add_operation (var_lexiqueComponentName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1757)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1757)).add_operation (GALGAS_string ("' lexique component (they should be the same)"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1758))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1756)) ;
      }
    }
    {
    routine_handleNonTerminalDeclarations (var_nonTerminalMapForGrammarAnalysis, var_nonterminalDeclarationList, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1761)) ;
    }
    {
    routine_handleNonTerminalDeclarationsFromRuleList (var_nonTerminalMapForGrammarAnalysis, var_ruleList, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1766)) ;
    }
    {
    routine_buildRuleList (var_nonTerminalMapForGrammarAnalysis, enumerator_74633.current_mValue (HERE), var_ruleList, var_actuallyUsedTerminalSymbolMap, var_syntaxComponentListForGrammarAnalysis, var_addedNonTerminalCount, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1771)) ;
    }
    GALGAS_uint var_i = GALGAS_uint ((uint32_t) 0U) ;
    if (var_addedNonTerminalCount.isValid ()) {
      uint32_t variant_76430 = var_addedNonTerminalCount.uintValue () ;
      bool loop_76430 = true ;
      while (loop_76430) {
        loop_76430 = GALGAS_bool (kIsStrictInf, var_i.objectCompare (var_addedNonTerminalCount.substract_operation (var_addedNonTerminalCountRef, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1780)))).isValid () ;
        if (loop_76430) {
          loop_76430 = GALGAS_bool (kIsStrictInf, var_i.objectCompare (var_addedNonTerminalCount.substract_operation (var_addedNonTerminalCountRef, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1780)))).boolValue () ;
        }
        if (loop_76430 && (0 == variant_76430)) {
          loop_76430 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticAnalysis.galgas", 1780)) ;
        }
        if (loop_76430) {
          variant_76430 -- ;
          var_nonTerminalToAddList.addAssign_operation (var_syntaxComponentName, var_i  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1781)) ;
          var_i.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1782)) ;
        }
      }
    }
    enumerator_74633.gotoNextObject () ;
  }
  GALGAS_stringset var_lexiqueComponentSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 1786)) ;
  GALGAS_lstring var_inIndexingDirectory ;
  GALGAS_terminalMap joker_76845 ; // Joker input parameter
  GALGAS_indexingListAST joker_76881 ; // Joker input parameter
  constinArgument_inSemanticContext.mAttribute_mLexiqueComponentMapForSemanticAnalysis.method_searchKey (var_lexiqueComponentName, joker_76845, joker_76881, var_inIndexingDirectory, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1787)) ;
  GALGAS_bool var_hasIndexing = var_inIndexingDirectory.mAttribute_location.getter_isNowhere (SOURCE_FILE ("semanticAnalysis.galgas", 1793)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1793)) ;
  const enumGalgasBool test_8 = var_hasIndexing.operator_and (object->mAttribute_mHasIndexing.mAttribute_bool.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1794)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1794)).boolEnum () ;
  if (kBoolTrue == test_8) {
    GALGAS_location location_9 (object->mAttribute_mGrammarComponentName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_9, GALGAS_string ("the grammar does not enable indexing, but the '").add_operation (var_lexiqueComponentName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1795)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1795)).add_operation (GALGAS_string ("' does"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1795))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1795)) ;
  }else if (kBoolFalse == test_8) {
    const enumGalgasBool test_10 = var_hasIndexing.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1796)).operator_and (object->mAttribute_mHasIndexing.mAttribute_bool COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1796)).boolEnum () ;
    if (kBoolTrue == test_10) {
      GALGAS_location location_11 (object->mAttribute_mHasIndexing.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_11, GALGAS_string ("the grammar enables indexing, but the '").add_operation (var_lexiqueComponentName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1797)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1797)).add_operation (GALGAS_string ("' does not"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1797))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1797)) ;
    }
  }
  GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis var_startSymbolAltMap ;
  GALGAS_uint var_startSymbolIndex ;
  var_nonTerminalMapForGrammarAnalysis.method_searchKey (object->mAttribute_mStartSymbolName, var_startSymbolIndex, var_startSymbolAltMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1803)) ;
  {
  routine_checkLabelMap (object->mAttribute_mStartSymbolName.mAttribute_location, object->mAttribute_mStartSymbolLabelList, var_nonTerminalMapForGrammarAnalysis.getter_locationForKey (object->mAttribute_mStartSymbolName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1808)), var_startSymbolAltMap, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1805)) ;
  }
  GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis var_unusedNonTerminalSymbolsForGrammar = GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 1812)) ;
  cEnumerator_lstringlist enumerator_78086 (object->mAttribute_mUnusedNonterminalList, kEnumeration_up) ;
  while (enumerator_78086.hasCurrentObject ()) {
    GALGAS_uint var_nonterminalIndex ;
    GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis joker_78192 ; // Joker input parameter
    var_nonTerminalMapForGrammarAnalysis.method_searchKey (enumerator_78086.current_mValue (HERE), var_nonterminalIndex, joker_78192, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1815)) ;
    {
    var_unusedNonTerminalSymbolsForGrammar.setter_insertKey (enumerator_78086.current_mValue (HERE), var_nonterminalIndex, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1816)) ;
    }
    enumerator_78086.gotoNextObject () ;
  }
  GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis var_nonTerminalSymbolSortedListForGrammarAnalysis = GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis::constructor_emptySortedList (SOURCE_FILE ("semanticAnalysis.galgas", 1819)) ;
  cEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_78540 (var_nonTerminalMapForGrammarAnalysis, kEnumeration_up) ;
  while (enumerator_78540.hasCurrentObject ()) {
    var_nonTerminalSymbolSortedListForGrammarAnalysis.addAssign_operation (enumerator_78540.current_lkey (HERE), enumerator_78540.current_mNonTerminalIndex (HERE), enumerator_78540.current_mNonterminalSymbolParametersMap (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1821)) ;
    enumerator_78540.gotoNextObject () ;
  }
  GALGAS_stringset var_implementationFileHeader = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 1826)) ;
  cEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_79043 (var_nonTerminalMapForGrammarAnalysis, kEnumeration_up) ;
  while (enumerator_79043.hasCurrentObject ()) {
    cEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis enumerator_79104 (enumerator_79043.current (HERE).mAttribute_mNonterminalSymbolParametersMap, kEnumeration_up) ;
    while (enumerator_79104.hasCurrentObject ()) {
      cEnumerator_signatureForGrammarAnalysis enumerator_79145 (enumerator_79104.current_mFormalParametersList (HERE), kEnumeration_up) ;
      while (enumerator_79145.hasCurrentObject ()) {
        switch (enumerator_79145.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).enumValue ()) {
        case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
          {
            GALGAS_unifiedTypeMap_2D_proxy var_t = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_79145.current_mGalgasTypeNameForGrammarAnalysis (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1832)) ;
            extensionMethod_addHeaderFileName (var_t, var_implementationFileHeader, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1833)) ;
          }
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
          {
          }
          break ;
        }
        enumerator_79145.gotoNextObject () ;
      }
      enumerator_79104.gotoNextObject () ;
    }
    enumerator_79043.gotoNextObject () ;
  }
  const enumGalgasBool test_12 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateOneHeader.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_12) {
    var_implementationFileHeader = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 1840)) ;
  }
  GALGAS_string var_HTMLFilePath = constinArgument_inProductDirectory.add_operation (GALGAS_string ("/../helpers/"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1843)).add_operation (object->mAttribute_mGrammarComponentName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1843)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1843)).add_operation (GALGAS_string (".html"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1843)) ;
  GALGAS_string var_grammarCppFile ;
  GALGAS_string var_grammarHTMLHelperContents ;
  {
  GALGAS_string temp_13 ;
  const enumGalgasBool test_14 = object->mAttribute_mHasTranslateFeature.boolEnum () ;
  if (kBoolTrue == test_14) {
    temp_13 = function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1856)) ;
  }else if (kBoolFalse == test_14) {
    temp_13 = GALGAS_string::makeEmptyString () ;
  }
  routine_grammarAnalysisAndGeneration (GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 1845)), object->mAttribute_mGrammarComponentName, object->mAttribute_mGrammarClass, var_startSymbolIndex, var_lexiqueComponentName.mAttribute_string, var_actuallyUsedTerminalSymbolMap, var_syntaxComponentListForGrammarAnalysis, var_unusedNonTerminalSymbolsForGrammar, var_HTMLFilePath, var_nonTerminalSymbolSortedListForGrammarAnalysis, var_hasIndexing, temp_13, var_grammarCppFile, var_grammarHTMLHelperContents, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1844)) ;
  }
  const enumGalgasBool test_15 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_outputHTMLgrammarFile.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_15) {
    var_HTMLFilePath.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("semanticAnalysis.galgas", 1862)).method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1862)) ;
    GALGAS_bool joker_80615 ; // Joker input parameter
    var_grammarHTMLHelperContents.method_writeToFileWhenDifferentContents (var_HTMLFilePath, joker_80615, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1863)) ;
  }else if (kBoolFalse == test_15) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_HTMLFilePath, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1865)) ;
    }
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string::makeEmptyString (), GALGAS_grammarForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("grammar-").add_operation (object->mAttribute_mGrammarComponentName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1872)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1872)), object->mAttribute_mGrammarComponentName.mAttribute_string, var_lexiqueComponentName.mAttribute_string, var_nonTerminalMapForGrammarAnalysis, var_nonTerminalToAddList, var_hasIndexing, object->mAttribute_mSyntaxComponents, object->mAttribute_mStartSymbolName.mAttribute_string, object->mAttribute_mHasTranslateFeature, var_grammarCppFile  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1870)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1868)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_galgas_33_GrammarComponentAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST.mSlotID,
                                         extensionMethod_galgas_33_GrammarComponentAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_galgas_33_GrammarComponentAST_semanticAnalysis (defineExtensionMethod_galgas_33_GrammarComponentAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@lexiqueComponentAST semanticAnalysis'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexiqueComponentAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                  const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                  const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                                  const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                  GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexiqueComponentAST * object = (const cPtr_lexiqueComponentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexiqueComponentAST) ;
  GALGAS_lexicalTypeMap var_lexicalTypeMap = function_buildLexicalTypeMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1895)) ;
  GALGAS_lexicalRoutineMap var_lexicalRoutineMap ;
  {
  routine_buildLexicalRoutineMap (var_lexicalRoutineMap, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1898)) ;
  }
  cEnumerator_externRoutineListAST enumerator_81941 (object->mAttribute_mExternRoutineList, kEnumeration_up) ;
  while (enumerator_81941.hasCurrentObject ()) {
    GALGAS_lexicalRoutineFormalArgumentList var_lexicalRoutineFormalArgumentList = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1901)) ;
    cEnumerator_lexicalExternRoutineFormalArgumentListAST enumerator_82080 (enumerator_81941.current_mLexicalRoutineFormalArgumentList (HERE), kEnumeration_up) ;
    while (enumerator_82080.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_lexicalFormalArgumentType ;
      var_lexicalTypeMap.method_searchKey (enumerator_82080.current_mLexicalTypeName (HERE), var_lexicalFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1904)) ;
      var_lexicalRoutineFormalArgumentList.addAssign_operation (enumerator_82080.current_mPassingMode (HERE), var_lexicalFormalArgumentType, enumerator_82080.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1905))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1905)) ;
      enumerator_82080.gotoNextObject () ;
    }
    {
    var_lexicalRoutineMap.setter_insertKey (enumerator_81941.current_mRoutineName (HERE), var_lexicalRoutineFormalArgumentList, enumerator_81941.current_mErrorMessageList (HERE), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1907)) ;
    }
    enumerator_81941.gotoNextObject () ;
  }
  GALGAS_lexicalFunctionMap var_lexicalFunctionMap ;
  {
  routine_buildLexicalFunctionMap (var_lexicalFunctionMap, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1911)) ;
  }
  cEnumerator_externFunctionListAST enumerator_82699 (object->mAttribute_mExternFunctionList, kEnumeration_up) ;
  while (enumerator_82699.hasCurrentObject ()) {
    GALGAS_lexicalFunctionFormalArgumentList var_lexicalFunctionFormalArgumentList = GALGAS_lexicalFunctionFormalArgumentList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1914)) ;
    cEnumerator_lexicalExternFunctionFormalArgumentListAST enumerator_82841 (enumerator_82699.current_mLexicalFunctionFormalArgumentList (HERE), kEnumeration_up) ;
    while (enumerator_82841.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_lexicalFormalArgumentType ;
      var_lexicalTypeMap.method_searchKey (enumerator_82841.current_mLexicalTypeName (HERE), var_lexicalFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1917)) ;
      var_lexicalFunctionFormalArgumentList.addAssign_operation (var_lexicalFormalArgumentType, enumerator_82841.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1918))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1918)) ;
      enumerator_82841.gotoNextObject () ;
    }
    GALGAS_lexicalTypeEnum var_returnedArgumentType ;
    var_lexicalTypeMap.method_searchKey (enumerator_82699.current_mReturnedTypeName (HERE), var_returnedArgumentType, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1921)) ;
    {
    var_lexicalFunctionMap.setter_insertKey (enumerator_82699.current_mFunctionName (HERE), var_lexicalFunctionFormalArgumentList, var_returnedArgumentType, GALGAS_string::makeEmptyString (), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1922)) ;
    }
    enumerator_82699.gotoNextObject () ;
  }
  GALGAS_stringset temp_0 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 1937)) ;
  temp_0.addAssign_operation (GALGAS_string ("unicodeToLower")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1926)) ;
  temp_0.addAssign_operation (GALGAS_string ("unicodeToUpper")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1927)) ;
  temp_0.addAssign_operation (GALGAS_string ("unicodeToUpper")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1928)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeLetter")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1929)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeMark")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1930)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeNumber")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1931)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeDecimalDigit")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1932)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeASCIIHexDigit")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1933)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeSeparator")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1934)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeCommand")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1935)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodePunctuation")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1936)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeSymbol")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1937)) ;
  GALGAS_stringset var_externUnicodeTestFunctions = temp_0 ;
  GALGAS_lexiqueAnalysisContext var_lexiqueAnalysisContext = GALGAS_lexiqueAnalysisContext::constructor_new (object->mAttribute_mLexiqueComponentName.mAttribute_string, var_lexicalRoutineMap, var_lexicalFunctionMap, GALGAS_lexicalMessageMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 1944)), GALGAS_terminalMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 1945)), GALGAS_terminalList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1946)), GALGAS_lexicalAttributeMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 1947)), GALGAS_lexicalExplicitTokenListMapMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 1948)), GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 1949)), GALGAS_templateDelimitorList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1950)), GALGAS_styleMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 1951)), var_externUnicodeTestFunctions  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1940)) ;
  GALGAS_uint var_styleIndex = GALGAS_uint ((uint32_t) 1U) ;
  cEnumerator_lexicalStyleListAST enumerator_84319 (object->mAttribute_mLexicalStyleList, kEnumeration_up) ;
  while (enumerator_84319.hasCurrentObject ()) {
    {
    var_lexiqueAnalysisContext.mAttribute_mStyleMap.setter_insertKey (enumerator_84319.current_mName (HERE), enumerator_84319.current_mComment (HERE), var_styleIndex, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1957)) ;
    }
    var_styleIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1958)) ;
    enumerator_84319.gotoNextObject () ;
  }
  {
  routine_buildLexicalAttributeMap (var_lexicalTypeMap, object->mAttribute_mLexicalAttributeList, var_lexiqueAnalysisContext.mAttribute_mLexicalAttributeMap, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1961)) ;
  }
  cEnumerator_terminalDeclarationListAST enumerator_84719 (object->mAttribute_mTerminalDeclarationList, kEnumeration_up) ;
  while (enumerator_84719.hasCurrentObject ()) {
    GALGAS_uint var_terminalStyleIndex = GALGAS_uint ((uint32_t) 0U) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, enumerator_84719.current_mStyle (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1969)).getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 1969)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_lstring joker_84858 ; // Joker input parameter
      var_lexiqueAnalysisContext.getter_mStyleMap (SOURCE_FILE ("semanticAnalysis.galgas", 1970)).method_searchKey (enumerator_84719.current_mStyle (HERE), joker_84858, var_terminalStyleIndex, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1970)) ;
    }
    GALGAS_lexicalSentValueList var_argumentTypeList = GALGAS_lexicalSentValueList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1972)) ;
    cEnumerator_sentLexicalAttributeListAST enumerator_84981 (enumerator_84719.current_mSentAttributeList (HERE), kEnumeration_up) ;
    while (enumerator_84981.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_attributeLexicalType ;
      var_lexiqueAnalysisContext.mAttribute_mLexicalAttributeMap.method_searchKey (enumerator_84981.current_mAttributeName (HERE), var_attributeLexicalType, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1975)) ;
      var_argumentTypeList.addAssign_operation (enumerator_84981.current_mFormalSelector (HERE), enumerator_84981.current_mAttributeName (HERE).mAttribute_string, var_attributeLexicalType  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1976)) ;
      enumerator_84981.gotoNextObject () ;
    }
    {
    var_lexiqueAnalysisContext.mAttribute_mTerminalMap.setter_insertKey (enumerator_84719.current_mName (HERE), var_argumentTypeList, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1978)) ;
    }
    GALGAS_bool var_isEndOfTemplateMark = GALGAS_bool (false) ;
    GALGAS_bool var_atomicSelection = GALGAS_bool (true) ;
    cEnumerator_lstringlist enumerator_85400 (enumerator_84719.current_mOptionList (HERE), kEnumeration_up) ;
    while (enumerator_85400.hasCurrentObject ()) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_85400.current_mValue (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1982)).objectCompare (GALGAS_string ("nonAtomicSelection"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        const enumGalgasBool test_3 = var_atomicSelection.boolEnum () ;
        if (kBoolTrue == test_3) {
          var_atomicSelection = GALGAS_bool (false) ;
        }else if (kBoolFalse == test_3) {
          GALGAS_location location_4 (enumerator_85400.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_4, GALGAS_string ("the 'nonAtomicSelection' feature is already set")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1986)) ;
        }
      }else if (kBoolFalse == test_2) {
        const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, enumerator_85400.current_mValue (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1988)).objectCompare (GALGAS_string ("templateEndMark"))).boolEnum () ;
        if (kBoolTrue == test_5) {
          GALGAS_location location_6 (enumerator_85400.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_6, GALGAS_string ("only the 'templateEndMark' and 'nonAtomicSelection' features are allowed here")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1989)) ;
        }else if (kBoolFalse == test_5) {
          const enumGalgasBool test_7 = var_isEndOfTemplateMark.boolEnum () ;
          if (kBoolTrue == test_7) {
            GALGAS_location location_8 (enumerator_85400.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
            inCompiler->emitSemanticError (location_8, GALGAS_string ("the 'templateEndMark' feature is already set")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1991)) ;
          }else if (kBoolFalse == test_7) {
            var_isEndOfTemplateMark = GALGAS_bool (true) ;
          }
        }
      }
      enumerator_85400.gotoNextObject () ;
    }
    var_lexiqueAnalysisContext.mAttribute_mTerminalList.addAssign_operation (enumerator_84719.current_mName (HERE), var_argumentTypeList, enumerator_84719.current_mSyntaxErrorMessage (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1999)), var_isEndOfTemplateMark, var_atomicSelection, var_terminalStyleIndex  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1996)) ;
    enumerator_84719.gotoNextObject () ;
  }
  cEnumerator_lexicalListDeclarationListAST enumerator_86185 (object->mAttribute_mLexicalListDeclarationList, kEnumeration_up) ;
  while (enumerator_86185.hasCurrentObject ()) {
    GALGAS_uint var_terminalStyleIndex = GALGAS_uint ((uint32_t) 0U) ;
    const enumGalgasBool test_9 = GALGAS_bool (kIsStrictSup, enumerator_86185.current_mStyle (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 2006)).getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 2006)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_9) {
      GALGAS_lstring joker_86324 ; // Joker input parameter
      var_lexiqueAnalysisContext.getter_mStyleMap (SOURCE_FILE ("semanticAnalysis.galgas", 2007)).method_searchKey (enumerator_86185.current_mStyle (HERE), joker_86324, var_terminalStyleIndex, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2007)) ;
    }
    GALGAS_lexicalSentValueList var_argumentTypeList = GALGAS_lexicalSentValueList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 2009)) ;
    cEnumerator_sentLexicalAttributeListAST enumerator_86447 (enumerator_86185.current_mSentAttributeList (HERE), kEnumeration_up) ;
    while (enumerator_86447.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_attributeLexicalType ;
      var_lexiqueAnalysisContext.mAttribute_mLexicalAttributeMap.method_searchKey (enumerator_86447.current_mAttributeName (HERE), var_attributeLexicalType, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2012)) ;
      var_argumentTypeList.addAssign_operation (enumerator_86447.current_mFormalSelector (HERE), enumerator_86447.current_mAttributeName (HERE).mAttribute_string, var_attributeLexicalType  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2013)) ;
      enumerator_86447.gotoNextObject () ;
    }
    GALGAS_lexicalExplicitTokenListMap var_lexicalTokenListMap = GALGAS_lexicalExplicitTokenListMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 2015)) ;
    GALGAS_tokenSortedlist var_tokenSortedlist = GALGAS_tokenSortedlist::constructor_emptySortedList (SOURCE_FILE ("semanticAnalysis.galgas", 2016)) ;
    cEnumerator_lexicalListEntryListAST enumerator_86844 (enumerator_86185.current_mEntryList (HERE), kEnumeration_up) ;
    while (enumerator_86844.hasCurrentObject ()) {
      GALGAS_string var_syntaxErrorMessage = enumerator_86185.current_mSyntaxErrorMessage (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 2018)).getter_stringByReplacingStringByString (GALGAS_string ("%K"), enumerator_86844.current_mTerminalSpelling (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 2018)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2018)) ;
      GALGAS_bool var_isEndOfTemplateMark = GALGAS_bool (false) ;
      GALGAS_bool var_atomicSelection = GALGAS_bool (true) ;
      cEnumerator_lstringlist enumerator_87083 (enumerator_86844.current_mFeatureList (HERE), kEnumeration_up) ;
      while (enumerator_87083.hasCurrentObject ()) {
        const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, enumerator_87083.current_mValue (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 2022)).objectCompare (GALGAS_string ("nonAtomicSelection"))).boolEnum () ;
        if (kBoolTrue == test_10) {
          const enumGalgasBool test_11 = var_atomicSelection.boolEnum () ;
          if (kBoolTrue == test_11) {
            var_atomicSelection = GALGAS_bool (false) ;
          }else if (kBoolFalse == test_11) {
            GALGAS_location location_12 (enumerator_87083.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
            inCompiler->emitSemanticError (location_12, GALGAS_string ("the 'nonAtomicSelection' feature is already set")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2026)) ;
          }
        }else if (kBoolFalse == test_10) {
          const enumGalgasBool test_13 = GALGAS_bool (kIsNotEqual, enumerator_87083.current_mValue (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 2028)).objectCompare (GALGAS_string ("templateEndMark"))).boolEnum () ;
          if (kBoolTrue == test_13) {
            GALGAS_location location_14 (enumerator_87083.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
            inCompiler->emitSemanticError (location_14, GALGAS_string ("only the 'templateEndMark' and 'nonAtomicSelection' features are allowed here")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2029)) ;
          }else if (kBoolFalse == test_13) {
            const enumGalgasBool test_15 = var_isEndOfTemplateMark.boolEnum () ;
            if (kBoolTrue == test_15) {
              GALGAS_location location_16 (enumerator_87083.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
              inCompiler->emitSemanticError (location_16, GALGAS_string ("the 'templateEndMark' feature is already set")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2031)) ;
            }else if (kBoolFalse == test_15) {
              var_isEndOfTemplateMark = GALGAS_bool (true) ;
            }
          }
        }
        enumerator_87083.gotoNextObject () ;
      }
      var_lexiqueAnalysisContext.mAttribute_mTerminalList.addAssign_operation (enumerator_86844.current_mTerminalSpelling (HERE), var_argumentTypeList, var_syntaxErrorMessage, var_isEndOfTemplateMark, var_atomicSelection, var_terminalStyleIndex  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2036)) ;
      {
      var_lexiqueAnalysisContext.mAttribute_mTerminalMap.setter_insertKey (enumerator_86844.current_mTerminalSpelling (HERE), var_argumentTypeList, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2043)) ;
      }
      {
      var_lexicalTokenListMap.setter_insertKey (enumerator_86844.current_mEntrySpelling (HERE), enumerator_86844.current_mTerminalSpelling (HERE), enumerator_86844.current_mFeatureList (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2044)) ;
      }
      var_tokenSortedlist.addAssign_operation (enumerator_86844.current_mEntrySpelling (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 2045)).getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 2045)), enumerator_86844.current_mEntrySpelling (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 2045)), enumerator_86844.current_mTerminalSpelling (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 2045))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2045)) ;
      var_lexiqueAnalysisContext.mAttribute_mUnicodeStringToGenerate.addAssign_operation (enumerator_86844.current_mEntrySpelling (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 2046))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2046)) ;
      enumerator_86844.gotoNextObject () ;
    }
    {
    var_lexiqueAnalysisContext.mAttribute_mLexicalTokenListMap.setter_insertKey (enumerator_86185.current_mName (HERE), var_lexicalTokenListMap, var_tokenSortedlist, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2048)) ;
    }
    enumerator_86185.gotoNextObject () ;
  }
  cEnumerator_lexicalMessageDeclarationListAST enumerator_88472 (object->mAttribute_mLexicalMessageDeclarationList, kEnumeration_up) ;
  while (enumerator_88472.hasCurrentObject ()) {
    {
    var_lexiqueAnalysisContext.mAttribute_mLexicalMessageMap.setter_insertKey (enumerator_88472.current_mMessageName (HERE), enumerator_88472.current_mMessageValue (HERE), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2052)) ;
    }
    enumerator_88472.gotoNextObject () ;
  }
  cEnumerator_lexicalRuleListAST enumerator_88659 (object->mAttribute_mLexicalRuleList, kEnumeration_up) ;
  while (enumerator_88659.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalRule ((const cPtr_abstractLexicalRuleAST *) enumerator_88659.current_mLexicalRule (HERE).ptr (), var_lexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2056)) ;
    enumerator_88659.gotoNextObject () ;
  }
  cEnumerator_lexicalMessageMap enumerator_88851 (var_lexiqueAnalysisContext.getter_mLexicalMessageMap (SOURCE_FILE ("semanticAnalysis.galgas", 2059)), kEnumeration_up) ;
  while (enumerator_88851.hasCurrentObject ()) {
    const enumGalgasBool test_17 = enumerator_88851.current_mMessageIsUsed (HERE).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 2060)).boolEnum () ;
    if (kBoolTrue == test_17) {
      GALGAS_location location_18 (enumerator_88851.current_lkey (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticWarning (location_18, GALGAS_string ("unused message")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2061)) ;
    }
    enumerator_88851.gotoNextObject () ;
  }
  cEnumerator_metamodelTemplateDelimitorListAST enumerator_89031 (object->mAttribute_mTemplateDelimitorList, kEnumeration_up) ;
  while (enumerator_89031.hasCurrentObject ()) {
    var_lexiqueAnalysisContext.mAttribute_mUnicodeStringToGenerate.addAssign_operation (enumerator_89031.current_mStartString (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 2066))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2066)) ;
    var_lexiqueAnalysisContext.mAttribute_mUnicodeStringToGenerate.addAssign_operation (enumerator_89031.current_mEndString (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 2067))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2067)) ;
    GALGAS_bool var_preservesStartDelimiter = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_89252 (enumerator_89031.current_mOptionList (HERE), kEnumeration_up) ;
    while (enumerator_89252.hasCurrentObject ()) {
      const enumGalgasBool test_19 = GALGAS_bool (kIsNotEqual, enumerator_89252.current_mValue (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 2070)).objectCompare (GALGAS_string ("preserved"))).boolEnum () ;
      if (kBoolTrue == test_19) {
        GALGAS_location location_20 (enumerator_89252.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_20, GALGAS_string ("only the 'preserved' feature is allowed here")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2071)) ;
      }else if (kBoolFalse == test_19) {
        const enumGalgasBool test_21 = var_preservesStartDelimiter.boolEnum () ;
        if (kBoolTrue == test_21) {
          GALGAS_location location_22 (enumerator_89252.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_22, GALGAS_string ("the 'preserved' feature is already set")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2073)) ;
        }else if (kBoolFalse == test_21) {
          var_preservesStartDelimiter = GALGAS_bool (true) ;
        }
      }
      enumerator_89252.gotoNextObject () ;
    }
    var_lexiqueAnalysisContext.mAttribute_mTemplateDelimitorList.addAssign_operation (enumerator_89031.current_mStartString (HERE), enumerator_89031.current_mEndString (HERE), var_preservesStartDelimiter  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2078)) ;
    enumerator_89031.gotoNextObject () ;
  }
  const enumGalgasBool test_23 = object->mAttribute_mIndexingDirectory.mAttribute_location.getter_isNowhere (SOURCE_FILE ("semanticAnalysis.galgas", 2081)).boolEnum () ;
  if (kBoolTrue == test_23) {
    cEnumerator_indexingListAST enumerator_89783 (object->mAttribute_mIndexingListAST, kEnumeration_up) ;
    while (enumerator_89783.hasCurrentObject ()) {
      GALGAS_location location_24 (enumerator_89783.current_mIndexName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_24, GALGAS_string ("indexing declaration requires one 'indexing in \"path\";' declaration")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2083)) ;
      enumerator_89783.gotoNextObject () ;
    }
  }
  GALGAS_stringset var_indexNameSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 2086)) ;
  cEnumerator_indexingListAST enumerator_89968 (object->mAttribute_mIndexingListAST, kEnumeration_up) ;
  while (enumerator_89968.hasCurrentObject ()) {
    const enumGalgasBool test_25 = var_indexNameSet.getter_hasKey (enumerator_89968.current_mIndexName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 2088)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2088)).boolEnum () ;
    if (kBoolTrue == test_25) {
      GALGAS_location location_26 (enumerator_89968.current_mIndexName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_26, GALGAS_string ("the '").add_operation (enumerator_89968.current_mIndexName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 2089)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2089)).add_operation (GALGAS_string ("' index is already declared"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2089))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2089)) ;
    }
    var_indexNameSet.addAssign_operation (enumerator_89968.current_mIndexName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 2091))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2091)) ;
    enumerator_89968.gotoNextObject () ;
  }
  cEnumerator_templateReplacementListAST enumerator_90259 (object->mAttribute_mTemplateReplacementList, kEnumeration_up) ;
  while (enumerator_90259.hasCurrentObject ()) {
    var_lexiqueAnalysisContext.mAttribute_mUnicodeStringToGenerate.addAssign_operation (enumerator_90259.current_mMatchString (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 2095))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2095)) ;
    var_lexiqueAnalysisContext.mAttribute_mUnicodeStringToGenerate.addAssign_operation (enumerator_90259.current_mReplacementString (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 2096))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2096)) ;
    enumerator_90259.gotoNextObject () ;
  }
  const enumGalgasBool test_27 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("semanticAnalysis.galgas", 2100)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_27) {
    GALGAS_string var_lexiqueClassName = object->mAttribute_mLexiqueComponentName.mAttribute_string ;
    GALGAS_string var_headerContents = GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_newHeaderZone_32_ (inCompiler, var_lexiqueClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 2104)), var_lexiqueAnalysisContext, object->mAttribute_mTemplateDelimitorList COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2103))) ;
    var_headerContents.plusAssign_operation(GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_newHeaderZone_33_ (inCompiler, var_lexiqueClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 2109)), object->mAttribute_mLexicalListDeclarationList, var_lexiqueAnalysisContext, object->mAttribute_mIndexingListAST COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2108))), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2108)) ;
    GALGAS_string var_cppContents = GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_newImplementationZone_32_Galgas_33_ (inCompiler, var_lexiqueClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 2116)), var_lexiqueAnalysisContext.getter_mLexicalAttributeMap (SOURCE_FILE ("semanticAnalysis.galgas", 2117)), var_lexiqueAnalysisContext.getter_mLexicalMessageMap (SOURCE_FILE ("semanticAnalysis.galgas", 2118)), var_lexiqueAnalysisContext.getter_mTerminalList (SOURCE_FILE ("semanticAnalysis.galgas", 2119)), var_lexiqueAnalysisContext.getter_mLexicalTokenListMap (SOURCE_FILE ("semanticAnalysis.galgas", 2120)), var_lexiqueAnalysisContext.getter_mUnicodeStringToGenerate (SOURCE_FILE ("semanticAnalysis.galgas", 2121)), object->mAttribute_mLexicalRuleList, var_lexiqueAnalysisContext, object->mAttribute_mIndexingDirectory.mAttribute_string, object->mAttribute_mTemplateDelimitorList, var_lexiqueClassName, object->mAttribute_mTemplateReplacementList, object->mAttribute_mLexicalStyleList COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2115))) ;
    GALGAS_string var_cocoaHeader = GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_cocoaHeaderZone_32_ (inCompiler, var_lexiqueClassName, var_lexiqueAnalysisContext COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2131))) ;
    var_cocoaHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_cocoaHeaderZone_33_ (inCompiler, var_lexiqueClassName, var_lexiqueAnalysisContext COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2135))), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2135)) ;
    GALGAS_string var_cocoaImplementation = GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_cocoaImplementationZone_32_ (inCompiler, GALGAS_string ("lexique-").add_operation (var_lexiqueClassName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2141)).add_operation (GALGAS_string ("-cocoa"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2141)), var_lexiqueClassName, var_lexiqueAnalysisContext.getter_mLexicalAttributeMap (SOURCE_FILE ("semanticAnalysis.galgas", 2143)), var_lexiqueAnalysisContext.getter_mLexicalMessageMap (SOURCE_FILE ("semanticAnalysis.galgas", 2144)), var_lexiqueAnalysisContext.getter_mTerminalList (SOURCE_FILE ("semanticAnalysis.galgas", 2145)), var_lexiqueAnalysisContext.getter_mUnicodeStringToGenerate (SOURCE_FILE ("semanticAnalysis.galgas", 2146)), object->mAttribute_mLexicalRuleList, var_lexiqueAnalysisContext, object->mAttribute_mTemplateReplacementList, object->mAttribute_mIndexingDirectory.mAttribute_string, object->mAttribute_mIndexingListAST, object->mAttribute_mLexicalStyleList, object->mAttribute_mTemplateDelimitorList COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2140))) ;
    ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string::makeEmptyString (), GALGAS_lexiqueDeclarationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("lexique-").add_operation (var_lexiqueClassName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2160)), var_lexiqueClassName, var_headerContents, var_cppContents, var_cocoaHeader, var_cocoaImplementation  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2158)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2156)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexiqueComponentAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_lexiqueComponentAST.mSlotID,
                                         extensionMethod_lexiqueComponentAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexiqueComponentAST_semanticAnalysis (defineExtensionMethod_lexiqueComponentAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@semanticInstructionAST analyzeSyntaxInstruction'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_semanticInstructionAST_analyzeSyntaxInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                             const GALGAS_bool /* constinArgument_inHasTranslateFeature */,
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
  const cPtr_semanticInstructionAST * object = (const cPtr_semanticInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_semanticInstructionAST) ;
  const GALGAS_semanticInstructionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticInstruction ((const cPtr_semanticInstructionAST *) temp_0.ptr (), constinArgument_inAnalysisContext, ioArgument_ioInstructionListForGeneration, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2427)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_semanticInstructionAST_analyzeSyntaxInstruction (void) {
  enterExtensionMethod_analyzeSyntaxInstruction (kTypeDescriptor_GALGAS_semanticInstructionAST.mSlotID,
                                                 extensionMethod_semanticInstructionAST_analyzeSyntaxInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_semanticInstructionAST_analyzeSyntaxInstruction (defineExtensionMethod_semanticInstructionAST_analyzeSyntaxInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@nonterminalCallInstruction analyzeSyntaxInstruction'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_nonterminalCallInstruction_analyzeSyntaxInstruction (const cPtr_syntaxInstructionAST * inObject,
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
  GALGAS_nonterminalLabelMap var_labelMap ;
  constinArgument_inNonterminalMap.method_searchKey (object->mAttribute_mNonterminalName, var_labelMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2448)) ;
  GALGAS_formalParameterSignature var_signature ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mLabelName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 2450)).objectCompare (GALGAS_string ("parse"))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_signature = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 2451)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_formalParameterListForGeneration joker_107554 ; // Joker input parameter
    GALGAS_location joker_107568 ; // Joker input parameter
    var_labelMap.method_searchKey (object->mAttribute_mLabelName, joker_107554, var_signature, joker_107568, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2453)) ;
  }
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration ;
  {
  routine_analyzeRoutineArguments (constinArgument_inAnalysisContext, object->mAttribute_mNonterminalName, GALGAS_string ("'<").add_operation (object->mAttribute_mNonterminalName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 2459)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2459)).add_operation (GALGAS_string (">' nonterminal declaration"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2459)), var_signature, object->mAttribute_mActualParameterList, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2456)) ;
  }
  callExtensionMethod_analyzeSDT ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) object->mAttribute_mGrammarInstructionSyntaxDirectedTranslationResult.ptr (), constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2467)) ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_nonterminalInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mNonterminalName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 2475)), object->mAttribute_mLabelName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 2476)), var_actualParameterListForGeneration, object->mAttribute_mGrammarInstructionSyntaxDirectedTranslationResult  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2473))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2473)) ;
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
  GALGAS_stringlist var_parameterCppNameList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 2490)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 2491)) ;
  GALGAS_stringlist var_inputVariableList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 2492)) ;
  cEnumerator_actualParameterListForGeneration enumerator_108990 (object->mAttribute_mActualParameterList, kEnumeration_up) ;
  while (enumerator_108990.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName ;
    callExtensionMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_108990.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList, var_inputVariableList, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2494)) ;
    var_parameterCppNameList.addAssign_operation (var_parameterCppName  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2503)) ;
    enumerator_108990.gotoNextObject () ;
  }
  GALGAS_string var_sdtResultVarName = GALGAS_string ("syntaxDirectedTranslationResult_").add_operation (object->mAttribute_mInstructionLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2506)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 2506)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2506)) ;
  const enumGalgasBool test_0 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("C_String ").add_operation (var_sdtResultVarName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2508)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2508)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2508)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("nt_").add_operation (object->mAttribute_mNonterminalName.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 2510)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2510)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2510)).add_operation (object->mAttribute_mLabelName.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 2510)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2510)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2510)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2510)) ;
  cEnumerator_stringlist enumerator_109716 (var_parameterCppNameList, kEnumeration_up) ;
  while (enumerator_109716.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_109716.current_mValue (HERE).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2512)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2512)) ;
    enumerator_109716.gotoNextObject () ;
  }
  const enumGalgasBool test_1 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioGeneratedCode.plusAssign_operation(var_sdtResultVarName.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2515)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2515)) ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2517)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2517)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2518)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2518)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2518)) ;
  callExtensionMethod_generateCode ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) object->mAttribute_mGrammarInstructionSyntaxDirectedTranslationResult.ptr (), constinArgument_inGenerateSyntaxDirectedTranslationString, var_sdtResultVarName, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioGeneratedCode, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2519)) ;
  cEnumerator_stringlist enumerator_110250 (var_jokerParametersToReleaseList, kEnumeration_up) ;
  while (enumerator_110250.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_110250.current_mValue (HERE).add_operation (GALGAS_string (".drop () ; // Release temporary input variables (joker in source)\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2527)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2527)) ;
    enumerator_110250.gotoNextObject () ;
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
//                Overriding extension method '@inputParameterAnonymousVariable analyzeInputParameter'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_inputParameterAnonymousVariable_analyzeInputParameter (const cPtr_abstractInputParameter * /* inObject */,
                                                                                   const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                   const GALGAS_lexicalTypeEnum /* constinArgument_inRequiredLexicalType */,
                                                                                   const GALGAS_string /* constinArgument_inLexicalAttributeName */,
                                                                                   GALGAS_terminalCheckAssignementList & /* ioArgument_ioTerminalCheckAssignementList */,
                                                                                   GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_inputParameterAnonymousVariable_analyzeInputParameter (void) {
  enterExtensionMethod_analyzeInputParameter (kTypeDescriptor_GALGAS_inputParameterAnonymousVariable.mSlotID,
                                              extensionMethod_inputParameterAnonymousVariable_analyzeInputParameter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputParameterAnonymousVariable_analyzeInputParameter (defineExtensionMethod_inputParameterAnonymousVariable_analyzeInputParameter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@inputParameterVariable analyzeInputParameter'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_inputParameterVariable_analyzeInputParameter (const cPtr_abstractInputParameter * inObject,
                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                          const GALGAS_lexicalTypeEnum constinArgument_inRequiredLexicalType,
                                                                          const GALGAS_string constinArgument_inLexicalAttributeName,
                                                                          GALGAS_terminalCheckAssignementList & ioArgument_ioTerminalCheckAssignementList,
                                                                          GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inputParameterVariable * object = (const cPtr_inputParameterVariable *) inObject ;
  macroValidSharedObject (object, cPtr_inputParameterVariable) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type ;
  GALGAS_string var_cppName ;
  {
  GALGAS_string joker_111898 ; // Joker input parameter
  ioArgument_ioVariableMap.setter_searchForWriteAccess (object->mAttribute_mActualParameterName, var_type, var_cppName, joker_111898, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2562)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_expectedType ;
  switch (constinArgument_inRequiredLexicalType.enumValue ()) {
  case GALGAS_lexicalTypeEnum::kNotBuilt:
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_string:
    {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLStringType ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_char:
    {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLCharType ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint:
    {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLUIntType ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint_36__34_:
    {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLUInt_36__34_Type ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint:
    {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLSIntType ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint_36__34_:
    {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLSInt_36__34_Type ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_double:
    {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLDoubleType ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_bigint:
    {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLBigIntType ;
    }
    break ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_expectedType.objectCompare (var_type)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mActualParameterName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the '").add_operation (object->mAttribute_mActualParameterName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 2576)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2576)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2576)).add_operation (var_type.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2576)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2576)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2576)).add_operation (var_expectedType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2577)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2577)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2577))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2575)) ;
  }
  ioArgument_ioTerminalCheckAssignementList.addAssign_operation (GALGAS_string::makeEmptyString (), var_cppName, constinArgument_inLexicalAttributeName  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2579)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_inputParameterVariable_analyzeInputParameter (void) {
  enterExtensionMethod_analyzeInputParameter (kTypeDescriptor_GALGAS_inputParameterVariable.mSlotID,
                                              extensionMethod_inputParameterVariable_analyzeInputParameter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputParameterVariable_analyzeInputParameter (defineExtensionMethod_inputParameterVariable_analyzeInputParameter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@inputParameterDeclaredVariable analyzeInputParameter'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_inputParameterDeclaredVariable_analyzeInputParameter (const cPtr_abstractInputParameter * inObject,
                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                  const GALGAS_lexicalTypeEnum constinArgument_inRequiredLexicalType,
                                                                                  const GALGAS_string constinArgument_inLexicalAttributeName,
                                                                                  GALGAS_terminalCheckAssignementList & ioArgument_ioTerminalCheckAssignementList,
                                                                                  GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inputParameterDeclaredVariable * object = (const cPtr_inputParameterDeclaredVariable *) inObject ;
  macroValidSharedObject (object, cPtr_inputParameterDeclaredVariable) ;
  GALGAS_unifiedTypeMap_2D_proxy var_expectedType ;
  switch (constinArgument_inRequiredLexicalType.enumValue ()) {
  case GALGAS_lexicalTypeEnum::kNotBuilt:
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_string:
    {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLStringType ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_char:
    {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLCharType ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint:
    {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLUIntType ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint_36__34_:
    {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLUInt_36__34_Type ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint:
    {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLSIntType ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint_36__34_:
    {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLSInt_36__34_Type ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_double:
    {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLDoubleType ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_bigint:
    {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLBigIntType ;
    }
    break ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mActualParameterTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMap_2D_proxy var_type = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mActualParameterTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2607)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_expectedType.objectCompare (var_type)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_location location_2 (object->mAttribute_mActualParameterName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_2, GALGAS_string ("the '").add_operation (object->mAttribute_mActualParameterName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 2610)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2610)).add_operation (GALGAS_string ("' formal argument has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2610)).add_operation (var_type.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2610)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2610)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2610)).add_operation (var_expectedType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2611)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2611)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2611))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2609)) ;
    }
  }
  GALGAS_string var_cppName = GALGAS_string ("var_").add_operation (object->mAttribute_mActualParameterName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 2615)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2615)) ;
  {
  ioArgument_ioVariableMap.setter_insertDefinedLocalVariable (object->mAttribute_mActualParameterName, var_expectedType, var_cppName, var_cppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2616)) ;
  }
  ioArgument_ioTerminalCheckAssignementList.addAssign_operation (var_expectedType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2618)), var_cppName, constinArgument_inLexicalAttributeName  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2617)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_inputParameterDeclaredVariable_analyzeInputParameter (void) {
  enterExtensionMethod_analyzeInputParameter (kTypeDescriptor_GALGAS_inputParameterDeclaredVariable.mSlotID,
                                              extensionMethod_inputParameterDeclaredVariable_analyzeInputParameter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputParameterDeclaredVariable_analyzeInputParameter (defineExtensionMethod_inputParameterDeclaredVariable_analyzeInputParameter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@inputParameterDeclaredConstant analyzeInputParameter'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_inputParameterDeclaredConstant_analyzeInputParameter (const cPtr_abstractInputParameter * inObject,
                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                  const GALGAS_lexicalTypeEnum constinArgument_inRequiredLexicalType,
                                                                                  const GALGAS_string constinArgument_inLexicalAttributeName,
                                                                                  GALGAS_terminalCheckAssignementList & ioArgument_ioTerminalCheckAssignementList,
                                                                                  GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inputParameterDeclaredConstant * object = (const cPtr_inputParameterDeclaredConstant *) inObject ;
  macroValidSharedObject (object, cPtr_inputParameterDeclaredConstant) ;
  GALGAS_unifiedTypeMap_2D_proxy var_expectedType ;
  switch (constinArgument_inRequiredLexicalType.enumValue ()) {
  case GALGAS_lexicalTypeEnum::kNotBuilt:
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_string:
    {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLStringType ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_char:
    {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLCharType ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint:
    {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLUIntType ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint_36__34_:
    {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLUInt_36__34_Type ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint:
    {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLSIntType ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint_36__34_:
    {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLSInt_36__34_Type ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_double:
    {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLDoubleType ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_bigint:
    {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLBigIntType ;
    }
    break ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mActualParameterTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMap_2D_proxy var_type = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mActualParameterTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2645)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_expectedType.objectCompare (var_type)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_location location_2 (object->mAttribute_mActualParameterName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_2, GALGAS_string ("the '").add_operation (object->mAttribute_mActualParameterName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 2648)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2648)).add_operation (GALGAS_string ("' formal argument has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2648)).add_operation (var_type.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2648)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2648)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2648)).add_operation (var_expectedType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2649)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2649)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2649))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2647)) ;
    }
  }
  GALGAS_string var_cppName = GALGAS_string ("var_").add_operation (object->mAttribute_mActualParameterName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 2653)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2653)) ;
  {
  ioArgument_ioVariableMap.setter_insertLocalConstant (object->mAttribute_mActualParameterName, var_expectedType, var_cppName, var_cppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2654)) ;
  }
  ioArgument_ioTerminalCheckAssignementList.addAssign_operation (var_expectedType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2657)), var_cppName, constinArgument_inLexicalAttributeName  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2656)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_inputParameterDeclaredConstant_analyzeInputParameter (void) {
  enterExtensionMethod_analyzeInputParameter (kTypeDescriptor_GALGAS_inputParameterDeclaredConstant.mSlotID,
                                              extensionMethod_inputParameterDeclaredConstant_analyzeInputParameter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputParameterDeclaredConstant_analyzeInputParameter (defineExtensionMethod_inputParameterDeclaredConstant_analyzeInputParameter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultNone analyzeSDT'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * /* inObject */,
                                                                                              const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                              const GALGAS_bool /* constinArgument_inHasTranslateFeature */,
                                                                                              GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                              C_Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeSDT (void) {
  enterExtensionMethod_analyzeSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone.mSlotID,
                                   extensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeSDT) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeSDT (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeSDT, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@grammarInstructionSyntaxDirectedTranslationDropResult analyzeSDT'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                              const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                              const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                              GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationDropResult * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationDropResult *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationDropResult) ;
  const enumGalgasBool test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 2683)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mLocation, GALGAS_string ("the ':>' construct requires the syntax component to be declared with 'translate' feature")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2684)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeSDT (void) {
  enterExtensionMethod_analyzeSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult.mSlotID,
                                   extensionMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeSDT) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeSDT (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeSDT, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInVar analyzeSDT'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                               const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                               GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar) ;
  const enumGalgasBool test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 2694)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mActualParameterName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the ':>' construct requires the syntax component to be declared with 'translate' feature")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2695)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_type ;
  {
  GALGAS_string joker_118747 ; // Joker input parameter
  GALGAS_string joker_118750 ; // Joker input parameter
  ioArgument_ioVariableMap.setter_searchForWriteAccess (object->mAttribute_mActualParameterName, var_type, joker_118747, joker_118750, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2697)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_expectedType.objectCompare (var_type)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mActualParameterName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_3, GALGAS_string ("the '").add_operation (object->mAttribute_mActualParameterName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 2701)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2701)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2701)).add_operation (var_type.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2701)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2701)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2701)).add_operation (var_expectedType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2702)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2702)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2702))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2700)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeSDT (void) {
  enterExtensionMethod_analyzeSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar.mSlotID,
                                   extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeSDT) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeSDT (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeSDT, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//      Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar analyzeSDT'       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                       const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                                       GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar) ;
  const enumGalgasBool test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 2712)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mActualParameterName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the ':>' construct requires the syntax component to be declared with 'translate' feature")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2713)) ;
  }
  GALGAS_string var_cppName = GALGAS_string ("var_").add_operation (object->mAttribute_mActualParameterName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 2715)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2715)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mActualParameterTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2716)) ;
  {
  ioArgument_ioVariableMap.setter_insertDefinedLocalVariable (object->mAttribute_mActualParameterName, var_type, var_cppName, var_cppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2717)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_expectedType.objectCompare (var_type)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mActualParameterName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_3, GALGAS_string ("the '").add_operation (object->mAttribute_mActualParameterName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 2721)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2721)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2721)).add_operation (var_type.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2721)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2721)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2721)).add_operation (var_expectedType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2722)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2722)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2722))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2720)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeSDT (void) {
  enterExtensionMethod_analyzeSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar.mSlotID,
                                   extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeSDT) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeSDT (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeSDT, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//     Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst analyzeSDT'      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                         const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                         const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                                         GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst) ;
  const enumGalgasBool test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 2732)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mActualParameterName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2733)) ;
  }
  GALGAS_string var_cppName = GALGAS_string ("var_").add_operation (object->mAttribute_mActualParameterName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 2735)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2735)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mActualParameterTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2736)) ;
  {
  ioArgument_ioVariableMap.setter_insertLocalConstant (object->mAttribute_mActualParameterName, var_type, var_cppName, var_cppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2737)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_expectedType.objectCompare (var_type)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mActualParameterName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_3, GALGAS_string ("the '").add_operation (object->mAttribute_mActualParameterName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 2741)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2741)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2741)).add_operation (var_type.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2741)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2741)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2741)).add_operation (var_expectedType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2742)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2742)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2742))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2740)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeSDT (void) {
  enterExtensionMethod_analyzeSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst.mSlotID,
                                   extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeSDT) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeSDT (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeSDT, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultNone generateCode'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_generateCode (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * /* inObject */,
                                                                                                const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                                const GALGAS_string constinArgument_inAccessMethodName,
                                                                                                GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                                GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioGeneratedCode.plusAssign_operation(function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2762)).add_operation (GALGAS_string (" << "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2762)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2762)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2762)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2762)) ;
    {
    ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2763)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2763)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone.mSlotID,
                                     extensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultNone_generateCode (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@grammarInstructionSyntaxDirectedTranslationDropResult generateCode'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationDropResult_generateCode (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * /* inObject */,
                                                                                                const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                                const GALGAS_string /* constinArgument_inAccessMethodName */,
                                                                                                GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                                GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationDropResult_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult.mSlotID,
                                     extensionMethod_grammarInstructionSyntaxDirectedTranslationDropResult_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationDropResult_generateCode (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationDropResult_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInVar generateCode'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_generateCode (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                 const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                                 const GALGAS_string constinArgument_inAccessMethodName,
                                                                                                 GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                                 GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar) ;
  GALGAS_string var_cppName = GALGAS_string ("var_").add_operation (object->mAttribute_mActualParameterName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 2783)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2783)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_cppName.add_operation (GALGAS_string (" = GALGAS_string ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2784)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2784)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2784)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2784)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar.mSlotID,
                                     extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_generateCode (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//     Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar generateCode'      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_generateCode (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                         const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                                         const GALGAS_string constinArgument_inAccessMethodName,
                                                                                                         GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                                         GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar) ;
  GALGAS_string var_cppName = GALGAS_string ("var_").add_operation (object->mAttribute_mActualParameterName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 2794)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2794)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_string ").add_operation (var_cppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2795)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2795)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2795)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2795)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2795)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar.mSlotID,
                                     extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_generateCode (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst generateCode'     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_generateCode (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                           const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                                           const GALGAS_string constinArgument_inAccessMethodName,
                                                                                                           GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                                           GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst) ;
  GALGAS_string var_cppName = GALGAS_string ("var_").add_operation (object->mAttribute_mActualParameterName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 2805)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2805)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const GALGAS_string ").add_operation (var_cppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2806)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2806)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2806)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2806)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2806)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst.mSlotID,
                                     extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_generateCode (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@terminalCheckInstruction analyzeSyntaxInstruction'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_terminalCheckInstruction_analyzeSyntaxInstruction (const cPtr_syntaxInstructionAST * inObject,
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
  GALGAS_lexicalSentValueList var_sentAttributeList ;
  constinArgument_inTerminalMap.method_searchKey (object->mAttribute_mTerminalName, var_sentAttributeList, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2822)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mActualInputParameterList.getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 2824)).objectCompare (var_sentAttributeList.getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 2824)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string temp_1 ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, var_sentAttributeList.getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 2827)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      temp_1 = GALGAS_string ("s") ;
    }else if (kBoolFalse == test_2) {
      temp_1 = GALGAS_string::makeEmptyString () ;
    }
    GALGAS_string temp_3 ;
    const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, object->mAttribute_mActualInputParameterList.getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 2830)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
    if (kBoolTrue == test_4) {
      temp_3 = GALGAS_string ("s") ;
    }else if (kBoolFalse == test_4) {
      temp_3 = GALGAS_string::makeEmptyString () ;
    }
    GALGAS_location location_5 (object->mAttribute_mTerminalName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_5, GALGAS_string ("naming the '$").add_operation (object->mAttribute_mTerminalName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 2826)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2826)).add_operation (GALGAS_string ("$' terminal requires "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2826)).add_operation (var_sentAttributeList.getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 2826)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 2826)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2826)).add_operation (GALGAS_string (" input parameter"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2826)).add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2827)).add_operation (GALGAS_string (", but this instruction names "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2827)).add_operation (object->mAttribute_mActualInputParameterList.getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 2829)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 2829)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2828)).add_operation (GALGAS_string (" input parameter"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2829)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2829))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2825)) ;
  }
  GALGAS_terminalCheckAssignementList var_terminalCheckAssignementList = GALGAS_terminalCheckAssignementList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 2833)) ;
  cEnumerator_actualInputParameterListAST enumerator_125601 (object->mAttribute_mActualInputParameterList, kEnumeration_up) ;
  cEnumerator_lexicalSentValueList enumerator_125626 (var_sentAttributeList, kEnumeration_up) ;
  while (enumerator_125601.hasCurrentObject () && enumerator_125626.hasCurrentObject ()) {
    callExtensionMethod_analyzeInputParameter ((const cPtr_abstractInputParameter *) enumerator_125601.current_mInputParameter (HERE).ptr (), constinArgument_inAnalysisContext, enumerator_125626.current_mLexicalType (HERE), enumerator_125626.current_mLexicalAttributeName (HERE), var_terminalCheckAssignementList, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2835)) ;
    const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, enumerator_125626.current_mLexicalFormalSelector (HERE).mAttribute_string.objectCompare (enumerator_125601.current_mActualSelector (HERE).mAttribute_string)).boolEnum () ;
    if (kBoolTrue == test_6) {
      GALGAS_string temp_7 ;
      const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, enumerator_125626.current_mLexicalFormalSelector (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_8) {
        temp_7 = GALGAS_string (":") ;
      }else if (kBoolFalse == test_8) {
        temp_7 = GALGAS_string::makeEmptyString () ;
      }
      GALGAS_location location_9 (enumerator_125601.current_mActualSelector (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_9, GALGAS_string ("the actual selector should be '\?").add_operation (enumerator_125626.current_mLexicalFormalSelector (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 2843)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2843)).add_operation (temp_7, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2843)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2843))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2843)) ;
      GALGAS_location location_10 (enumerator_125626.current_mLexicalFormalSelector (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticWarning (location_10, GALGAS_string ("the formal selector is declared here")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2844)) ;
    }
    enumerator_125601.gotoNextObject () ;
    enumerator_125626.gotoNextObject () ;
  }
  cEnumerator__32_lstringlist enumerator_126163 (object->mAttribute_mIndexingKeyList, kEnumeration_up) ;
  while (enumerator_126163.hasCurrentObject ()) {
    const enumGalgasBool test_11 = constinArgument_inIndexNameSet.getter_hasKey (enumerator_126163.current_mValue_30_ (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 2849)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2849)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 2849)).boolEnum () ;
    if (kBoolTrue == test_11) {
      GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
      cEnumerator_stringset enumerator_126272 (constinArgument_inIndexNameSet, kEnumeration_up) ;
      while (enumerator_126272.hasCurrentObject ()) {
        var_s.plusAssign_operation(GALGAS_string ("\n"
          "  - ").add_operation (enumerator_126272.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2852)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2852)) ;
        enumerator_126272.gotoNextObject () ;
      }
      GALGAS_location location_12 (enumerator_126163.current_mValue_30_ (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_12, GALGAS_string ("the '").add_operation (enumerator_126163.current_mValue_30_ (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 2854)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2854)).add_operation (GALGAS_string ("' indexing name is not declared by the lexique; available names are:"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2854)).add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2854))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2854)) ;
    }
    enumerator_126163.gotoNextObject () ;
  }
  callExtensionMethod_analyzeSDT ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) object->mAttribute_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor.ptr (), constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2858)) ;
  callExtensionMethod_analyzeSDT ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) object->mAttribute_mGrammarInstructionSyntaxDirectedTranslationToken.ptr (), constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2863)) ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_terminalCheckInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTerminalName, constinArgument_inLexiqueName, var_terminalCheckAssignementList, object->mAttribute_mIndexingKeyList, object->mAttribute_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor, object->mAttribute_mGrammarInstructionSyntaxDirectedTranslationToken  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2869))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2869)) ;
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
  cEnumerator_terminalCheckAssignementList enumerator_127606 (object->mAttribute_mTerminalCheckAssignementList, kEnumeration_up) ;
  while (enumerator_127606.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, enumerator_127606.current_mTypeName (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (enumerator_127606.current_mTypeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 2890)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2890)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2890)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2890)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_127606.current_mTargetVarCppName (HERE).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2893)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2893)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2893)).add_operation (GALGAS_string ("->synthetizedAttribute_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2893)).add_operation (enumerator_127606.current_mSourceLexicalAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 2894)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2893)).add_operation (GALGAS_string (" () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2894)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2893)) ;
    enumerator_127606.gotoNextObject () ;
  }
  cEnumerator__32_lstringlist enumerator_127990 (object->mAttribute_mIndexingKeyList, kEnumeration_up) ;
  while (enumerator_127990.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2899)).add_operation (GALGAS_string ("->enterIndexing (C_Lexique_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2899)).add_operation (object->mAttribute_mLexiqueIdentifier, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2900)).add_operation (GALGAS_string ("::kIndexing_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2900)).add_operation (enumerator_127990.current_mValue_30_ (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 2900)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2900)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2900)).add_operation (enumerator_127990.current_mValue_31_ (HERE).mAttribute_string.getter_utf_38_Representation (SOURCE_FILE ("semanticAnalysis.galgas", 2901)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2901)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2901)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2899)) ;
    enumerator_127990.gotoNextObject () ;
  }
  callExtensionMethod_generateCode ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) object->mAttribute_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor.ptr (), constinArgument_inGenerateSyntaxDirectedTranslationString, GALGAS_string ("inCompiler->preceedingSeparatorString ()"), ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioGeneratedCode, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2904)) ;
  callExtensionMethod_generateCode ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) object->mAttribute_mGrammarInstructionSyntaxDirectedTranslationToken.ptr (), constinArgument_inGenerateSyntaxDirectedTranslationString, GALGAS_string ("inCompiler->tokenString ()"), ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioGeneratedCode, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2910)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2917)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2917)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2918)).add_operation (GALGAS_string ("->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2918)).add_operation (object->mAttribute_mLexiqueIdentifier, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2918)).add_operation (GALGAS_string ("::kToken_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2919)).add_operation (object->mAttribute_mTerminalName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 2919)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2919)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2919)).add_operation (extensionGetter_commaSourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2920)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2920)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2920)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2918)) ;
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
//                      Overriding extension method '@repeatInstruction analyzeSyntaxInstruction'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_repeatInstruction_analyzeSyntaxInstruction (const cPtr_syntaxInstructionAST * inObject,
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
  GALGAS_uint var_choiceIndex = ioArgument_ioSelectMethodCount ;
  ioArgument_ioSelectMethodCount.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2974)) ;
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2976)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_repeated_5F_instructionList ;
  {
  routine_analyzeSyntaxInstructionList (constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, object->mAttribute_mRepeatedInstructionList, object->mAttribute_mEndOf_5F_repeated_5F_instructions_5F_branch, constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_repeated_5F_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2979)) ;
  }
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration = GALGAS_listOfSemanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 2994)) ;
  cEnumerator_listOfSyntaxInstructionList enumerator_131558 (object->mAttribute_mRepeatBranchList, kEnumeration_up) ;
  while (enumerator_131558.hasCurrentObject ()) {
    GALGAS_semanticInstructionListForGeneration var_instructionList ;
    {
    routine_analyzeSyntaxInstructionList (constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, enumerator_131558.current_mSyntaxInstructionList (HERE), enumerator_131558.current_mEndOf_5F_instructions (HERE), constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2997)) ;
    }
    var_listOfSemanticInstructionListForGeneration.addAssign_operation (var_instructionList, enumerator_131558.current_mEndOf_5F_instructions (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3011)) ;
    enumerator_131558.gotoNextObject () ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mAttribute_mEndOf_5F_repeat_5F_instruction, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3014)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_repeatInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, constinArgument_inComponentName, var_choiceIndex, var_repeated_5F_instructionList, object->mAttribute_mEndOf_5F_repeat_5F_instruction, var_listOfSemanticInstructionListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3016))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3016)) ;
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
  GALGAS_string var_repeatFlagCppName = GALGAS_string ("repeatFlag_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 3034)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3034)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3034)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("bool ").add_operation (var_repeatFlagCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3035)).add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3035)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3035)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("while (").add_operation (var_repeatFlagCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3036)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3036)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3036)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_m_5F_repeated_5F_instructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3037)) ;
  }
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3045)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("switch (select_").add_operation (object->mAttribute_mSyntaxComponentName.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 3046)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3046)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3046)).add_operation (object->mAttribute_mChoiceIndex.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 3046)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3046)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3046)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3046)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3046)).add_operation (GALGAS_string (")) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3046)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3046)) ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_133545 (object->mAttribute_mListOfSemanticInstructionListForGeneration, kEnumeration_up) ;
  GALGAS_uint index_133495 ((uint32_t) 0) ;
  while (enumerator_133545.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case ").add_operation (index_133495.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3048)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 3048)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3048)).add_operation (GALGAS_string (": {\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3048)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3048)) ;
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_133545.current_mInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3049)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("} break ;\n"), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3057)) ;
    enumerator_133545.gotoNextObject () ;
    index_133495.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3047)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("default:\n"), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3059)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_repeatFlagCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3060)).add_operation (GALGAS_string (" = false ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3060)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3060)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3061)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3062)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3063)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3064)) ;
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
//                      Overriding extension method '@selectInstruction analyzeSyntaxInstruction'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_selectInstruction_analyzeSyntaxInstruction (const cPtr_syntaxInstructionAST * inObject,
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
  GALGAS_uint var_choiceIndex = ioArgument_ioSelectMethodCount ;
  ioArgument_ioSelectMethodCount.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3081)) ;
  {
  ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3083)) ;
  }
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration = GALGAS_listOfSemanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 3085)) ;
  cEnumerator_listOfSyntaxInstructionList enumerator_134960 (object->mAttribute_mSelectBranchList, kEnumeration_up) ;
  while (enumerator_134960.hasCurrentObject ()) {
    GALGAS_semanticInstructionListForGeneration var_instructionList ;
    {
    routine_analyzeSyntaxInstructionList (constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, enumerator_134960.current_mSyntaxInstructionList (HERE), enumerator_134960.current_mEndOf_5F_instructions (HERE), constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3088)) ;
    }
    var_listOfSemanticInstructionListForGeneration.addAssign_operation (var_instructionList, enumerator_134960.current_mEndOf_5F_instructions (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3102)) ;
    enumerator_134960.gotoNextObject () ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mAttribute_mEndOf_5F_select_5F_instruction, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3105)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_selectInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, constinArgument_inComponentName, var_choiceIndex, var_listOfSemanticInstructionListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3106))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3106)) ;
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
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3122)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3122)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("switch (select_").add_operation (object->mAttribute_mSyntaxComponentName.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 3123)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3123)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3123)).add_operation (object->mAttribute_mChoiceIndex.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 3123)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3123)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3123)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3123)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3123)).add_operation (GALGAS_string (")) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3123)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3123)) ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_136448 (object->mAttribute_mListOfSemanticInstructionListForGeneration, kEnumeration_up) ;
  GALGAS_uint index_136398 ((uint32_t) 0) ;
  while (enumerator_136448.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case ").add_operation (index_136398.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3125)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 3125)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3125)).add_operation (GALGAS_string (": {\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3125)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3125)) ;
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_136448.current_mInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3126)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("} break ;\n"), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3134)) ;
    enumerator_136448.gotoNextObject () ;
    index_136398.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3124)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("default:\n"), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3136)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3137)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3138)) ;
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
//                   Overriding extension method '@parseRewindInstruction analyzeSyntaxInstruction'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_parseRewindInstruction_analyzeSyntaxInstruction (const cPtr_syntaxInstructionAST * inObject,
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
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration = GALGAS_listOfSemanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 3155)) ;
  GALGAS_uint var_referenceSelectMethodCount = ioArgument_ioSelectMethodCount ;
  cEnumerator_listOfSyntaxInstructionList enumerator_137673 (object->mAttribute_mParseRewindBranchList, kEnumeration_up) ;
  while (enumerator_137673.hasCurrentObject ()) {
    ioArgument_ioSelectMethodCount = var_referenceSelectMethodCount ;
    GALGAS_semanticInstructionListForGeneration var_instructionList = GALGAS_semanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 3159)) ;
    cEnumerator_syntaxInstructionList enumerator_137841 (enumerator_137673.current_mSyntaxInstructionList (HERE), kEnumeration_up) ;
    while (enumerator_137841.hasCurrentObject ()) {
      callExtensionMethod_analyzeSyntaxInstruction ((const cPtr_syntaxInstructionAST *) enumerator_137841.current_mInstruction (HERE).ptr (), constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, constinArgument_inIndexNameSet, var_instructionList, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3161)) ;
      enumerator_137841.gotoNextObject () ;
    }
    var_listOfSemanticInstructionListForGeneration.addAssign_operation (var_instructionList, enumerator_137673.current_mEndOf_5F_instructions (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3174)) ;
    enumerator_137673.gotoNextObject () ;
  }
  GALGAS_listOfSemanticInstructionListForGeneration var_tempListOfBranches = var_listOfSemanticInstructionListForGeneration ;
  GALGAS_semanticInstructionListForGeneration var_instructionList ;
  {
  GALGAS_location joker_138516 ; // Joker input parameter
  var_tempListOfBranches.setter_popFirst (var_instructionList, joker_138516, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3179)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_referenceSignature = function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), var_instructionList, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3180)) ;
  GALGAS_bool var_ok = GALGAS_bool (true) ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_138693 (var_tempListOfBranches, kEnumeration_up) ;
  bool bool_0 = var_ok.isValidAndTrue () ;
  if (enumerator_138693.hasCurrentObject () && bool_0) {
    while (enumerator_138693.hasCurrentObject () && bool_0) {
      var_ok = function_compareSyntaxSignature (var_referenceSignature, function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), enumerator_138693.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3185)), enumerator_138693.current_mEndOfInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3183)) ;
      enumerator_138693.gotoNextObject () ;
      if (enumerator_138693.hasCurrentObject ()) {
        bool_0 = var_ok.isValidAndTrue () ;
      }
    }
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_parseRewindInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_listOfSemanticInstructionListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3190))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3190)) ;
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
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3204)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3204)) ;
  }
  GALGAS_string var_parsingContextVar = GALGAS_string ("parsingContext_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 3205)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3205)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3205)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const C_parsingContext ").add_operation (var_parsingContextVar, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3206)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3206)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3206)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3206)).add_operation (GALGAS_string ("->parsingContext () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3206)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3206)) ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_139881 (object->mAttribute_mListOfSemanticInstructionListForGeneration, kEnumeration_up) ;
  while (enumerator_139881.hasCurrentObject ()) {
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_139881.current_mInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3209)) ;
    }
    if (enumerator_139881.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3218)).add_operation (GALGAS_string ("->setParsingContext ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3218)).add_operation (var_parsingContextVar, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3218)).add_operation (GALGAS_string (") ; // rewind\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3218)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3218)) ;
    }
    enumerator_139881.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("//-------- END OF @parseRewindInstructionForGeneration\n"), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3220)) ;
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
//                    Overriding extension method '@parseLoopInstruction analyzeSyntaxInstruction'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_parseLoopInstruction_analyzeSyntaxInstruction (const cPtr_syntaxInstructionAST * inObject,
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
  GALGAS_semanticExpressionForGeneration var_variant_5F_expression ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mVariantExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 3239)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_variant_5F_expression, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3238)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_variant_5F_expression.getter_mResultType (SOURCE_FILE ("semanticAnalysis.galgas", 3244)).objectCompare (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mUIntType)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfVariantExpression, GALGAS_string ("the variant expression type is '@").add_operation (var_variant_5F_expression.getter_mResultType (SOURCE_FILE ("semanticAnalysis.galgas", 3246)).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3246)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3246)).add_operation (GALGAS_string ("', but it should be '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3246)).add_operation (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mUIntType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3247)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3247)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3247))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3245)) ;
  }
  GALGAS_semanticExpressionForGeneration var_while_5F_expression ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mWhileExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 3252)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_while_5F_expression, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3251)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_while_5F_expression.getter_mResultType (SOURCE_FILE ("semanticAnalysis.galgas", 3257)).objectCompare (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfWhileExpression, GALGAS_string ("the variant expression type is '@").add_operation (var_variant_5F_expression.getter_mResultType (SOURCE_FILE ("semanticAnalysis.galgas", 3259)).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3259)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3259)).add_operation (GALGAS_string ("', but it should be '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3259)).add_operation (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3260)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3260)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3260))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3258)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3264)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_instructionList ;
  {
  routine_analyzeSyntaxInstructionList (constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, object->mAttribute_mDoInstructionList, object->mAttribute_mEndOfInstructionList, constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3267)) ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mAttribute_mEndOfInstructionList, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3282)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_parseLoopInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_variant_5F_expression, var_while_5F_expression, var_instructionList  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3284))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3284)) ;
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
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3299)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3299)) ;
  }
  GALGAS_string var_variantVarCppName ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mVariantExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_variantVarCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3303)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_variantVarCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3305)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3305)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3305)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3306)) ;
  }
  GALGAS_string var_variantVar = GALGAS_string ("variant_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 3307)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3307)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3307)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("uint32_t ").add_operation (var_variantVar, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3308)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3308)).add_operation (var_variantVarCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3308)).add_operation (GALGAS_string (".uintValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3308)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3308)) ;
  GALGAS_string var_loopVar = GALGAS_string ("loop_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 3310)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3310)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3310)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("bool ").add_operation (var_loopVar, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3311)).add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3311)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3311)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("while (").add_operation (var_loopVar, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3312)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3312)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3312)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3313)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(var_loopVar.add_operation (GALGAS_string (" = false ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3314)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3314)) ;
  GALGAS_string var_whileVarCppName ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mWhileExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_whileVarCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3316)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_whileVarCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3317)).add_operation (GALGAS_string (".isValidAndTrue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3317)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3317)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3318)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(var_loopVar.add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3319)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3319)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_variantVar.add_operation (GALGAS_string (" -- ; // Decrement variant\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3320)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3320)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const C_parsingContext parsingContext = ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3321)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3321)).add_operation (GALGAS_string ("->parsingContext () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3321)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3321)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mInstructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3322)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3330)).add_operation (GALGAS_string ("->setParsingContext (parsingContext) ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3330)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3330)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3331)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3332)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3333)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3334)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3335)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3336)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("//--- 'parse'\n"), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3338)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), object->mAttribute_mInstructionList, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3341)), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3339)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3347)).add_operation (GALGAS_string ("->resetTemplateString () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3347)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3347)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("//-------- END OF @parseLoopInstructionForGeneration\n"), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3348)) ;
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
//                    Overriding extension method '@parseWhenInstruction analyzeSyntaxInstruction'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_parseWhenInstruction_analyzeSyntaxInstruction (const cPtr_syntaxInstructionAST * inObject,
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
  GALGAS_semanticExpressionForGeneration var_when_5F_expression ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mWhenExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 3367)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_when_5F_expression, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3366)) ;
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3373)) ;
  }
  GALGAS_uint var_localSelectMethodCount = ioArgument_ioSelectMethodCount ;
  GALGAS_semanticInstructionListForGeneration var_when_5F_instructionListForGeneration ;
  {
  routine_analyzeSyntaxInstructionList (constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, object->mAttribute_mWhenInstructionList, object->mAttribute_mEndOfWhenInstructionList, constinArgument_inIndexNameSet, ioArgument_ioVariableMap, var_localSelectMethodCount, var_when_5F_instructionListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3377)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionListForGeneration ;
  {
  routine_analyzeSyntaxInstructionList (constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, object->mAttribute_mElseInstructionList, object->mAttribute_mEndOfElseInstructionList, constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_else_5F_instructionListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3393)) ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mAttribute_mEndOfElseInstructionList, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3408)) ;
  }
  GALGAS_bool var_ok = function_compareSyntaxSignature (function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), var_when_5F_instructionListForGeneration, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3411)), function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), var_else_5F_instructionListForGeneration, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3412)), object->mAttribute_mEndOfElseInstructionList, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3410)) ;
  const enumGalgasBool test_0 = var_ok.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_parseWhenInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_when_5F_expression, var_when_5F_instructionListForGeneration, var_else_5F_instructionListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3417))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3417)) ;
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
  GALGAS_string var_sourceVar ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mWhenExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3435)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_sourceVar, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3436)).add_operation (GALGAS_string (".isValidAndTrue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3436)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3436)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mInstructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3437)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3445)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mElseInstructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3446)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3454)) ;
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
//                    Overriding extension method '@syntaxSendInstruction analyzeSyntaxInstruction'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_syntaxSendInstruction_analyzeSyntaxInstruction (const cPtr_syntaxInstructionAST * inObject,
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
  const enumGalgasBool test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 3470)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("'send' instruction is only allowed when syntax componant has 'translate' feature")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3471)) ;
  }
  GALGAS_semanticExpressionForGeneration var_expression ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 3475)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3474)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_expression.getter_mResultType (SOURCE_FILE ("semanticAnalysis.galgas", 3481)).objectCompare (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("'send' expresion should be an @string expression")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3482)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_syntaxSendInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_expression  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3485))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3485)) ;
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
  GALGAS_string var_sourceVar ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3498)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3500)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3500)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_sourceVar, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3501)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3501)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3501)).add_operation (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3502)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3502)).add_operation (GALGAS_string (" << "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3502)).add_operation (var_sourceVar, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3502)).add_operation (GALGAS_string (".stringValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3502)).add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3502)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3501)) ;
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
//                     Overriding extension getter '@trueExpressionForGeneration isTrueExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_trueExpressionForGeneration_isTrueExpression (const cPtr_semanticExpressionForGeneration * /* inObject */,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (true) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_trueExpressionForGeneration_isTrueExpression (void) {
  enterExtensionGetter_isTrueExpression (kTypeDescriptor_GALGAS_trueExpressionForGeneration.mSlotID,
                                         extensionGetter_trueExpressionForGeneration_isTrueExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_trueExpressionForGeneration_isTrueExpression (defineExtensionGetter_trueExpressionForGeneration_isTrueExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@selfCopyInExpressionForGeneration generateExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_selfCopyInExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                  GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                  GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                  GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                  GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                  GALGAS_string & outArgument_outCppExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfCopyInExpressionForGeneration * object = (const cPtr_selfCopyInExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_selfCopyInExpressionForGeneration) ;
  outArgument_outCppExpression = GALGAS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 44)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 44)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 44)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const GALGAS_").add_operation (object->mAttribute_mResultType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 45)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 45)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 45)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 45)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 45)).add_operation (object->mAttribute_mSelfCppName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 45)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 45)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 45)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (object->mAttribute_mSelfCppName COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 46)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_selfCopyInExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_selfCopyInExpressionForGeneration.mSlotID,
                                           extensionMethod_selfCopyInExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfCopyInExpressionForGeneration_generateExpression (defineExtensionMethod_selfCopyInExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@hereExpressionForGeneration generateExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_hereExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * /* inObject */,
                                                                            GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                            GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                            GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                            GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                            GALGAS_string & outArgument_outCppExpression,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 57)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 57)) ;
  }
  outArgument_outCppExpression = function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 58)).add_operation (GALGAS_string ("->here ()"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 58)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_hereExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_hereExpressionForGeneration.mSlotID,
                                           extensionMethod_hereExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_hereExpressionForGeneration_generateExpression (defineExtensionMethod_hereExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@trueExpressionForGeneration generateExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_trueExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * /* inObject */,
                                                                            GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                            GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                            GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                            GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                            GALGAS_string & outArgument_outCppExpression,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (true)") ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_trueExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_trueExpressionForGeneration.mSlotID,
                                           extensionMethod_trueExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_trueExpressionForGeneration_generateExpression (defineExtensionMethod_trueExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@falseExpressionForGeneration generateExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_falseExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * /* inObject */,
                                                                             GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                             GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                             GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                             GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                             GALGAS_string & outArgument_outCppExpression,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (false)") ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_falseExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_falseExpressionForGeneration.mSlotID,
                                           extensionMethod_falseExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_falseExpressionForGeneration_generateExpression (defineExtensionMethod_falseExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@literalCharExpressionForGeneration generateExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalCharExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                   GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                   GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                   GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                   GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                   GALGAS_string & outArgument_outCppExpression,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalCharExpressionForGeneration * object = (const cPtr_literalCharExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_literalCharExpressionForGeneration) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_char (TO_UNICODE (").add_operation (object->mAttribute_mCharacter.getter_uint (SOURCE_FILE ("semanticExpressionGeneration.galgas", 91)).getter_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 91)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 91)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 91)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalCharExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_literalCharExpressionForGeneration.mSlotID,
                                           extensionMethod_literalCharExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalCharExpressionForGeneration_generateExpression (defineExtensionMethod_literalCharExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@literalStringExpressionForGeneration generateExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalStringExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                     GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                     GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                     GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                     GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                     GALGAS_string & outArgument_outCppExpression,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalStringExpressionForGeneration * object = (const cPtr_literalStringExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringExpressionForGeneration) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mString.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outCppExpression = GALGAS_string ("GALGAS_string::makeEmptyString ()") ;
  }else if (kBoolFalse == test_0) {
    outArgument_outCppExpression = GALGAS_string ("GALGAS_string (").add_operation (object->mAttribute_mString.getter_utf_38_Representation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 105)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 105)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalStringExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_literalStringExpressionForGeneration.mSlotID,
                                           extensionMethod_literalStringExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalStringExpressionForGeneration_generateExpression (defineExtensionMethod_literalStringExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@literalDoubleExpressionForGeneration generateExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalDoubleExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                     GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                     GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                     GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                     GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                     GALGAS_string & outArgument_outCppExpression,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalDoubleExpressionForGeneration * object = (const cPtr_literalDoubleExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_literalDoubleExpressionForGeneration) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_double (").add_operation (object->mAttribute_mValue.getter_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 117)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 117)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 117)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalDoubleExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_literalDoubleExpressionForGeneration.mSlotID,
                                           extensionMethod_literalDoubleExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalDoubleExpressionForGeneration_generateExpression (defineExtensionMethod_literalDoubleExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@literalUIntExpressionForGeneration generateExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalUIntExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                   GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                   GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                   GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                   GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                   GALGAS_string & outArgument_outCppExpression,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalUIntExpressionForGeneration * object = (const cPtr_literalUIntExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_literalUIntExpressionForGeneration) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_uint ((uint32_t) ").add_operation (object->mAttribute_mValue.getter_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 128)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 128)).add_operation (GALGAS_string ("U)"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 128)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalUIntExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_literalUIntExpressionForGeneration.mSlotID,
                                           extensionMethod_literalUIntExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalUIntExpressionForGeneration_generateExpression (defineExtensionMethod_literalUIntExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@literalUInt64ExpressionForGeneration generateExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalUInt_36__34_ExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                           GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                           GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                           GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                           GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                           GALGAS_string & outArgument_outCppExpression,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalUInt_36__34_ExpressionForGeneration * object = (const cPtr_literalUInt_36__34_ExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_literalUInt_36__34_ExpressionForGeneration) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_uint_36__34_ ((uint64_t) ").add_operation (object->mAttribute_mValue.getter_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 139)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 139)).add_operation (GALGAS_string ("ULL)"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 139)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalUInt_36__34_ExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_literalUInt_36__34_ExpressionForGeneration.mSlotID,
                                           extensionMethod_literalUInt_36__34_ExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalUInt_36__34_ExpressionForGeneration_generateExpression (defineExtensionMethod_literalUInt_36__34_ExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@literalSIntExpressionForGeneration generateExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalSIntExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                   GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                   GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                   GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                   GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                   GALGAS_string & outArgument_outCppExpression,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalSIntExpressionForGeneration * object = (const cPtr_literalSIntExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_literalSIntExpressionForGeneration) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_sint ((int32_t) ").add_operation (object->mAttribute_mValue.getter_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 150)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 150)).add_operation (GALGAS_string ("L)"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 150)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalSIntExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_literalSIntExpressionForGeneration.mSlotID,
                                           extensionMethod_literalSIntExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalSIntExpressionForGeneration_generateExpression (defineExtensionMethod_literalSIntExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@literalBigIntExpressionForGeneration generateExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalBigIntExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                     GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                     GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                     GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                     GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                     GALGAS_string & outArgument_outCppExpression,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalBigIntExpressionForGeneration * object = (const cPtr_literalBigIntExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_literalBigIntExpressionForGeneration) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_bigint (\"").add_operation (object->mAttribute_mValue.getter_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 162)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 162)).add_operation (GALGAS_string ("\", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 162)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 163)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 163)) ;
  }
  outArgument_outCppExpression.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 164)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 164)) ;
  outArgument_outCppExpression.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 165)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 165)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 165)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalBigIntExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_literalBigIntExpressionForGeneration.mSlotID,
                                           extensionMethod_literalBigIntExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalBigIntExpressionForGeneration_generateExpression (defineExtensionMethod_literalBigIntExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@literalSInt64ExpressionForGeneration generateExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalSInt_36__34_ExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                           GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                           GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                           GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                           GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                           GALGAS_string & outArgument_outCppExpression,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalSInt_36__34_ExpressionForGeneration * object = (const cPtr_literalSInt_36__34_ExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_literalSInt_36__34_ExpressionForGeneration) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_sint_36__34_ ((int64_t) ").add_operation (object->mAttribute_mValue.getter_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 176)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 176)).add_operation (GALGAS_string ("LL)"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 176)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalSInt_36__34_ExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_literalSInt_36__34_ExpressionForGeneration.mSlotID,
                                           extensionMethod_literalSInt_36__34_ExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalSInt_36__34_ExpressionForGeneration_generateExpression (defineExtensionMethod_literalSInt_36__34_ExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@defaultConstructorExpressionForGeneration generateExpression'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_defaultConstructorExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                          GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                          GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                          GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                          GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                          GALGAS_string & outArgument_outCppExpression,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_defaultConstructorExpressionForGeneration * object = (const cPtr_defaultConstructorExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_defaultConstructorExpressionForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 188)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_").add_operation (object->mAttribute_mResultType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 190)).add_operation (GALGAS_string ("::constructor_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 190)).add_operation (object->mAttribute_mResultType.getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 192)).getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 191)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 192)).add_operation (extensionGetter_sourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 193)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 193)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_defaultConstructorExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_defaultConstructorExpressionForGeneration.mSlotID,
                                           extensionMethod_defaultConstructorExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_defaultConstructorExpressionForGeneration_generateExpression (defineExtensionMethod_defaultConstructorExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@constructorExpressionForGeneration generateExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_constructorExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                   GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                   GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                   GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                   GALGAS_string & outArgument_outCppExpression,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_constructorExpressionForGeneration * object = (const cPtr_constructorExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_constructorExpressionForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 204)) ;
  GALGAS_stringlist var_parameterList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticExpressionGeneration.galgas", 205)) ;
  cEnumerator_semanticExpressionListForGeneration enumerator_10335 (object->mAttribute_mEffectiveParameterList, kEnumeration_up) ;
  while (enumerator_10335.hasCurrentObject ()) {
    GALGAS_string var_parameter ;
    callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_10335.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 208)) ;
    var_parameterList.addAssign_operation (var_parameter  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 209)) ;
    enumerator_10335.gotoNextObject () ;
  }
  outArgument_outCppExpression = GALGAS_string ("GALGAS_").add_operation (object->mAttribute_mConstructorType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 211)).add_operation (GALGAS_string ("::constructor_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 211)).add_operation (object->mAttribute_mConstructorName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 212)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 212)) ;
  cEnumerator_stringlist enumerator_10753 (var_parameterList, kEnumeration_up) ;
  while (enumerator_10753.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssign_operation(enumerator_10753.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 215)) ;
    if (enumerator_10753.hasNextObject ()) {
      outArgument_outCppExpression.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 216)) ;
    }
    enumerator_10753.gotoNextObject () ;
  }
  GALGAS_bool var_needsComma = GALGAS_bool (kIsStrictSup, var_parameterList.getter_length (SOURCE_FILE ("semanticExpressionGeneration.galgas", 218)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  const enumGalgasBool test_0 = object->mAttribute_mHasCompilerArgument.boolEnum () ;
  if (kBoolTrue == test_0) {
    const enumGalgasBool test_1 = var_needsComma.boolEnum () ;
    if (kBoolTrue == test_1) {
      outArgument_outCppExpression.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 221)) ;
    }
    {
    ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 223)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 223)) ;
    }
    outArgument_outCppExpression.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 224)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 224)) ;
    var_needsComma = GALGAS_bool (true) ;
  }
  const enumGalgasBool test_2 = var_needsComma.boolEnum () ;
  if (kBoolTrue == test_2) {
    outArgument_outCppExpression.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 228)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 228)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 228)) ;
  }else if (kBoolFalse == test_2) {
    outArgument_outCppExpression.plusAssign_operation(extensionGetter_sourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 230)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 230)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 230)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_constructorExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_constructorExpressionForGeneration.mSlotID,
                                           extensionMethod_constructorExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_constructorExpressionForGeneration_generateExpression (defineExtensionMethod_constructorExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@optionValueExpressionForGeneration generateExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_optionValueExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                   GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                   GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                   GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                   GALGAS_string & outArgument_outCppExpression,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_optionValueExpressionForGeneration * object = (const cPtr_optionValueExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_optionValueExpressionForGeneration) ;
  const enumGalgasBool test_0 = object->mAttribute_mOptionComponentIsPredefined.operator_not (SOURCE_FILE ("semanticExpressionGeneration.galgas", 246)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("option-").add_operation (object->mAttribute_mOptionComponentName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 247))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 247)) ;
  }
  outArgument_outCppExpression = GALGAS_string ("GALGAS_").add_operation (object->mAttribute_mResultType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 249)).add_operation (GALGAS_string (" (gOption_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 249)).add_operation (object->mAttribute_mOptionComponentName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 249)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 249)).add_operation (object->mAttribute_mOptionEntryName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 250)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 250)).add_operation (GALGAS_string (".getter_value ())"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 250)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_optionValueExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_optionValueExpressionForGeneration.mSlotID,
                                           extensionMethod_optionValueExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_optionValueExpressionForGeneration_generateExpression (defineExtensionMethod_optionValueExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@optionCharExpressionForGeneration generateExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_optionCharExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                  GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                  GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                  GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                  GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                  GALGAS_string & outArgument_outCppExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_optionCharExpressionForGeneration * object = (const cPtr_optionCharExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_optionCharExpressionForGeneration) ;
  const enumGalgasBool test_0 = object->mAttribute_mOptionComponentIsPredefined.operator_not (SOURCE_FILE ("semanticExpressionGeneration.galgas", 261)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("option-").add_operation (object->mAttribute_mOptionComponentName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 262))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 262)) ;
  }
  outArgument_outCppExpression = GALGAS_string ("GALGAS_char (gOption_").add_operation (object->mAttribute_mOptionComponentName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 264)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 264)).add_operation (object->mAttribute_mOptionEntryName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 265)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 265)).add_operation (GALGAS_string (".getter_char ())"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 265)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_optionCharExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_optionCharExpressionForGeneration.mSlotID,
                                           extensionMethod_optionCharExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_optionCharExpressionForGeneration_generateExpression (defineExtensionMethod_optionCharExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@optionStringExpressionForGeneration generateExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_optionStringExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                    GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                    GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                    GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                    GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                    GALGAS_string & outArgument_outCppExpression,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_optionStringExpressionForGeneration * object = (const cPtr_optionStringExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_optionStringExpressionForGeneration) ;
  const enumGalgasBool test_0 = object->mAttribute_mOptionComponentIsPredefined.operator_not (SOURCE_FILE ("semanticExpressionGeneration.galgas", 276)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("option-").add_operation (object->mAttribute_mOptionComponentName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 277))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 277)) ;
  }
  outArgument_outCppExpression = GALGAS_string ("GALGAS_string (gOption_").add_operation (object->mAttribute_mOptionComponentName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 279)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 279)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 279)).add_operation (object->mAttribute_mOptionEntryName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 280)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 280)).add_operation (GALGAS_string (".getter_string ())"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 280)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_optionStringExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_optionStringExpressionForGeneration.mSlotID,
                                           extensionMethod_optionStringExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_optionStringExpressionForGeneration_generateExpression (defineExtensionMethod_optionStringExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@optionCommentExpressionForGeneration generateExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_optionCommentExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                     GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                     GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                     GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                     GALGAS_string & outArgument_outCppExpression,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_optionCommentExpressionForGeneration * object = (const cPtr_optionCommentExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_optionCommentExpressionForGeneration) ;
  const enumGalgasBool test_0 = object->mAttribute_mOptionComponentIsPredefined.operator_not (SOURCE_FILE ("semanticExpressionGeneration.galgas", 291)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("option-").add_operation (object->mAttribute_mOptionComponentName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 292))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 292)) ;
  }
  outArgument_outCppExpression = GALGAS_string ("gOption_").add_operation (object->mAttribute_mOptionComponentName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 294)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 294)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 294)).add_operation (object->mAttribute_mOptionEntryName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 295)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 295)).add_operation (GALGAS_string (".getter_comment ()"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 295)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_optionCommentExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_optionCommentExpressionForGeneration.mSlotID,
                                           extensionMethod_optionCommentExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_optionCommentExpressionForGeneration_generateExpression (defineExtensionMethod_optionCommentExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@orExpressionForGeneration generateExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_orExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                          GALGAS_string & ioArgument_ioGeneratedCode,
                                                                          GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                          GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                          GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                          GALGAS_string & outArgument_outCppExpression,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_orExpressionForGeneration * object = (const cPtr_orExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_orExpressionForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 306)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 306)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 309)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 312)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand.add_operation (GALGAS_string (".operator_or ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 314)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 314)).add_operation (extensionGetter_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 315)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 315)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 315)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_orExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_orExpressionForGeneration.mSlotID,
                                           extensionMethod_orExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_orExpressionForGeneration_generateExpression (defineExtensionMethod_orExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@orShortExpressionForGeneration generateExpression'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_orShortExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                               GALGAS_string & ioArgument_ioGeneratedCode,
                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                               GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                               GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                               GALGAS_string & outArgument_outCppExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_orShortExpressionForGeneration * object = (const cPtr_orShortExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_orShortExpressionForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 326)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 326)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 328)) ;
  GALGAS_string var_testVar = GALGAS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 336)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 336)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 336)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_bool ").add_operation (var_testVar, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 337)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 337)).add_operation (var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 337)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 337)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 337)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolTrue != ").add_operation (var_testVar, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 338)).add_operation (GALGAS_string (".boolEnum ()) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 338)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 338)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 340)) ;
  }
  GALGAS_string var_rightTemporaryOperand ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 341)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_testVar.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 348)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 348)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 348)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 348)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 349)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 350)) ;
  outArgument_outCppExpression = var_testVar ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_orShortExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_orShortExpressionForGeneration.mSlotID,
                                           extensionMethod_orShortExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_orShortExpressionForGeneration_generateExpression (defineExtensionMethod_orShortExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@xorExpressionForGeneration generateExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_xorExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                           GALGAS_string & ioArgument_ioGeneratedCode,
                                                                           GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                           GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                           GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                           GALGAS_string & outArgument_outCppExpression,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_xorExpressionForGeneration * object = (const cPtr_xorExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_xorExpressionForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 363)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 363)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 365)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 373)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand.add_operation (GALGAS_string (".operator_xor ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 381)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 381)).add_operation (extensionGetter_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 382)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 382)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 382)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_xorExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_xorExpressionForGeneration.mSlotID,
                                           extensionMethod_xorExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_xorExpressionForGeneration_generateExpression (defineExtensionMethod_xorExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@closedSliceExpressionForGeneration generateExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_closedSliceExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                   GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                   GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                   GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                   GALGAS_string & outArgument_outCppExpression,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_closedSliceExpressionForGeneration * object = (const cPtr_closedSliceExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_closedSliceExpressionForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 393)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 393)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 395)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 403)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_range (").add_operation (var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 412)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 412)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 412)).add_operation (GALGAS_string (".substract_operation ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 413)).add_operation (var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 413)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 413)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 413)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 413)).add_operation (extensionGetter_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 413)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 413)).add_operation (GALGAS_string (").add_operation (GALGAS_uint (1), "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 413)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 413)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 413)).add_operation (extensionGetter_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 413)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 413)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 413)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_closedSliceExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_closedSliceExpressionForGeneration.mSlotID,
                                           extensionMethod_closedSliceExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_closedSliceExpressionForGeneration_generateExpression (defineExtensionMethod_closedSliceExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@openedSliceExpressionForGeneration generateExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_openedSliceExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                   GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                   GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                   GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                   GALGAS_string & outArgument_outCppExpression,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_openedSliceExpressionForGeneration * object = (const cPtr_openedSliceExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_openedSliceExpressionForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 424)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 424)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 426)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 434)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_range (").add_operation (var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 443)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 443)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 443)).add_operation (GALGAS_string (".substract_operation ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 444)).add_operation (var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 444)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 444)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 444)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 444)).add_operation (extensionGetter_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 444)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 444)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 444)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_openedSliceExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_openedSliceExpressionForGeneration.mSlotID,
                                           extensionMethod_openedSliceExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_openedSliceExpressionForGeneration_generateExpression (defineExtensionMethod_openedSliceExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@andExpressionForGeneration generateExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_andExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                           GALGAS_string & ioArgument_ioGeneratedCode,
                                                                           GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                           GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                           GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                           GALGAS_string & outArgument_outCppExpression,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_andExpressionForGeneration * object = (const cPtr_andExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_andExpressionForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 455)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 455)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 457)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 465)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand.add_operation (GALGAS_string (".operator_and ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 473)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 473)).add_operation (extensionGetter_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 474)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 474)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 474)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_andExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_andExpressionForGeneration.mSlotID,
                                           extensionMethod_andExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_andExpressionForGeneration_generateExpression (defineExtensionMethod_andExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@andShortExpressionForGeneration generateExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_andShortExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                GALGAS_string & outArgument_outCppExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_andShortExpressionForGeneration * object = (const cPtr_andShortExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_andShortExpressionForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 485)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 485)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 487)) ;
  GALGAS_string var_testVar = GALGAS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 495)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 495)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 495)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_bool ").add_operation (var_testVar, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 496)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 496)).add_operation (var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 496)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 496)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 496)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolTrue == ").add_operation (var_testVar, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 497)).add_operation (GALGAS_string (".boolEnum ()) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 497)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 497)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 499)) ;
  }
  GALGAS_string var_rightTemporaryOperand ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 500)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_testVar.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 507)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 507)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 507)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 507)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 508)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 509)) ;
  outArgument_outCppExpression = var_testVar ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_andShortExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_andShortExpressionForGeneration.mSlotID,
                                           extensionMethod_andShortExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_andShortExpressionForGeneration_generateExpression (defineExtensionMethod_andShortExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@equalExpressionForGeneration generateExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_equalExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                             GALGAS_string & ioArgument_ioGeneratedCode,
                                                                             GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                             GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                             GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                             GALGAS_string & outArgument_outCppExpression,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_equalExpressionForGeneration * object = (const cPtr_equalExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_equalExpressionForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 521)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 521)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 524)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 527)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (kIsEqual, ").add_operation (var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 529)).add_operation (GALGAS_string (".objectCompare ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 529)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 529)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 529)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_equalExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_equalExpressionForGeneration.mSlotID,
                                           extensionMethod_equalExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_equalExpressionForGeneration_generateExpression (defineExtensionMethod_equalExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@notEqualExpressionForGeneration generateExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_notEqualExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                GALGAS_string & outArgument_outCppExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_notEqualExpressionForGeneration * object = (const cPtr_notEqualExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_notEqualExpressionForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 540)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 540)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 543)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 546)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (kIsNotEqual, ").add_operation (var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 548)).add_operation (GALGAS_string (".objectCompare ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 548)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 548)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 548)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_notEqualExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_notEqualExpressionForGeneration.mSlotID,
                                           extensionMethod_notEqualExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_notEqualExpressionForGeneration_generateExpression (defineExtensionMethod_notEqualExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@lowerOrEqualExpressionForGeneration generateExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lowerOrEqualExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                    GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                    GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                    GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                    GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                    GALGAS_string & outArgument_outCppExpression,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lowerOrEqualExpressionForGeneration * object = (const cPtr_lowerOrEqualExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_lowerOrEqualExpressionForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 559)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 559)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 562)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 565)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (kIsInfOrEqual, ").add_operation (var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 567)).add_operation (GALGAS_string (".objectCompare ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 567)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 567)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 567)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lowerOrEqualExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_lowerOrEqualExpressionForGeneration.mSlotID,
                                           extensionMethod_lowerOrEqualExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lowerOrEqualExpressionForGeneration_generateExpression (defineExtensionMethod_lowerOrEqualExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@greaterOrEqualExpressionForGeneration generateExpression'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_greaterOrEqualExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                      GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                      GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                      GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                      GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                      GALGAS_string & outArgument_outCppExpression,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_greaterOrEqualExpressionForGeneration * object = (const cPtr_greaterOrEqualExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_greaterOrEqualExpressionForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 578)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 578)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 581)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 584)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (kIsSupOrEqual, ").add_operation (var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 586)).add_operation (GALGAS_string (".objectCompare ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 586)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 586)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 586)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_greaterOrEqualExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_greaterOrEqualExpressionForGeneration.mSlotID,
                                           extensionMethod_greaterOrEqualExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_greaterOrEqualExpressionForGeneration_generateExpression (defineExtensionMethod_greaterOrEqualExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@strictGreaterExpressionForGeneration generateExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_strictGreaterExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                     GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                     GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                     GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                     GALGAS_string & outArgument_outCppExpression,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_strictGreaterExpressionForGeneration * object = (const cPtr_strictGreaterExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_strictGreaterExpressionForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 597)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 597)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 600)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 603)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (kIsStrictSup, ").add_operation (var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 605)).add_operation (GALGAS_string (".objectCompare ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 605)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 605)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 605)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_strictGreaterExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_strictGreaterExpressionForGeneration.mSlotID,
                                           extensionMethod_strictGreaterExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_strictGreaterExpressionForGeneration_generateExpression (defineExtensionMethod_strictGreaterExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@strictLowerExpressionForGeneration generateExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_strictLowerExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                   GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                   GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                   GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                   GALGAS_string & outArgument_outCppExpression,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_strictLowerExpressionForGeneration * object = (const cPtr_strictLowerExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_strictLowerExpressionForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 616)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 616)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 619)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 622)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (kIsStrictInf, ").add_operation (var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 624)).add_operation (GALGAS_string (".objectCompare ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 624)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 624)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 624)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_strictLowerExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_strictLowerExpressionForGeneration.mSlotID,
                                           extensionMethod_strictLowerExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_strictLowerExpressionForGeneration_generateExpression (defineExtensionMethod_strictLowerExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@rightShiftExpressionForGeneration generateExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_rightShiftExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                  GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                  GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                  GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                  GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                  GALGAS_string & outArgument_outCppExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_rightShiftExpressionForGeneration * object = (const cPtr_rightShiftExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_rightShiftExpressionForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 635)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 635)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 638)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 641)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand.add_operation (GALGAS_string (".right_shift_operation ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 643)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 643)).add_operation (extensionGetter_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 644)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 644)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 644)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_rightShiftExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_rightShiftExpressionForGeneration.mSlotID,
                                           extensionMethod_rightShiftExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_rightShiftExpressionForGeneration_generateExpression (defineExtensionMethod_rightShiftExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@leftShiftExpressionForGeneration generateExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_leftShiftExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                 GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                 GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                 GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                 GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                 GALGAS_string & outArgument_outCppExpression,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_leftShiftExpressionForGeneration * object = (const cPtr_leftShiftExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_leftShiftExpressionForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 655)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 655)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 658)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 661)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand.add_operation (GALGAS_string (".left_shift_operation ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 663)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 663)).add_operation (extensionGetter_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 664)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 664)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 664)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_leftShiftExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_leftShiftExpressionForGeneration.mSlotID,
                                           extensionMethod_leftShiftExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_leftShiftExpressionForGeneration_generateExpression (defineExtensionMethod_leftShiftExpressionForGeneration_generateExpression, NULL) ;

