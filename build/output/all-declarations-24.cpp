#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-24.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    Overriding category method '@filewrapperObjectInstanciationInExpressionAST enterExpressionInSemanticContext'     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_filewrapperObjectInstanciationInExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                                           GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                           C_Compiler * /* inCompiler */
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_filewrapperObjectInstanciationInExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_filewrapperObjectInstanciationInExpressionAST.mSlotID,
                                                        categoryMethod_filewrapperObjectInstanciationInExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_filewrapperObjectInstanciationInExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_filewrapperObjectInstanciationInExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding category method '@filewrapperObjectInstanciationInExpressionAST analyzeSemanticExpression'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_filewrapperObjectInstanciationInExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
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
  GALGAS_lstringlist joker_122640_4 ; // Joker input parameter
  GALGAS_wrapperFileMap joker_122640_3 ; // Joker input parameter
  GALGAS_wrapperDirectoryMap joker_122640_2 ; // Joker input parameter
  GALGAS_filewrapperTemplateMap joker_122640_1 ; // Joker input parameter
  constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mFilewrapperMap.method_searchKey (object->mAttribute_mFilewrapperName, var_filewrapperPath, joker_122640_4, joker_122640_3, joker_122640_2, joker_122640_1, var_isInternal, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2798)) ;
  const enumGalgasBool test_0 = var_isInternal.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location var_filewrapperDeclarationLocation = constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mFilewrapperMap.reader_locationForKey (object->mAttribute_mFilewrapperName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2806)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, object->mAttribute_mFilewrapperName.mAttribute_location.reader_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2807)).objectCompare (var_filewrapperDeclarationLocation.reader_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2807)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_location location_2 (object->mAttribute_mFilewrapperName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_2, GALGAS_string ("this filewrapper is internal to '").add_operation (var_filewrapperDeclarationLocation.reader_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2808)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2808)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2808))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2808)) ;
    }
  }
  outArgument_outExpression = GALGAS_filewrapperInExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("filewrapper"), object->mAttribute_mFilewrapperName.reader_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2813))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2813)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2813)), object->mAttribute_mFilewrapperName.reader_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2814)), object->mAttribute_mFilewrapperName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2815)), var_filewrapperPath.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2816))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2812)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_filewrapperObjectInstanciationInExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_filewrapperObjectInstanciationInExpressionAST.mSlotID,
                                                 categoryMethod_filewrapperObjectInstanciationInExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_filewrapperObjectInstanciationInExpressionAST_analyzeSemanticExpression (defineCategoryMethod_filewrapperObjectInstanciationInExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category method '@filewrapperTemplateInExpressionAST enterExpressionInSemanticContext'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_filewrapperTemplateInExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                                GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperTemplateInExpressionAST * object = (const cPtr_filewrapperTemplateInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperTemplateInExpressionAST) ;
  cEnumerator_actualOutputExpressionList enumerator_123639 (object->mAttribute_mExpressions, kEnumeration_up) ;
  while (enumerator_123639.hasCurrentObject ()) {
    callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) enumerator_123639.current_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2825)) ;
    enumerator_123639.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_filewrapperTemplateInExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_filewrapperTemplateInExpressionAST.mSlotID,
                                                        categoryMethod_filewrapperTemplateInExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_filewrapperTemplateInExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_filewrapperTemplateInExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@filewrapperTemplateInExpressionAST analyzeSemanticExpression'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_filewrapperTemplateInExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
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
  GALGAS_lstring joker_124181_4 ; // Joker input parameter
  GALGAS_lstringlist joker_124181_3 ; // Joker input parameter
  GALGAS_wrapperFileMap joker_124181_2 ; // Joker input parameter
  GALGAS_wrapperDirectoryMap joker_124181_1 ; // Joker input parameter
  constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mFilewrapperMap.method_searchKey (object->mAttribute_mFilewrapperName, joker_124181_4, joker_124181_3, joker_124181_2, joker_124181_1, var_filewrapperTemplateMap, var_isInternal, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2837)) ;
  const enumGalgasBool test_0 = var_isInternal.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location var_filewrapperDeclarationLocation = constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mFilewrapperMap.reader_locationForKey (object->mAttribute_mFilewrapperName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2845)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, object->mAttribute_mFilewrapperName.mAttribute_location.reader_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2846)).objectCompare (var_filewrapperDeclarationLocation.reader_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2846)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_location location_2 (object->mAttribute_mFilewrapperName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_2, GALGAS_string ("this filewrapper is internal to '").add_operation (var_filewrapperDeclarationLocation.reader_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2847)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2847)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2847))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2847)) ;
    }
  }
  GALGAS_functionSignature var_templateSignature ;
  GALGAS_lstring joker_124776 ; // Joker input parameter
  var_filewrapperTemplateMap.method_searchKey (object->mAttribute_mFilewrapperTemplateName, var_templateSignature, joker_124776, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2851)) ;
  GALGAS_semanticExpressionListForGeneration var_effectiveParameterList ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, object->mAttribute_mExpressions.reader_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2854)).objectCompare (var_templateSignature.reader_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2854)))).boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_location location_4 (object->mAttribute_mFilewrapperTemplateName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_4, GALGAS_string ("calling the '").add_operation (object->mAttribute_mFilewrapperTemplateName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2856)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2856)).add_operation (GALGAS_string ("' template of '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2856)).add_operation (object->mAttribute_mFilewrapperName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2856)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2856)).add_operation (GALGAS_string ("' filewrapper requires "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2856)).add_operation (var_templateSignature.reader_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2857)).reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2857)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2856)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2857)).add_operation (object->mAttribute_mExpressions.reader_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2858)).reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2858)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2857)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2858))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2855)) ;
    var_effectiveParameterList.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_3) {
    var_effectiveParameterList = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2861)) ;
    cEnumerator_actualOutputExpressionList enumerator_125355 (object->mAttribute_mExpressions, kEnumeration_up) ;
    cEnumerator_functionSignature enumerator_125380 (var_templateSignature, kEnumeration_up) ;
    while (enumerator_125355.hasCurrentObject () && enumerator_125380.hasCurrentObject ()) {
      const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, enumerator_125380.current_mFormalSelector (HERE).mAttribute_string.objectCompare (enumerator_125355.current_mActualSelector (HERE).mAttribute_string)).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_string temp_6 ;
        const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, enumerator_125380.current_mFormalSelector (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_7) {
          temp_6 = GALGAS_string (":") ;
        }else if (kBoolFalse == test_7) {
          temp_6 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_location location_8 (enumerator_125355.current_mActualSelector (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_8, GALGAS_string ("the selector should be '!").add_operation (enumerator_125380.current_mFormalSelector (HERE).reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2864)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2864)).add_operation (temp_6, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2864)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2864))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2864)) ;
      }
      GALGAS_semanticExpressionForGeneration var_exp ;
      callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_125355.current_mExpression (HERE).ptr (), enumerator_125380.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_exp, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2866)) ;
      {
      routine_checkAssignmentTypes (enumerator_125380.current_mFormalArgumentType (HERE), var_exp.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2867)), enumerator_125355.current_mEndOfExpressionLocation (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2867)) ;
      }
      var_effectiveParameterList.addAssign_operation (var_exp  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2868)) ;
      enumerator_125355.gotoNextObject () ;
      enumerator_125380.gotoNextObject () ;
    }
  }
  outArgument_outExpression = GALGAS_filewrapperTemplateInExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType, object->mAttribute_mFilewrapperName.reader_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2874)), object->mAttribute_mFilewrapperName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2875)), object->mAttribute_mFilewrapperTemplateName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2876)), var_effectiveParameterList  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2872)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_filewrapperTemplateInExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_filewrapperTemplateInExpressionAST.mSlotID,
                                                 categoryMethod_filewrapperTemplateInExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_filewrapperTemplateInExpressionAST_analyzeSemanticExpression (defineCategoryMethod_filewrapperTemplateInExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@filewrapperInExpressionAST enterExpressionInSemanticContext'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_filewrapperInExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                        GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_filewrapperInExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_filewrapperInExpressionAST.mSlotID,
                                                        categoryMethod_filewrapperInExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_filewrapperInExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_filewrapperInExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@filewrapperInExpressionAST analyzeSemanticExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_filewrapperInExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mFilewrapperPath.mAttribute_string.reader_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2897)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mFilewrapperPath.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("path is empty")  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2898)) ;
    var_directoryList.drop () ; // Release error dropped variable
    var_fileName.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, object->mAttribute_mFilewrapperPath.mAttribute_string.reader_firstCharacterOrNul (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2899)).objectCompare (GALGAS_char (TO_UNICODE (47)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (object->mAttribute_mFilewrapperPath.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_3, GALGAS_string ("the path should not begin with '/'")  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2900)) ;
      var_directoryList.drop () ; // Release error dropped variable
      var_fileName.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      var_directoryList = object->mAttribute_mFilewrapperPath.mAttribute_string.reader_componentsSeparatedByString (GALGAS_string ("/") COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2902)) ;
      {
      var_directoryList.modifier_popLast (var_fileName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2903)) ;
      }
    }
  }
  GALGAS_wrapperFileMap var_filewrapperFileMap ;
  GALGAS_wrapperDirectoryMap var_filewrapperDirectoryMap ;
  GALGAS_bool var_isInternal ;
  GALGAS_lstring joker_127342 ; // Joker input parameter
  GALGAS_lstringlist joker_127349 ; // Joker input parameter
  GALGAS_filewrapperTemplateMap joker_127454 ; // Joker input parameter
  constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mFilewrapperMap.method_searchKey (object->mAttribute_mFilewrapperName, joker_127342, joker_127349, var_filewrapperFileMap, var_filewrapperDirectoryMap, joker_127454, var_isInternal, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2906)) ;
  const enumGalgasBool test_4 = var_isInternal.boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_location var_filewrapperDeclarationLocation = constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mFilewrapperMap.reader_locationForKey (object->mAttribute_mFilewrapperName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2917)) ;
    const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, object->mAttribute_mFilewrapperName.mAttribute_location.reader_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2918)).objectCompare (var_filewrapperDeclarationLocation.reader_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2918)))).boolEnum () ;
    if (kBoolTrue == test_5) {
      GALGAS_location location_6 (object->mAttribute_mFilewrapperName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_6, GALGAS_string ("this filewrapper is internal to '").add_operation (var_filewrapperDeclarationLocation.reader_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2919)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2919)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2919))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2919)) ;
    }
  }
  GALGAS_string var_builtPath = GALGAS_string::makeEmptyString () ;
  if (var_filewrapperDirectoryMap.reader_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2924)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2924)).isValid ()) {
    uint32_t variant_127931 = var_filewrapperDirectoryMap.reader_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2924)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2924)).uintValue () ;
    bool loop_127931 = true ;
    while (loop_127931) {
      loop_127931 = GALGAS_bool (kIsStrictSup, var_directoryList.reader_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2925)).objectCompare (GALGAS_uint ((uint32_t) 0U))).isValid () ;
      if (loop_127931) {
        loop_127931 = GALGAS_bool (kIsStrictSup, var_directoryList.reader_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2925)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolValue () ;
      }
      if (loop_127931 && (0 == variant_127931)) {
        loop_127931 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2924)) ;
      }
      if (loop_127931) {
        variant_127931 -- ;
        GALGAS_string var_directoryName ;
        {
        var_directoryList.modifier_popFirst (var_directoryName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2927)) ;
        }
        var_builtPath.dotAssign_operation (var_directoryName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2928))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2928)) ;
        const enumGalgasBool test_7 = var_filewrapperDirectoryMap.reader_hasKey (var_directoryName COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2929)).boolEnum () ;
        if (kBoolTrue == test_7) {
          GALGAS_uint joker_128343 ; // Joker input parameter
          var_filewrapperDirectoryMap.method_searchKey (GALGAS_lstring::constructor_new (var_directoryName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2931))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2931)), var_filewrapperFileMap, var_filewrapperDirectoryMap, joker_128343, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2930)) ;
        }else if (kBoolFalse == test_7) {
          GALGAS_location location_8 (object->mAttribute_mFilewrapperPath.reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_8, GALGAS_string ("the '").add_operation (var_builtPath, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2937)).add_operation (GALGAS_string ("' path does not exists for the '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2937)).add_operation (object->mAttribute_mFilewrapperName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2937)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2937)).add_operation (GALGAS_string ("' filewrapper"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2937))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2937)) ;
          var_filewrapperFileMap.drop () ; // Release error dropped variable
          var_directoryList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2938)) ;
        }
      }
    }
  }
  GALGAS_uint var_fileIndex ;
  GALGAS_bool var_isTextFile ;
  const enumGalgasBool test_9 = var_filewrapperFileMap.reader_hasKey (var_fileName COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2943)).boolEnum () ;
  if (kBoolTrue == test_9) {
    GALGAS_string joker_128749 ; // Joker input parameter
    GALGAS_uint joker_128764 ; // Joker input parameter
    var_filewrapperFileMap.method_searchKey (GALGAS_lstring::constructor_new (var_fileName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2944))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2944)), joker_128749, var_isTextFile, joker_128764, var_fileIndex, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2944)) ;
  }else if (kBoolFalse == test_9) {
    GALGAS_location location_10 (object->mAttribute_mFilewrapperPath.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_10, GALGAS_string ("the '").add_operation (var_fileName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2947)).add_operation (GALGAS_string ("' file does not exist in the '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2947)).add_operation (var_builtPath, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2947)).add_operation (GALGAS_string ("' directory of '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2947)).add_operation (object->mAttribute_mFilewrapperName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2947)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2947)).add_operation (GALGAS_string ("' filewrapper"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2947))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2946)) ;
    var_fileIndex.drop () ; // Release error dropped variable
    var_isTextFile.drop () ; // Release error dropped variable
  }
  GALGAS_unifiedTypeMap_2D_proxy temp_11 ;
  const enumGalgasBool test_12 = var_isTextFile.boolEnum () ;
  if (kBoolTrue == test_12) {
    temp_11 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType ;
  }else if (kBoolFalse == test_12) {
    temp_11 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("data"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2954))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2954)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2954)) ;
  }
  outArgument_outExpression = GALGAS_filewrapperStaticPathInExpressionForGeneration::constructor_new (temp_11, object->mAttribute_mFilewrapperName.reader_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2956)), object->mAttribute_mFilewrapperName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2957)), var_fileIndex, var_isTextFile  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2951)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_filewrapperInExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_filewrapperInExpressionAST.mSlotID,
                                                 categoryMethod_filewrapperInExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_filewrapperInExpressionAST_analyzeSemanticExpression (defineCategoryMethod_filewrapperInExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category method '@lexiqueIntrospectionExpressionAST enterExpressionInSemanticContext'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lexiqueIntrospectionExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                               GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                               C_Compiler * /* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lexiqueIntrospectionExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_lexiqueIntrospectionExpressionAST.mSlotID,
                                                        categoryMethod_lexiqueIntrospectionExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexiqueIntrospectionExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_lexiqueIntrospectionExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@lexiqueIntrospectionExpressionAST analyzeSemanticExpression'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lexiqueIntrospectionExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                        const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                        GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexiqueIntrospectionExpressionAST * object = (const cPtr_lexiqueIntrospectionExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexiqueIntrospectionExpressionAST) ;
  GALGAS_terminalMap joker_130143_3 ; // Joker input parameter
  GALGAS_indexingListAST joker_130143_2 ; // Joker input parameter
  GALGAS_lstring joker_130143_1 ; // Joker input parameter
  constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mLexiqueComponentMapForSemanticAnalysis.method_searchKey (object->mAttribute_mLexiqueComponentName, joker_130143_3, joker_130143_2, joker_130143_1, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2977)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mLexiqueReaderName.mAttribute_string.objectCompare (GALGAS_string ("symbols"))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mLexiqueReaderName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("unknown reader")  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2983)) ;
  }
  outArgument_outExpression = GALGAS_lexiqueIntrospectionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, GALGAS_string ("stringlist").reader_nowhere (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2987)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2987)), object->mAttribute_mLexiqueComponentName.mAttribute_location, object->mAttribute_mLexiqueComponentName.mAttribute_string, object->mAttribute_mLexiqueReaderName.mAttribute_string  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2986)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lexiqueIntrospectionExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_lexiqueIntrospectionExpressionAST.mSlotID,
                                                 categoryMethod_lexiqueIntrospectionExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexiqueIntrospectionExpressionAST_analyzeSemanticExpression (defineCategoryMethod_lexiqueIntrospectionExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@expressionCollectionValue enterInSemanticContext'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_expressionCollectionValue_enterInSemanticContext (const cPtr_abstractCollectionValueElement * inObject,
                                                                             GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_expressionCollectionValue * object = (const cPtr_expressionCollectionValue *) inObject ;
  macroValidSharedObject (object, cPtr_expressionCollectionValue) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3002)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_expressionCollectionValue_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_expressionCollectionValue.mSlotID,
                                              categoryMethod_expressionCollectionValue_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_expressionCollectionValue_enterInSemanticContext (defineCategoryMethod_expressionCollectionValue_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@expressionListCollectionValue enterInSemanticContext'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_expressionListCollectionValue_enterInSemanticContext (const cPtr_abstractCollectionValueElement * inObject,
                                                                                 GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_expressionListCollectionValue * object = (const cPtr_expressionListCollectionValue *) inObject ;
  macroValidSharedObject (object, cPtr_expressionListCollectionValue) ;
  categoryMethod_enterInSemanticContext (object->mAttribute_mExpressionList, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3008)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_expressionListCollectionValue_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_expressionListCollectionValue.mSlotID,
                                              categoryMethod_expressionListCollectionValue_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_expressionListCollectionValue_enterInSemanticContext (defineCategoryMethod_expressionListCollectionValue_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding category method '@expressionCollectionValue analyze'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_expressionCollectionValue_analyze (const cPtr_abstractCollectionValueElement * inObject,
                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                              const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inElementType,
                                                              GALGAS_variableMap & ioArgument_ioVariableMap,
                                                              GALGAS_collectionValueElementListForGeneration & ioArgument_ioCollectionValueElementListForGeneration,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_expressionCollectionValue * object = (const cPtr_expressionCollectionValue *) inObject ;
  macroValidSharedObject (object, cPtr_expressionCollectionValue) ;
  GALGAS_semanticExpressionForGeneration var_expression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inElementType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3026)) ;
  {
  routine_checkAssignmentTypes (constinArgument_inElementType, var_expression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3033)), object->mAttribute_mExpressionLocation, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3033)) ;
  }
  ioArgument_ioCollectionValueElementListForGeneration.addAssign_operation (GALGAS_expressionCollectionValueForGeneration::constructor_new (object->mAttribute_mExpressionLocation, var_expression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3035))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3035)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_expressionCollectionValue_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_expressionCollectionValue.mSlotID,
                               categoryMethod_expressionCollectionValue_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_expressionCollectionValue_analyze (defineCategoryMethod_expressionCollectionValue_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@expressionListCollectionValue analyze'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_expressionListCollectionValue_analyze (const cPtr_abstractCollectionValueElement * inObject,
                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                  const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inElementType,
                                                                  GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                  GALGAS_collectionValueElementListForGeneration & ioArgument_ioCollectionValueElementListForGeneration,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_expressionListCollectionValue * object = (const cPtr_expressionListCollectionValue *) inObject ;
  macroValidSharedObject (object, cPtr_expressionListCollectionValue) ;
  GALGAS_functionSignature var_formalParameterTypeList = constinArgument_inElementType.reader_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3045)) ;
  GALGAS_semanticExpressionListForGeneration var_semanticExpressionListForGeneration ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_formalParameterTypeList.reader_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3047)).objectCompare (object->mAttribute_mExpressionList.reader_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3047)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfExpressionLocation, GALGAS_string ("element of of '@").add_operation (constinArgument_inElementType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3048)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3048)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3048)).add_operation (var_formalParameterTypeList.reader_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3049)).reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3048)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3048)).add_operation (GALGAS_string (" parameter(s), while this list has "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3049)).add_operation (object->mAttribute_mExpressionList.reader_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3050)).reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3049)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3049)).add_operation (GALGAS_string (" element(s)"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3050))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3048)) ;
    var_semanticExpressionListForGeneration.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    var_semanticExpressionListForGeneration = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3052)) ;
    cEnumerator_actualOutputExpressionList enumerator_133660 (object->mAttribute_mExpressionList, kEnumeration_up) ;
    cEnumerator_functionSignature enumerator_133691 (var_formalParameterTypeList, kEnumeration_up) ;
    while (enumerator_133660.hasCurrentObject () && enumerator_133691.hasCurrentObject ()) {
      GALGAS_semanticExpressionForGeneration var_exp ;
      callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_133660.current_mExpression (HERE).ptr (), enumerator_133691.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_exp, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3054)) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, enumerator_133691.current_mFormalSelector (HERE).mAttribute_string.objectCompare (enumerator_133660.current_mActualSelector (HERE).mAttribute_string)).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_string temp_2 ;
        const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, enumerator_133691.current_mFormalSelector (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_3) {
          temp_2 = GALGAS_string (":") ;
        }else if (kBoolFalse == test_3) {
          temp_2 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_location location_4 (enumerator_133660.current_mActualSelector (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_4, GALGAS_string ("the selector should be '!").add_operation (enumerator_133691.current_mFormalSelector (HERE).reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3056)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3056)).add_operation (temp_2, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3056)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3056))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3056)) ;
      }
      {
      routine_checkAssignmentTypes (enumerator_133691.current_mFormalArgumentType (HERE), var_exp.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3058)), enumerator_133660.current_mEndOfExpressionLocation (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3058)) ;
      }
      var_semanticExpressionListForGeneration.addAssign_operation (var_exp  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3059)) ;
      enumerator_133660.gotoNextObject () ;
      enumerator_133691.gotoNextObject () ;
    }
    ioArgument_ioCollectionValueElementListForGeneration.addAssign_operation (GALGAS_expressionListCollectionForGeneration::constructor_new (object->mAttribute_mEndOfExpressionLocation, var_semanticExpressionListForGeneration  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3061))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3061)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_expressionListCollectionValue_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_expressionListCollectionValue.mSlotID,
                               categoryMethod_expressionListCollectionValue_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_expressionListCollectionValue_analyze (defineCategoryMethod_expressionListCollectionValue_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@collectionValueAST enterExpressionInSemanticContext'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_collectionValueAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_collectionValueAST * object = (const cPtr_collectionValueAST *) inObject ;
  macroValidSharedObject (object, cPtr_collectionValueAST) ;
  cEnumerator_collectionValueElementList enumerator_135881 (object->mAttribute_mElementList, kEnumeration_up) ;
  while (enumerator_135881.hasCurrentObject ()) {
    callCategoryMethod_enterInSemanticContext ((const cPtr_abstractCollectionValueElement *) enumerator_135881.current_mElement (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3103)) ;
    enumerator_135881.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_collectionValueAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_collectionValueAST.mSlotID,
                                                        categoryMethod_collectionValueAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_collectionValueAST_enterExpressionInSemanticContext (defineCategoryMethod_collectionValueAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@collectionValueAST analyzeSemanticExpression'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_collectionValueAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
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
    var_targetType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3120)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_targetType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3123)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_location location_2 (object->mAttribute_mTypeName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_2, GALGAS_string ("Cannot infer type")  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3124)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_1) {
    const enumGalgasBool test_3 = var_targetType.reader_mSupportCollectionValue (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3125)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3125)).boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_location location_4 (object->mAttribute_mTypeName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_4, GALGAS_string ("the @").add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3126)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3126)).add_operation (GALGAS_string (" type does not support collection value"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3126))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3126)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_3) {
      const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, object->mAttribute_mElementList.reader_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3128)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_5) {
        outArgument_outExpression = GALGAS_defaultConstructorExpressionForGeneration::constructor_new (var_targetType, object->mAttribute_mTypeName.mAttribute_location  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3129)) ;
      }else if (kBoolFalse == test_5) {
        GALGAS_collectionValueElementListForGeneration var_collectionValueElementListForGeneration = GALGAS_collectionValueElementListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3133)) ;
        cEnumerator_collectionValueElementList enumerator_137038 (object->mAttribute_mElementList, kEnumeration_up) ;
        while (enumerator_137038.hasCurrentObject ()) {
          callCategoryMethod_analyze ((const cPtr_abstractCollectionValueElement *) enumerator_137038.current_mElement (HERE).ptr (), constinArgument_inAnalysisContext, var_targetType, ioArgument_ioVariableMap, var_collectionValueElementListForGeneration, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3135)) ;
          enumerator_137038.gotoNextObject () ;
        }
        outArgument_outExpression = GALGAS_expressionCollectionForGeneration::constructor_new (var_targetType, object->mAttribute_mEndOfCollectionValue, var_collectionValueElementListForGeneration  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3142)) ;
      }
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_collectionValueAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_collectionValueAST.mSlotID,
                                                 categoryMethod_collectionValueAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_collectionValueAST_analyzeSemanticExpression (defineCategoryMethod_collectionValueAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//Overriding category method '@localVariableOrConstantDeclarationWithDefaultConstructorAST enterInstructionInSemanticContext'*
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_localVariableOrConstantDeclarationWithDefaultConstructorAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                                                          GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                                          C_Compiler * /* inCompiler */
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_localVariableOrConstantDeclarationWithDefaultConstructorAST * object = (const cPtr_localVariableOrConstantDeclarationWithDefaultConstructorAST *) inObject ;
  macroValidSharedObject (object, cPtr_localVariableOrConstantDeclarationWithDefaultConstructorAST) ;
  {
  GALGAS_unifiedTypeMap_2D_proxy joker_4775 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioTypeMap, object->mAttribute_mTypeName, joker_4775 COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 87)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_localVariableOrConstantDeclarationWithDefaultConstructorAST_enterInstructionInSemanticContext (void) {
  enterCategoryMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithDefaultConstructorAST.mSlotID,
                                                         categoryMethod_localVariableOrConstantDeclarationWithDefaultConstructorAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_localVariableOrConstantDeclarationWithDefaultConstructorAST_enterInstructionInSemanticContext (defineCategoryMethod_localVariableOrConstantDeclarationWithDefaultConstructorAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//Overriding category method '@localVariableOrConstantDeclarationWithDefaultConstructorAST analyzeSemanticInstruction' *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_localVariableOrConstantDeclarationWithDefaultConstructorAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                                                   const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                                   GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                                                   GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                                                   C_Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_localVariableOrConstantDeclarationWithDefaultConstructorAST * object = (const cPtr_localVariableOrConstantDeclarationWithDefaultConstructorAST *) inObject ;
  macroValidSharedObject (object, cPtr_localVariableOrConstantDeclarationWithDefaultConstructorAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 97)) ;
  const enumGalgasBool test_0 = var_targetType.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 101)).operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 101)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mTypeName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("an abstract class does not support the default constructor")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 102)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_targetType.reader_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 103)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (object->mAttribute_mTypeName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_3, GALGAS_string ("this class does not support the default constructor")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 104)) ;
    }
  }
  GALGAS_string var_targetVariableCppName = GALGAS_string ("var_").add_operation (object->mAttribute_mVariableName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 107)) ;
  const enumGalgasBool test_4 = object->mAttribute_mIsConstant.boolEnum () ;
  if (kBoolTrue == test_4) {
    {
    ioArgument_ioVariableMap.modifier_insertLocalConstant (object->mAttribute_mVariableName, var_targetType, var_targetVariableCppName, var_targetVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 109)) ;
    }
  }else if (kBoolFalse == test_4) {
    {
    ioArgument_ioVariableMap.modifier_insertDefinedLocalVariable (object->mAttribute_mVariableName, var_targetType, var_targetVariableCppName, var_targetVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 111)) ;
    }
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_targetType, object->mAttribute_mIsConstant, var_targetVariableCppName  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 114))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 114)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_localVariableOrConstantDeclarationWithDefaultConstructorAST_analyzeSemanticInstruction (void) {
  enterCategoryMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithDefaultConstructorAST.mSlotID,
                                                  categoryMethod_localVariableOrConstantDeclarationWithDefaultConstructorAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_localVariableOrConstantDeclarationWithDefaultConstructorAST_analyzeSemanticInstruction (defineCategoryMethod_localVariableOrConstantDeclarationWithDefaultConstructorAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//Overriding category method '@localVariableOrConstantDeclarationWithConstructorCallAST enterInstructionInSemanticContext'*
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_localVariableOrConstantDeclarationWithConstructorCallAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                                       C_Compiler * inCompiler
                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_localVariableOrConstantDeclarationWithConstructorCallAST * object = (const cPtr_localVariableOrConstantDeclarationWithConstructorCallAST *) inObject ;
  macroValidSharedObject (object, cPtr_localVariableOrConstantDeclarationWithConstructorCallAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mOptionalTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    GALGAS_unifiedTypeMap_2D_proxy joker_6591 ; // Joker input parameter
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioTypeMap, object->mAttribute_mOptionalTypeName, joker_6591 COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 127)) ;
    }
  }
  categoryMethod_enterInSemanticContext (object->mAttribute_mConstructorExpressions, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 129)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_localVariableOrConstantDeclarationWithConstructorCallAST_enterInstructionInSemanticContext (void) {
  enterCategoryMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithConstructorCallAST.mSlotID,
                                                         categoryMethod_localVariableOrConstantDeclarationWithConstructorCallAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_localVariableOrConstantDeclarationWithConstructorCallAST_enterInstructionInSemanticContext (defineCategoryMethod_localVariableOrConstantDeclarationWithConstructorCallAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//  Overriding category method '@localVariableOrConstantDeclarationWithConstructorCallAST analyzeSemanticInstruction'  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_localVariableOrConstantDeclarationWithConstructorCallAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
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
  GALGAS_unifiedTypeMap_2D_proxy joker_7399 ; // Joker input parameter
  routine_analyzeConstructorInvocation (var_targetType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, object->mAttribute_mOptionalTypeName, object->mAttribute_mConstructorName, object->mAttribute_mConstructorExpressions, var_returnedType, joker_7399, var_constructorEffectiveParameterList, var_hasCompilerArgument, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 140)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_targetType.objectCompare (var_returnedType)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mConstructorName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("this constructor returns an '@").add_operation (var_returnedType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 155)).add_operation (GALGAS_string ("' object, you should use a constructor that return an '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 155)).add_operation (object->mAttribute_mOptionalTypeName.reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 155)).add_operation (GALGAS_string ("' object"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 155))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 154)) ;
  }
  GALGAS_string var_targetVariableCppName = GALGAS_string ("var_").add_operation (object->mAttribute_mVariableName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 158)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 158)) ;
  const enumGalgasBool test_2 = object->mAttribute_mIsConstant.boolEnum () ;
  if (kBoolTrue == test_2) {
    {
    ioArgument_ioVariableMap.modifier_insertLocalConstant (object->mAttribute_mVariableName, var_targetType, var_targetVariableCppName, var_targetVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 160)) ;
    }
  }else if (kBoolFalse == test_2) {
    {
    ioArgument_ioVariableMap.modifier_insertDefinedLocalVariable (object->mAttribute_mVariableName, var_targetType, var_targetVariableCppName, var_targetVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 162)) ;
    }
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithConstructorCallForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_targetType, object->mAttribute_mIsConstant, var_targetVariableCppName, object->mAttribute_mConstructorName.reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 170)), var_constructorEffectiveParameterList, var_hasCompilerArgument  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 165))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 165)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_localVariableOrConstantDeclarationWithConstructorCallAST_analyzeSemanticInstruction (void) {
  enterCategoryMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithConstructorCallAST.mSlotID,
                                                  categoryMethod_localVariableOrConstantDeclarationWithConstructorCallAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_localVariableOrConstantDeclarationWithConstructorCallAST_analyzeSemanticInstruction (defineCategoryMethod_localVariableOrConstantDeclarationWithConstructorCallAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//      Overriding category method '@localVariableDeclarationWithAssignmentAST enterInstructionInSemanticContext'      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_localVariableDeclarationWithAssignmentAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_localVariableDeclarationWithAssignmentAST * object = (const cPtr_localVariableDeclarationWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_localVariableDeclarationWithAssignmentAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mSourceExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 180)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_localVariableDeclarationWithAssignmentAST_enterInstructionInSemanticContext (void) {
  enterCategoryMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_localVariableDeclarationWithAssignmentAST.mSlotID,
                                                         categoryMethod_localVariableDeclarationWithAssignmentAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_localVariableDeclarationWithAssignmentAST_enterInstructionInSemanticContext (defineCategoryMethod_localVariableDeclarationWithAssignmentAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding category method '@localVariableDeclarationWithAssignmentAST analyzeSemanticInstruction'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_localVariableDeclarationWithAssignmentAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                 GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                                 GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_localVariableDeclarationWithAssignmentAST * object = (const cPtr_localVariableDeclarationWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_localVariableDeclarationWithAssignmentAST) ;
  GALGAS_semanticExpressionForGeneration var_expression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mSourceExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 191)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 190)) ;
  GALGAS_string var_targetVariableCppName = GALGAS_string ("var_").add_operation (object->mAttribute_mVariableName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 197)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 197)) ;
  {
  ioArgument_ioVariableMap.modifier_insertDefinedLocalVariable (object->mAttribute_mVariableName, var_expression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 198)), var_targetVariableCppName, var_targetVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 198)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::constructor_new (var_expression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 201)), GALGAS_bool (false), var_targetVariableCppName, var_expression  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 200))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 200)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_localVariableDeclarationWithAssignmentAST_analyzeSemanticInstruction (void) {
  enterCategoryMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_localVariableDeclarationWithAssignmentAST.mSlotID,
                                                  categoryMethod_localVariableDeclarationWithAssignmentAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_localVariableDeclarationWithAssignmentAST_analyzeSemanticInstruction (defineCategoryMethod_localVariableDeclarationWithAssignmentAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
// Overriding category method '@localVariableOrConstantDeclarationWithAssignmentAST enterInstructionInSemanticContext' *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_localVariableOrConstantDeclarationWithAssignmentAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                                                  GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_localVariableOrConstantDeclarationWithAssignmentAST * object = (const cPtr_localVariableOrConstantDeclarationWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_localVariableOrConstantDeclarationWithAssignmentAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mOptionalTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    GALGAS_unifiedTypeMap_2D_proxy joker_10198 ; // Joker input parameter
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioTypeMap, object->mAttribute_mOptionalTypeName, joker_10198 COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 214)) ;
    }
  }
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mSourceExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 216)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_localVariableOrConstantDeclarationWithAssignmentAST_enterInstructionInSemanticContext (void) {
  enterCategoryMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithAssignmentAST.mSlotID,
                                                         categoryMethod_localVariableOrConstantDeclarationWithAssignmentAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_localVariableOrConstantDeclarationWithAssignmentAST_enterInstructionInSemanticContext (defineCategoryMethod_localVariableOrConstantDeclarationWithAssignmentAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    Overriding category method '@localVariableOrConstantDeclarationWithAssignmentAST analyzeSemanticInstruction'     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_localVariableOrConstantDeclarationWithAssignmentAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                           GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                                           GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_localVariableOrConstantDeclarationWithAssignmentAST * object = (const cPtr_localVariableOrConstantDeclarationWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_localVariableOrConstantDeclarationWithAssignmentAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mOptionalTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 225)) ;
  GALGAS_semanticExpressionForGeneration var_expression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mSourceExpression.ptr (), var_targetType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 227)) ;
  GALGAS_string var_targetVariableCppName = GALGAS_string ("var_").add_operation (object->mAttribute_mVariableName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 234)) ;
  const enumGalgasBool test_0 = object->mAttribute_mIsConstant.boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_ioVariableMap.modifier_insertLocalConstant (object->mAttribute_mVariableName, var_targetType, var_targetVariableCppName, var_targetVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 236)) ;
    }
  }else if (kBoolFalse == test_0) {
    {
    ioArgument_ioVariableMap.modifier_insertDefinedLocalVariable (object->mAttribute_mVariableName, var_targetType, var_targetVariableCppName, var_targetVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 238)) ;
    }
  }
  {
  routine_checkAssignmentTypes (var_targetType, var_expression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 241)), object->mAttribute_mInstructionLocation, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 241)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::constructor_new (var_targetType, object->mAttribute_mIsConstant, var_targetVariableCppName, var_expression  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 243))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 243)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_localVariableOrConstantDeclarationWithAssignmentAST_analyzeSemanticInstruction (void) {
  enterCategoryMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithAssignmentAST.mSlotID,
                                                  categoryMethod_localVariableOrConstantDeclarationWithAssignmentAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_localVariableOrConstantDeclarationWithAssignmentAST_analyzeSemanticInstruction (defineCategoryMethod_localVariableOrConstantDeclarationWithAssignmentAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//      Overriding category method '@localConstantDeclarationWithAssignmentAST enterInstructionInSemanticContext'      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_localConstantDeclarationWithAssignmentAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_localConstantDeclarationWithAssignmentAST * object = (const cPtr_localConstantDeclarationWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_localConstantDeclarationWithAssignmentAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mSourceExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 255)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_localConstantDeclarationWithAssignmentAST_enterInstructionInSemanticContext (void) {
  enterCategoryMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_localConstantDeclarationWithAssignmentAST.mSlotID,
                                                         categoryMethod_localConstantDeclarationWithAssignmentAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_localConstantDeclarationWithAssignmentAST_enterInstructionInSemanticContext (defineCategoryMethod_localConstantDeclarationWithAssignmentAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding category method '@localConstantDeclarationWithAssignmentAST analyzeSemanticInstruction'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_localConstantDeclarationWithAssignmentAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                 GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                                 GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_localConstantDeclarationWithAssignmentAST * object = (const cPtr_localConstantDeclarationWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_localConstantDeclarationWithAssignmentAST) ;
  GALGAS_semanticExpressionForGeneration var_expression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mSourceExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 266)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 265)) ;
  GALGAS_string var_targetVariableCppName = GALGAS_string ("var_").add_operation (object->mAttribute_mVariableName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 272)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 272)) ;
  {
  ioArgument_ioVariableMap.modifier_insertLocalConstant (object->mAttribute_mVariableName, var_expression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 273)), var_targetVariableCppName, var_targetVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 273)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::constructor_new (var_expression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 276)), GALGAS_bool (true), var_targetVariableCppName, var_expression  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 275))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 275)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_localConstantDeclarationWithAssignmentAST_analyzeSemanticInstruction (void) {
  enterCategoryMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_localConstantDeclarationWithAssignmentAST.mSlotID,
                                                  categoryMethod_localConstantDeclarationWithAssignmentAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_localConstantDeclarationWithAssignmentAST_analyzeSemanticInstruction (defineCategoryMethod_localConstantDeclarationWithAssignmentAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@localVariableDeclarationAST enterInstructionInSemanticContext'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_localVariableDeclarationAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                          GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_localVariableDeclarationAST * object = (const cPtr_localVariableDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_localVariableDeclarationAST) ;
  {
  GALGAS_unifiedTypeMap_2D_proxy joker_13316 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioTypeMap, object->mAttribute_mTypeName, joker_13316 COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 287)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_localVariableDeclarationAST_enterInstructionInSemanticContext (void) {
  enterCategoryMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_localVariableDeclarationAST.mSlotID,
                                                         categoryMethod_localVariableDeclarationAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_localVariableDeclarationAST_enterInstructionInSemanticContext (defineCategoryMethod_localVariableDeclarationAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@localVariableDeclarationAST analyzeSemanticInstruction'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_localVariableDeclarationAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                   const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                   GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                   GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_localVariableDeclarationAST * object = (const cPtr_localVariableDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_localVariableDeclarationAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 297)) ;
  GALGAS_string var_targetVariableCppName = GALGAS_string ("var_").add_operation (object->mAttribute_mVariableName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 298)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 298)) ;
  const enumGalgasBool test_0 = object->mAttribute_mIsUndefinedConstant.boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_ioVariableMap.modifier_insertUndefinedLocalConstant (object->mAttribute_mVariableName, var_targetType, var_targetVariableCppName, var_targetVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 300)) ;
    }
  }else if (kBoolFalse == test_0) {
    {
    ioArgument_ioVariableMap.modifier_insertUndefinedLocalVariable (object->mAttribute_mVariableName, var_targetType, var_targetVariableCppName, var_targetVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 302)) ;
    }
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableDeclarationForGeneration::constructor_new (var_targetType, var_targetVariableCppName  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 305))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 305)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_localVariableDeclarationAST_analyzeSemanticInstruction (void) {
  enterCategoryMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_localVariableDeclarationAST.mSlotID,
                                                  categoryMethod_localVariableDeclarationAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_localVariableDeclarationAST_analyzeSemanticInstruction (defineCategoryMethod_localVariableDeclarationAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@assignmentInstructionAST enterInstructionInSemanticContext'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_assignmentInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assignmentInstructionAST * object = (const cPtr_assignmentInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_assignmentInstructionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mSourceExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 316)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_assignmentInstructionAST_enterInstructionInSemanticContext (void) {
  enterCategoryMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_assignmentInstructionAST.mSlotID,
                                                         categoryMethod_assignmentInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_assignmentInstructionAST_enterInstructionInSemanticContext (defineCategoryMethod_assignmentInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@assignmentInstructionAST analyzeSemanticInstruction'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_assignmentInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assignmentInstructionAST * object = (const cPtr_assignmentInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_assignmentInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mStructAttributeList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 328)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    GALGAS_string joker_15166 ; // Joker input parameter
    GALGAS_string joker_15175 ; // Joker input parameter
    ioArgument_ioVariableMap.modifier_neutralAccess (object->mAttribute_mTargetVariableName, var_targetType, joker_15166, joker_15175, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 329)) ;
    }
  }else if (kBoolFalse == test_0) {
    {
    GALGAS_string joker_15277 ; // Joker input parameter
    GALGAS_string joker_15286 ; // Joker input parameter
    ioArgument_ioVariableMap.modifier_neutralAccess (object->mAttribute_mTargetVariableName, var_targetType, joker_15277, joker_15286, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 336)) ;
    }
    cEnumerator_lstringlist enumerator_15328 (object->mAttribute_mStructAttributeList, kEnumeration_up) ;
    while (enumerator_15328.hasCurrentObject ()) {
      GALGAS_attributeMap var_attributeMap = var_targetType.reader_mAttributeMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 343)) ;
      var_attributeMap.method_searchKey (enumerator_15328.current_mValue (HERE), var_targetType, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 344)) ;
      enumerator_15328.gotoNextObject () ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mSourceExpression.ptr (), var_targetType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 355)) ;
  {
  routine_checkAssignmentTypes (var_targetType, var_expression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 362)), object->mAttribute_mInstructionLocation, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 362)) ;
  }
  GALGAS_string var_targetVariableCppName ;
  GALGAS_string var_nameForCheckingFormalParameterUsing ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mAttribute_mStructAttributeList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 366)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    GALGAS_unifiedTypeMap_2D_proxy joker_16210 ; // Joker input parameter
    ioArgument_ioVariableMap.modifier_searchForWriteAccess (object->mAttribute_mTargetVariableName, joker_16210, var_targetVariableCppName, var_nameForCheckingFormalParameterUsing, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 367)) ;
    }
  }else if (kBoolFalse == test_1) {
    {
    GALGAS_unifiedTypeMap_2D_proxy joker_16377 ; // Joker input parameter
    ioArgument_ioVariableMap.modifier_searchForReadWriteAccess (object->mAttribute_mTargetVariableName, joker_16377, var_targetVariableCppName, var_nameForCheckingFormalParameterUsing, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 374)) ;
    }
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_assignmentInstructionForGeneration::constructor_new (var_targetType, var_targetVariableCppName, var_nameForCheckingFormalParameterUsing, object->mAttribute_mStructAttributeList, var_expression  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 382))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 382)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_assignmentInstructionAST_analyzeSemanticInstruction (void) {
  enterCategoryMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_assignmentInstructionAST.mSlotID,
                                                  categoryMethod_assignmentInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_assignmentInstructionAST_analyzeSemanticInstruction (defineCategoryMethod_assignmentInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding category method '@selfAssignmentInstructionAST enterInstructionInSemanticContext'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_selfAssignmentInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                           GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfAssignmentInstructionAST * object = (const cPtr_selfAssignmentInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfAssignmentInstructionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mSourceExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 396)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_selfAssignmentInstructionAST_enterInstructionInSemanticContext (void) {
  enterCategoryMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_selfAssignmentInstructionAST.mSlotID,
                                                         categoryMethod_selfAssignmentInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfAssignmentInstructionAST_enterInstructionInSemanticContext (defineCategoryMethod_selfAssignmentInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@selfAssignmentInstructionAST analyzeSemanticInstruction'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_selfAssignmentInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                    const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                    GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                    GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfAssignmentInstructionAST * object = (const cPtr_selfAssignmentInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfAssignmentInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mSourceExpression.ptr (), constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 406)) ;
  const enumGalgasBool test_0 = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy.reader_isNull (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 413)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("'self' can be used only in category setters")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 414)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 415)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 415)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("'self' assignment is not allowed for class instances")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 416)) ;
    }
  }
  {
  routine_checkAssignmentTypes (constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy, var_expression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 419)), object->mAttribute_mInstructionLocation, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 419)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_assignmentInstructionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy, constinArgument_inAnalysisContext.mAttribute_mSelfObjectCppName, constinArgument_inAnalysisContext.mAttribute_mSelfObjectCppName, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 425)), var_expression  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 421))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 421)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_selfAssignmentInstructionAST_analyzeSemanticInstruction (void) {
  enterCategoryMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_selfAssignmentInstructionAST.mSlotID,
                                                  categoryMethod_selfAssignmentInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfAssignmentInstructionAST_analyzeSemanticInstruction (defineCategoryMethod_selfAssignmentInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@errorInstructionAST enterInstructionInSemanticContext'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_errorInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                  GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_errorInstructionAST * object = (const cPtr_errorInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_errorInstructionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLocationExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 493)) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mMessageExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 494)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_errorInstructionAST_enterInstructionInSemanticContext (void) {
  enterCategoryMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_errorInstructionAST.mSlotID,
                                                         categoryMethod_errorInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_errorInstructionAST_enterInstructionInSemanticContext (defineCategoryMethod_errorInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@errorInstructionAST analyzeSemanticInstruction'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_errorInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                           GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                           GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_errorInstructionAST * object = (const cPtr_errorInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_errorInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_locationExpression ;
  GALGAS_semanticExpressionForGeneration var_messageExpression ;
  GALGAS_bool var_useLocationReader ;
  {
  routine_analyzeErrorOrWarningInstruction (constinArgument_inAnalysisContext, object->mAttribute_mLocationExpression, object->mAttribute_mMessageExpression, object->mAttribute_mInstructionLocation, GALGAS_string ("error"), ioArgument_ioVariableMap, var_locationExpression, var_messageExpression, var_useLocationReader, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 504)) ;
  }
  GALGAS_stringlist var_builtVariableCppNameList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 516)) ;
  cEnumerator_lstringlist enumerator_22396 (object->mAttribute_mBuiltVariableList, kEnumeration_up) ;
  while (enumerator_22396.hasCurrentObject ()) {
    GALGAS_string var_varCppName ;
    {
    GALGAS_unifiedTypeMap_2D_proxy joker_22474 ; // Joker input parameter
    GALGAS_string joker_22489 ; // Joker input parameter
    ioArgument_ioVariableMap.modifier_searchForWriteAccess (enumerator_22396.current_mValue (HERE), joker_22474, var_varCppName, joker_22489, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 519)) ;
    }
    var_builtVariableCppNameList.addAssign_operation (var_varCppName  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 520)) ;
    enumerator_22396.gotoNextObject () ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_errorInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_locationExpression, var_useLocationReader, var_messageExpression, var_builtVariableCppNameList  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 523))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 523)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_errorInstructionAST_analyzeSemanticInstruction (void) {
  enterCategoryMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_errorInstructionAST.mSlotID,
                                                  categoryMethod_errorInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_errorInstructionAST_analyzeSemanticInstruction (defineCategoryMethod_errorInstructionAST_analyzeSemanticInstruction, NULL) ;

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
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLocationExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 536)) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mMessageExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 537)) ;
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
  routine_analyzeErrorOrWarningInstruction (constinArgument_inAnalysisContext, object->mAttribute_mLocationExpression, object->mAttribute_mMessageExpression, object->mAttribute_mInstructionLocation, GALGAS_string ("warning"), ioArgument_ioVariableMap, var_locationExpression, var_messageExpression, var_useLocationReader, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 547)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_warningInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_locationExpression, var_useLocationReader, var_messageExpression  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 559))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 559)) ;
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
//                  Overriding category method '@outputActualParameterAST checkAgainstFormalArgument'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_outputActualParameterAST_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 601)))).operator_and (GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 602)))) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 601)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mActualSelector.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the corresponding formal argument has the '").add_operation (categoryReader_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 604)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 604)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 604)).add_operation (categoryReader_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 605)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 605)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 605))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 603)) ;
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
      GALGAS_location location_5 (object->mAttribute_mActualSelector.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_5, GALGAS_string ("the selector should be '!").add_operation (constinArgument_inFormalSelector.reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 608)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 608)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 608)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 608))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 608)) ;
    }
    GALGAS_semanticExpressionForGeneration var_expression ;
    callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mOutputActualParameterExpression.ptr (), constinArgument_inFormalArgumentType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 610)) ;
    {
    routine_checkAssignmentTypes (constinArgument_inFormalArgumentType, var_expression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 617)), object->mAttribute_mEndOfExpressionLocation, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 617)) ;
    }
    ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_outputActualParameterForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_expression  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 619))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 619)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_outputActualParameterAST_checkAgainstFormalArgument (void) {
  enterCategoryMethod_checkAgainstFormalArgument (kTypeDescriptor_GALGAS_outputActualParameterAST.mSlotID,
                                                  categoryMethod_outputActualParameterAST_checkAgainstFormalArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_outputActualParameterAST_checkAgainstFormalArgument (defineCategoryMethod_outputActualParameterAST_checkAgainstFormalArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@outputInputActualParameterAST checkAgainstFormalArgument'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_outputInputActualParameterAST_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 636)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mActualSelector.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the corresponding formal argument has the '").add_operation (categoryReader_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 638)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 638)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 638)).add_operation (categoryReader_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 639)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 639)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 639))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 637)) ;
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
      GALGAS_location location_5 (object->mAttribute_mActualSelector.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_5, GALGAS_string ("the selector should be '!\?").add_operation (constinArgument_inFormalSelector.reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 641)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 641)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 641)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 641))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 641)) ;
    }
  }
  GALGAS_string var_variableCppName ;
  GALGAS_unifiedTypeMap_2D_proxy var_parameterType ;
  {
  GALGAS_string joker_28103 ; // Joker input parameter
  ioArgument_ioVariableMap.modifier_searchForReadWriteAccess (object->mAttribute_mOutputInputActualParameterName, var_parameterType, var_variableCppName, joker_28103, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 645)) ;
  }
  GALGAS_unifiedTypeMapProxyList var_typeList = GALGAS_unifiedTypeMapProxyList::constructor_listWithValue (var_parameterType  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 646)) ;
  cEnumerator_lstringlist enumerator_28212 (object->mAttribute_mStructAttributeList, kEnumeration_up) ;
  while (enumerator_28212.hasCurrentObject ()) {
    GALGAS_attributeMap var_attributeMap = var_parameterType.reader_mAttributeMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 648)) ;
    var_attributeMap.method_searchKey (enumerator_28212.current_mValue (HERE), var_parameterType, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 649)) ;
    var_typeList.addAssign_operation (var_parameterType  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 657)) ;
    enumerator_28212.gotoNextObject () ;
  }
  const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType)).boolEnum () ;
  if (kBoolTrue == test_6) {
    GALGAS_location location_7 (object->mAttribute_mOutputInputActualParameterName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_7, GALGAS_string ("the parameter object has the '@").add_operation (var_parameterType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 662)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 662)).add_operation (GALGAS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 662)).add_operation (constinArgument_inFormalArgumentType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 663)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 663)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 663))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 661)) ;
  }
  const enumGalgasBool test_8 = ioArgument_ioExclusiveVariableSet.reader_hasKey (object->mAttribute_mOutputInputActualParameterName.reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 666)) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 666)).boolEnum () ;
  if (kBoolTrue == test_8) {
    GALGAS_location location_9 (object->mAttribute_mOutputInputActualParameterName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_9, GALGAS_string ("this variable is already named as input or output/input effective parameter")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 667)) ;
  }
  ioArgument_ioExclusiveVariableSet.addAssign_operation (object->mAttribute_mOutputInputActualParameterName.reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 670))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 670)) ;
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_outputInputActualParameterForGeneration::constructor_new (var_parameterType, var_variableCppName, object->mAttribute_mStructAttributeList, var_typeList  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 672))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 672)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_outputInputActualParameterAST_checkAgainstFormalArgument (void) {
  enterCategoryMethod_checkAgainstFormalArgument (kTypeDescriptor_GALGAS_outputInputActualParameterAST.mSlotID,
                                                  categoryMethod_outputInputActualParameterAST_checkAgainstFormalArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_outputInputActualParameterAST_checkAgainstFormalArgument (defineCategoryMethod_outputInputActualParameterAST_checkAgainstFormalArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@outputInputSingleJokerParameterAST checkAgainstFormalArgument'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_outputInputSingleJokerParameterAST_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 690)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mActualSelector.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the corresponding formal argument has the '").add_operation (categoryReader_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 692)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 692)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 692)).add_operation (categoryReader_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 693)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 693)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 693))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 691)) ;
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
      GALGAS_location location_5 (object->mAttribute_mActualSelector.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_5, GALGAS_string ("the selector should be '!\?").add_operation (constinArgument_inFormalSelector.reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 695)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 695)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 695)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 695))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 695)) ;
    }
  }
  GALGAS_string var_defaultConstructorName = constinArgument_inFormalArgumentType.reader_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 697)) ;
  const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_defaultConstructorName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_6) {
    GALGAS_location location_7 (object->mAttribute_mActualSelector.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_7, GALGAS_string ("the formal parameter type @").add_operation (constinArgument_inFormalArgumentType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 699)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 699)).add_operation (GALGAS_string (" should support the default constructor"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 699))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 699)) ;
  }
  GALGAS_string var_cppVarName = GALGAS_string ("joker_").add_operation (object->mAttribute_mActualSelector.mAttribute_location.reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 702)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 702)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 702)) ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::constructor_new (constinArgument_inFormalArgumentType, GALGAS_bool (false), var_cppVarName, GALGAS_defaultConstructorExpressionForGeneration::constructor_new (constinArgument_inFormalArgumentType, object->mAttribute_mActualSelector.mAttribute_location  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 707))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 703))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 703)) ;
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_outputInputActualParameterForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_cppVarName, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 711)), GALGAS_unifiedTypeMapProxyList::constructor_listWithValue (constinArgument_inFormalArgumentType  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 712))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 708))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 708)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_outputInputSingleJokerParameterAST_checkAgainstFormalArgument (void) {
  enterCategoryMethod_checkAgainstFormalArgument (kTypeDescriptor_GALGAS_outputInputSingleJokerParameterAST.mSlotID,
                                                  categoryMethod_outputInputSingleJokerParameterAST_checkAgainstFormalArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_outputInputSingleJokerParameterAST_checkAgainstFormalArgument (defineCategoryMethod_outputInputSingleJokerParameterAST_checkAgainstFormalArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@outputInputJokerParameterAST checkAgainstFormalArgument'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_outputInputJokerParameterAST_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 726)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mQualifierLocation, GALGAS_string ("the corresponding formal argument has the '").add_operation (categoryReader_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 728)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 728)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 728)).add_operation (categoryReader_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 729)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 729)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 729))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 727)) ;
  }
  GALGAS_string var_defaultConstructorName = constinArgument_inFormalArgumentType.reader_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 731)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_defaultConstructorName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mQualifierLocation, GALGAS_string ("the formal parameter type @").add_operation (constinArgument_inFormalArgumentType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 733)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 733)).add_operation (GALGAS_string (" should support the default constructor"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 733))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 733)) ;
  }
  GALGAS_string var_cppVarName = GALGAS_string ("joker_").add_operation (object->mAttribute_mQualifierLocation.reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 736)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 736)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 736)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 736)).add_operation (object->mAttribute_mJokerIndex.reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 736)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 736)) ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::constructor_new (constinArgument_inFormalArgumentType, GALGAS_bool (false), var_cppVarName, GALGAS_defaultConstructorExpressionForGeneration::constructor_new (constinArgument_inFormalArgumentType, object->mAttribute_mQualifierLocation  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 741))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 737))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 737)) ;
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_outputInputActualParameterForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_cppVarName, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 745)), GALGAS_unifiedTypeMapProxyList::constructor_listWithValue (constinArgument_inFormalArgumentType  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 746))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 742))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 742)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_outputInputJokerParameterAST_checkAgainstFormalArgument (void) {
  enterCategoryMethod_checkAgainstFormalArgument (kTypeDescriptor_GALGAS_outputInputJokerParameterAST.mSlotID,
                                                  categoryMethod_outputInputJokerParameterAST_checkAgainstFormalArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_outputInputJokerParameterAST_checkAgainstFormalArgument (defineCategoryMethod_outputInputJokerParameterAST_checkAgainstFormalArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category method '@inputActualExistingVariableParameterAST checkAgainstFormalArgument'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_inputActualExistingVariableParameterAST_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 760)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mActualSelector.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the corresponding formal argument has the '").add_operation (categoryReader_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 762)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 762)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 762)).add_operation (categoryReader_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 763)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 763)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 763))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 761)) ;
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
      GALGAS_location location_5 (object->mAttribute_mActualSelector.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_5, GALGAS_string ("the selector should be '\?").add_operation (constinArgument_inFormalSelector.reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 765)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 765)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 765)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 765))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 765)) ;
    }
  }
  GALGAS_unifiedTypeMap_2D_proxy var_parameterType ;
  GALGAS_string var_targetVariableCppName ;
  {
  GALGAS_string joker_34539 ; // Joker input parameter
  ioArgument_ioVariableMap.modifier_searchForWriteAccess (object->mAttribute_mInputActualParameterName, var_parameterType, var_targetVariableCppName, joker_34539, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 767)) ;
  }
  const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType)).boolEnum () ;
  if (kBoolTrue == test_6) {
    GALGAS_location location_7 (object->mAttribute_mInputActualParameterName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_7, GALGAS_string ("the parameter object has the '@").add_operation (var_parameterType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 776)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 776)).add_operation (GALGAS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 776)).add_operation (constinArgument_inFormalArgumentType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 777)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 777)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 777))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 775)) ;
  }
  const enumGalgasBool test_8 = ioArgument_ioExclusiveVariableSet.reader_hasKey (object->mAttribute_mInputActualParameterName.reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 780)) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 780)).boolEnum () ;
  if (kBoolTrue == test_8) {
    GALGAS_location location_9 (object->mAttribute_mInputActualParameterName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_9, GALGAS_string ("this variable is already named as input or output/input effective parameter")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 781)) ;
  }
  ioArgument_ioExclusiveVariableSet.addAssign_operation (object->mAttribute_mInputActualParameterName.reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 784))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 784)) ;
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputActualParameterForGeneration::constructor_new (var_parameterType, var_targetVariableCppName  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 786))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 786)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_inputActualExistingVariableParameterAST_checkAgainstFormalArgument (void) {
  enterCategoryMethod_checkAgainstFormalArgument (kTypeDescriptor_GALGAS_inputActualExistingVariableParameterAST.mSlotID,
                                                  categoryMethod_inputActualExistingVariableParameterAST_checkAgainstFormalArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputActualExistingVariableParameterAST_checkAgainstFormalArgument (defineCategoryMethod_inputActualExistingVariableParameterAST_checkAgainstFormalArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@inputActualNewVariableParameterAST checkAgainstFormalArgument'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_inputActualNewVariableParameterAST_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 803)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mActualSelector.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the corresponding formal argument has the '").add_operation (categoryReader_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 805)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 805)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 805)).add_operation (categoryReader_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 806)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 806)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 806))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 804)) ;
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
      GALGAS_location location_5 (object->mAttribute_mActualSelector.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_5, GALGAS_string ("the selector should be '\?").add_operation (constinArgument_inFormalSelector.reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 808)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 808)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 808)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 808))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 808)) ;
    }
  }
  const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, object->mAttribute_mInputOptionalActualTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_6) {
    GALGAS_unifiedTypeMap_2D_proxy var_parameterType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mInputOptionalActualTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 813)) ;
    const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType)).boolEnum () ;
    if (kBoolTrue == test_7) {
      GALGAS_location location_8 (object->mAttribute_mInputActualParameterName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_8, GALGAS_string ("the parameter object has the '@").add_operation (var_parameterType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 819)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 819)).add_operation (GALGAS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 819)).add_operation (constinArgument_inFormalArgumentType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 820)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 820)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 820))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 818)) ;
    }
  }
  GALGAS_string var_targetVariableCppName = GALGAS_string ("var_").add_operation (object->mAttribute_mInputActualParameterName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 824)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 824)) ;
  {
  ioArgument_ioVariableMap.modifier_insertDefinedLocalVariable (object->mAttribute_mInputActualParameterName, constinArgument_inFormalArgumentType, var_targetVariableCppName, var_targetVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 825)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableDeclarationForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_targetVariableCppName  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 832))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 832)) ;
  const enumGalgasBool test_9 = ioArgument_ioExclusiveVariableSet.reader_hasKey (object->mAttribute_mInputActualParameterName.mAttribute_string COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 836)).boolEnum () ;
  if (kBoolTrue == test_9) {
    GALGAS_location location_10 (object->mAttribute_mInputActualParameterName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_10, GALGAS_string ("this variable is already named as input or output/input effective parameter")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 837)) ;
  }
  ioArgument_ioExclusiveVariableSet.addAssign_operation (object->mAttribute_mInputActualParameterName.mAttribute_string  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 840)) ;
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputActualParameterForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_targetVariableCppName  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 842))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 842)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_inputActualNewVariableParameterAST_checkAgainstFormalArgument (void) {
  enterCategoryMethod_checkAgainstFormalArgument (kTypeDescriptor_GALGAS_inputActualNewVariableParameterAST.mSlotID,
                                                  categoryMethod_inputActualNewVariableParameterAST_checkAgainstFormalArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputActualNewVariableParameterAST_checkAgainstFormalArgument (defineCategoryMethod_inputActualNewVariableParameterAST_checkAgainstFormalArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@inputActualNewConstantParameterAST checkAgainstFormalArgument'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_inputActualNewConstantParameterAST_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 859)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mActualSelector.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the corresponding formal argument has the '").add_operation (categoryReader_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 861)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 861)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 861)).add_operation (categoryReader_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 862)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 862)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 862))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 860)) ;
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
      GALGAS_location location_5 (object->mAttribute_mActualSelector.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_5, GALGAS_string ("the selector should be '\?").add_operation (constinArgument_inFormalSelector.reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 864)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 864)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 864)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 864))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 864)) ;
    }
  }
  const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, object->mAttribute_mInputOptionalActualTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_6) {
    GALGAS_unifiedTypeMap_2D_proxy var_parameterType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mInputOptionalActualTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 868)) ;
    const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType)).boolEnum () ;
    if (kBoolTrue == test_7) {
      GALGAS_location location_8 (object->mAttribute_mInputActualParameterName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_8, GALGAS_string ("the parameter object has the '@").add_operation (var_parameterType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 874)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 874)).add_operation (GALGAS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 874)).add_operation (constinArgument_inFormalArgumentType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 875)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 875)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 875))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 873)) ;
    }
  }
  GALGAS_string var_targetVariableCppName = GALGAS_string ("var_").add_operation (object->mAttribute_mInputActualParameterName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 879)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 879)) ;
  const enumGalgasBool test_9 = object->mAttribute_mMarkedAsUnused.boolEnum () ;
  if (kBoolTrue == test_9) {
    {
    ioArgument_ioVariableMap.modifier_insertUsedLocalConstant (object->mAttribute_mInputActualParameterName, constinArgument_inFormalArgumentType, var_targetVariableCppName, var_targetVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 881)) ;
    }
  }else if (kBoolFalse == test_9) {
    {
    ioArgument_ioVariableMap.modifier_insertLocalConstant (object->mAttribute_mInputActualParameterName, constinArgument_inFormalArgumentType, var_targetVariableCppName, var_targetVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 888)) ;
    }
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableDeclarationForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_targetVariableCppName  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 896))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 896)) ;
  const enumGalgasBool test_10 = ioArgument_ioExclusiveVariableSet.reader_hasKey (object->mAttribute_mInputActualParameterName.mAttribute_string COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 901)).boolEnum () ;
  if (kBoolTrue == test_10) {
    GALGAS_location location_11 (object->mAttribute_mInputActualParameterName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_11, GALGAS_string ("this variable is already named as input or output/input effective parameter")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 902)) ;
  }
  ioArgument_ioExclusiveVariableSet.addAssign_operation (object->mAttribute_mInputActualParameterName.mAttribute_string  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 905)) ;
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputActualParameterForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_targetVariableCppName  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 907))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 907)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_inputActualNewConstantParameterAST_checkAgainstFormalArgument (void) {
  enterCategoryMethod_checkAgainstFormalArgument (kTypeDescriptor_GALGAS_inputActualNewConstantParameterAST.mSlotID,
                                                  categoryMethod_inputActualNewConstantParameterAST_checkAgainstFormalArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputActualNewConstantParameterAST_checkAgainstFormalArgument (defineCategoryMethod_inputActualNewConstantParameterAST_checkAgainstFormalArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@inputSingleJokerActualParameterAST checkAgainstFormalArgument'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_inputSingleJokerActualParameterAST_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 924)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mActualSelector.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the corresponding formal argument has the '").add_operation (categoryReader_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 926)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 926)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 926)).add_operation (categoryReader_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 927)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 927)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 927))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 925)) ;
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
      GALGAS_location location_5 (object->mAttribute_mActualSelector.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_5, GALGAS_string ("the selector should be '\?").add_operation (constinArgument_inFormalSelector.reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 929)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 929)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 929)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 929))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 929)) ;
    }else if (kBoolFalse == test_2) {
      GALGAS_string var_cppVarName = GALGAS_string ("joker_").add_operation (object->mAttribute_mActualSelector.mAttribute_location.reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 931)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 931)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 931)) ;
      ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputJokerParameterForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_cppVarName  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 933))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 933)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_inputSingleJokerActualParameterAST_checkAgainstFormalArgument (void) {
  enterCategoryMethod_checkAgainstFormalArgument (kTypeDescriptor_GALGAS_inputSingleJokerActualParameterAST.mSlotID,
                                                  categoryMethod_inputSingleJokerActualParameterAST_checkAgainstFormalArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputSingleJokerActualParameterAST_checkAgainstFormalArgument (defineCategoryMethod_inputSingleJokerActualParameterAST_checkAgainstFormalArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@inputJokerActualParameterAST checkAgainstFormalArgument'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_inputJokerActualParameterAST_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 950)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mQualifierLocation, GALGAS_string ("the corresponding formal argument has the '").add_operation (categoryReader_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 952)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 952)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 952)).add_operation (categoryReader_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 953)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 953)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 953))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 951)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_string var_cppVarName = GALGAS_string ("joker_").add_operation (object->mAttribute_mQualifierLocation.reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 955)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 955)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 955)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 955)).add_operation (object->mAttribute_mJokerIndex.reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 955)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 955)) ;
    ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputJokerParameterForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_cppVarName  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 957))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 957)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_inputJokerActualParameterAST_checkAgainstFormalArgument (void) {
  enterCategoryMethod_checkAgainstFormalArgument (kTypeDescriptor_GALGAS_inputJokerActualParameterAST.mSlotID,
                                                  categoryMethod_inputJokerActualParameterAST_checkAgainstFormalArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputJokerActualParameterAST_checkAgainstFormalArgument (defineCategoryMethod_inputJokerActualParameterAST_checkAgainstFormalArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding category method '@inputActualExistingVariableParameterAST enterParameterInSemanticContext'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_inputActualExistingVariableParameterAST_enterParameterInSemanticContext (const cPtr_actualParameterAST * /* inObject */,
                                                                                                    GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                    C_Compiler * /* inCompiler */
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_inputActualExistingVariableParameterAST_enterParameterInSemanticContext (void) {
  enterCategoryMethod_enterParameterInSemanticContext (kTypeDescriptor_GALGAS_inputActualExistingVariableParameterAST.mSlotID,
                                                       categoryMethod_inputActualExistingVariableParameterAST_enterParameterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputActualExistingVariableParameterAST_enterParameterInSemanticContext (defineCategoryMethod_inputActualExistingVariableParameterAST_enterParameterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category method '@inputActualNewConstantParameterAST enterParameterInSemanticContext'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_inputActualNewConstantParameterAST_enterParameterInSemanticContext (const cPtr_actualParameterAST * /* inObject */,
                                                                                               GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                               C_Compiler * /* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_inputActualNewConstantParameterAST_enterParameterInSemanticContext (void) {
  enterCategoryMethod_enterParameterInSemanticContext (kTypeDescriptor_GALGAS_inputActualNewConstantParameterAST.mSlotID,
                                                       categoryMethod_inputActualNewConstantParameterAST_enterParameterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputActualNewConstantParameterAST_enterParameterInSemanticContext (defineCategoryMethod_inputActualNewConstantParameterAST_enterParameterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category method '@inputActualNewVariableParameterAST enterParameterInSemanticContext'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_inputActualNewVariableParameterAST_enterParameterInSemanticContext (const cPtr_actualParameterAST * /* inObject */,
                                                                                               GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                               C_Compiler * /* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_inputActualNewVariableParameterAST_enterParameterInSemanticContext (void) {
  enterCategoryMethod_enterParameterInSemanticContext (kTypeDescriptor_GALGAS_inputActualNewVariableParameterAST.mSlotID,
                                                       categoryMethod_inputActualNewVariableParameterAST_enterParameterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputActualNewVariableParameterAST_enterParameterInSemanticContext (defineCategoryMethod_inputActualNewVariableParameterAST_enterParameterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@inputJokerActualParameterAST enterParameterInSemanticContext'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_inputJokerActualParameterAST_enterParameterInSemanticContext (const cPtr_actualParameterAST * /* inObject */,
                                                                                         GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_inputJokerActualParameterAST_enterParameterInSemanticContext (void) {
  enterCategoryMethod_enterParameterInSemanticContext (kTypeDescriptor_GALGAS_inputJokerActualParameterAST.mSlotID,
                                                       categoryMethod_inputJokerActualParameterAST_enterParameterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputJokerActualParameterAST_enterParameterInSemanticContext (defineCategoryMethod_inputJokerActualParameterAST_enterParameterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category method '@inputSingleJokerActualParameterAST enterParameterInSemanticContext'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_inputSingleJokerActualParameterAST_enterParameterInSemanticContext (const cPtr_actualParameterAST * /* inObject */,
                                                                                               GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                               C_Compiler * /* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_inputSingleJokerActualParameterAST_enterParameterInSemanticContext (void) {
  enterCategoryMethod_enterParameterInSemanticContext (kTypeDescriptor_GALGAS_inputSingleJokerActualParameterAST.mSlotID,
                                                       categoryMethod_inputSingleJokerActualParameterAST_enterParameterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputSingleJokerActualParameterAST_enterParameterInSemanticContext (defineCategoryMethod_inputSingleJokerActualParameterAST_enterParameterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@outputActualParameterAST enterParameterInSemanticContext'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_outputActualParameterAST_enterParameterInSemanticContext (const cPtr_actualParameterAST * inObject,
                                                                                     GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_outputActualParameterAST * object = (const cPtr_outputActualParameterAST *) inObject ;
  macroValidSharedObject (object, cPtr_outputActualParameterAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mOutputActualParameterExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 996)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_outputActualParameterAST_enterParameterInSemanticContext (void) {
  enterCategoryMethod_enterParameterInSemanticContext (kTypeDescriptor_GALGAS_outputActualParameterAST.mSlotID,
                                                       categoryMethod_outputActualParameterAST_enterParameterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_outputActualParameterAST_enterParameterInSemanticContext (defineCategoryMethod_outputActualParameterAST_enterParameterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@outputInputActualParameterAST enterParameterInSemanticContext'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_outputInputActualParameterAST_enterParameterInSemanticContext (const cPtr_actualParameterAST * /* inObject */,
                                                                                          GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_outputInputActualParameterAST_enterParameterInSemanticContext (void) {
  enterCategoryMethod_enterParameterInSemanticContext (kTypeDescriptor_GALGAS_outputInputActualParameterAST.mSlotID,
                                                       categoryMethod_outputInputActualParameterAST_enterParameterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_outputInputActualParameterAST_enterParameterInSemanticContext (defineCategoryMethod_outputInputActualParameterAST_enterParameterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@outputInputJokerParameterAST enterParameterInSemanticContext'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_outputInputJokerParameterAST_enterParameterInSemanticContext (const cPtr_actualParameterAST * /* inObject */,
                                                                                         GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_outputInputJokerParameterAST_enterParameterInSemanticContext (void) {
  enterCategoryMethod_enterParameterInSemanticContext (kTypeDescriptor_GALGAS_outputInputJokerParameterAST.mSlotID,
                                                       categoryMethod_outputInputJokerParameterAST_enterParameterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_outputInputJokerParameterAST_enterParameterInSemanticContext (defineCategoryMethod_outputInputJokerParameterAST_enterParameterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category method '@outputInputSingleJokerParameterAST enterParameterInSemanticContext'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_outputInputSingleJokerParameterAST_enterParameterInSemanticContext (const cPtr_actualParameterAST * /* inObject */,
                                                                                               GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                               C_Compiler * /* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_outputInputSingleJokerParameterAST_enterParameterInSemanticContext (void) {
  enterCategoryMethod_enterParameterInSemanticContext (kTypeDescriptor_GALGAS_outputInputSingleJokerParameterAST.mSlotID,
                                                       categoryMethod_outputInputSingleJokerParameterAST_enterParameterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_outputInputSingleJokerParameterAST_enterParameterInSemanticContext (defineCategoryMethod_outputInputSingleJokerParameterAST_enterParameterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@routineCallInstructionAST enterInstructionInSemanticContext'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_routineCallInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_routineCallInstructionAST * object = (const cPtr_routineCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_routineCallInstructionAST) ;
  cEnumerator_actualParameterListAST enumerator_47578 (object->mAttribute_mActualParameterList, kEnumeration_up) ;
  while (enumerator_47578.hasCurrentObject ()) {
    callCategoryMethod_enterParameterInSemanticContext ((const cPtr_actualParameterAST *) enumerator_47578.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1055)) ;
    enumerator_47578.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_routineCallInstructionAST_enterInstructionInSemanticContext (void) {
  enterCategoryMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_routineCallInstructionAST.mSlotID,
                                                         categoryMethod_routineCallInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_routineCallInstructionAST_enterInstructionInSemanticContext (defineCategoryMethod_routineCallInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@routineCallInstructionAST analyzeSemanticInstruction'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_routineCallInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                 GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_routineCallInstructionAST * object = (const cPtr_routineCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_routineCallInstructionAST) ;
  GALGAS_formalParameterSignature var_routineSignature ;
  GALGAS_bool var_isInternal ;
  constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mRoutineMap.method_searchKey (object->mAttribute_mRoutineName, var_routineSignature, var_isInternal, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1066)) ;
  const enumGalgasBool test_0 = var_isInternal.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location var_procDeclarationLocation = constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mRoutineMap.reader_locationForKey (object->mAttribute_mRoutineName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1073)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, object->mAttribute_mRoutineName.mAttribute_location.reader_file (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1074)).objectCompare (var_procDeclarationLocation.reader_file (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1074)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_location location_2 (object->mAttribute_mRoutineName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_2, GALGAS_string ("this proc is internal to '").add_operation (var_procDeclarationLocation.reader_file (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1075)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1075)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1075))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1075)) ;
    }
  }
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration ;
  {
  routine_analyzeRoutineArguments (constinArgument_inAnalysisContext, object->mAttribute_mRoutineName, GALGAS_string ("'").add_operation (object->mAttribute_mRoutineName.reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1082)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1082)).add_operation (GALGAS_string ("' routine header"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1082)), var_routineSignature, object->mAttribute_mActualParameterList, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1079)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_routineCallInstructionForGeneration::constructor_new (object->mAttribute_mRoutineName, var_actualParameterListForGeneration  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1090))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1090)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_routineCallInstructionAST_analyzeSemanticInstruction (void) {
  enterCategoryMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_routineCallInstructionAST.mSlotID,
                                                  categoryMethod_routineCallInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_routineCallInstructionAST_analyzeSemanticInstruction (defineCategoryMethod_routineCallInstructionAST_analyzeSemanticInstruction, NULL) ;

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
  cEnumerator_actualParameterListAST enumerator_49301 (object->mAttribute_mActualParameterList, kEnumeration_up) ;
  while (enumerator_49301.hasCurrentObject ()) {
    callCategoryMethod_enterParameterInSemanticContext ((const cPtr_actualParameterAST *) enumerator_49301.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1101)) ;
    enumerator_49301.gotoNextObject () ;
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
  GALGAS_unifiedTypeMap_2D_proxy var_type = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1112)) ;
  GALGAS_formalParameterSignature var_routineSignature ;
  GALGAS_bool var_hasCompilerArgument ;
  var_type.reader_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1116)).method_searchKey (object->mAttribute_mMethodName, var_routineSignature, var_hasCompilerArgument, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1116)) ;
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration ;
  {
  routine_analyzeRoutineArguments (constinArgument_inAnalysisContext, object->mAttribute_mMethodName, GALGAS_string ("'").add_operation (object->mAttribute_mMethodName.reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1121)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1121)).add_operation (GALGAS_string ("' type proc header"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1121)), var_routineSignature, object->mAttribute_mActualParameterList, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1118)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_typeMethodInstructionForGeneration::constructor_new (object->mAttribute_mTypeName, object->mAttribute_mMethodName, var_actualParameterListForGeneration, var_hasCompilerArgument  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1129))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1129)) ;
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
//              Overriding category method '@methodCallInstructionAST enterInstructionInSemanticContext'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_methodCallInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_methodCallInstructionAST * object = (const cPtr_methodCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_methodCallInstructionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mReceiverExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1141)) ;
  cEnumerator_actualParameterListAST enumerator_50933 (object->mAttribute_mActualParameterList, kEnumeration_up) ;
  while (enumerator_50933.hasCurrentObject ()) {
    callCategoryMethod_enterParameterInSemanticContext ((const cPtr_actualParameterAST *) enumerator_50933.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1143)) ;
    enumerator_50933.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_methodCallInstructionAST_enterInstructionInSemanticContext (void) {
  enterCategoryMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_methodCallInstructionAST.mSlotID,
                                                         categoryMethod_methodCallInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_methodCallInstructionAST_enterInstructionInSemanticContext (defineCategoryMethod_methodCallInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@methodCallInstructionAST analyzeSemanticInstruction'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_methodCallInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_methodCallInstructionAST * object = (const cPtr_methodCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_methodCallInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_receiverExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mReceiverExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1155)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_receiverExpression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1154)) ;
  GALGAS_formalParameterSignature var_routineSignature ;
  GALGAS_bool var_hasCompilerArgument ;
  GALGAS_methodKind var_kind ;
  GALGAS_string var_errorMessage ;
  GALGAS_location joker_51826 ; // Joker input parameter
  GALGAS_methodQualifier joker_51850 ; // Joker input parameter
  var_receiverExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1165)).reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1165)).method_searchKey (object->mAttribute_mMethodName, var_kind, var_routineSignature, joker_51826, var_hasCompilerArgument, joker_51850, var_errorMessage, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1165)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_errorMessage.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mMethodName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, var_errorMessage  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1167)) ;
  }
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration ;
  {
  routine_analyzeRoutineArguments (constinArgument_inAnalysisContext, object->mAttribute_mMethodName, GALGAS_string ("'").add_operation (object->mAttribute_mMethodName.reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1173)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1173)).add_operation (GALGAS_string ("' instance method header"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1173)), var_routineSignature, object->mAttribute_mActualParameterList, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1170)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_baseType = var_receiverExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1181)) ;
  GALGAS_bool var_searching = GALGAS_bool (true) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1183)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_2) {
    if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1184)).isValid ()) {
      uint32_t variant_52437 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1184)).uintValue () ;
      bool loop_52437 = true ;
      while (loop_52437) {
        loop_52437 = var_searching.isValid () ;
        if (loop_52437) {
          loop_52437 = var_searching.boolValue () ;
        }
        if (loop_52437 && (0 == variant_52437)) {
          loop_52437 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1184)) ;
        }
        if (loop_52437) {
          variant_52437 -- ;
          const enumGalgasBool test_3 = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1185)).reader_isNull (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1185)).boolEnum () ;
          if (kBoolTrue == test_3) {
            var_searching = GALGAS_bool (false) ;
          }else if (kBoolFalse == test_3) {
            const enumGalgasBool test_4 = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1188)).reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1188)).reader_hasKey (object->mAttribute_mMethodName.mAttribute_string COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1188)).boolEnum () ;
            if (kBoolTrue == test_4) {
              var_baseType = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1189)) ;
            }else if (kBoolFalse == test_4) {
              var_searching = GALGAS_bool (false) ;
            }
          }
        }
      }
    }
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_methodCallInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_receiverExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1199)), var_receiverExpression, object->mAttribute_mMethodName.reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1201)), var_kind, var_actualParameterListForGeneration, var_hasCompilerArgument, var_baseType  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1197))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1197)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_methodCallInstructionAST_analyzeSemanticInstruction (void) {
  enterCategoryMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_methodCallInstructionAST.mSlotID,
                                                  categoryMethod_methodCallInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_methodCallInstructionAST_analyzeSemanticInstruction (defineCategoryMethod_methodCallInstructionAST_analyzeSemanticInstruction, NULL) ;

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
  cEnumerator_actualParameterListAST enumerator_54153 (object->mAttribute_mActualParameterList, kEnumeration_up) ;
  while (enumerator_54153.hasCurrentObject ()) {
    callCategoryMethod_enterParameterInSemanticContext ((const cPtr_actualParameterAST *) enumerator_54153.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1236)) ;
    enumerator_54153.gotoNextObject () ;
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
  ioArgument_ioVariableMap.modifier_searchForReadWriteAccess (object->mAttribute_mReceiverName, var_receiverType, var_receiverVariableCppName, var_receiverVariableBaseName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1248)) ;
  }
  cEnumerator_lstringlist enumerator_54830 (object->mAttribute_mReceiverStructAttributes, kEnumeration_up) ;
  while (enumerator_54830.hasCurrentObject ()) {
    GALGAS_attributeMap var_attributeMap = var_receiverType.reader_mAttributeMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1255)) ;
    var_attributeMap.method_searchKey (enumerator_54830.current_mValue (HERE), var_receiverType, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1256)) ;
    enumerator_54830.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_castType ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mTypeNameForCasting.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_castType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeNameForCasting, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1268)) ;
    {
    routine_checkAssignmentTypes (var_receiverType, var_castType, object->mAttribute_mTypeNameForCasting.mAttribute_location, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1272)) ;
    }
  }else if (kBoolFalse == test_0) {
    var_castType = var_receiverType ;
  }
  GALGAS_formalParameterSignature var_routineSignature ;
  GALGAS_bool var_hasCompilerArgument ;
  GALGAS_string var_modifierErrorMessage ;
  GALGAS_methodKind var_kind ;
  GALGAS_methodQualifier joker_55744 ; // Joker input parameter
  var_castType.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1281)).method_searchKey (object->mAttribute_mModifierName, var_kind, var_routineSignature, var_hasCompilerArgument, joker_55744, var_modifierErrorMessage, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1281)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_modifierErrorMessage.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_location location_2 (object->mAttribute_mModifierName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_2, var_modifierErrorMessage  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1283)) ;
  }
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration ;
  {
  routine_analyzeRoutineArguments (constinArgument_inAnalysisContext, object->mAttribute_mModifierName, GALGAS_string ("'").add_operation (object->mAttribute_mModifierName.reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1289)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1289)).add_operation (GALGAS_string ("' setter header"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1289)), var_routineSignature, object->mAttribute_mActualParameterList, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1286)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_baseType = var_castType ;
  GALGAS_bool var_searching = GALGAS_bool (true) ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1299)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_3) {
    if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1300)).isValid ()) {
      uint32_t variant_56327 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1300)).uintValue () ;
      bool loop_56327 = true ;
      while (loop_56327) {
        loop_56327 = var_searching.isValid () ;
        if (loop_56327) {
          loop_56327 = var_searching.boolValue () ;
        }
        if (loop_56327 && (0 == variant_56327)) {
          loop_56327 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1300)) ;
        }
        if (loop_56327) {
          variant_56327 -- ;
          const enumGalgasBool test_4 = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1301)).reader_isNull (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1301)).boolEnum () ;
          if (kBoolTrue == test_4) {
            var_searching = GALGAS_bool (false) ;
          }else if (kBoolFalse == test_4) {
            const enumGalgasBool test_5 = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1304)).reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1304)).reader_hasKey (object->mAttribute_mModifierName.mAttribute_string COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1304)).boolEnum () ;
            if (kBoolTrue == test_5) {
              var_baseType = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1305)) ;
            }else if (kBoolFalse == test_5) {
              var_searching = GALGAS_bool (false) ;
            }
          }
        }
      }
    }
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_setterCallInstructionForGeneration::constructor_new (object->mAttribute_mReceiverName.mAttribute_location, var_receiverVariableCppName, var_receiverVariableBaseName, object->mAttribute_mReceiverStructAttributes, var_castType, var_receiverType, object->mAttribute_mModifierName, var_kind, var_actualParameterListForGeneration, var_hasCompilerArgument, var_baseType  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1313))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1313)) ;
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
//           Overriding category method '@selfModifierCallInstructionAST enterInstructionInSemanticContext'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_selfModifierCallInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                             GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfModifierCallInstructionAST * object = (const cPtr_selfModifierCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfModifierCallInstructionAST) ;
  cEnumerator_actualParameterListAST enumerator_57354 (object->mAttribute_mActualParameterList, kEnumeration_up) ;
  while (enumerator_57354.hasCurrentObject ()) {
    callCategoryMethod_enterParameterInSemanticContext ((const cPtr_actualParameterAST *) enumerator_57354.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1335)) ;
    enumerator_57354.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_selfModifierCallInstructionAST_enterInstructionInSemanticContext (void) {
  enterCategoryMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_selfModifierCallInstructionAST.mSlotID,
                                                         categoryMethod_selfModifierCallInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfModifierCallInstructionAST_enterInstructionInSemanticContext (defineCategoryMethod_selfModifierCallInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@selfModifierCallInstructionAST analyzeSemanticInstruction'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_selfModifierCallInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                      const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                      GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                      GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfModifierCallInstructionAST * object = (const cPtr_selfModifierCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfModifierCallInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy ;
  GALGAS_string var_selfObjectCppName ;
  const enumGalgasBool test_0 = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy.reader_isNull (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1348)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mModifierName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("'self' can be used only in category setters")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1349)) ;
    var_selfObjectCppName.drop () ; // Release error dropped variable
    var_selfTypeProxy.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    var_selfObjectCppName = constinArgument_inAnalysisContext.mAttribute_mSelfObjectCppName ;
    var_selfTypeProxy = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy ;
  }
  GALGAS_formalParameterSignature var_routineSignature ;
  GALGAS_bool var_hasCompilerArgument ;
  GALGAS_methodKind var_kind ;
  GALGAS_methodQualifier joker_58397 ; // Joker input parameter
  GALGAS_string joker_58400 ; // Joker input parameter
  var_selfTypeProxy.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1358)).method_searchKey (object->mAttribute_mModifierName, var_kind, var_routineSignature, var_hasCompilerArgument, joker_58397, joker_58400, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1358)) ;
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration ;
  {
  routine_analyzeRoutineArguments (constinArgument_inAnalysisContext, object->mAttribute_mModifierName, GALGAS_string ("'").add_operation (object->mAttribute_mModifierName.reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1363)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1363)).add_operation (GALGAS_string ("' modifier header"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1363)), var_routineSignature, object->mAttribute_mActualParameterList, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1360)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_selfModifierCallInstructionForGeneration::constructor_new (var_selfObjectCppName, var_selfTypeProxy, object->mAttribute_mModifierName, var_kind, var_actualParameterListForGeneration, var_hasCompilerArgument  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1371))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1371)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_selfModifierCallInstructionAST_analyzeSemanticInstruction (void) {
  enterCategoryMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_selfModifierCallInstructionAST.mSlotID,
                                                  categoryMethod_selfModifierCallInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfModifierCallInstructionAST_analyzeSemanticInstruction (defineCategoryMethod_selfModifierCallInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@concatInstructionAST enterInstructionInSemanticContext'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_concatInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_concatInstructionAST * object = (const cPtr_concatInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_concatInstructionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mSourceExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1407)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_concatInstructionAST_enterInstructionInSemanticContext (void) {
  enterCategoryMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_concatInstructionAST.mSlotID,
                                                         categoryMethod_concatInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_concatInstructionAST_enterInstructionInSemanticContext (defineCategoryMethod_concatInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@concatInstructionAST analyzeSemanticInstruction'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_concatInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                            const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                            GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                            GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_concatInstructionAST * object = (const cPtr_concatInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_concatInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType ;
  GALGAS_string var_targetVariableCppName ;
  GALGAS_string var_nameForCheckingFormalParameterUsing ;
  {
  ioArgument_ioVariableMap.modifier_searchForReadWriteAccess (object->mAttribute_mTargetVariableName, var_targetType, var_targetVariableCppName, var_nameForCheckingFormalParameterUsing, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1420)) ;
  }
  cEnumerator_lstringlist enumerator_60682 (object->mAttribute_mStructAttributeList, kEnumeration_up) ;
  while (enumerator_60682.hasCurrentObject ()) {
    GALGAS_attributeMap var_attributeMap = var_targetType.reader_mAttributeMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1422)) ;
    var_attributeMap.method_searchKey (enumerator_60682.current_mValue (HERE), var_targetType, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1423)) ;
    enumerator_60682.gotoNextObject () ;
  }
  GALGAS_semanticExpressionForGeneration var_expression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mSourceExpression.ptr (), var_targetType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1434)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_targetType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1441)).operator_and (function_plusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1441)) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1441)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the target object has the '@").add_operation (var_targetType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1443)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1443)).add_operation (GALGAS_string ("' type, but this type does not support the '.=' operator"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1443))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1442)) ;
  }
  {
  routine_checkAssignmentTypes (var_targetType, var_expression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1446)), object->mAttribute_mInstructionLocation, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1446)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_concatInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_targetType, var_targetVariableCppName, var_nameForCheckingFormalParameterUsing, object->mAttribute_mStructAttributeList, var_expression  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1448))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1448)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_concatInstructionAST_analyzeSemanticInstruction (void) {
  enterCategoryMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_concatInstructionAST.mSlotID,
                                                  categoryMethod_concatInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_concatInstructionAST_analyzeSemanticInstruction (defineCategoryMethod_concatInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@selfConcatInstructionAST enterInstructionInSemanticContext'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_selfConcatInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfConcatInstructionAST * object = (const cPtr_selfConcatInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfConcatInstructionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mSourceExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1462)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_selfConcatInstructionAST_enterInstructionInSemanticContext (void) {
  enterCategoryMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_selfConcatInstructionAST.mSlotID,
                                                         categoryMethod_selfConcatInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfConcatInstructionAST_enterInstructionInSemanticContext (defineCategoryMethod_selfConcatInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@selfConcatInstructionAST analyzeSemanticInstruction'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_selfConcatInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfConcatInstructionAST * object = (const cPtr_selfConcatInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfConcatInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy ;
  GALGAS_string var_selfObjectCppName ;
  const enumGalgasBool test_0 = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy.reader_isNull (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1474)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("'self' can be used only in category setters")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1475)) ;
    var_selfObjectCppName.drop () ; // Release error dropped variable
    var_selfTypeProxy.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    var_selfObjectCppName = constinArgument_inAnalysisContext.mAttribute_mSelfObjectCppName ;
    var_selfTypeProxy = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_selfTypeProxy.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1481)).operator_and (function_plusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1481)) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1481)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the target object has the '@").add_operation (var_selfTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1483)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1483)).add_operation (GALGAS_string ("' type, but this type does not support the '.=' operator"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1483))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1482)) ;
  }
  GALGAS_semanticExpressionForGeneration var_expression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mSourceExpression.ptr (), var_selfTypeProxy, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1487)) ;
  {
  routine_checkAssignmentTypes (var_selfTypeProxy, var_expression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1494)), object->mAttribute_mInstructionLocation, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1494)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_concatInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_selfTypeProxy, var_selfObjectCppName, var_selfObjectCppName, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1501)), var_expression  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1496))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1496)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_selfConcatInstructionAST_analyzeSemanticInstruction (void) {
  enterCategoryMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_selfConcatInstructionAST.mSlotID,
                                                  categoryMethod_selfConcatInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfConcatInstructionAST_analyzeSemanticInstruction (defineCategoryMethod_selfConcatInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@plusEqualElementsInstructionAST enterInstructionInSemanticContext'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_plusEqualElementsInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_plusEqualElementsInstructionAST * object = (const cPtr_plusEqualElementsInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_plusEqualElementsInstructionAST) ;
  categoryMethod_enterInSemanticContext (object->mAttribute_mExpressions, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1514)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_plusEqualElementsInstructionAST_enterInstructionInSemanticContext (void) {
  enterCategoryMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_plusEqualElementsInstructionAST.mSlotID,
                                                         categoryMethod_plusEqualElementsInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_plusEqualElementsInstructionAST_enterInstructionInSemanticContext (defineCategoryMethod_plusEqualElementsInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@plusEqualElementsInstructionAST analyzeSemanticInstruction'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_plusEqualElementsInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                       GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                       GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_plusEqualElementsInstructionAST * object = (const cPtr_plusEqualElementsInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_plusEqualElementsInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType ;
  GALGAS_string var_targetVariableCppName ;
  GALGAS_string var_nameForCheckingFormalParameterUsing ;
  {
  ioArgument_ioVariableMap.modifier_searchForReadWriteAccess (object->mAttribute_mReceiverName, var_targetType, var_targetVariableCppName, var_nameForCheckingFormalParameterUsing, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1527)) ;
  }
  cEnumerator_lstringlist enumerator_64892 (object->mAttribute_mStructAttributeList, kEnumeration_up) ;
  while (enumerator_64892.hasCurrentObject ()) {
    GALGAS_attributeMap var_attributeMap = var_targetType.reader_mAttributeMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1529)) ;
    var_attributeMap.method_searchKey (enumerator_64892.current_mValue (HERE), var_targetType, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1530)) ;
    enumerator_64892.gotoNextObject () ;
  }
  GALGAS_functionSignature var_addAssignOperatorArguments = var_targetType.reader_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1540)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_addAssignOperatorArguments.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1541)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the target object has the '@").add_operation (var_targetType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1543)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1543)).add_operation (GALGAS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1543))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1542)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, object->mAttribute_mExpressions.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1545)).objectCompare (var_addAssignOperatorArguments.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1545)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("calling the '+=' operator on an '@").add_operation (var_targetType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1547)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1547)).add_operation (GALGAS_string ("' object requires "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1547)).add_operation (var_addAssignOperatorArguments.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1548)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1548)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1547)).add_operation (GALGAS_string (" parameter(s), while this invocation has "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1548)).add_operation (object->mAttribute_mExpressions.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1549)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1549)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1548)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1549))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1546)) ;
    }else if (kBoolFalse == test_1) {
      GALGAS_semanticExpressionListForGeneration var_effectiveParameterList = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1551)) ;
      cEnumerator_actualOutputExpressionList enumerator_66063 (object->mAttribute_mExpressions, kEnumeration_up) ;
      cEnumerator_functionSignature enumerator_66097 (var_addAssignOperatorArguments, kEnumeration_up) ;
      while (enumerator_66063.hasCurrentObject () && enumerator_66097.hasCurrentObject ()) {
        GALGAS_semanticExpressionForGeneration var_exp ;
        callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_66063.current_mExpression (HERE).ptr (), enumerator_66097.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_exp, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1553)) ;
        const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, enumerator_66097.current_mFormalSelector (HERE).mAttribute_string.objectCompare (enumerator_66063.current_mActualSelector (HERE).mAttribute_string)).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_string temp_3 ;
          const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, enumerator_66097.current_mFormalSelector (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_4) {
            temp_3 = GALGAS_string (":") ;
          }else if (kBoolFalse == test_4) {
            temp_3 = GALGAS_string::makeEmptyString () ;
          }
          GALGAS_location location_5 (enumerator_66063.current_mActualSelector (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_5, GALGAS_string ("the selector should be '!").add_operation (enumerator_66097.current_mFormalSelector (HERE).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1560)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1560)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1560)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1560))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1560)) ;
        }
        {
        routine_checkAssignmentTypes (enumerator_66097.current_mFormalArgumentType (HERE), var_exp.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1562)), enumerator_66063.current_mEndOfExpressionLocation (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1562)) ;
        }
        var_effectiveParameterList.addAssign_operation (var_exp  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1563)) ;
        enumerator_66063.gotoNextObject () ;
        enumerator_66097.gotoNextObject () ;
      }
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_plusEqualnstructionForGeneration::constructor_new (var_targetVariableCppName, var_targetType, var_nameForCheckingFormalParameterUsing, object->mAttribute_mInstructionLocation, object->mAttribute_mStructAttributeList, var_effectiveParameterList  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1566))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1566)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_plusEqualElementsInstructionAST_analyzeSemanticInstruction (void) {
  enterCategoryMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_plusEqualElementsInstructionAST.mSlotID,
                                                  categoryMethod_plusEqualElementsInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_plusEqualElementsInstructionAST_analyzeSemanticInstruction (defineCategoryMethod_plusEqualElementsInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category method '@plusEqualExpressionInstructionAST enterInstructionInSemanticContext'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_plusEqualExpressionInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                                GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_plusEqualExpressionInstructionAST * object = (const cPtr_plusEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_plusEqualExpressionInstructionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1581)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_plusEqualExpressionInstructionAST_enterInstructionInSemanticContext (void) {
  enterCategoryMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_plusEqualExpressionInstructionAST.mSlotID,
                                                         categoryMethod_plusEqualExpressionInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_plusEqualExpressionInstructionAST_enterInstructionInSemanticContext (defineCategoryMethod_plusEqualExpressionInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@plusEqualExpressionInstructionAST analyzeSemanticInstruction'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_plusEqualExpressionInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                         const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                         GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                         GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_plusEqualExpressionInstructionAST * object = (const cPtr_plusEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_plusEqualExpressionInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType ;
  GALGAS_string var_targetVariableCppName ;
  GALGAS_string var_nameForCheckingFormalParameterUsing ;
  {
  ioArgument_ioVariableMap.modifier_searchForReadWriteAccess (object->mAttribute_mReceiverName, var_targetType, var_targetVariableCppName, var_nameForCheckingFormalParameterUsing, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1594)) ;
  }
  cEnumerator_lstringlist enumerator_67895 (object->mAttribute_mStructAttributeList, kEnumeration_up) ;
  while (enumerator_67895.hasCurrentObject ()) {
    GALGAS_attributeMap var_attributeMap = var_targetType.reader_mAttributeMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1596)) ;
    var_attributeMap.method_searchKey (enumerator_67895.current_mValue (HERE), var_targetType, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1597)) ;
    enumerator_67895.gotoNextObject () ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_targetType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1607)).operator_and (function_plusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1607)) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1607)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the target object has the '@").add_operation (var_targetType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1609)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1609)).add_operation (GALGAS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1609))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1608)) ;
  }
  GALGAS_semanticExpressionForGeneration var_expression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), var_targetType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1612)) ;
  {
  routine_checkAssignmentTypes (var_targetType, var_expression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1619)), object->mAttribute_mInstructionLocation, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1619)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_concatInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_targetType, var_targetVariableCppName, var_nameForCheckingFormalParameterUsing, object->mAttribute_mStructAttributeList, var_expression  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1621))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1621)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_plusEqualExpressionInstructionAST_analyzeSemanticInstruction (void) {
  enterCategoryMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_plusEqualExpressionInstructionAST.mSlotID,
                                                  categoryMethod_plusEqualExpressionInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_plusEqualExpressionInstructionAST_analyzeSemanticInstruction (defineCategoryMethod_plusEqualExpressionInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding category method '@selfPlusEqualElementsInstructionAST enterInstructionInSemanticContext'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_selfPlusEqualElementsInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                                  GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfPlusEqualElementsInstructionAST * object = (const cPtr_selfPlusEqualElementsInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfPlusEqualElementsInstructionAST) ;
  categoryMethod_enterInSemanticContext (object->mAttribute_mExpressions, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1635)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_selfPlusEqualElementsInstructionAST_enterInstructionInSemanticContext (void) {
  enterCategoryMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_selfPlusEqualElementsInstructionAST.mSlotID,
                                                         categoryMethod_selfPlusEqualElementsInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfPlusEqualElementsInstructionAST_enterInstructionInSemanticContext (defineCategoryMethod_selfPlusEqualElementsInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding category method '@selfPlusEqualElementsInstructionAST analyzeSemanticInstruction'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_selfPlusEqualElementsInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                           GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                           GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfPlusEqualElementsInstructionAST * object = (const cPtr_selfPlusEqualElementsInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfPlusEqualElementsInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy ;
  GALGAS_string var_selfObjectCppName ;
  const enumGalgasBool test_0 = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy.reader_isNull (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1647)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("'self' can be used only in category setters")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1648)) ;
    var_selfObjectCppName.drop () ; // Release error dropped variable
    var_selfTypeProxy.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    var_selfObjectCppName = constinArgument_inAnalysisContext.mAttribute_mSelfObjectCppName ;
    var_selfTypeProxy = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy ;
  }
  GALGAS_functionSignature var_addAssignOperatorArguments = var_selfTypeProxy.reader_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1654)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_addAssignOperatorArguments.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1655)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the target object has the '@").add_operation (var_selfTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1657)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1657)).add_operation (GALGAS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1657))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1656)) ;
  }else if (kBoolFalse == test_1) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, object->mAttribute_mExpressions.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1659)).objectCompare (var_addAssignOperatorArguments.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1659)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("calling the '+=' operator on an '@").add_operation (var_selfTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1661)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1661)).add_operation (GALGAS_string ("' object requires "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1661)).add_operation (var_addAssignOperatorArguments.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1662)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1662)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1661)).add_operation (GALGAS_string (" parameter(s), while this invocation has "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1662)).add_operation (object->mAttribute_mExpressions.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1663)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1663)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1662)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1663))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1660)) ;
    }else if (kBoolFalse == test_2) {
      GALGAS_semanticExpressionListForGeneration var_effectiveParameterList = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1665)) ;
      cEnumerator_actualOutputExpressionList enumerator_70996 (object->mAttribute_mExpressions, kEnumeration_up) ;
      cEnumerator_functionSignature enumerator_71030 (var_addAssignOperatorArguments, kEnumeration_up) ;
      while (enumerator_70996.hasCurrentObject () && enumerator_71030.hasCurrentObject ()) {
        GALGAS_semanticExpressionForGeneration var_exp ;
        callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_70996.current_mExpression (HERE).ptr (), enumerator_71030.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_exp, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1667)) ;
        const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, enumerator_71030.current_mFormalSelector (HERE).mAttribute_string.objectCompare (enumerator_70996.current_mActualSelector (HERE).mAttribute_string)).boolEnum () ;
        if (kBoolTrue == test_3) {
          GALGAS_string temp_4 ;
          const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, enumerator_71030.current_mFormalSelector (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_5) {
            temp_4 = enumerator_71030.current_mFormalSelector (HERE).mAttribute_string.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1674)) ;
          }else if (kBoolFalse == test_5) {
            temp_4 = GALGAS_string::makeEmptyString () ;
          }
          GALGAS_location location_6 (enumerator_70996.current_mActualSelector (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_6, GALGAS_string ("the selector should be '!").add_operation (temp_4, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1674)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1674))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1674)) ;
        }
        {
        routine_checkAssignmentTypes (enumerator_71030.current_mFormalArgumentType (HERE), var_exp.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1676)), enumerator_70996.current_mEndOfExpressionLocation (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1676)) ;
        }
        var_effectiveParameterList.addAssign_operation (var_exp  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1677)) ;
        enumerator_70996.gotoNextObject () ;
        enumerator_71030.gotoNextObject () ;
      }
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_plusEqualnstructionForGeneration::constructor_new (var_selfObjectCppName, var_selfTypeProxy, GALGAS_string::makeEmptyString (), object->mAttribute_mInstructionLocation, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1685)), var_effectiveParameterList  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1680))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1680)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_selfPlusEqualElementsInstructionAST_analyzeSemanticInstruction (void) {
  enterCategoryMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_selfPlusEqualElementsInstructionAST.mSlotID,
                                                  categoryMethod_selfPlusEqualElementsInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfPlusEqualElementsInstructionAST_analyzeSemanticInstruction (defineCategoryMethod_selfPlusEqualElementsInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding category method '@selfPlusEqualExpressionInstructionAST enterInstructionInSemanticContext'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_selfPlusEqualExpressionInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                                    GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfPlusEqualExpressionInstructionAST * object = (const cPtr_selfPlusEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfPlusEqualExpressionInstructionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1695)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_selfPlusEqualExpressionInstructionAST_enterInstructionInSemanticContext (void) {
  enterCategoryMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_selfPlusEqualExpressionInstructionAST.mSlotID,
                                                         categoryMethod_selfPlusEqualExpressionInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfPlusEqualExpressionInstructionAST_enterInstructionInSemanticContext (defineCategoryMethod_selfPlusEqualExpressionInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@selfPlusEqualExpressionInstructionAST analyzeSemanticInstruction'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_selfPlusEqualExpressionInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                             GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                             GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfPlusEqualExpressionInstructionAST * object = (const cPtr_selfPlusEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfPlusEqualExpressionInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy ;
  GALGAS_string var_selfObjectCppName ;
  const enumGalgasBool test_0 = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy.reader_isNull (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1707)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("'self' can be used only in category setters")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1708)) ;
    var_selfObjectCppName.drop () ; // Release error dropped variable
    var_selfTypeProxy.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    var_selfObjectCppName = constinArgument_inAnalysisContext.mAttribute_mSelfObjectCppName ;
    var_selfTypeProxy = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_selfTypeProxy.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1714)).operator_and (function_plusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1714)) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1714)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the target object has the '@").add_operation (var_selfTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1716)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1716)).add_operation (GALGAS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1716))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1715)) ;
  }
  GALGAS_semanticExpressionForGeneration var_expression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), var_selfTypeProxy, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1719)) ;
  {
  routine_checkAssignmentTypes (var_selfTypeProxy, var_expression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1726)), object->mAttribute_mInstructionLocation, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1726)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_concatInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_selfTypeProxy, var_selfObjectCppName, GALGAS_string::makeEmptyString (), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1733)), var_expression  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1728))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1728)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_selfPlusEqualExpressionInstructionAST_analyzeSemanticInstruction (void) {
  enterCategoryMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_selfPlusEqualExpressionInstructionAST.mSlotID,
                                                  categoryMethod_selfPlusEqualExpressionInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfPlusEqualExpressionInstructionAST_analyzeSemanticInstruction (defineCategoryMethod_selfPlusEqualExpressionInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@incDecInstructionAST enterInstructionInSemanticContext'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_incDecInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * /* inObject */,
                                                                                   GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_incDecInstructionAST_enterInstructionInSemanticContext (void) {
  enterCategoryMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_incDecInstructionAST.mSlotID,
                                                         categoryMethod_incDecInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_incDecInstructionAST_enterInstructionInSemanticContext (defineCategoryMethod_incDecInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@incDecInstructionAST analyzeSemanticInstruction'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_incDecInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                            const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                            GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                            GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_incDecInstructionAST * object = (const cPtr_incDecInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_incDecInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType ;
  GALGAS_string var_targetVariableCppName ;
  {
  GALGAS_string joker_74522 ; // Joker input parameter
  ioArgument_ioVariableMap.modifier_searchForReadWriteAccess (object->mAttribute_mReceiverName, var_targetType, var_targetVariableCppName, joker_74522, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1753)) ;
  }
  cEnumerator_lstringlist enumerator_74557 (object->mAttribute_mStructAttributeList, kEnumeration_up) ;
  while (enumerator_74557.hasCurrentObject ()) {
    GALGAS_attributeMap var_attributeMap = var_targetType.reader_mAttributeMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1755)) ;
    var_attributeMap.method_searchKey (enumerator_74557.current_mValue (HERE), var_targetType, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1756)) ;
    enumerator_74557.gotoNextObject () ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_targetType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1762)).operator_and (function_incDecOperator (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1762)) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1762)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the target object has the '@").add_operation (var_targetType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1764)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1764)).add_operation (GALGAS_string ("' type, but this type does not support the '++', '--' operators"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1764))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1763)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_incDecInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_targetVariableCppName, var_targetType, object->mAttribute_mStructAttributeList, object->mAttribute_mKind  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1767))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1767)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_incDecInstructionAST_analyzeSemanticInstruction (void) {
  enterCategoryMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_incDecInstructionAST.mSlotID,
                                                  categoryMethod_incDecInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_incDecInstructionAST_analyzeSemanticInstruction (defineCategoryMethod_incDecInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@incDecNoOVFInstructionAST enterInstructionInSemanticContext'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_incDecNoOVFInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * /* inObject */,
                                                                                        GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_incDecNoOVFInstructionAST_enterInstructionInSemanticContext (void) {
  enterCategoryMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_incDecNoOVFInstructionAST.mSlotID,
                                                         categoryMethod_incDecNoOVFInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_incDecNoOVFInstructionAST_enterInstructionInSemanticContext (defineCategoryMethod_incDecNoOVFInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@incDecNoOVFInstructionAST analyzeSemanticInstruction'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_incDecNoOVFInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                 const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                 GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                 GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_incDecNoOVFInstructionAST * object = (const cPtr_incDecNoOVFInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_incDecNoOVFInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType ;
  GALGAS_string var_targetVariableCppName ;
  {
  GALGAS_string joker_75952 ; // Joker input parameter
  ioArgument_ioVariableMap.modifier_searchForReadWriteAccess (object->mAttribute_mReceiverName, var_targetType, var_targetVariableCppName, joker_75952, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1792)) ;
  }
  cEnumerator_lstringlist enumerator_75987 (object->mAttribute_mStructAttributeList, kEnumeration_up) ;
  while (enumerator_75987.hasCurrentObject ()) {
    GALGAS_attributeMap var_attributeMap = var_targetType.reader_mAttributeMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1794)) ;
    var_attributeMap.method_searchKey (enumerator_75987.current_mValue (HERE), var_targetType, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1795)) ;
    enumerator_75987.gotoNextObject () ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_targetType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1801)).operator_and (function_incDecOperator (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1801)) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1801)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the target object has the '@").add_operation (var_targetType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1803)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1803)).add_operation (GALGAS_string ("' type, but this type does not support the '&++', '&--' operators"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1803))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1802)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_incDecNoOVFInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_targetVariableCppName, var_targetType, object->mAttribute_mStructAttributeList, object->mAttribute_mKind  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1806))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1806)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_incDecNoOVFInstructionAST_analyzeSemanticInstruction (void) {
  enterCategoryMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_incDecNoOVFInstructionAST.mSlotID,
                                                  categoryMethod_incDecNoOVFInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_incDecNoOVFInstructionAST_analyzeSemanticInstruction (defineCategoryMethod_incDecNoOVFInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding category method '@selfIncDecNoOVFInstructionAST enterInstructionInSemanticContext'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_selfIncDecNoOVFInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * /* inObject */,
                                                                                            GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_selfIncDecNoOVFInstructionAST_enterInstructionInSemanticContext (void) {
  enterCategoryMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_selfIncDecNoOVFInstructionAST.mSlotID,
                                                         categoryMethod_selfIncDecNoOVFInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfIncDecNoOVFInstructionAST_enterInstructionInSemanticContext (defineCategoryMethod_selfIncDecNoOVFInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@selfIncDecNoOVFInstructionAST analyzeSemanticInstruction'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_selfIncDecNoOVFInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                     GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                     GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfIncDecNoOVFInstructionAST * object = (const cPtr_selfIncDecNoOVFInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfIncDecNoOVFInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy ;
  GALGAS_string var_selfObjectCppName ;
  const enumGalgasBool test_0 = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy.reader_isNull (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1831)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("'self' can be used only in category setters")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1832)) ;
    var_selfObjectCppName.drop () ; // Release error dropped variable
    var_selfTypeProxy.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    var_selfObjectCppName = constinArgument_inAnalysisContext.mAttribute_mSelfObjectCppName ;
    var_selfTypeProxy = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_selfTypeProxy.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1838)).operator_and (function_incDecOperator (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1838)) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1838)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the target object has the '@").add_operation (var_selfTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1840)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1840)).add_operation (GALGAS_string ("' type, but this type does not support the '&++' and  '&--' operators"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1840))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1839)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_incDecNoOVFInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_selfObjectCppName, var_selfTypeProxy, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1847)), object->mAttribute_mKind  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1843))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1843)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_selfIncDecNoOVFInstructionAST_analyzeSemanticInstruction (void) {
  enterCategoryMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_selfIncDecNoOVFInstructionAST.mSlotID,
                                                  categoryMethod_selfIncDecNoOVFInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfIncDecNoOVFInstructionAST_analyzeSemanticInstruction (defineCategoryMethod_selfIncDecNoOVFInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@selfIncDecInstructionAST enterInstructionInSemanticContext'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_selfIncDecInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * /* inObject */,
                                                                                       GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_selfIncDecInstructionAST_enterInstructionInSemanticContext (void) {
  enterCategoryMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_selfIncDecInstructionAST.mSlotID,
                                                         categoryMethod_selfIncDecInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfIncDecInstructionAST_enterInstructionInSemanticContext (defineCategoryMethod_selfIncDecInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@selfIncDecInstructionAST analyzeSemanticInstruction'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_selfIncDecInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfIncDecInstructionAST * object = (const cPtr_selfIncDecInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfIncDecInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy ;
  GALGAS_string var_selfObjectCppName ;
  const enumGalgasBool test_0 = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy.reader_isNull (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1868)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("'self' can be used only in category setters")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1869)) ;
    var_selfObjectCppName.drop () ; // Release error dropped variable
    var_selfTypeProxy.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    var_selfObjectCppName = constinArgument_inAnalysisContext.mAttribute_mSelfObjectCppName ;
    var_selfTypeProxy = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_selfTypeProxy.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1875)).operator_and (function_incDecOperator (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1875)) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1875)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the target object has the '@").add_operation (var_selfTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1877)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1877)).add_operation (GALGAS_string ("' type, but this type does not support the '++' and  '--' operators"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1877))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1876)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_incDecInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_selfObjectCppName, var_selfTypeProxy, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1884)), object->mAttribute_mKind  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1880))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1880)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_selfIncDecInstructionAST_analyzeSemanticInstruction (void) {
  enterCategoryMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_selfIncDecInstructionAST.mSlotID,
                                                  categoryMethod_selfIncDecInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfIncDecInstructionAST_analyzeSemanticInstruction (defineCategoryMethod_selfIncDecInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@messageInstructionAST enterInstructionInSemanticContext'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_messageInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                    GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_messageInstructionAST * object = (const cPtr_messageInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_messageInstructionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1894)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_messageInstructionAST_enterInstructionInSemanticContext (void) {
  enterCategoryMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_messageInstructionAST.mSlotID,
                                                         categoryMethod_messageInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_messageInstructionAST_enterInstructionInSemanticContext (defineCategoryMethod_messageInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@messageInstructionAST analyzeSemanticInstruction'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_messageInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                             GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                             GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_messageInstructionAST * object = (const cPtr_messageInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_messageInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1906)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1905)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_expression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1912)).objectCompare (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the expression has the '@").add_operation (var_expression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1914)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1914)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1914)).add_operation (GALGAS_string ("' type, but the 'message' instruction requires an '@string' expression"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1914))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1913)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_messageInstructionForGeneration::constructor_new (var_expression, object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1917))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1917)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_messageInstructionAST_analyzeSemanticInstruction (void) {
  enterCategoryMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_messageInstructionAST.mSlotID,
                                                  categoryMethod_messageInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_messageInstructionAST_analyzeSemanticInstruction (defineCategoryMethod_messageInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@logInstructionAST enterInstructionInSemanticContext'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_logInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_logInstructionAST * object = (const cPtr_logInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_logInstructionAST) ;
  cEnumerator_logListAST enumerator_81145 (object->mAttribute_mLogList, kEnumeration_up) ;
  while (enumerator_81145.hasCurrentObject ()) {
    callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) enumerator_81145.current_mLogExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1928)) ;
    enumerator_81145.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_logInstructionAST_enterInstructionInSemanticContext (void) {
  enterCategoryMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_logInstructionAST.mSlotID,
                                                         categoryMethod_logInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_logInstructionAST_enterInstructionInSemanticContext (defineCategoryMethod_logInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@logInstructionAST analyzeSemanticInstruction'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_logInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                         const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                         GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                         GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_logInstructionAST * object = (const cPtr_logInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_logInstructionAST) ;
  cEnumerator_logListAST enumerator_81575 (object->mAttribute_mLogList, kEnumeration_up) ;
  while (enumerator_81575.hasCurrentObject ()) {
    GALGAS_semanticExpressionForGeneration var_expression ;
    callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_81575.current_mLogExpression (HERE).ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1942)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1941)) ;
    ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_logInstructionForGeneration::constructor_new (enumerator_81575.current_mLogMessage (HERE), var_expression  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1948))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1948)) ;
    enumerator_81575.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_logInstructionAST_analyzeSemanticInstruction (void) {
  enterCategoryMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_logInstructionAST.mSlotID,
                                                  categoryMethod_logInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_logInstructionAST_analyzeSemanticInstruction (defineCategoryMethod_logInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@dropInstructionAST enterInstructionInSemanticContext'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_dropInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * /* inObject */,
                                                                                 GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_dropInstructionAST_enterInstructionInSemanticContext (void) {
  enterCategoryMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_dropInstructionAST.mSlotID,
                                                         categoryMethod_dropInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_dropInstructionAST_enterInstructionInSemanticContext (defineCategoryMethod_dropInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@dropInstructionAST analyzeSemanticInstruction'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_dropInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                          const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                          GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                          GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_dropInstructionAST * object = (const cPtr_dropInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_dropInstructionAST) ;
  GALGAS_stringlist var_cppNameDropList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1968)) ;
  GALGAS_unifiedTypeMapProxyList var_dropTypeList = GALGAS_unifiedTypeMapProxyList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1969)) ;
  cEnumerator_lstringlist enumerator_82727 (object->mAttribute_mDropList, kEnumeration_up) ;
  while (enumerator_82727.hasCurrentObject ()) {
    GALGAS_string var_variableCppName ;
    GALGAS_unifiedTypeMap_2D_proxy var_t ;
    {
    GALGAS_string joker_82855 ; // Joker input parameter
    ioArgument_ioVariableMap.modifier_searchForDropAccess (enumerator_82727.current_mValue (HERE), var_t, var_variableCppName, joker_82855, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1972)) ;
    }
    var_cppNameDropList.addAssign_operation (var_variableCppName  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1973)) ;
    var_dropTypeList.addAssign_operation (var_t  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1974)) ;
    enumerator_82727.gotoNextObject () ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_dropInstructionForGeneration::constructor_new (var_cppNameDropList, GALGAS_string ("drop instruction"), var_dropTypeList  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1977))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1977)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_dropInstructionAST_analyzeSemanticInstruction (void) {
  enterCategoryMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_dropInstructionAST.mSlotID,
                                                  categoryMethod_dropInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_dropInstructionAST_analyzeSemanticInstruction (defineCategoryMethod_dropInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@ifInstructionAST enterInstructionInSemanticContext'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ifInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                               GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifInstructionAST * object = (const cPtr_ifInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ifInstructionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_m_5F_if_5F_expression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2069)) ;
  categoryMethod_enterInstructionListInSemanticContext (object->mAttribute_m_5F_then_5F_instructionList, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2070)) ;
  categoryMethod_enterInstructionListInSemanticContext (object->mAttribute_m_5F_else_5F_instructionList, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2071)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ifInstructionAST_enterInstructionInSemanticContext (void) {
  enterCategoryMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_ifInstructionAST.mSlotID,
                                                         categoryMethod_ifInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ifInstructionAST_enterInstructionInSemanticContext (defineCategoryMethod_ifInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@ifInstructionAST analyzeSemanticInstruction'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ifInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                        GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifInstructionAST * object = (const cPtr_ifInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ifInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_analyzed_5F_if_5F_expression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_m_5F_if_5F_expression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2083)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_analyzed_5F_if_5F_expression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2082)) ;
  {
  ioArgument_ioVariableMap.modifier_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2088)) ;
  }
  GALGAS_semanticExpressionForGeneration var_if_5F_expression ;
  {
  routine_checkExpressionIsBoolean (constinArgument_inAnalysisContext, object->mAttribute_mEndOf_5F_if_5F_instruction, var_analyzed_5F_if_5F_expression, var_if_5F_expression, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2091)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_then_5F_instructionList ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2101)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2102)), object->mAttribute_m_5F_then_5F_instructionList, object->mAttribute_mEndOf_5F_then_5F_branch, ioArgument_ioVariableMap, var_then_5F_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2099)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionList ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2112)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2113)), object->mAttribute_m_5F_else_5F_instructionList, object->mAttribute_mEndOf_5F_if_5F_instruction, ioArgument_ioVariableMap, var_else_5F_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2110)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_if_5F_instruction, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2119)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_ifInstructionForGeneration::constructor_new (object->mAttribute_mEndOf_5F_then_5F_branch, var_if_5F_expression, var_then_5F_instructionList, var_else_5F_instructionList  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2121))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2121)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ifInstructionAST_analyzeSemanticInstruction (void) {
  enterCategoryMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_ifInstructionAST.mSlotID,
                                                  categoryMethod_ifInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ifInstructionAST_analyzeSemanticInstruction (defineCategoryMethod_ifInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding category method '@enumeratedCollectionImplicitVarInExpAST enterInSemanticContext'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_enumeratedCollectionImplicitVarInExpAST_enterInSemanticContext (const cPtr_abstractEnumeratedCollectionAST * inObject,
                                                                                           GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumeratedCollectionImplicitVarInExpAST * object = (const cPtr_enumeratedCollectionImplicitVarInExpAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumeratedCollectionImplicitVarInExpAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mEnumeratedExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2139)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_enumeratedCollectionImplicitVarInExpAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_enumeratedCollectionImplicitVarInExpAST.mSlotID,
                                              categoryMethod_enumeratedCollectionImplicitVarInExpAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumeratedCollectionImplicitVarInExpAST_enterInSemanticContext (defineCategoryMethod_enumeratedCollectionImplicitVarInExpAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@enumeratedCollectionCstListInExpAST enterInSemanticContext'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_enumeratedCollectionCstListInExpAST_enterInSemanticContext (const cPtr_abstractEnumeratedCollectionAST * inObject,
                                                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumeratedCollectionCstListInExpAST * object = (const cPtr_enumeratedCollectionCstListInExpAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumeratedCollectionCstListInExpAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mEnumeratedExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2145)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_enumeratedCollectionCstListInExpAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_enumeratedCollectionCstListInExpAST.mSlotID,
                                              categoryMethod_enumeratedCollectionCstListInExpAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumeratedCollectionCstListInExpAST_enterInSemanticContext (defineCategoryMethod_enumeratedCollectionCstListInExpAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@enumeratedCollectionVarInExpAST enterInSemanticContext'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_enumeratedCollectionVarInExpAST_enterInSemanticContext (const cPtr_abstractEnumeratedCollectionAST * inObject,
                                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumeratedCollectionVarInExpAST * object = (const cPtr_enumeratedCollectionVarInExpAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumeratedCollectionVarInExpAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mEnumeratedExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2151)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_enumeratedCollectionVarInExpAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_enumeratedCollectionVarInExpAST.mSlotID,
                                              categoryMethod_enumeratedCollectionVarInExpAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumeratedCollectionVarInExpAST_enterInSemanticContext (defineCategoryMethod_enumeratedCollectionVarInExpAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@enumeratedCollectionImplicitVarInExpAST analyzeEnumeration'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_enumeratedCollectionImplicitVarInExpAST_analyzeEnumeration (const cPtr_abstractEnumeratedCollectionAST * inObject,
                                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                       GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                       GALGAS_localInitializedVariableList & ioArgument_ioLocalConstantListForDoBranch,
                                                                                       GALGAS_string & outArgument_outEnumeratorCppName,
                                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outEnumerationExpression,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumeratedCollectionImplicitVarInExpAST * object = (const cPtr_enumeratedCollectionImplicitVarInExpAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumeratedCollectionImplicitVarInExpAST) ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mEnumeratedExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2172)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, outArgument_outEnumerationExpression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2171)) ;
  outArgument_outEnumeratorCppName = GALGAS_string ("enumerator_").add_operation (object->mAttribute_mEndOfEnumerationExpression.reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2178)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2178)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2178)) ;
  GALGAS_enumerationDescriptorList var_enumerationDescriptorList = outArgument_outEnumerationExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2179)).reader_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2179)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_enumerationDescriptorList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2180)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfEnumerationExpression, GALGAS_string ("an '@").add_operation (outArgument_outEnumerationExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2181)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2181)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2181)).add_operation (GALGAS_string ("' object cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2181))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2181)) ;
  }
  cEnumerator_enumerationDescriptorList enumerator_91426 (var_enumerationDescriptorList, kEnumeration_up) ;
  while (enumerator_91426.hasCurrentObject ()) {
    ioArgument_ioLocalConstantListForDoBranch.addAssign_operation (enumerator_91426.current_mEnumeratedType (HERE), GALGAS_lstring::constructor_new (object->mAttribute_mPrefix.mAttribute_string.add_operation (enumerator_91426.current_mEnumerationName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2187)), object->mAttribute_mEndOfEnumerationExpression  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2187)), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2188)).add_operation (enumerator_91426.current_mEnumerationName (HERE).reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2188)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2188)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2188))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2185)) ;
    enumerator_91426.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_enumeratedCollectionImplicitVarInExpAST_analyzeEnumeration (void) {
  enterCategoryMethod_analyzeEnumeration (kTypeDescriptor_GALGAS_enumeratedCollectionImplicitVarInExpAST.mSlotID,
                                          categoryMethod_enumeratedCollectionImplicitVarInExpAST_analyzeEnumeration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumeratedCollectionImplicitVarInExpAST_analyzeEnumeration (defineCategoryMethod_enumeratedCollectionImplicitVarInExpAST_analyzeEnumeration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@enumeratedCollectionCstListInExpAST analyzeEnumeration'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_enumeratedCollectionCstListInExpAST_analyzeEnumeration (const cPtr_abstractEnumeratedCollectionAST * inObject,
                                                                                   const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                   GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                   GALGAS_localInitializedVariableList & ioArgument_ioLocalConstantListForDoBranch,
                                                                                   GALGAS_string & outArgument_outEnumeratorCppName,
                                                                                   GALGAS_semanticExpressionForGeneration & outArgument_outEnumerationExpression,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumeratedCollectionCstListInExpAST * object = (const cPtr_enumeratedCollectionCstListInExpAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumeratedCollectionCstListInExpAST) ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mEnumeratedExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2202)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, outArgument_outEnumerationExpression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2201)) ;
  outArgument_outEnumeratorCppName = GALGAS_string ("enumerator_").add_operation (object->mAttribute_mEndOfEnumerationExpression.reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2208)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2208)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2208)) ;
  GALGAS_enumerationDescriptorList var_enumerationDescriptorList = outArgument_outEnumerationExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2209)).reader_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2209)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_enumerationDescriptorList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2210)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfEnumerationExpression, GALGAS_string ("an '@").add_operation (outArgument_outEnumerationExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2211)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2211)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2211)).add_operation (GALGAS_string ("' object cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2211))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2211)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mAttribute_mElementList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2214)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (object->mAttribute_mEndsWithEllipsis.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2214)) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2214)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_enumerationDescriptorList var_currentTypedAttributeList = outArgument_outEnumerationExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2215)).reader_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2215)) ;
      cEnumerator_enumerationDescriptorList enumerator_92900 (var_currentTypedAttributeList, kEnumeration_up) ;
      while (enumerator_92900.hasCurrentObject ()) {
        {
        ioArgument_ioVariableMap.modifier_insertUsedLocalConstant (GALGAS_lstring::constructor_new (enumerator_92900.current_mEnumerationName (HERE), object->mAttribute_mEndOfEnumerationExpression  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2218)), enumerator_92900.current_mEnumeratedType (HERE), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2220)).add_operation (enumerator_92900.current_mEnumerationName (HERE).reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2220)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2220)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2220)), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2221)).add_operation (enumerator_92900.current_mEnumerationName (HERE).reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2221)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2221)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2221)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2217)) ;
        }
        enumerator_92900.gotoNextObject () ;
      }
    }else if (kBoolFalse == test_1) {
      const enumGalgasBool test_2 = object->mAttribute_mEndsWithEllipsis.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2224)).operator_and (GALGAS_bool (kIsNotEqual, object->mAttribute_mElementList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2224)).objectCompare (var_enumerationDescriptorList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2224)))) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2224)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_string temp_3 ;
        const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, var_enumerationDescriptorList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2228)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
        if (kBoolTrue == test_4) {
          temp_3 = GALGAS_string ("s") ;
        }else if (kBoolFalse == test_4) {
          temp_3 = GALGAS_string::makeEmptyString () ;
        }
        inCompiler->emitSemanticError (object->mAttribute_mEndOfEnumerationExpression, GALGAS_string ("the '@").add_operation (outArgument_outEnumerationExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2226)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2226)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2226)).add_operation (GALGAS_string ("' type requires "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2226)).add_operation (var_enumerationDescriptorList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2227)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2227)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2226)).add_operation (GALGAS_string (" argument"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2227)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2227)).add_operation (GALGAS_string (" for enumeration: this list provides "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2228)).add_operation (object->mAttribute_mElementList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2230)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2230)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2229))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2225)) ;
      }else if (kBoolFalse == test_2) {
        const enumGalgasBool test_5 = object->mAttribute_mEndsWithEllipsis.operator_and (GALGAS_bool (kIsStrictSup, object->mAttribute_mElementList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2231)).objectCompare (var_enumerationDescriptorList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2231)))) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2231)).boolEnum () ;
        if (kBoolTrue == test_5) {
          GALGAS_string temp_6 ;
          const enumGalgasBool test_7 = GALGAS_bool (kIsStrictSup, var_enumerationDescriptorList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2235)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
          if (kBoolTrue == test_7) {
            temp_6 = GALGAS_string ("s") ;
          }else if (kBoolFalse == test_7) {
            temp_6 = GALGAS_string::makeEmptyString () ;
          }
          inCompiler->emitSemanticError (object->mAttribute_mEndOfEnumerationExpression, GALGAS_string ("the '@").add_operation (outArgument_outEnumerationExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2233)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2233)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2233)).add_operation (GALGAS_string ("' type requires "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2233)).add_operation (var_enumerationDescriptorList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2234)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2234)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2233)).add_operation (GALGAS_string (" argument"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2234)).add_operation (temp_6, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2234)).add_operation (GALGAS_string (" or less for enumeration: this list provides "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2235)).add_operation (object->mAttribute_mElementList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2237)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2237)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2236))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2232)) ;
        }else if (kBoolFalse == test_5) {
          cEnumerator_foreachInstructionEnumeratedObjectElementListAST enumerator_94220 (object->mAttribute_mElementList, kEnumeration_up) ;
          cEnumerator_enumerationDescriptorList enumerator_94253 (var_enumerationDescriptorList, kEnumeration_up) ;
          while (enumerator_94220.hasCurrentObject () && enumerator_94253.hasCurrentObject ()) {
            const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, enumerator_94220.current_mOptionalConstantName (HERE).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2240)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_8) {
              const enumGalgasBool test_9 = GALGAS_bool (kIsNotEqual, enumerator_94220.current_mOptionalTypeName (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_9) {
                GALGAS_unifiedTypeMap_2D_proxy var_foundType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, enumerator_94220.current_mOptionalTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2242)) ;
                const enumGalgasBool test_10 = GALGAS_bool (kIsNotEqual, var_foundType.objectCompare (enumerator_94253.current_mEnumeratedType (HERE))).boolEnum () ;
                if (kBoolTrue == test_10) {
                  GALGAS_location location_11 (enumerator_94220.current_mOptionalTypeName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
                  inCompiler->emitSemanticError (location_11, GALGAS_string ("incorrect '@").add_operation (var_foundType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2247)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2247)).add_operation (GALGAS_string ("' type: '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2247)).add_operation (enumerator_94253.current_mEnumeratedType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2247)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2247)).add_operation (GALGAS_string ("' type required here"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2247))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2247)) ;
                }
              }
              ioArgument_ioLocalConstantListForDoBranch.addAssign_operation (enumerator_94253.current_mEnumeratedType (HERE), enumerator_94220.current_mOptionalConstantName (HERE), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2250)).add_operation (enumerator_94253.current_mEnumerationName (HERE).reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2250)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2250)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2250))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2250)) ;
            }
            enumerator_94220.gotoNextObject () ;
            enumerator_94253.gotoNextObject () ;
          }
        }
      }
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_enumeratedCollectionCstListInExpAST_analyzeEnumeration (void) {
  enterCategoryMethod_analyzeEnumeration (kTypeDescriptor_GALGAS_enumeratedCollectionCstListInExpAST.mSlotID,
                                          categoryMethod_enumeratedCollectionCstListInExpAST_analyzeEnumeration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumeratedCollectionCstListInExpAST_analyzeEnumeration (defineCategoryMethod_enumeratedCollectionCstListInExpAST_analyzeEnumeration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@enumeratedCollectionVarInExpAST analyzeEnumeration'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_enumeratedCollectionVarInExpAST_analyzeEnumeration (const cPtr_abstractEnumeratedCollectionAST * inObject,
                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                               GALGAS_localInitializedVariableList & ioArgument_ioLocalConstantListForDoBranch,
                                                                               GALGAS_string & outArgument_outEnumeratorCppName,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outEnumerationExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumeratedCollectionVarInExpAST * object = (const cPtr_enumeratedCollectionVarInExpAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumeratedCollectionVarInExpAST) ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mEnumeratedExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2267)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, outArgument_outEnumerationExpression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2266)) ;
  outArgument_outEnumeratorCppName = GALGAS_string ("enumerator_").add_operation (object->mAttribute_mEndOfEnumerationExpression.reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2273)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2273)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2273)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_enumeratedElementType = outArgument_outEnumerationExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2274)).reader_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2274)) ;
  const enumGalgasBool test_0 = var_enumeratedElementType.reader_isNull (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2275)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfEnumerationExpression, GALGAS_string ("an '@").add_operation (outArgument_outEnumerationExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2276)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2276)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2276)).add_operation (GALGAS_string ("' object cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2276))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2276)) ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioLocalConstantListForDoBranch.addAssign_operation (var_enumeratedElementType, object->mAttribute_mEnumerationVariable, outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current (HERE)"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2278))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2278)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, object->mAttribute_mEnumerationOptionalTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_unifiedTypeMap_2D_proxy var_explicitType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mEnumerationOptionalTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2282)) ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_enumeratedElementType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2286)).objectCompare (var_explicitType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2286)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (object->mAttribute_mEnumerationOptionalTypeName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_3, GALGAS_string ("the '@").add_operation (var_enumeratedElementType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2287)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2287)).add_operation (GALGAS_string ("' type is expected here"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2287))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2287)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_enumeratedCollectionVarInExpAST_analyzeEnumeration (void) {
  enterCategoryMethod_analyzeEnumeration (kTypeDescriptor_GALGAS_enumeratedCollectionVarInExpAST.mSlotID,
                                          categoryMethod_enumeratedCollectionVarInExpAST_analyzeEnumeration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumeratedCollectionVarInExpAST_analyzeEnumeration (defineCategoryMethod_enumeratedCollectionVarInExpAST_analyzeEnumeration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@forInstructionAST enterInstructionInSemanticContext'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_forInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forInstructionAST * object = (const cPtr_forInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_forInstructionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mWhileExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2298)) ;
  categoryMethod_enterInstructionListInSemanticContext (object->mAttribute_mBeforeInstructionList, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2299)) ;
  categoryMethod_enterInstructionListInSemanticContext (object->mAttribute_mBetweenInstructionList, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2300)) ;
  categoryMethod_enterInstructionListInSemanticContext (object->mAttribute_mDoInstructionList, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2301)) ;
  categoryMethod_enterInstructionListInSemanticContext (object->mAttribute_mAfterInstructionList, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2302)) ;
  cEnumerator_forInstructionEnumeratedObjectListAST enumerator_97141 (object->mAttribute_mEnumeratedObjectList, kEnumeration_up) ;
  while (enumerator_97141.hasCurrentObject ()) {
    callCategoryMethod_enterInSemanticContext ((const cPtr_abstractEnumeratedCollectionAST *) enumerator_97141.current_mEnumeratedCollection (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2304)) ;
    enumerator_97141.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_forInstructionAST_enterInstructionInSemanticContext (void) {
  enterCategoryMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_forInstructionAST.mSlotID,
                                                         categoryMethod_forInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_forInstructionAST_enterInstructionInSemanticContext (defineCategoryMethod_forInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@forInstructionAST analyzeSemanticInstruction'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_forInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                         const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                         GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                         GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forInstructionAST * object = (const cPtr_forInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_forInstructionAST) ;
  {
  ioArgument_ioVariableMap.modifier_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2315)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_openBranch (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2316)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2318)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_before_5F_instructionList ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2322)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2323)), object->mAttribute_mBeforeInstructionList, object->mAttribute_mEndOf_5F_before_5F_branch, ioArgument_ioVariableMap, var_before_5F_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2320)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_before_5F_branch, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2329)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2331)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_between_5F_instructionList ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2335)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2336)), object->mAttribute_mBetweenInstructionList, object->mAttribute_mEndOf_5F_between_5F_branch, ioArgument_ioVariableMap, var_between_5F_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2333)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_between_5F_branch, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2342)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2344)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_after_5F_instructionList ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2347)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2348)), object->mAttribute_mAfterInstructionList, object->mAttribute_mEndOf_5F_after_5F_branch, ioArgument_ioVariableMap, var_after_5F_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2345)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_after_5F_branch, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2354)) ;
  }
  GALGAS_localInitializedVariableList var_localConstantListForDoBranch = GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2356)) ;
  GALGAS_foreachInstructionEnumeratedObjectListForGeneration var_enumerationList = GALGAS_foreachInstructionEnumeratedObjectListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2357)) ;
  cEnumerator_forInstructionEnumeratedObjectListAST enumerator_99160 (object->mAttribute_mEnumeratedObjectList, kEnumeration_up) ;
  while (enumerator_99160.hasCurrentObject ()) {
    GALGAS_string var_enumeratorCppName ;
    GALGAS_semanticExpressionForGeneration var_enumerationExpression ;
    callCategoryMethod_analyzeEnumeration ((const cPtr_abstractEnumeratedCollectionAST *) enumerator_99160.current_mEnumeratedCollection (HERE).ptr (), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_localConstantListForDoBranch, var_enumeratorCppName, var_enumerationExpression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2359)) ;
    GALGAS_string temp_0 ;
    const enumGalgasBool test_1 = enumerator_99160.current_mAscending (HERE).boolEnum () ;
    if (kBoolTrue == test_1) {
      temp_0 = GALGAS_string ("up") ;
    }else if (kBoolFalse == test_1) {
      temp_0 = GALGAS_string ("down") ;
    }
    var_enumerationList.addAssign_operation (temp_0, var_enumerationExpression, var_enumeratorCppName  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2367)) ;
    enumerator_99160.gotoNextObject () ;
  }
  {
  ioArgument_ioVariableMap.modifier_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2373)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_openBranch (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2374)) ;
  }
  cEnumerator_localInitializedVariableList enumerator_99720 (var_localConstantListForDoBranch, kEnumeration_up) ;
  while (enumerator_99720.hasCurrentObject ()) {
    {
    ioArgument_ioVariableMap.modifier_insertUsedLocalConstant (enumerator_99720.current (HERE).mAttribute_mName, enumerator_99720.current (HERE).mAttribute_mType, enumerator_99720.current (HERE).mAttribute_mCppName, enumerator_99720.current (HERE).mAttribute_mCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2377)) ;
    }
    enumerator_99720.gotoNextObject () ;
  }
  GALGAS_semanticExpressionForGeneration var_uncheckedWhileExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mWhileExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2386)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_uncheckedWhileExpression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2385)) ;
  GALGAS_semanticExpressionForGeneration var_whileExpression ;
  {
  routine_checkExpressionIsBoolean (constinArgument_inAnalysisContext, object->mAttribute_mEndOf_5F_while_5F_expression, var_uncheckedWhileExpression, var_whileExpression, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2391)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeBranch (object->mAttribute_mEndOf_5F_while_5F_expression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2398)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_while_5F_expression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2399)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2401)) ;
  }
  GALGAS_string var_indexCppName = GALGAS_string::makeEmptyString () ;
  GALGAS_localConstantList var_indexDeclaration = GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2403)) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, object->mAttribute_mIndexVariableName.reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2404)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_2) {
    var_indexCppName = GALGAS_string ("index_").add_operation (object->mAttribute_mInstructionLocation.reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2405)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2405)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2405)) ;
    var_indexDeclaration.addAssign_operation (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mUIntType, object->mAttribute_mIndexVariableName, GALGAS_bool (false), var_indexCppName  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2406)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_do_5F_instructionList ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inAnalysisContext, var_indexDeclaration, var_localConstantListForDoBranch, object->mAttribute_mDoInstructionList, object->mAttribute_mEndOf_5F_do_5F_branch, ioArgument_ioVariableMap, var_do_5F_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2414)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_foreach_5F_instruction, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2424)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeBranch (object->mAttribute_mEndOf_5F_foreach_5F_instruction, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2426)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_foreach_5F_instruction, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2427)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_foreachInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_enumerationList, var_indexCppName, var_whileExpression, var_before_5F_instructionList, var_between_5F_instructionList, var_do_5F_instructionList, var_after_5F_instructionList  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2429))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2429)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_forInstructionAST_analyzeSemanticInstruction (void) {
  enterCategoryMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_forInstructionAST.mSlotID,
                                                  categoryMethod_forInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_forInstructionAST_analyzeSemanticInstruction (defineCategoryMethod_forInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@foreachInstructionAST enterInstructionInSemanticContext'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_foreachInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                    GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_foreachInstructionAST * object = (const cPtr_foreachInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_foreachInstructionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mWhileExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2445)) ;
  categoryMethod_enterInstructionListInSemanticContext (object->mAttribute_mBeforeInstructionList, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2446)) ;
  categoryMethod_enterInstructionListInSemanticContext (object->mAttribute_mBetweenInstructionList, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2447)) ;
  categoryMethod_enterInstructionListInSemanticContext (object->mAttribute_mDoInstructionList, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2448)) ;
  categoryMethod_enterInstructionListInSemanticContext (object->mAttribute_mAfterInstructionList, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2449)) ;
  cEnumerator_foreachInstructionEnumeratedObjectListAST enumerator_102262 (object->mAttribute_mEnumeratedObjectList, kEnumeration_up) ;
  while (enumerator_102262.hasCurrentObject ()) {
    callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) enumerator_102262.current_mEnumeratedExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2451)) ;
    enumerator_102262.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_foreachInstructionAST_enterInstructionInSemanticContext (void) {
  enterCategoryMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_foreachInstructionAST.mSlotID,
                                                         categoryMethod_foreachInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_foreachInstructionAST_enterInstructionInSemanticContext (defineCategoryMethod_foreachInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@foreachInstructionAST analyzeSemanticInstruction'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_foreachInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                             GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                             GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_foreachInstructionAST * object = (const cPtr_foreachInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_foreachInstructionAST) ;
  {
  ioArgument_ioVariableMap.modifier_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2462)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_openBranch (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2463)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2465)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_before_5F_instructionList ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2469)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2470)), object->mAttribute_mBeforeInstructionList, object->mAttribute_mEndOf_5F_before_5F_branch, ioArgument_ioVariableMap, var_before_5F_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2467)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_before_5F_branch, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2476)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2478)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_between_5F_instructionList ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2482)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2483)), object->mAttribute_mBetweenInstructionList, object->mAttribute_mEndOf_5F_between_5F_branch, ioArgument_ioVariableMap, var_between_5F_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2480)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_between_5F_branch, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2489)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2491)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_after_5F_instructionList ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2495)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2496)), object->mAttribute_mAfterInstructionList, object->mAttribute_mEndOf_5F_after_5F_branch, ioArgument_ioVariableMap, var_after_5F_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2493)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_after_5F_branch, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2502)) ;
  }
  GALGAS_foreachInstructionEnumeratedObjectListForGeneration var_enumerationList = GALGAS_foreachInstructionEnumeratedObjectListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2504)) ;
  cEnumerator_foreachInstructionEnumeratedObjectListAST enumerator_104261 (object->mAttribute_mEnumeratedObjectList, kEnumeration_up) ;
  while (enumerator_104261.hasCurrentObject ()) {
    GALGAS_semanticExpressionForGeneration var_enumerationExpression ;
    callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_104261.current_mEnumeratedExpression (HERE).ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2509)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_enumerationExpression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2508)) ;
    GALGAS_string var_enumerationOrder = enumerator_104261.current_mEnumerationOrder (HERE).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2515)) ;
    GALGAS_string var_enumeratorCppName = GALGAS_string ("enumerator_").add_operation (enumerator_104261.current_mEndOfEnumerationExpression (HERE).reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2516)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2516)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2516)) ;
    GALGAS_enumerationDescriptorList var_enumerationDescriptorList = var_enumerationExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2517)).reader_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2517)) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_enumerationDescriptorList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2518)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      inCompiler->emitSemanticError (enumerator_104261.current_mEndOfEnumerationExpression (HERE), GALGAS_string ("an '@").add_operation (var_enumerationExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2519)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2519)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2519)).add_operation (GALGAS_string ("' object cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2519))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2519)) ;
    }else if (kBoolFalse == test_0) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_enumerationOrder.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_enumerationOrder = var_enumerationExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2523)).reader_mEnumeratorVariants (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2523)).reader_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2523)) ;
      }else if (kBoolFalse == test_1) {
        GALGAS_bool var_found = GALGAS_bool (false) ;
        GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
        cEnumerator_stringlist enumerator_105305 (var_enumerationExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2527)).reader_mEnumeratorVariants (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2527)), kEnumeration_up) ;
        bool bool_2 = var_found.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2527)).isValidAndTrue () ;
        if (enumerator_105305.hasCurrentObject () && bool_2) {
          while (enumerator_105305.hasCurrentObject () && bool_2) {
            var_found = GALGAS_bool (kIsEqual, var_enumerationOrder.objectCompare (enumerator_105305.current_mValue (HERE))) ;
            var_s.dotAssign_operation (GALGAS_string ("\n"
              "  \\").add_operation (enumerator_105305.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2529))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2529)) ;
            enumerator_105305.gotoNextObject () ;
            if (enumerator_105305.hasCurrentObject ()) {
              bool_2 = var_found.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2527)).isValidAndTrue () ;
            }
          }
        }
        const enumGalgasBool test_3 = var_found.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2531)).boolEnum () ;
        if (kBoolTrue == test_3) {
          GALGAS_location location_4 (enumerator_104261.current_mEnumerationOrder (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_4, GALGAS_string ("unknown enumeration specifier; available ones are :").add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2532))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2532)) ;
        }
      }
      const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_104261.current_mElementList (HERE).reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2536)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (enumerator_104261.current_mEndsWithEllipsis (HERE).operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2536)) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2536)).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_enumerationDescriptorList var_currentTypedAttributeList = var_enumerationExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2537)).reader_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2537)) ;
        cEnumerator_enumerationDescriptorList enumerator_105784 (var_currentTypedAttributeList, kEnumeration_up) ;
        while (enumerator_105784.hasCurrentObject ()) {
          {
          ioArgument_ioVariableMap.modifier_insertUsedLocalConstant (GALGAS_lstring::constructor_new (enumerator_104261.current_mPrefix (HERE).mAttribute_string.add_operation (enumerator_105784.current_mEnumerationName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2540)), enumerator_104261.current_mEndOfEnumerationExpression (HERE)  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2540)), enumerator_105784.current_mEnumeratedType (HERE), var_enumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2542)).add_operation (enumerator_105784.current_mEnumerationName (HERE).reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2542)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2542)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2542)), var_enumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2543)).add_operation (enumerator_105784.current_mEnumerationName (HERE).reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2543)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2543)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2543)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2539)) ;
          }
          enumerator_105784.gotoNextObject () ;
        }
      }else if (kBoolFalse == test_5) {
        const enumGalgasBool test_6 = enumerator_104261.current_mEndsWithEllipsis (HERE).operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2546)).operator_and (GALGAS_bool (kIsNotEqual, enumerator_104261.current_mElementList (HERE).reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2546)).objectCompare (var_enumerationDescriptorList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2546)))) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2546)).boolEnum () ;
        if (kBoolTrue == test_6) {
          GALGAS_string temp_7 ;
          const enumGalgasBool test_8 = GALGAS_bool (kIsStrictSup, var_enumerationDescriptorList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2550)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
          if (kBoolTrue == test_8) {
            temp_7 = GALGAS_string ("s") ;
          }else if (kBoolFalse == test_8) {
            temp_7 = GALGAS_string::makeEmptyString () ;
          }
          inCompiler->emitSemanticError (enumerator_104261.current_mEndOfElementList (HERE), GALGAS_string ("the '@").add_operation (var_enumerationExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2548)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2548)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2548)).add_operation (GALGAS_string ("' type requires "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2548)).add_operation (var_enumerationDescriptorList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2549)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2549)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2548)).add_operation (GALGAS_string (" argument"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2549)).add_operation (temp_7, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2549)).add_operation (GALGAS_string (" for enumeration: this list provides "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2550)).add_operation (enumerator_104261.current_mElementList (HERE).reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2552)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2552)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2551))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2547)) ;
        }else if (kBoolFalse == test_6) {
          const enumGalgasBool test_9 = enumerator_104261.current_mEndsWithEllipsis (HERE).operator_and (GALGAS_bool (kIsStrictSup, enumerator_104261.current_mElementList (HERE).reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2553)).objectCompare (var_enumerationDescriptorList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2553)))) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2553)).boolEnum () ;
          if (kBoolTrue == test_9) {
            GALGAS_string temp_10 ;
            const enumGalgasBool test_11 = GALGAS_bool (kIsStrictSup, var_enumerationDescriptorList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2557)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
            if (kBoolTrue == test_11) {
              temp_10 = GALGAS_string ("s") ;
            }else if (kBoolFalse == test_11) {
              temp_10 = GALGAS_string::makeEmptyString () ;
            }
            inCompiler->emitSemanticError (enumerator_104261.current_mEndOfElementList (HERE), GALGAS_string ("the '@").add_operation (var_enumerationExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2555)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2555)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2555)).add_operation (GALGAS_string ("' type requires "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2555)).add_operation (var_enumerationDescriptorList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2556)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2556)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2555)).add_operation (GALGAS_string (" argument"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2556)).add_operation (temp_10, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2556)).add_operation (GALGAS_string (" or less for enumeration: this list provides "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2557)).add_operation (enumerator_104261.current_mElementList (HERE).reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2559)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2559)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2558))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2554)) ;
          }else if (kBoolFalse == test_9) {
            cEnumerator_foreachInstructionEnumeratedObjectElementListAST enumerator_107135 (enumerator_104261.current_mElementList (HERE), kEnumeration_up) ;
            cEnumerator_enumerationDescriptorList enumerator_107168 (var_enumerationDescriptorList, kEnumeration_up) ;
            while (enumerator_107135.hasCurrentObject () && enumerator_107168.hasCurrentObject ()) {
              const enumGalgasBool test_12 = GALGAS_bool (kIsNotEqual, enumerator_107135.current_mOptionalConstantName (HERE).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2562)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_12) {
                const enumGalgasBool test_13 = GALGAS_bool (kIsNotEqual, enumerator_107135.current_mOptionalTypeName (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_13) {
                  GALGAS_unifiedTypeMap_2D_proxy var_foundType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, enumerator_107135.current_mOptionalTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2564)) ;
                  const enumGalgasBool test_14 = GALGAS_bool (kIsNotEqual, var_foundType.objectCompare (enumerator_107168.current_mEnumeratedType (HERE))).boolEnum () ;
                  if (kBoolTrue == test_14) {
                    GALGAS_location location_15 (enumerator_107135.current_mOptionalTypeName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
                    inCompiler->emitSemanticError (location_15, GALGAS_string ("incorrect '@").add_operation (var_foundType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2569)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2569)).add_operation (GALGAS_string ("' type: '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2569)).add_operation (enumerator_107168.current_mEnumeratedType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2569)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2569)).add_operation (GALGAS_string ("' type required here"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2569))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2569)) ;
                  }
                }
                {
                ioArgument_ioVariableMap.modifier_insertUsedLocalConstant (enumerator_107135.current_mOptionalConstantName (HERE), enumerator_107168.current_mEnumeratedType (HERE), var_enumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2575)).add_operation (enumerator_107168.current_mEnumerationName (HERE).reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2575)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2575)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2575)), var_enumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2576)).add_operation (enumerator_107168.current_mEnumerationName (HERE).reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2576)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2576)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2576)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2572)) ;
                }
              }
              enumerator_107135.gotoNextObject () ;
              enumerator_107168.gotoNextObject () ;
            }
          }
        }
      }
    }
    var_enumerationList.addAssign_operation (var_enumerationOrder, var_enumerationExpression, var_enumeratorCppName  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2583)) ;
    enumerator_104261.gotoNextObject () ;
  }
  GALGAS_semanticExpressionForGeneration var_uncheckedWhileExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mWhileExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2588)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_uncheckedWhileExpression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2587)) ;
  GALGAS_semanticExpressionForGeneration var_whileExpression ;
  {
  routine_checkExpressionIsBoolean (constinArgument_inAnalysisContext, object->mAttribute_mEndOf_5F_while_5F_expression, var_uncheckedWhileExpression, var_whileExpression, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2594)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2601)) ;
  }
  GALGAS_string var_indexCppName = GALGAS_string::makeEmptyString () ;
  GALGAS_localConstantList var_indexDeclaration = GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2603)) ;
  const enumGalgasBool test_16 = GALGAS_bool (kIsNotEqual, object->mAttribute_mIndexVariableName.reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2604)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_16) {
    var_indexCppName = GALGAS_string ("index_").add_operation (object->mAttribute_mInstructionLocation.reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2605)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2605)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2605)) ;
    var_indexDeclaration.addAssign_operation (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mUIntType, object->mAttribute_mIndexVariableName, GALGAS_bool (false), var_indexCppName  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2606)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_do_5F_instructionList ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inAnalysisContext, var_indexDeclaration, GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2617)), object->mAttribute_mDoInstructionList, object->mAttribute_mEndOf_5F_do_5F_branch, ioArgument_ioVariableMap, var_do_5F_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2614)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_foreach_5F_instruction, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2624)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeBranch (object->mAttribute_mEndOf_5F_foreach_5F_instruction, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2626)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_foreach_5F_instruction, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2627)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_foreachInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_enumerationList, var_indexCppName, var_whileExpression, var_before_5F_instructionList, var_between_5F_instructionList, var_do_5F_instructionList, var_after_5F_instructionList  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2629))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2629)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_foreachInstructionAST_analyzeSemanticInstruction (void) {
  enterCategoryMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_foreachInstructionAST.mSlotID,
                                                  categoryMethod_foreachInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_foreachInstructionAST_analyzeSemanticInstruction (defineCategoryMethod_foreachInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@loopInstructionAST enterInstructionInSemanticContext'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_loopInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                 GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_loopInstructionAST * object = (const cPtr_loopInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_loopInstructionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mVariantExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2645)) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLoopExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2646)) ;
  categoryMethod_enterInstructionListInSemanticContext (object->mAttribute_mFirstInstructions, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2647)) ;
  categoryMethod_enterInstructionListInSemanticContext (object->mAttribute_mSecondInstructions, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2648)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_loopInstructionAST_enterInstructionInSemanticContext (void) {
  enterCategoryMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_loopInstructionAST.mSlotID,
                                                         categoryMethod_loopInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_loopInstructionAST_enterInstructionInSemanticContext (defineCategoryMethod_loopInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@loopInstructionAST analyzeSemanticInstruction'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_loopInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                          GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                          GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_loopInstructionAST * object = (const cPtr_loopInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_loopInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_variantExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mVariantExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2660)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_variantExpression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2659)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_variantExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2666)).objectCompare (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mUIntType)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfVariantExpression, GALGAS_string ("the variant expression type should be '@").add_operation (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mUIntType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2668)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2668)).add_operation (GALGAS_string ("', but it has '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2668)).add_operation (var_variantExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2668)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2668)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2668)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2668))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2667)) ;
  }
  GALGAS_semanticExpressionForGeneration var_loopExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLoopExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2673)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_loopExpression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2672)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_loopExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2679)).objectCompare (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfLoopExpression, GALGAS_string ("the loop expression type should be '@").add_operation (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2681)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2681)).add_operation (GALGAS_string ("', but it has '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2681)).add_operation (var_loopExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2681)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2681)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2681)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2681))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2680)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2684)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_first_5F_instructionList ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2689)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2690)), object->mAttribute_mFirstInstructions, object->mAttribute_mEndOfFirstInstructions, ioArgument_ioVariableMap, var_first_5F_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2687)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_second_5F_instructionList ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2700)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2701)), object->mAttribute_mSecondInstructions, object->mAttribute_mEndOfSecondInstructions, ioArgument_ioVariableMap, var_second_5F_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2698)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOfLoopInstruction, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2708)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_loopInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_variantExpression, var_first_5F_instructionList, var_loopExpression, var_second_5F_instructionList  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2710))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2710)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_loopInstructionAST_analyzeSemanticInstruction (void) {
  enterCategoryMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_loopInstructionAST.mSlotID,
                                                  categoryMethod_loopInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_loopInstructionAST_analyzeSemanticInstruction (defineCategoryMethod_loopInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding category method '@structuredCastInstructionAST enterInstructionInSemanticContext'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_structuredCastInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                           GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structuredCastInstructionAST * object = (const cPtr_structuredCastInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_structuredCastInstructionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mCastExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2723)) ;
  categoryMethod_enterInstructionListInSemanticContext (object->mAttribute_mElseInstructionList, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2724)) ;
  cEnumerator_castInstructionBranchListAST enumerator_113303 (object->mAttribute_mCastInstructionBranchList, kEnumeration_up) ;
  while (enumerator_113303.hasCurrentObject ()) {
    categoryMethod_enterInstructionListInSemanticContext (enumerator_113303.current_mInstructionList (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2726)) ;
    enumerator_113303.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_structuredCastInstructionAST_enterInstructionInSemanticContext (void) {
  enterCategoryMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_structuredCastInstructionAST.mSlotID,
                                                         categoryMethod_structuredCastInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structuredCastInstructionAST_enterInstructionInSemanticContext (defineCategoryMethod_structuredCastInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@structuredCastInstructionAST analyzeSemanticInstruction'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_structuredCastInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                    const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                    GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                    GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structuredCastInstructionAST * object = (const cPtr_structuredCastInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_structuredCastInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_castExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mCastExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2739)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_castExpression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2738)) ;
  {
  ioArgument_ioVariableMap.modifier_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2745)) ;
  }
  GALGAS_castInstructionBranchListForGeneration var_castBranchList = GALGAS_castInstructionBranchListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2747)) ;
  cEnumerator_castInstructionBranchListAST enumerator_114170 (object->mAttribute_mCastInstructionBranchList, kEnumeration_up) ;
  while (enumerator_114170.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_type = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, enumerator_114170.current_mTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2750)) ;
    GALGAS_unifiedTypeMap_2D_proxy var_t = var_type ;
    GALGAS_bool var_found = GALGAS_bool (kIsEqual, var_t.objectCompare (var_castExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2753)))) ;
    if (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap.reader_count (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2754)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2754)).isValid ()) {
      uint32_t variant_114454 = constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap.reader_count (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2754)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2754)).uintValue () ;
      bool loop_114454 = true ;
      while (loop_114454) {
        loop_114454 = var_found.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2755)).operator_and (var_t.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2755)).reader_isNull (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2755)).operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2755)) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2755)).isValid () ;
        if (loop_114454) {
          loop_114454 = var_found.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2755)).operator_and (var_t.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2755)).reader_isNull (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2755)).operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2755)) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2755)).boolValue () ;
        }
        if (loop_114454 && (0 == variant_114454)) {
          loop_114454 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2754)) ;
        }
        if (loop_114454) {
          variant_114454 -- ;
          var_t = var_t.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2756)) ;
          var_found = GALGAS_bool (kIsEqual, var_t.objectCompare (var_castExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2757)))) ;
        }
      }
    }
    const enumGalgasBool test_0 = var_found.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2759)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_location location_1 (enumerator_114170.current_mTypeName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_1, GALGAS_string ("the '@").add_operation (enumerator_114170.current_mTypeName (HERE).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2761)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2761)).add_operation (GALGAS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2761)).add_operation (var_castExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2761)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2761)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2761)).add_operation (GALGAS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2761))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2760)) ;
    }
    GALGAS_string var_localConstantName ;
    GALGAS_localConstantList var_localConstantList = GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2765)) ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, enumerator_114170.current_mConstantVarName (HERE).mAttribute_string.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2766)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      var_localConstantName = GALGAS_string ("cast_").add_operation (enumerator_114170.current_mConstantVarName (HERE).mAttribute_location.reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2767)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2767)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2767)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2767)).add_operation (enumerator_114170.current_mConstantVarName (HERE).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2767)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2767)) ;
      var_localConstantList.addAssign_operation (var_type, enumerator_114170.current_mConstantVarName (HERE), GALGAS_bool (true), var_localConstantName  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2768)) ;
    }else if (kBoolFalse == test_2) {
      var_localConstantName = GALGAS_string::makeEmptyString () ;
    }
    GALGAS_semanticInstructionListForGeneration var_instructionList ;
    {
    routine_analyzeSemanticInstructionList (constinArgument_inAnalysisContext, var_localConstantList, GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2781)), enumerator_114170.current_mInstructionList (HERE), enumerator_114170.current_mEndOfInstructions (HERE), ioArgument_ioVariableMap, var_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2778)) ;
    }
    var_castBranchList.addAssign_operation (enumerator_114170.current_mTypeComparisonKind (HERE), var_type, var_localConstantName, var_instructionList  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2787)) ;
    enumerator_114170.gotoNextObject () ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionList ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2793)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2794)), object->mAttribute_mElseInstructionList, object->mAttribute_mEndOfCastInstruction, ioArgument_ioVariableMap, var_else_5F_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2791)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOfCastInstruction, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2801)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_structuredCastInstructionForGeneration::constructor_new (var_castExpression, var_castBranchList, var_else_5F_instructionList  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2803))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2803)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_structuredCastInstructionAST_analyzeSemanticInstruction (void) {
  enterCategoryMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_structuredCastInstructionAST.mSlotID,
                                                  categoryMethod_structuredCastInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structuredCastInstructionAST_analyzeSemanticInstruction (defineCategoryMethod_structuredCastInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//  Overriding category method '@grammarInstructionSyntaxDirectedTranslationResultNone analyzeGrammarInstructionSDT'   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeGrammarInstructionSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * /* inObject */,
                                                                                                               const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                                               const GALGAS_bool /* constinArgument_inHasTranslateFeature */,
                                                                                                               const GALGAS_string /* constinArgument_inSyntaxDirectedTranslationResultVarName */,
                                                                                                               GALGAS_stringlist & /* ioArgument_ioAssignementList */,
                                                                                                               GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                                               C_Compiler * /* inCompiler */
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeGrammarInstructionSDT (void) {
  enterCategoryMethod_analyzeGrammarInstructionSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone.mSlotID,
                                                    categoryMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeGrammarInstructionSDT) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeGrammarInstructionSDT (defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeGrammarInstructionSDT, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//  Overriding category method '@grammarInstructionSyntaxDirectedTranslationDropResult analyzeGrammarInstructionSDT'   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeGrammarInstructionSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                               const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                                               const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                                               const GALGAS_string /* constinArgument_inSyntaxDirectedTranslationResultVarName */,
                                                                                                               GALGAS_stringlist & /* ioArgument_ioAssignementList */,
                                                                                                               GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationDropResult * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationDropResult *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationDropResult) ;
  const enumGalgasBool test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2836)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mLocation, GALGAS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2837)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeGrammarInstructionSDT (void) {
  enterCategoryMethod_analyzeGrammarInstructionSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult.mSlotID,
                                                    categoryMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeGrammarInstructionSDT) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeGrammarInstructionSDT (defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeGrammarInstructionSDT, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//  Overriding category method '@grammarInstructionSyntaxDirectedTranslationResultInVar analyzeGrammarInstructionSDT'  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeGrammarInstructionSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                                const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                                                const GALGAS_string constinArgument_inSyntaxDirectedTranslationResultVarName,
                                                                                                                GALGAS_stringlist & ioArgument_ioAssignementList,
                                                                                                                GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar) ;
  const enumGalgasBool test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2849)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mActualParameterName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2850)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_type ;
  GALGAS_string var_cppName ;
  {
  GALGAS_string joker_118473 ; // Joker input parameter
  ioArgument_ioVariableMap.modifier_searchForWriteAccess (object->mAttribute_mActualParameterName, var_type, var_cppName, joker_118473, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2852)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_expectedType.objectCompare (var_type)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mActualParameterName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_3, GALGAS_string ("the '").add_operation (object->mAttribute_mActualParameterName.reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2856)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2856)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2856)).add_operation (var_type.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2856)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2856)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2856)).add_operation (var_expectedType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2857)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2857)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2857))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2855)) ;
  }
  ioArgument_ioAssignementList.addAssign_operation (var_cppName.add_operation (GALGAS_string (" = GALGAS_string ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2859)).add_operation (constinArgument_inSyntaxDirectedTranslationResultVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2859)).add_operation (GALGAS_string (") ;"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2859))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2859)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeGrammarInstructionSDT (void) {
  enterCategoryMethod_analyzeGrammarInstructionSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar.mSlotID,
                                                    categoryMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeGrammarInstructionSDT) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeGrammarInstructionSDT (defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeGrammarInstructionSDT, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//Overriding category method '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar analyzeGrammarInstructionSDT'*
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeGrammarInstructionSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                                        const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                                                        const GALGAS_string constinArgument_inSyntaxDirectedTranslationResultVarName,
                                                                                                                        GALGAS_stringlist & ioArgument_ioAssignementList,
                                                                                                                        GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar) ;
  const enumGalgasBool test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2870)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mActualParameterName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2871)) ;
  }
  GALGAS_string var_cppName = GALGAS_string ("var_").add_operation (object->mAttribute_mActualParameterName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2873)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2873)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mActualParameterTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2874)) ;
  {
  ioArgument_ioVariableMap.modifier_insertDefinedLocalVariable (object->mAttribute_mActualParameterName, var_type, var_cppName, var_cppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2875)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_expectedType.objectCompare (var_type)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mActualParameterName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_3, GALGAS_string ("the '").add_operation (object->mAttribute_mActualParameterName.reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2879)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2879)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2879)).add_operation (var_type.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2879)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2879)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2879)).add_operation (var_expectedType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2880)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2880)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2880))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2878)) ;
  }
  ioArgument_ioAssignementList.addAssign_operation (GALGAS_string ("GALGAS_string ").add_operation (var_cppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2882)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2882)).add_operation (constinArgument_inSyntaxDirectedTranslationResultVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2882)).add_operation (GALGAS_string (") ;"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2882))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2882)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeGrammarInstructionSDT (void) {
  enterCategoryMethod_analyzeGrammarInstructionSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar.mSlotID,
                                                    categoryMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeGrammarInstructionSDT) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeGrammarInstructionSDT (defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeGrammarInstructionSDT, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//Overriding category method '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst analyzeGrammarInstructionSDT'*
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeGrammarInstructionSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                                          const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                                                          const GALGAS_string constinArgument_inSyntaxDirectedTranslationResultVarName,
                                                                                                                          GALGAS_stringlist & ioArgument_ioAssignementList,
                                                                                                                          GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst) ;
  const enumGalgasBool test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2893)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mActualParameterName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2894)) ;
  }
  GALGAS_string var_cppName = GALGAS_string ("var_").add_operation (object->mAttribute_mActualParameterName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2896)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2896)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mActualParameterTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2897)) ;
  {
  ioArgument_ioVariableMap.modifier_insertLocalConstant (object->mAttribute_mActualParameterName, var_type, var_cppName, var_cppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2898)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_expectedType.objectCompare (var_type)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mActualParameterName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_3, GALGAS_string ("the '").add_operation (object->mAttribute_mActualParameterName.reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2902)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2902)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2902)).add_operation (var_type.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2902)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2902)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2902)).add_operation (var_expectedType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2903)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2903)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2903))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2901)) ;
  }
  ioArgument_ioAssignementList.addAssign_operation (GALGAS_string ("const GALGAS_string ").add_operation (var_cppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2905)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2905)).add_operation (constinArgument_inSyntaxDirectedTranslationResultVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2905)).add_operation (GALGAS_string (") ;"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2905))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2905)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeGrammarInstructionSDT (void) {
  enterCategoryMethod_analyzeGrammarInstructionSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst.mSlotID,
                                                    categoryMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeGrammarInstructionSDT) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeGrammarInstructionSDT (defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeGrammarInstructionSDT, NULL) ;

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
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mReceiverExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2917)) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mKeyExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2918)) ;
  categoryMethod_enterInstructionListInSemanticContext (object->mAttribute_mDoBranchInstructions, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2919)) ;
  categoryMethod_enterInstructionListInSemanticContext (object->mAttribute_mElseBranchInstructions, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2920)) ;
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
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mReceiverExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2931)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_receiverExpression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2930)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_receiverType = var_receiverExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2936)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mSearchMethodNameForErrorSignaling.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_bool var_found = GALGAS_bool (false) ;
    cEnumerator_mapSearchMethodListAST enumerator_122991 (var_receiverType.reader_mMapSearchMethodList (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2940)), kEnumeration_up) ;
    bool bool_1 = var_found.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2940)).isValidAndTrue () ;
    if (enumerator_122991.hasCurrentObject () && bool_1) {
      while (enumerator_122991.hasCurrentObject () && bool_1) {
        var_found = GALGAS_bool (kIsEqual, enumerator_122991.current_mSearchMethodName (HERE).mAttribute_string.objectCompare (object->mAttribute_mSearchMethodNameForErrorSignaling.mAttribute_string)) ;
        enumerator_122991.gotoNextObject () ;
        if (enumerator_122991.hasCurrentObject ()) {
          bool_1 = var_found.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2940)).isValidAndTrue () ;
        }
      }
    }
    const enumGalgasBool test_2 = var_found.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2943)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (object->mAttribute_mSearchMethodNameForErrorSignaling.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_3, GALGAS_string ("there is no '").add_operation (object->mAttribute_mSearchMethodNameForErrorSignaling.reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2944)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2944)).add_operation (GALGAS_string ("' search method declared in the '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2944)).add_operation (var_receiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2944)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2944)).add_operation (GALGAS_string ("' map"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2944))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2944)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_keyExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mKeyExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2949)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_keyExpression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2948)) ;
  GALGAS_string var_objectArrayCppName = GALGAS_string ("objectArray_").add_operation (object->mAttribute_mInstructionLocation.reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2955)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2955)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2955)) ;
  const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_receiverType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2957)).operator_and (function_supportWithAccessor (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2957)) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2957)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_4) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfReceiverExpression, GALGAS_string ("the '@").add_operation (var_receiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2958)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2958)).add_operation (GALGAS_string ("' type cannot be used in a 'with' instruction"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2958))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2958)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2961)) ;
  }
  GALGAS_localConstantList var_localConstantList = GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2963)) ;
  cEnumerator_typedPropertyList enumerator_124103 (var_receiverType.reader_mCurrentTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2964)), kEnumeration_up) ;
  while (enumerator_124103.hasCurrentObject ()) {
    var_localConstantList.addAssign_operation (enumerator_124103.current_mAttributeTypeProxy (HERE), GALGAS_lstring::constructor_new (object->mAttribute_mPrefix.mAttribute_string.add_operation (enumerator_124103.current_mAttributeName (HERE).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2967)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2967)), object->mAttribute_mEndOfReceiverExpression  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2967)), GALGAS_bool (true), var_objectArrayCppName.add_operation (GALGAS_string ("->mAttribute_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2969)).add_operation (enumerator_124103.current_mAttributeName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2969)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2969))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2965)) ;
    enumerator_124103.gotoNextObject () ;
  }
  var_localConstantList.addAssign_operation (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, GALGAS_string ("lstring").reader_nowhere (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2973)), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2973)), GALGAS_lstring::constructor_new (object->mAttribute_mPrefix.mAttribute_string.add_operation (GALGAS_string ("lkey"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2974)), object->mAttribute_mEndOfReceiverExpression  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2974)), GALGAS_bool (true), var_objectArrayCppName.add_operation (GALGAS_string ("->mAttribute_lkey"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2976))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2972)) ;
  GALGAS_semanticInstructionListForGeneration var_do_5F_instructionList ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inAnalysisContext, var_localConstantList, GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2980)), object->mAttribute_mDoBranchInstructions, object->mAttribute_mEndOf_5F_do_5F_instructions, ioArgument_ioVariableMap, var_do_5F_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2977)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionList ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2989)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2990)), object->mAttribute_mElseBranchInstructions, object->mAttribute_mEndOf_5F_else_5F_instructions, ioArgument_ioVariableMap, var_else_5F_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2987)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_else_5F_instructions, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2996)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_readOnlyWithInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_receiverExpression, var_objectArrayCppName, var_keyExpression, object->mAttribute_mSearchMethodNameForErrorSignaling.mAttribute_string, var_do_5F_instructionList, var_else_5F_instructionList  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2998))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2998)) ;
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
//          Overriding category method '@readWriteAccessWithInstructionAST enterInstructionInSemanticContext'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_readWriteAccessWithInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                                GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_readWriteAccessWithInstructionAST * object = (const cPtr_readWriteAccessWithInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_readWriteAccessWithInstructionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mKeyExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3013)) ;
  categoryMethod_enterInstructionListInSemanticContext (object->mAttribute_m_5F_do_5F_Instructions, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3014)) ;
  categoryMethod_enterInstructionListInSemanticContext (object->mAttribute_m_5F_else_5F_Instructions, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3015)) ;
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
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mKeyExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3026)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_keyExpression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3025)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mSearchMethodNameForErrorSignaling.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_keyExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3033)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3033)).objectCompare (GALGAS_string ("string"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mEndOfKeyExpression, GALGAS_string ("the key type is '@").add_operation (var_keyExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3034)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3034)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3034)).add_operation (GALGAS_string ("', it should be '@string'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3034))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3034)) ;
    }
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_keyExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3036)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3036)).objectCompare (GALGAS_string ("lstring"))).boolEnum () ;
    if (kBoolTrue == test_2) {
      inCompiler->emitSemanticError (object->mAttribute_mEndOfKeyExpression, GALGAS_string ("the key type is '@").add_operation (var_keyExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3037)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3037)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3037)).add_operation (GALGAS_string ("', it should be '@lstring'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3037))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3037)) ;
    }
  }
  GALGAS_string var_objectArrayCppName = GALGAS_string ("objectArray_").add_operation (object->mAttribute_mInstructionLocation.reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3040)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3040)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3040)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType ;
  GALGAS_string var_receiverVariableCppName ;
  {
  GALGAS_string joker_127418 ; // Joker input parameter
  ioArgument_ioVariableMap.modifier_searchForReadWriteAccess (object->mAttribute_mReceiverName, var_targetType, var_receiverVariableCppName, joker_127418, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3042)) ;
  }
  cEnumerator_lstringlist enumerator_127446 (object->mAttribute_mFieldList, kEnumeration_up) ;
  while (enumerator_127446.hasCurrentObject ()) {
    GALGAS_attributeMap var_attributeMap = var_targetType.reader_mAttributeMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3049)) ;
    var_attributeMap.method_searchKey (enumerator_127446.current_mValue (HERE), var_targetType, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3050)) ;
    enumerator_127446.gotoNextObject () ;
  }
  const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_targetType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3060)).operator_and (function_supportWithAccessor (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3060)) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3060)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_3) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfReceiverExpression, GALGAS_string ("the '@").add_operation (var_targetType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3061)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3061)).add_operation (GALGAS_string ("' type cannot be used in a 'with' instruction"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3061))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3061)) ;
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, object->mAttribute_mSearchMethodNameForErrorSignaling.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_bool var_found = GALGAS_bool (false) ;
    cEnumerator_mapSearchMethodListAST enumerator_128152 (var_targetType.reader_mMapSearchMethodList (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3066)), kEnumeration_up) ;
    bool bool_5 = var_found.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3066)).isValidAndTrue () ;
    if (enumerator_128152.hasCurrentObject () && bool_5) {
      while (enumerator_128152.hasCurrentObject () && bool_5) {
        var_found = GALGAS_bool (kIsEqual, enumerator_128152.current_mSearchMethodName (HERE).mAttribute_string.objectCompare (object->mAttribute_mSearchMethodNameForErrorSignaling.mAttribute_string)) ;
        enumerator_128152.gotoNextObject () ;
        if (enumerator_128152.hasCurrentObject ()) {
          bool_5 = var_found.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3066)).isValidAndTrue () ;
        }
      }
    }
    const enumGalgasBool test_6 = var_found.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3069)).boolEnum () ;
    if (kBoolTrue == test_6) {
      GALGAS_location location_7 (object->mAttribute_mSearchMethodNameForErrorSignaling.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_7, GALGAS_string ("there is no '").add_operation (object->mAttribute_mSearchMethodNameForErrorSignaling.reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3070)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3070)).add_operation (GALGAS_string ("' search method declared in the '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3070)).add_operation (var_targetType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3070)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3070)).add_operation (GALGAS_string ("' map"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3070))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3070)) ;
    }
  }
  {
  ioArgument_ioVariableMap.modifier_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3074)) ;
  }
  GALGAS_localInitializedVariableList var_localInitializedVariableList = GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3076)) ;
  cEnumerator_typedPropertyList enumerator_128680 (var_targetType.reader_mCurrentTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3077)), kEnumeration_up) ;
  while (enumerator_128680.hasCurrentObject ()) {
    var_localInitializedVariableList.addAssign_operation (enumerator_128680.current_mAttributeTypeProxy (HERE), GALGAS_lstring::constructor_new (object->mAttribute_mPrefix.mAttribute_string.add_operation (enumerator_128680.current_mAttributeName (HERE).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3080)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3080)), object->mAttribute_mEndOfReceiverExpression  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3080)), var_objectArrayCppName.add_operation (GALGAS_string ("->mAttribute_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3081)).add_operation (enumerator_128680.current_mAttributeName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3081)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3081))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3078)) ;
    enumerator_128680.gotoNextObject () ;
  }
  GALGAS_localConstantList temp_8 = GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3087)) ;
  temp_8.addAssign_operation (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, GALGAS_string ("lstring").reader_nowhere (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3084)), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3084)), GALGAS_lstring::constructor_new (object->mAttribute_mPrefix.mAttribute_string.add_operation (GALGAS_string ("lkey"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3085)), object->mAttribute_mEndOfReceiverExpression  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3085)), GALGAS_bool (true), var_objectArrayCppName.add_operation (GALGAS_string ("->mAttribute_lkey"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3087))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3087)) ;
  GALGAS_localConstantList var_localConstantList = temp_8 ;
  GALGAS_semanticInstructionListForGeneration var_do_5F_instructionList ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inAnalysisContext, var_localConstantList, var_localInitializedVariableList, object->mAttribute_m_5F_do_5F_Instructions, object->mAttribute_mEndOf_5F_do_5F_instructions, ioArgument_ioVariableMap, var_do_5F_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3089)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionList ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3102)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3103)), object->mAttribute_m_5F_else_5F_Instructions, object->mAttribute_mEndOf_5F_else_5F_instructions, ioArgument_ioVariableMap, var_else_5F_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3100)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_else_5F_instructions, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3109)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_readWriteWithInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_receiverVariableCppName, var_targetType, object->mAttribute_mFieldList, var_objectArrayCppName, var_keyExpression, object->mAttribute_mSearchMethodNameForErrorSignaling.mAttribute_string, var_do_5F_instructionList, var_else_5F_instructionList  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3111))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3111)) ;
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
//                Overriding category method '@switchInstructionAST enterInstructionInSemanticContext'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_switchInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_switchInstructionAST * object = (const cPtr_switchInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_switchInstructionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mSwitchExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3130)) ;
  cEnumerator_switchBranchesAST enumerator_130664 (object->mAttribute_mBranches, kEnumeration_up) ;
  while (enumerator_130664.hasCurrentObject ()) {
    categoryMethod_enterInstructionListInSemanticContext (enumerator_130664.current_mInstructions (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3132)) ;
    enumerator_130664.gotoNextObject () ;
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
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mSwitchExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3145)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_switchExpression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3144)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_switchExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3151)).reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3151)).objectCompare (GALGAS_typeKindEnum::constructor_enumType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3151)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfSwitchExpression, GALGAS_string ("the switch expression type should be an instance of an enumeration type (the '@").add_operation (var_switchExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3154)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3154)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3153)).add_operation (GALGAS_string ("' type is not an enumeration type)"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3154))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3152)) ;
  }
  GALGAS_constantIndexMap var_enumConstantMap = var_switchExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3157)).reader_mEnumConstantMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3157)) ;
  GALGAS_stringset var_constantsNamedInSwitchInstruction = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3158)) ;
  {
  ioArgument_ioVariableMap.modifier_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3160)) ;
  }
  GALGAS_switchBranchesForGeneration var_switchBranchesForGeneration = GALGAS_switchBranchesForGeneration::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3161)) ;
  cEnumerator_switchBranchesAST enumerator_131990 (object->mAttribute_mBranches, kEnumeration_up) ;
  while (enumerator_131990.hasCurrentObject ()) {
    GALGAS_extractedAssociatedValuesForGeneration var_extractedAssociatedValuesForGeneration = GALGAS_extractedAssociatedValuesForGeneration::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3163)) ;
    GALGAS_bool var_firstConstant = GALGAS_bool (true) ;
    cEnumerator_lstringlist enumerator_132146 (enumerator_131990.current_mSwitchConstantList (HERE), kEnumeration_up) ;
    while (enumerator_132146.hasCurrentObject ()) {
      const enumGalgasBool test_1 = var_enumConstantMap.reader_hasKey (enumerator_132146.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3166)) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3166)).boolEnum () ;
      if (kBoolTrue == test_1) {
        const enumGalgasBool test_2 = var_constantsNamedInSwitchInstruction.reader_hasKey (enumerator_132146.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3167)) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3167)).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_location location_3 (enumerator_132146.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_3, GALGAS_string ("the '").add_operation (enumerator_132146.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3169)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3169)).add_operation (GALGAS_string ("' constant is already named in this switch instruction"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3169))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3168)) ;
        }
        var_constantsNamedInSwitchInstruction.addAssign_operation (enumerator_132146.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3171))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3171)) ;
        GALGAS_unifiedTypeMapProxyList var_associatedTypeList ;
        GALGAS_uint joker_132510 ; // Joker input parameter
        var_enumConstantMap.method_searchKey (enumerator_132146.current_mValue (HERE), joker_132510, var_associatedTypeList, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3172)) ;
        const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, var_associatedTypeList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3173)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsEqual, enumerator_131990.current_mAssociatedValuesExtraction (HERE).reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3173)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3173)).boolEnum () ;
        if (kBoolTrue == test_4) {
          GALGAS_location location_5 (enumerator_132146.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_5, GALGAS_string ("the associated values of '").add_operation (enumerator_132146.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3175)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3175)).add_operation (GALGAS_string ("' constant should be extracted"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3175))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3174)) ;
        }else if (kBoolFalse == test_4) {
          const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_associatedTypeList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3176)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsStrictSup, enumerator_131990.current_mAssociatedValuesExtraction (HERE).reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3176)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3176)).boolEnum () ;
          if (kBoolTrue == test_6) {
            GALGAS_location location_7 (enumerator_132146.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_7, GALGAS_string ("the '").add_operation (enumerator_132146.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3178)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3178)).add_operation (GALGAS_string ("' constant has no associated value"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3178))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3177)) ;
          }else if (kBoolFalse == test_6) {
            const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, var_associatedTypeList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3179)).objectCompare (enumerator_131990.current_mAssociatedValuesExtraction (HERE).reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3179)))).boolEnum () ;
            if (kBoolTrue == test_8) {
              GALGAS_string temp_9 ;
              const enumGalgasBool test_10 = GALGAS_bool (kIsStrictSup, var_associatedTypeList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3182)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
              if (kBoolTrue == test_10) {
                temp_9 = GALGAS_string ("s") ;
              }else if (kBoolFalse == test_10) {
                temp_9 = GALGAS_string::makeEmptyString () ;
              }
              GALGAS_location location_11 (enumerator_132146.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
              inCompiler->emitSemanticError (location_11, GALGAS_string ("the '").add_operation (enumerator_132146.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3181)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3181)).add_operation (GALGAS_string ("' constant requires "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3181)).add_operation (var_associatedTypeList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3181)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3181)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3181)).add_operation (GALGAS_string ("  associated value"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3181)).add_operation (temp_9, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3181))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3180)) ;
            }else if (kBoolFalse == test_8) {
              GALGAS_uint var_associatedValueIndex = GALGAS_uint ((uint32_t) 0U) ;
              cEnumerator_unifiedTypeMapProxyList enumerator_133337 (var_associatedTypeList, kEnumeration_up) ;
              cEnumerator_switchExtractedValuesListAST enumerator_133372 (enumerator_131990.current_mAssociatedValuesExtraction (HERE), kEnumeration_up) ;
              while (enumerator_133337.hasCurrentObject () && enumerator_133372.hasCurrentObject ()) {
                const enumGalgasBool test_12 = GALGAS_bool (kIsNotEqual, enumerator_133372.current_mExtractedValueTypeName (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_12) {
                  const enumGalgasBool test_13 = GALGAS_bool (kIsNotEqual, enumerator_133337.current_mType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3187)).objectCompare (enumerator_133372.current_mExtractedValueTypeName (HERE).mAttribute_string)).boolEnum () ;
                  if (kBoolTrue == test_13) {
                    GALGAS_location location_14 (enumerator_133372.current_mExtractedValueTypeName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
                    inCompiler->emitSemanticError (location_14, GALGAS_string ("the required type is '@").add_operation (enumerator_133337.current_mType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3188)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3188)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3188))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3188)) ;
                  }
                }
                const enumGalgasBool test_15 = var_firstConstant.operator_and (GALGAS_bool (kIsNotEqual, enumerator_133372.current_mExtractedValueName (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3191)).boolEnum () ;
                if (kBoolTrue == test_15) {
                  GALGAS_string var_cppName = GALGAS_string ("extractedValue_").add_operation (enumerator_133372.current_mExtractedValueName (HERE).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3192)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3192)) ;
                  var_extractedAssociatedValuesForGeneration.addAssign_operation (enumerator_133337.current_mType (HERE), var_cppName, var_associatedValueIndex  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3193)) ;
                  const enumGalgasBool test_16 = enumerator_133372.current_mMarkedAsUnused (HERE).boolEnum () ;
                  if (kBoolTrue == test_16) {
                    {
                    ioArgument_ioVariableMap.modifier_insertUsedLocalConstant (enumerator_133372.current_mExtractedValueName (HERE), enumerator_133337.current_mType (HERE), var_cppName, var_cppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3195)) ;
                    }
                  }else if (kBoolFalse == test_16) {
                    {
                    ioArgument_ioVariableMap.modifier_insertLocalConstant (enumerator_133372.current_mExtractedValueName (HERE), enumerator_133337.current_mType (HERE), var_cppName, var_cppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3197)) ;
                    }
                  }
                }
                var_associatedValueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3200)) ;
                enumerator_133337.gotoNextObject () ;
                enumerator_133372.gotoNextObject () ;
              }
            }
          }
        }
      }else if (kBoolFalse == test_1) {
        GALGAS_location location_17 (enumerator_132146.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_17, GALGAS_string ("'").add_operation (enumerator_132146.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3205)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3205)).add_operation (GALGAS_string ("' is not a constant of '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3205)).add_operation (var_switchExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3205)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3205)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3205)).add_operation (GALGAS_string ("' enumeration type"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3205))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3204)) ;
      }
      var_firstConstant = GALGAS_bool (false) ;
      enumerator_132146.gotoNextObject () ;
    }
    GALGAS_semanticInstructionListForGeneration var_instructionList ;
    {
    routine_analyzeSemanticInstructionList (constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3211)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3212)), enumerator_131990.current_mInstructions (HERE), enumerator_131990.current_mEndOfBranch (HERE), ioArgument_ioVariableMap, var_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3209)) ;
    }
    var_switchBranchesForGeneration.addAssign_operation (enumerator_131990.current_mSwitchConstantList (HERE), var_extractedAssociatedValuesForGeneration, enumerator_131990.current_mEndOfBranch (HERE).reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3218)), var_instructionList  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3218)) ;
    enumerator_131990.gotoNextObject () ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_switch_5F_instruction, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3220)) ;
  }
  GALGAS_stringset var_forgottenConstants = var_enumConstantMap.reader_keySet (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3222)).substract_operation (var_constantsNamedInSwitchInstruction, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3222)) ;
  const enumGalgasBool test_18 = GALGAS_bool (kIsStrictSup, var_forgottenConstants.reader_count (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3223)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_18) {
    GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
    cEnumerator_stringset enumerator_135145 (var_forgottenConstants, kEnumeration_up) ;
    while (enumerator_135145.hasCurrentObject ()) {
      var_s.dotAssign_operation (GALGAS_string ("\n"
        "  - ").add_operation (enumerator_135145.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3226))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3226)) ;
      enumerator_135145.gotoNextObject () ;
    }
    inCompiler->emitSemanticError (object->mAttribute_mEndOf_5F_switch_5F_instruction, GALGAS_string ("the switch instruction should name all enumeration constants; missing constants are:").add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3229))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3228)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_switchInstructionForGeneration::constructor_new (var_switchExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3233)), var_switchExpression, var_switchBranchesForGeneration  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3232))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3232)) ;
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
//                 Overriding category method '@matchInstructionAST enterInstructionInSemanticContext'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_matchInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                  GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_matchInstructionAST * object = (const cPtr_matchInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_matchInstructionAST) ;
  cEnumerator_semanticExpressionListAST enumerator_135907 (object->mAttribute_mMatchedExpressionList, kEnumeration_up) ;
  while (enumerator_135907.hasCurrentObject ()) {
    callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) enumerator_135907.current_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3246)) ;
    enumerator_135907.gotoNextObject () ;
  }
  cEnumerator_matchInstructionBranchListAST enumerator_136019 (object->mAttribute_mMatchInstructionBranchList, kEnumeration_up) ;
  while (enumerator_136019.hasCurrentObject ()) {
    categoryMethod_enterInstructionListInSemanticContext (enumerator_136019.current_mMatchBranchInstructionList (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3249)) ;
    enumerator_136019.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_matchInstructionAST_enterInstructionInSemanticContext (void) {
  enterCategoryMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_matchInstructionAST.mSlotID,
                                                         categoryMethod_matchInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_matchInstructionAST_enterInstructionInSemanticContext (defineCategoryMethod_matchInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@matchInstructionAST analyzeSemanticInstruction'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_matchInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                           GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                           GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_matchInstructionAST * object = (const cPtr_matchInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_matchInstructionAST) ;
  GALGAS_semanticExpressionListForGeneration var_expressionList = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3259)) ;
  cEnumerator_semanticExpressionListAST enumerator_136555 (object->mAttribute_mMatchedExpressionList, kEnumeration_up) ;
  while (enumerator_136555.hasCurrentObject ()) {
    GALGAS_semanticExpressionForGeneration var_matchedExpression ;
    callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_136555.current_mExpression (HERE).ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3263)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_matchedExpression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3262)) ;
    var_expressionList.addAssign_operation (var_matchedExpression  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3268)) ;
    GALGAS_unifiedTypeMap_2D_proxy var_type = var_matchedExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3270)) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_type.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3271)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3271)))).operator_and (GALGAS_bool (kIsNotEqual, var_type.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3271)).objectCompare (GALGAS_typeKindEnum::constructor_enumType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3271)))) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3271)).boolEnum () ;
    if (kBoolTrue == test_0) {
      inCompiler->emitSemanticError (enumerator_136555.current_mEndOfExpressionLocation (HERE), GALGAS_string ("this expression is an instance of '@").add_operation (var_type.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3273)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3273)).add_operation (GALGAS_string ("' type, but this type is neither an enumeration, neither a class"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3273))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3272)) ;
    }
    enumerator_136555.gotoNextObject () ;
  }
  {
  ioArgument_ioVariableMap.modifier_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3277)) ;
  }
  GALGAS_matchInstructionBranchListForGeneration var_matchInstructionBranchList = GALGAS_matchInstructionBranchListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3278)) ;
  cEnumerator_matchInstructionBranchListAST enumerator_137410 (object->mAttribute_mMatchInstructionBranchList, kEnumeration_up) ;
  while (enumerator_137410.hasCurrentObject ()) {
    GALGAS_localConstantList var_localConstantList = GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3281)) ;
    GALGAS_matchListForGeneration var_matchListForGeneration = GALGAS_matchListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3282)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_expressionList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3283)).objectCompare (enumerator_137410.current_mMatchEntryList (HERE).reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3283)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      cEnumerator_semanticExpressionListForGeneration enumerator_137653 (var_expressionList, kEnumeration_up) ;
      cEnumerator_matchEntryListAST enumerator_137676 (enumerator_137410.current_mMatchEntryList (HERE), kEnumeration_up) ;
      while (enumerator_137653.hasCurrentObject () && enumerator_137676.hasCurrentObject ()) {
        GALGAS_unifiedTypeMap_2D_proxy var_type = enumerator_137653.current_mExpression (HERE).reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3285)) ;
        const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_type.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3286)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3286)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          const enumGalgasBool test_3 = enumerator_137676.current_mIsType (HERE).boolEnum () ;
          if (kBoolTrue == test_3) {
            GALGAS_unifiedTypeMap_2D_proxy var_namedType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, enumerator_137676.current_mTypeNameOrEnumerationConstantName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3288)) ;
            GALGAS_unifiedTypeMap_2D_proxy var_t = var_type ;
            GALGAS_bool var_found = GALGAS_bool (kIsEqual, var_t.objectCompare (var_namedType)) ;
            if (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap.reader_count (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3291)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3291)).isValid ()) {
              uint32_t variant_138060 = constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap.reader_count (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3291)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3291)).uintValue () ;
              bool loop_138060 = true ;
              while (loop_138060) {
                loop_138060 = var_found.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3292)).operator_and (var_t.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3292)).reader_isNull (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3292)).operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3292)) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3292)).isValid () ;
                if (loop_138060) {
                  loop_138060 = var_found.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3292)).operator_and (var_t.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3292)).reader_isNull (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3292)).operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3292)) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3292)).boolValue () ;
                }
                if (loop_138060 && (0 == variant_138060)) {
                  loop_138060 = false ;
                  inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3291)) ;
                }
                if (loop_138060) {
                  variant_138060 -- ;
                  var_t = var_t.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3293)) ;
                  var_found = GALGAS_bool (kIsEqual, var_t.objectCompare (var_namedType)) ;
                }
              }
            }
            const enumGalgasBool test_4 = var_found.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3296)).boolEnum () ;
            if (kBoolTrue == test_4) {
              GALGAS_location location_5 (enumerator_137676.current_mTypeNameOrEnumerationConstantName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
              inCompiler->emitSemanticError (location_5, GALGAS_string ("the '@").add_operation (enumerator_137676.current_mTypeNameOrEnumerationConstantName (HERE).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3298)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3298)).add_operation (GALGAS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3298)).add_operation (var_type.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3298)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3298)).add_operation (GALGAS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3298))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3297)) ;
            }else if (kBoolFalse == test_4) {
              const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, enumerator_137676.current_mLocalConstantName (HERE).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3299)).reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3299)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
              if (kBoolTrue == test_6) {
                var_localConstantList.addAssign_operation (var_t, enumerator_137676.current_mLocalConstantName (HERE), GALGAS_bool (false), GALGAS_string ("match_instruction_constant_name")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3300)) ;
              }
            }
          }else if (kBoolFalse == test_3) {
            GALGAS_location location_7 (enumerator_137676.current_mTypeNameOrEnumerationConstantName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_7, GALGAS_string ("a type that inherits from '@").add_operation (enumerator_137653.current_mExpression (HERE).reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3304)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3304)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3304)).add_operation (GALGAS_string ("' class is expected here"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3304))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3303)) ;
          }
          var_matchListForGeneration.addAssign_operation (GALGAS_bool (true), enumerator_137676.current_mTypeNameOrEnumerationConstantName (HERE).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3306)), enumerator_137676.current_mLocalConstantName (HERE).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3306))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3306)) ;
        }else if (kBoolFalse == test_2) {
          const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, var_type.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3307)).objectCompare (GALGAS_typeKindEnum::constructor_enumType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3307)))).boolEnum () ;
          if (kBoolTrue == test_8) {
            const enumGalgasBool test_9 = enumerator_137676.current_mIsType (HERE).boolEnum () ;
            if (kBoolTrue == test_9) {
              GALGAS_location location_10 (enumerator_137676.current_mTypeNameOrEnumerationConstantName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
              inCompiler->emitSemanticError (location_10, GALGAS_string ("a constant of the '@").add_operation (enumerator_137653.current_mExpression (HERE).reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3310)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3310)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3310)).add_operation (GALGAS_string ("' enumeration type is expected here"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3310))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3309)) ;
            }else if (kBoolFalse == test_9) {
              const enumGalgasBool test_11 = var_type.reader_mEnumConstantMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3311)).reader_hasKey (enumerator_137676.current_mTypeNameOrEnumerationConstantName (HERE).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3311)) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3311)).operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3311)).boolEnum () ;
              if (kBoolTrue == test_11) {
                GALGAS_location location_12 (enumerator_137676.current_mTypeNameOrEnumerationConstantName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
                inCompiler->emitSemanticError (location_12, GALGAS_string ("the '").add_operation (enumerator_137676.current_mTypeNameOrEnumerationConstantName (HERE).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3313)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3313)).add_operation (GALGAS_string ("' symbol is not a constant of the '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3313)).add_operation (enumerator_137653.current_mExpression (HERE).reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3313)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3313)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3313)).add_operation (GALGAS_string ("' enumeration type"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3313))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3312)) ;
              }
            }
            var_matchListForGeneration.addAssign_operation (GALGAS_bool (false), enumerator_137676.current_mTypeNameOrEnumerationConstantName (HERE).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3317)), enumerator_137653.current_mExpression (HERE).reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3318)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3318))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3315)) ;
          }else if (kBoolFalse == test_8) {
            GALGAS_location location_13 (enumerator_137676.current_mTypeNameOrEnumerationConstantName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_13, GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3320)) ;
          }
        }
        enumerator_137653.gotoNextObject () ;
        enumerator_137676.gotoNextObject () ;
      }
    }else if (kBoolFalse == test_1) {
      inCompiler->emitSemanticError (enumerator_137410.current_mEndOfMatchEntryList (HERE), GALGAS_string ("this match list should contain ").add_operation (var_expressionList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3325)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3325)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3325)).add_operation (GALGAS_string (" elements, but it acually contains "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3325)).add_operation (enumerator_137410.current_mMatchEntryList (HERE).reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3326)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3326)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3325))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3324)) ;
    }
    GALGAS_semanticInstructionListForGeneration var_instructionList ;
    {
    routine_analyzeSemanticInstructionList (constinArgument_inAnalysisContext, var_localConstantList, GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3333)), enumerator_137410.current_mMatchBranchInstructionList (HERE), enumerator_137410.current_mEndOf_5F_instructionList (HERE), ioArgument_ioVariableMap, var_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3330)) ;
    }
    var_matchInstructionBranchList.addAssign_operation (var_matchListForGeneration, var_instructionList  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3340)) ;
    enumerator_137410.gotoNextObject () ;
  }
  GALGAS_semanticInstructionListForGeneration var_elseInstructionList ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3346)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3347)), object->mAttribute_mElseInstructionList, object->mAttribute_mEndOf_5F_match_5F_instruction, ioArgument_ioVariableMap, var_elseInstructionList, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3344)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_match_5F_instruction, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3354)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_matchInstructionForGeneration::constructor_new (var_expressionList, var_matchInstructionBranchList, var_elseInstructionList  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3356))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 3356)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_matchInstructionAST_analyzeSemanticInstruction (void) {
  enterCategoryMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_matchInstructionAST.mSlotID,
                                                  categoryMethod_matchInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_matchInstructionAST_analyzeSemanticInstruction (defineCategoryMethod_matchInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category method '@predefinedTypeAST semanticAnalysis'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_predefinedTypeAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
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

static void defineCategoryMethod_predefinedTypeAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_predefinedTypeAST.mSlotID,
                                        categoryMethod_predefinedTypeAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_predefinedTypeAST_semanticAnalysis (defineCategoryMethod_predefinedTypeAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@graphDeclarationAST semanticAnalysis'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_graphDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_associatedListTypeProxy.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 137)).objectCompare (GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("semanticAnalysis.galgas", 137)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mAssociatedListTypeName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the '@").add_operation (object->mAttribute_mAssociatedListTypeName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 138)).add_operation (GALGAS_string ("' type should be a list"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 138))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 138)) ;
  }
  GALGAS_stringset var_reservedModifierNames = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 141)) ;
  var_reservedModifierNames.addAssign_operation (GALGAS_string ("noteNode")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 142)) ;
  var_reservedModifierNames.addAssign_operation (GALGAS_string ("addArc")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 143)) ;
  cEnumerator_graphInsertModifierList enumerator_9276 (object->mAttribute_mInsertModifierList, kEnumeration_up) ;
  while (enumerator_9276.hasCurrentObject ()) {
    const enumGalgasBool test_2 = var_reservedModifierNames.reader_hasKey (enumerator_9276.current_mInsertModifierName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 145)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 145)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (enumerator_9276.current_mInsertModifierName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_3, GALGAS_string ("the '").add_operation (enumerator_9276.current_mInsertModifierName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 146)).add_operation (GALGAS_string ("' setter name is reserved for a graph type"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 146))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 146)) ;
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters (enumerator_9276.current_mInsertErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 148)) ;
    }
    enumerator_9276.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("graph ").add_operation (object->mAttribute_mGraphTypeName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 152)), GALGAS_graphDeclarationForGeneration::constructor_new (var_graphTypeProxy, var_associatedListTypeProxy, var_associatedListElementTypeProxy, object->mAttribute_mInsertModifierList  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 153)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 151)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_graphDeclarationAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_graphDeclarationAST.mSlotID,
                                        categoryMethod_graphDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_graphDeclarationAST_semanticAnalysis (defineCategoryMethod_graphDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@externTypeDeclarationAST semanticAnalysis'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_externTypeDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                      const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                      const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                      const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                      GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externTypeDeclarationAST * object = (const cPtr_externTypeDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externTypeDeclarationAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_externTypeProxy = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mExternTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 168)) ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extern type ").add_operation (object->mAttribute_mExternTypeName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 171)), GALGAS_externTypeDeclarationForGeneration::constructor_new (var_externTypeProxy, object->mAttribute_mExternTypeName.mAttribute_string, object->mAttribute_mCppPreDeclarationCode, object->mAttribute_mCppClassCode  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 172)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 170)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_externTypeDeclarationAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_externTypeDeclarationAST.mSlotID,
                                        categoryMethod_externTypeDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_externTypeDeclarationAST_semanticAnalysis (defineCategoryMethod_externTypeDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@arrayDeclarationAST semanticAnalysis'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_arrayDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                 const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                 const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                 const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                 GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_arrayDeclarationAST * object = (const cPtr_arrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_arrayDeclarationAST) ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("array ").add_operation (object->mAttribute_mArrayTypeName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 189)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 189)), GALGAS_arrayTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mArrayTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 191)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mElementTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 192)), object->mAttribute_mDimension.reader_uint (SOURCE_FILE ("semanticAnalysis.galgas", 193))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 190)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 188)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_arrayDeclarationAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_arrayDeclarationAST.mSlotID,
                                        categoryMethod_arrayDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_arrayDeclarationAST_semanticAnalysis (defineCategoryMethod_arrayDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@listmapDeclarationAST semanticAnalysis'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_listmapDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
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
    GALGAS_location location_1 (object->mAttribute_mAssociatedListTypeName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("associated type should be a list type")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 217)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("list map ").add_operation (object->mAttribute_mListmapTypeName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 221)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 221)), GALGAS_listmapTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mListmapTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 223)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mAssociatedListTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 224)), var_listTypeAttributeList, GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (object->mAttribute_mListmapTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 226)), object->mAttribute_mListmapTypeName.mAttribute_location  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 226)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 226))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 222)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 220)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_listmapDeclarationAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_listmapDeclarationAST.mSlotID,
                                        categoryMethod_listmapDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_listmapDeclarationAST_semanticAnalysis (defineCategoryMethod_listmapDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category method '@mapDeclarationAST semanticAnalysis'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_mapDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                               const GALGAS_string /* constinArgument_inProductDirectory */,
                                                               const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                               const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                               GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapDeclarationAST * object = (const cPtr_mapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapDeclarationAST) ;
  GALGAS_typedPropertyList var_typedAttributeList = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 301)) ;
  GALGAS_attributeIndexMap var_attributeMap = GALGAS_attributeIndexMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 302)) ;
  cEnumerator_propertyInCollectionListAST enumerator_15709 (object->mAttribute_mPropertyList, kEnumeration_up) ;
  while (enumerator_15709.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_t = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_15709.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 304)) ;
    GALGAS_bool var_hasSetter = GALGAS_bool (true) ;
    GALGAS_bool var_hasGetter = GALGAS_bool (true) ;
    var_typedAttributeList.addAssign_operation (var_t, enumerator_15709.current_mPropertyName (HERE), var_hasSetter, var_hasGetter  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 307)) ;
    const enumGalgasBool test_0 = function_forbiddenKeysForMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 312)).reader_hasKey (enumerator_15709.current_mPropertyName (HERE).mAttribute_string COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 312)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_m = GALGAS_string ("an attribute cannot be named:") ;
      cEnumerator_stringset enumerator_16101 (function_forbiddenKeysForMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 314)), kEnumeration_up) ;
      while (enumerator_16101.hasCurrentObject ()) {
        var_m.dotAssign_operation (GALGAS_string (" ").add_operation (enumerator_16101.current (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 315))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 315)) ;
        enumerator_16101.gotoNextObject () ;
      }
      var_m.dotAssign_operation (GALGAS_string ("; theses names are reserved")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 317)) ;
      GALGAS_location location_1 (enumerator_15709.current_mPropertyName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_1, var_m  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 318)) ;
    }
    {
    var_attributeMap.modifier_insertKey (enumerator_15709.current_mPropertyName (HERE), var_t, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 320)) ;
    }
    enumerator_15709.gotoNextObject () ;
  }
  GALGAS_insertMethodMap var_insertMethodMap = GALGAS_insertMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 323)) ;
  cEnumerator_insertMethodListAST enumerator_16374 (object->mAttribute_mInsertMethodList, kEnumeration_up) ;
  while (enumerator_16374.hasCurrentObject ()) {
    {
    var_insertMethodMap.modifier_insertKey (enumerator_16374.current_mInsertMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 325)) ;
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters (enumerator_16374.current_mErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 326)) ;
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters (enumerator_16374.current_mShadowErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 327)) ;
    }
    enumerator_16374.gotoNextObject () ;
  }
  GALGAS_searchMethodMap var_searchMethodMap = GALGAS_searchMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 330)) ;
  cEnumerator_mapSearchMethodListAST enumerator_16649 (object->mAttribute_mSearchMethodList, kEnumeration_up) ;
  while (enumerator_16649.hasCurrentObject ()) {
    {
    var_searchMethodMap.modifier_insertKey (enumerator_16649.current_mSearchMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 332)) ;
    }
    {
    routine_check_5F_K_5F_escapeCharacters (enumerator_16649.current_mErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 333)) ;
    }
    enumerator_16649.gotoNextObject () ;
  }
  cEnumerator_mapRemoveMethodListAST enumerator_16815 (object->mAttribute_mRemoveMethodList, kEnumeration_up) ;
  while (enumerator_16815.hasCurrentObject ()) {
    {
    var_insertMethodMap.modifier_insertKey (enumerator_16815.current_mMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 337)) ;
    }
    {
    routine_check_5F_K_5F_escapeCharacters (enumerator_16815.current_mErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 338)) ;
    }
    enumerator_16815.gotoNextObject () ;
  }
  cEnumerator_insertOrReplaceDeclarationListAST enumerator_17032 (object->mAttribute_mInsertOrReplaceDeclarationListAST, kEnumeration_up) ;
  GALGAS_uint index_16991 ((uint32_t) 0) ;
  while (enumerator_17032.hasCurrentObject ()) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, index_16991.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      inCompiler->emitSemanticWarning (enumerator_17032.current_mInsertOrReplaceDeclarationLocation (HERE), GALGAS_string ("the 'insertOrReplace' setter is already declared")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 343)) ;
    }
    enumerator_17032.gotoNextObject () ;
    index_16991.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 341)) ;
  }
  GALGAS_bool var_hasInsertOrReplaceModifier = GALGAS_bool (kIsStrictSup, object->mAttribute_mInsertOrReplaceDeclarationListAST.reader_length (SOURCE_FILE ("semanticAnalysis.galgas", 346)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  const enumGalgasBool test_3 = var_hasInsertOrReplaceModifier.operator_and (var_insertMethodMap.reader_hasKey (GALGAS_string ("insertOrReplace") COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 347)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 347)).boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_location var_insertOrReplaceDeclarationLocation ;
    object->mAttribute_mInsertOrReplaceDeclarationListAST.method_first (var_insertOrReplaceDeclarationLocation, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 349)) ;
    inCompiler->emitSemanticError (var_insertOrReplaceDeclarationLocation, GALGAS_string ("the insertOrReplace' setter cannot be declared : an insert modifier or a remove modifier has been declared with this name")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 350)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("map ").add_operation (object->mAttribute_mMapTypeName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 363)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 363)), GALGAS_mapTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mMapTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 365)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (object->mAttribute_mMapTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 366)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 366)), object->mAttribute_mMapTypeName.mAttribute_location  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 366)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 366)), object->mAttribute_mMapTypeName, var_typedAttributeList, object->mAttribute_mInsertMethodList, object->mAttribute_mSearchMethodList, object->mAttribute_mRemoveMethodList, var_hasInsertOrReplaceModifier  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 364)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 362)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_mapDeclarationAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_mapDeclarationAST.mSlotID,
                                        categoryMethod_mapDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_mapDeclarationAST_semanticAnalysis (defineCategoryMethod_mapDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@externFunctionDeclarationAST semanticAnalysis'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_externFunctionDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                          const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                          const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                          const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                          GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externFunctionDeclarationAST * object = (const cPtr_externFunctionDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externFunctionDeclarationAST) ;
  GALGAS_formalInputParameterListForGeneration var_formalArgumentList = GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 490)) ;
  cEnumerator_formalInputParameterListAST enumerator_24004 (object->mAttribute_mFormalArgumentList, kEnumeration_up) ;
  while (enumerator_24004.hasCurrentObject ()) {
    var_formalArgumentList.addAssign_operation (enumerator_24004.current_mFormalSelector (HERE), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_24004.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 494)), enumerator_24004.current_mFormalArgumentName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 495)), enumerator_24004.current_mFormalArgumentName (HERE), enumerator_24004.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 492)) ;
    enumerator_24004.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extern func ").add_operation (object->mAttribute_mFunctionName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 500)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 500)), GALGAS_functionPrototypeDeclarationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("func-").add_operation (object->mAttribute_mFunctionName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 503)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 503)), object->mAttribute_mFunctionName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 504)), var_formalArgumentList, GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mResultTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 506))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 501)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 499)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_externFunctionDeclarationAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_externFunctionDeclarationAST.mSlotID,
                                        categoryMethod_externFunctionDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_externFunctionDeclarationAST_semanticAnalysis (defineCategoryMethod_externFunctionDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@externRoutineDeclarationAST semanticAnalysis'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_externRoutineDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                         const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                         const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                         const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                         GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externRoutineDeclarationAST * object = (const cPtr_externRoutineDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externRoutineDeclarationAST) ;
  GALGAS_formalParameterListForGeneration var_formalArgumentList = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 517)) ;
  cEnumerator_formalParameterListAST enumerator_25105 (object->mAttribute_mFormalArgumentList, kEnumeration_up) ;
  while (enumerator_25105.hasCurrentObject ()) {
    var_formalArgumentList.addAssign_operation (enumerator_25105.current_mFormalSelector (HERE), enumerator_25105.current_mFormalArgumentPassingMode (HERE), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_25105.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 522)), enumerator_25105.current_mFormalArgumentName (HERE), enumerator_25105.current_mFormalArgumentName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 524))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 519)) ;
    enumerator_25105.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extern proc ").add_operation (object->mAttribute_mRoutineName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 527)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 527)), GALGAS_routinePrototypeDeclarationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("proc-").add_operation (object->mAttribute_mRoutineName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 530)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 530)), object->mAttribute_mRoutineName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 531)), var_formalArgumentList  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 528)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 526)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_externRoutineDeclarationAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_externRoutineDeclarationAST.mSlotID,
                                        categoryMethod_externRoutineDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_externRoutineDeclarationAST_semanticAnalysis (defineCategoryMethod_externRoutineDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@routineDeclarationAST semanticAnalysis'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_routineDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                   const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                   const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                   const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                   GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_routineDeclarationAST * object = (const cPtr_routineDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_routineDeclarationAST) ;
  GALGAS_formalParameterListForGeneration var_formalArgumentList = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 544)) ;
  GALGAS_semanticInstructionListForGeneration var_instructionList ;
  GALGAS_analysisContext var_analysisContext = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 549)), GALGAS_string::makeEmptyString (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 551))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 546)) ;
  {
  routine_analyzeRoutineBody (var_analysisContext, object->mAttribute_mFormalArgumentList, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 555)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 556)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 557)), GALGAS_string::makeEmptyString (), object->mAttribute_mRoutineInstructionList, object->mAttribute_mEndOfRoutineInstructionList, var_instructionList, var_formalArgumentList, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 552)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("proc ").add_operation (object->mAttribute_mRoutineName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 566)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 566)), GALGAS_routineImplementationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("proc-").add_operation (object->mAttribute_mRoutineName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 569)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 569)), object->mAttribute_mRoutineName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 570)), var_formalArgumentList, GALGAS_bool (false), var_instructionList  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 567)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 565)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_routineDeclarationAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_routineDeclarationAST.mSlotID,
                                        categoryMethod_routineDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_routineDeclarationAST_semanticAnalysis (defineCategoryMethod_routineDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@classDeclarationAST semanticAnalysis'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_classDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                 const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                 const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                 const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                 GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classDeclarationAST * object = (const cPtr_classDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_classDeclarationAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mClassTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 585)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_superClassProxy ;
  GALGAS_typedPropertyList var_allAttributeList ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mSuperClassName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 591)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_superClassProxy = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 592)) ;
    var_allAttributeList = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 593)) ;
    GALGAS_bool var_generatedInSeparateFileFeature = GALGAS_bool (false) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, object->mAttribute_mClassFeatureList.reader_length (SOURCE_FILE ("semanticAnalysis.galgas", 595)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      cEnumerator_lstringlist enumerator_27995 (object->mAttribute_mClassFeatureList, kEnumeration_up) ;
      while (enumerator_27995.hasCurrentObject ()) {
        const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_27995.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 597)).objectCompare (GALGAS_string ("generatedInSeparateFile"))).boolEnum () ;
        if (kBoolTrue == test_2) {
          const enumGalgasBool test_3 = var_generatedInSeparateFileFeature.boolEnum () ;
          if (kBoolTrue == test_3) {
            GALGAS_location location_4 (enumerator_27995.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_4, GALGAS_string ("the 'generatedInSeparateFile' is already named")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 599)) ;
          }
          var_generatedInSeparateFileFeature = GALGAS_bool (true) ;
        }else if (kBoolFalse == test_2) {
          GALGAS_location location_5 (enumerator_27995.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_5, GALGAS_string ("only the 'generatedInSeparateFile' feature is allowed here")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 603)) ;
        }
        enumerator_27995.gotoNextObject () ;
      }
    }
  }else if (kBoolFalse == test_0) {
    var_superClassProxy = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mSuperClassName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 608)) ;
    var_allAttributeList = var_superClassProxy.reader_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 609)) ;
    const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, object->mAttribute_mClassFeatureList.reader_length (SOURCE_FILE ("semanticAnalysis.galgas", 610)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_6) {
      cEnumerator_lstringlist enumerator_28620 (object->mAttribute_mClassFeatureList, kEnumeration_up) ;
      while (enumerator_28620.hasCurrentObject ()) {
        GALGAS_location location_7 (enumerator_28620.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_7, GALGAS_string ("a class that has a super class does not accept any feature")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 612)) ;
        enumerator_28620.gotoNextObject () ;
      }
    }
  }
  GALGAS_typedPropertyList var_typedAttributeList = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 617)) ;
  GALGAS_attributeIndexMap var_attributeMap = GALGAS_attributeIndexMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 618)) ;
  cEnumerator_propertyInCollectionListAST enumerator_28888 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_28888.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_t = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_28888.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 620)) ;
    GALGAS_bool var_hasSetter = GALGAS_bool (false) ;
    GALGAS_bool var_hasGetter = GALGAS_bool (true) ;
    cEnumerator_lstringlist enumerator_29066 (enumerator_28888.current_mFeatureList (HERE), kEnumeration_up) ;
    while (enumerator_29066.hasCurrentObject ()) {
      const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, enumerator_29066.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 624)).objectCompare (GALGAS_string ("setter"))).boolEnum () ;
      if (kBoolTrue == test_8) {
        const enumGalgasBool test_9 = var_hasSetter.boolEnum () ;
        if (kBoolTrue == test_9) {
          GALGAS_location location_10 (enumerator_29066.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_10, GALGAS_string ("the 'setter' feature is already named")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 626)) ;
        }
        var_hasSetter = GALGAS_bool (true) ;
      }else if (kBoolFalse == test_8) {
        const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, enumerator_29066.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 629)).objectCompare (GALGAS_string ("nogetter"))).boolEnum () ;
        if (kBoolTrue == test_11) {
          const enumGalgasBool test_12 = var_hasGetter.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 630)).boolEnum () ;
          if (kBoolTrue == test_12) {
            GALGAS_location location_13 (enumerator_29066.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_13, GALGAS_string ("the 'nogetter' feature is already named")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 631)) ;
          }
          var_hasGetter = GALGAS_bool (false) ;
        }else if (kBoolFalse == test_11) {
          GALGAS_location location_14 (enumerator_29066.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_14, GALGAS_string ("only the 'setter' or 'nogetter' are allowed here")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 635)) ;
        }
      }
      enumerator_29066.gotoNextObject () ;
    }
    var_typedAttributeList.addAssign_operation (var_t, enumerator_28888.current_mPropertyName (HERE), var_hasSetter, var_hasGetter  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 638)) ;
    var_allAttributeList.addAssign_operation (var_t, enumerator_28888.current_mPropertyName (HERE), var_hasSetter, var_hasGetter  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 643)) ;
    {
    var_attributeMap.modifier_insertKey (enumerator_28888.current_mPropertyName (HERE), var_t, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 648)) ;
    }
    enumerator_28888.gotoNextObject () ;
  }
  GALGAS_string var_sortString = var_selfType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 651)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_t = var_selfType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 652)) ;
  if (constinArgument_inSemanticContext.mAttribute_mTypeMap.reader_count (SOURCE_FILE ("semanticAnalysis.galgas", 653)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 653)).isValid ()) {
    uint32_t variant_29914 = constinArgument_inSemanticContext.mAttribute_mTypeMap.reader_count (SOURCE_FILE ("semanticAnalysis.galgas", 653)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 653)).uintValue () ;
    bool loop_29914 = true ;
    while (loop_29914) {
      loop_29914 = var_t.reader_isNull (SOURCE_FILE ("semanticAnalysis.galgas", 654)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 654)).isValid () ;
      if (loop_29914) {
        loop_29914 = var_t.reader_isNull (SOURCE_FILE ("semanticAnalysis.galgas", 654)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 654)).boolValue () ;
      }
      if (loop_29914 && (0 == variant_29914)) {
        loop_29914 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticAnalysis.galgas", 653)) ;
      }
      if (loop_29914) {
        variant_29914 -- ;
        var_sortString = var_t.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 655)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 655)).add_operation (var_sortString, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 655)) ;
        var_t = var_t.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 656)) ;
      }
    }
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("class ").add_operation (object->mAttribute_mClassTypeName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 660)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 660)), GALGAS_classTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mClassTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 662)), object->mAttribute_mIsAbstract, object->mAttribute_mClassTypeName, var_superClassProxy, var_allAttributeList, var_typedAttributeList, var_selfType.reader_mGenerateHeaderInSeparateFile (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 668))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 661)), var_sortString  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 659)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_classDeclarationAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_classDeclarationAST.mSlotID,
                                        categoryMethod_classDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_classDeclarationAST_semanticAnalysis (defineCategoryMethod_classDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@functionDeclarationAST semanticAnalysis'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_functionDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
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
  GALGAS_analysisContext var_analysisContext = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 761)), GALGAS_string::makeEmptyString (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 763))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 758)) ;
  {
  routine_analyzeFunctionBody (var_analysisContext, object->mAttribute_mFormalArgumentList, GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 767)), GALGAS_string::makeEmptyString (), object->mAttribute_mFunctionInstructionList, object->mAttribute_mResultVariableName, object->mAttribute_mResultTypeName, object->mAttribute_mEndOfFunctionInstructionList, var_formalInputParameterList, var_returnType, var_resultVariableCppName, var_semanticInstructionListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 764)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("function ").add_operation (object->mAttribute_mFunctionName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 780)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 780)), GALGAS_functionImplementationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("func-").add_operation (object->mAttribute_mFunctionName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 783)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 783)), object->mAttribute_mFunctionName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 784)), var_formalInputParameterList, var_returnType, var_resultVariableCppName, var_semanticInstructionListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 781)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 779)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_functionDeclarationAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_functionDeclarationAST.mSlotID,
                                        categoryMethod_functionDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_functionDeclarationAST_semanticAnalysis (defineCategoryMethod_functionDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@onceFunctionDeclarationAST semanticAnalysis'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_onceFunctionDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
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
  GALGAS_analysisContext var_analysisContext = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 806)), GALGAS_string::makeEmptyString (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 808))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 803)) ;
  {
  GALGAS_formalInputParameterListForGeneration joker_36154 ; // Joker input parameter
  routine_analyzeFunctionBody (var_analysisContext, GALGAS_formalInputParameterListAST::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 811)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 812)), GALGAS_string::makeEmptyString (), object->mAttribute_mFunctionInstructionList, object->mAttribute_mResultVariableName, object->mAttribute_mResultTypeName, object->mAttribute_mEndOfFunctionInstructionList, joker_36154, var_returnType, var_resultVariableCppName, var_semanticInstructionListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 809)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("once function ").add_operation (object->mAttribute_mFunctionName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 825)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 825)), GALGAS_onceFunctionDeclarationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("func-").add_operation (object->mAttribute_mFunctionName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 828)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 828)), object->mAttribute_mFunctionName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 829)), var_returnType, var_resultVariableCppName, var_semanticInstructionListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 826)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 824)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_onceFunctionDeclarationAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_onceFunctionDeclarationAST.mSlotID,
                                        categoryMethod_onceFunctionDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_onceFunctionDeclarationAST_semanticAnalysis (defineCategoryMethod_onceFunctionDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@filewrapperDeclarationAST semanticAnalysis'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_filewrapperDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
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
  GALGAS_lstring joker_37568 ; // Joker input parameter
  GALGAS_lstringlist joker_37575 ; // Joker input parameter
  GALGAS_filewrapperTemplateMap joker_37672_2 ; // Joker input parameter
  GALGAS_bool joker_37672_1 ; // Joker input parameter
  constinArgument_inSemanticContext.mAttribute_mFilewrapperMap.method_searchKey (object->mAttribute_mFilewrapperName, joker_37568, joker_37575, var_wrapperFileMap, var_wrapperDirectoryMap, joker_37672_2, joker_37672_1, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 848)) ;
  GALGAS_string var_absoluteSourcePath ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mFilewrapperPath.mAttribute_string.reader_firstCharacterOrNul (SOURCE_FILE ("semanticAnalysis.galgas", 858)).objectCompare (GALGAS_char (TO_UNICODE (47)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_absoluteSourcePath = object->mAttribute_mFilewrapperPath.mAttribute_string ;
  }else if (kBoolFalse == test_0) {
    var_absoluteSourcePath = object->mAttribute_mSourceFileAbsolutePath.reader_stringByDeletingLastPathComponent (SOURCE_FILE ("semanticAnalysis.galgas", 861)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 861)).add_operation (object->mAttribute_mFilewrapperPath.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 861)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 861)) ;
  }
  const enumGalgasBool test_1 = var_absoluteSourcePath.reader_directoryExists (SOURCE_FILE ("semanticAnalysis.galgas", 863)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 863)).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_location location_2 (object->mAttribute_mFilewrapperPath.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_2, GALGAS_string ("The '").add_operation (var_absoluteSourcePath, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 864)).add_operation (GALGAS_string ("' directory does not exist"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 864))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 864)) ;
  }else if (kBoolFalse == test_1) {
    GALGAS_filewrapperTemplateListForGeneration var_filewrapperTemplateListForGeneration = GALGAS_filewrapperTemplateListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 867)) ;
    cEnumerator_filewrapperTemplateListAST enumerator_38295 (object->mAttribute_mFilewrapperTemplateList, kEnumeration_up) ;
    while (enumerator_38295.hasCurrentObject ()) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_38295.current_mFilewrapperTemplatePath (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 869)).reader_firstCharacterOrNul (SOURCE_FILE ("semanticAnalysis.galgas", 869)).objectCompare (GALGAS_char (TO_UNICODE (47)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_location location_4 (enumerator_38295.current_mFilewrapperTemplatePath (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_4, GALGAS_string ("the path should not begin with a '/'; it is relative to filewrapper path '").add_operation (var_absoluteSourcePath, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 870)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 870))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 870)) ;
      }
      GALGAS_string var_absoluteTemplatePath = var_absoluteSourcePath.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 872)).add_operation (enumerator_38295.current_mFilewrapperTemplatePath (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 872)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 872)) ;
      GALGAS_templateInstructionListAST var_resultingInstructionList ;
      var_resultingInstructionList.drop () ;
      cGrammar_templateGrammar::_performSourceFileParsing_ (inCompiler, GALGAS_lstring::constructor_new (var_absoluteTemplatePath, enumerator_38295.current_mFilewrapperTemplatePath (HERE).reader_location (SOURCE_FILE ("semanticAnalysis.galgas", 875))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 875)), var_resultingInstructionList  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 875)) ;
      GALGAS_templateVariableMap var_templateVariableMap = GALGAS_templateVariableMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 877)) ;
      GALGAS_formalInputParameterListForGeneration var_filewrapperTemplateFormalInputParameters = GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 878)) ;
      cEnumerator_formalTemplateInputParameterListAST enumerator_39089 (enumerator_38295.current_mFilewrapperTemplateFormalInputParameters (HERE), kEnumeration_up) ;
      while (enumerator_39089.hasCurrentObject ()) {
        GALGAS_unifiedTypeMap_2D_proxy var_type = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_39089.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 880)) ;
        GALGAS_string var_cppVarName = GALGAS_string ("in_").add_operation (enumerator_39089.current_mFormalArgumentName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 881)).reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 881)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 881)) ;
        {
        var_templateVariableMap.modifier_insertKey (enumerator_39089.current_mFormalArgumentName (HERE), var_type, var_cppVarName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 882)) ;
        }
        var_filewrapperTemplateFormalInputParameters.addAssign_operation (enumerator_39089.current_mFormalTemplateSelector (HERE), var_type, var_cppVarName, enumerator_39089.current_mFormalArgumentName (HERE), GALGAS_bool (true)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 883)) ;
        enumerator_39089.gotoNextObject () ;
      }
      GALGAS_templateInstructionListForGeneration var_templateInstructionListForGeneration = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 886)) ;
      GALGAS_templateAnalysisContext var_templateAnalysisContext = GALGAS_templateAnalysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_templateVariableMap  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 887)) ;
      {
      routine_templateInstructionListAnalysis (var_templateAnalysisContext, var_resultingInstructionList, var_templateInstructionListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 891)) ;
      }
      var_filewrapperTemplateListForGeneration.addAssign_operation (enumerator_38295.current_mFilewrapperTemplateName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 894)), var_filewrapperTemplateFormalInputParameters, var_templateInstructionListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 893)) ;
      enumerator_38295.gotoNextObject () ;
    }
    ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("filewrapper ").add_operation (object->mAttribute_mFilewrapperName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 900)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 900)), GALGAS_filewrapperDeclarationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("filewrapper-").add_operation (object->mAttribute_mFilewrapperName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 903)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 903)), object->mAttribute_mFilewrapperName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 904)), object->mAttribute_mFilewrapperPath.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 905)), var_wrapperFileMap, var_wrapperDirectoryMap, var_filewrapperTemplateListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 901)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 899)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_filewrapperDeclarationAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_filewrapperDeclarationAST.mSlotID,
                                        categoryMethod_filewrapperDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_filewrapperDeclarationAST_semanticAnalysis (defineCategoryMethod_filewrapperDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@optionComponentDeclarationAST semanticAnalysis'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_optionComponentDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
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
  constinArgument_inSemanticContext.mAttribute_mOptionComponentMapForSemanticAnalysis.method_searchKey (object->mAttribute_mOptionComponentName, var_isPredefined, var_boolOptionMap, var_uintOptionMap, var_stringOptionMap, var_stringListOptionMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 924)) ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("option ").add_operation (object->mAttribute_mOptionComponentName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 934)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 934)), GALGAS_optionComponentForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("option-").add_operation (object->mAttribute_mOptionComponentName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 937)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 937)), var_isPredefined, object->mAttribute_mOptionComponentName.mAttribute_string, var_boolOptionMap, var_uintOptionMap, var_stringOptionMap, var_stringListOptionMap  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 935)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 933)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_optionComponentDeclarationAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_optionComponentDeclarationAST.mSlotID,
                                        categoryMethod_optionComponentDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_optionComponentDeclarationAST_semanticAnalysis (defineCategoryMethod_optionComponentDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@abstractCategoryMethodAST semanticAnalysis'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_abstractCategoryMethodAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                       const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                       const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                       const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                       GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractCategoryMethodAST * object = (const cPtr_abstractCategoryMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractCategoryMethodAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 956)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 958)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 958)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mAbstractCategoryMethodName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("cannot declare a category method: '@").add_operation (var_selfType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 959)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 959)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 959))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 959)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = var_selfType.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 960)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (object->mAttribute_mAbstractCategoryMethodName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_3, GALGAS_string ("cannot declare an abstract category method: '@").add_operation (var_selfType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 961)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 961)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 961))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 961)) ;
    }
  }
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 964)) ;
  cEnumerator_formalParameterListAST enumerator_43308 (object->mAttribute_mAbstractCategoryMethodFormalParameterList, kEnumeration_up) ;
  while (enumerator_43308.hasCurrentObject ()) {
    var_formalParameterListForGeneration.addAssign_operation (enumerator_43308.current_mFormalSelector (HERE), enumerator_43308.current_mFormalArgumentPassingMode (HERE), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_43308.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 969)), enumerator_43308.current_mFormalArgumentName (HERE), enumerator_43308.current_mFormalArgumentName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 971))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 966)) ;
    enumerator_43308.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("abstract extension method ").add_operation (object->mAttribute_mAbstractCategoryMethodName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 975)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 975)), GALGAS_abstractCategoryMethodForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("method-").add_operation (var_selfType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 978)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 978)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 978)).add_operation (object->mAttribute_mAbstractCategoryMethodName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 978)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 978)), var_selfType, object->mAttribute_mAbstractCategoryMethodName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 980)), var_formalParameterListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 976)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 974)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_abstractCategoryMethodAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_abstractCategoryMethodAST.mSlotID,
                                        categoryMethod_abstractCategoryMethodAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractCategoryMethodAST_semanticAnalysis (defineCategoryMethod_abstractCategoryMethodAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category method '@categoryMethodAST semanticAnalysis'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_categoryMethodAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                               const GALGAS_string /* constinArgument_inProductDirectory */,
                                                               const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                               const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                               GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_categoryMethodAST * object = (const cPtr_categoryMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_categoryMethodAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 993)) ;
  GALGAS_string var_selfObjectName ;
  GALGAS_string var_selfObjectAccessor ;
  GALGAS_bool var_implementedAsFunction ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_selfType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 998)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 998)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_selfObjectName = GALGAS_string ("object") ;
    var_selfObjectAccessor = GALGAS_string ("object->") ;
    var_implementedAsFunction = GALGAS_bool (false) ;
  }else if (kBoolFalse == test_0) {
    var_selfObjectName = GALGAS_string ("inObject") ;
    var_selfObjectAccessor = GALGAS_string ("inObject.") ;
    var_implementedAsFunction = GALGAS_bool (true) ;
  }
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1008)) ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration ;
  GALGAS_analysisContext var_analysisContext = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfType, var_selfObjectName, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 1015))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1010)) ;
  {
  GALGAS_typedPropertyList temp_1 ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_selfType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1020)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 1020)))).operator_or (GALGAS_bool (kIsEqual, var_selfType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1020)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("semanticAnalysis.galgas", 1020)))) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1020)).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = var_selfType.reader_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1021)) ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1022)) ;
  }
  routine_analyzeRoutineBody (var_analysisContext, object->mAttribute_mCategoryMethodFormalParameterList, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1019)), temp_1, GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1024)), var_selfObjectAccessor, object->mAttribute_mCategoryMethodInstructionList, object->mAttribute_mEndOfMethodLocation, var_semanticInstructionListForGeneration, var_formalParameterListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1016)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extension method ").add_operation (object->mAttribute_mCategoryMethodName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1033)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1033)), GALGAS_categoryMethodForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("method-").add_operation (var_selfType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1036)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1036)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1036)).add_operation (object->mAttribute_mCategoryMethodName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1036)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1036)), var_selfType, object->mAttribute_mCategoryMethodName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1038)), var_implementedAsFunction, var_formalParameterListForGeneration, var_selfType.reader_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1041)), var_semanticInstructionListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1034)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1032)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_categoryMethodAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_categoryMethodAST.mSlotID,
                                        categoryMethod_categoryMethodAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_categoryMethodAST_semanticAnalysis (defineCategoryMethod_categoryMethodAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@overridingCategoryMethodAST semanticAnalysis'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingCategoryMethodAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                         const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                         const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                         const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                         GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingCategoryMethodAST * object = (const cPtr_overridingCategoryMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingCategoryMethodAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1054)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1056)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 1056)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mOverridingCategoryMethodName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("cannot declare a category method: '@").add_operation (var_selfType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1057)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1057)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1057))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1057)) ;
  }
  GALGAS_string var_baseTypeName = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMap_2D_proxy var_superType = var_selfType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1061)) ;
  GALGAS_formalParameterSignature var_inheritedSignature = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1062)) ;
  GALGAS_location var_inheritedDeclarationLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1063)) ;
  if (constinArgument_inSemanticContext.mAttribute_mTypeMap.reader_count (SOURCE_FILE ("semanticAnalysis.galgas", 1064)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1064)).isValid ()) {
    uint32_t variant_47199 = constinArgument_inSemanticContext.mAttribute_mTypeMap.reader_count (SOURCE_FILE ("semanticAnalysis.galgas", 1064)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1064)).uintValue () ;
    bool loop_47199 = true ;
    while (loop_47199) {
      loop_47199 = var_superType.reader_isNull (SOURCE_FILE ("semanticAnalysis.galgas", 1065)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1065)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1065)).isValid () ;
      if (loop_47199) {
        loop_47199 = var_superType.reader_isNull (SOURCE_FILE ("semanticAnalysis.galgas", 1065)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1065)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1065)).boolValue () ;
      }
      if (loop_47199 && (0 == variant_47199)) {
        loop_47199 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticAnalysis.galgas", 1064)) ;
      }
      if (loop_47199) {
        variant_47199 -- ;
        const enumGalgasBool test_2 = var_superType.reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1066)).reader_hasKey (object->mAttribute_mOverridingCategoryMethodName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1066)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1066)).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_methodQualifier var_qualifier ;
          GALGAS_methodKind joker_47505 ; // Joker input parameter
          GALGAS_bool joker_47558 ; // Joker input parameter
          GALGAS_string joker_47572 ; // Joker input parameter
          var_superType.reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1068)).method_searchKey (object->mAttribute_mOverridingCategoryMethodName, joker_47505, var_inheritedSignature, var_inheritedDeclarationLocation, joker_47558, var_qualifier, joker_47572, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1068)) ;
          const enumGalgasBool test_3 = GALGAS_bool (kIsInfOrEqual, var_qualifier.objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticAnalysis.galgas", 1069)))).boolEnum () ;
          if (kBoolTrue == test_3) {
            var_baseTypeName = var_superType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1070)) ;
          }
        }
        var_superType = var_superType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1073)) ;
      }
    }
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_location location_5 (object->mAttribute_mOverridingCategoryMethodName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_5, GALGAS_string ("this method is not declared by a super class")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1076)) ;
  }
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1079)) ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration ;
  GALGAS_analysisContext var_analysisContext = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfType, GALGAS_string ("object"), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 1086))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1081)) ;
  {
  GALGAS_typedPropertyList temp_6 ;
  const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, var_selfType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1091)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 1091)))).operator_or (GALGAS_bool (kIsEqual, var_selfType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1091)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("semanticAnalysis.galgas", 1091)))) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1091)).boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = var_selfType.reader_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1092)) ;
  }else if (kBoolFalse == test_7) {
    temp_6 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1093)) ;
  }
  routine_analyzeRoutineBody (var_analysisContext, object->mAttribute_mOverridingCategoryMethodFormalParameterList, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1090)), temp_6, GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1095)), GALGAS_string ("object->"), object->mAttribute_mOverridingCategoryMethodInstructionList, object->mAttribute_mEndOfMethodLocation, var_semanticInstructionListForGeneration, var_formalParameterListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1087)) ;
  }
  const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_8) {
    {
    routine_checkMethodSignatures (var_formalParameterListForGeneration, object->mAttribute_mOverridingCategoryMethodName.reader_location (SOURCE_FILE ("semanticAnalysis.galgas", 1106)), var_inheritedSignature, var_inheritedDeclarationLocation, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1104)) ;
    }
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("override extension method ").add_operation (object->mAttribute_mOverridingCategoryMethodName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1113)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1113)), GALGAS_overridingCategoryMethodForGeneration::constructor_new (GALGAS_bool (false), GALGAS_string ("method-").add_operation (var_selfType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1116)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1116)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1116)).add_operation (object->mAttribute_mOverridingCategoryMethodName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1116)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1116)), var_selfType, var_baseTypeName, object->mAttribute_mOverridingCategoryMethodName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1119)), var_formalParameterListForGeneration, var_selfType.reader_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1121)), var_semanticInstructionListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1114)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1112)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingCategoryMethodAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_overridingCategoryMethodAST.mSlotID,
                                        categoryMethod_overridingCategoryMethodAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingCategoryMethodAST_semanticAnalysis (defineCategoryMethod_overridingCategoryMethodAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@overridingAbstractCategoryMethodAST semanticAnalysis'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingAbstractCategoryMethodAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                                 const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                                 const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                 const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                                 GALGAS_semanticDeclarationSortedListForGeneration & /* ioArgument_ioSemanticDeclarationListForGeneration */,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingAbstractCategoryMethodAST * object = (const cPtr_overridingAbstractCategoryMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractCategoryMethodAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1134)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1136)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 1136)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mOverridingCategoryMethodName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("cannot declare a category method: '@").add_operation (var_selfType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1137)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1137)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1137))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1137)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = var_selfType.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1138)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (object->mAttribute_mOverridingCategoryMethodName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_3, GALGAS_string ("cannot declare an abstract category method: '@").add_operation (var_selfType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1139)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1139)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1139))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1139)) ;
    }
  }
  GALGAS_string var_baseTypeName = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMap_2D_proxy var_superType = var_selfType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1143)) ;
  GALGAS_formalParameterSignature var_inheritedSignature = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1144)) ;
  GALGAS_location var_inheritedDeclarationLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1145)) ;
  if (constinArgument_inSemanticContext.mAttribute_mTypeMap.reader_count (SOURCE_FILE ("semanticAnalysis.galgas", 1146)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1146)).isValid ()) {
    uint32_t variant_50687 = constinArgument_inSemanticContext.mAttribute_mTypeMap.reader_count (SOURCE_FILE ("semanticAnalysis.galgas", 1146)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1146)).uintValue () ;
    bool loop_50687 = true ;
    while (loop_50687) {
      loop_50687 = var_superType.reader_isNull (SOURCE_FILE ("semanticAnalysis.galgas", 1147)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1147)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1147)).isValid () ;
      if (loop_50687) {
        loop_50687 = var_superType.reader_isNull (SOURCE_FILE ("semanticAnalysis.galgas", 1147)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1147)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1147)).boolValue () ;
      }
      if (loop_50687 && (0 == variant_50687)) {
        loop_50687 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticAnalysis.galgas", 1146)) ;
      }
      if (loop_50687) {
        variant_50687 -- ;
        const enumGalgasBool test_4 = var_superType.reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1148)).reader_hasKey (object->mAttribute_mOverridingCategoryMethodName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1148)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1148)).boolEnum () ;
        if (kBoolTrue == test_4) {
          GALGAS_methodQualifier var_qualifier ;
          GALGAS_methodKind joker_50993 ; // Joker input parameter
          GALGAS_bool joker_51046 ; // Joker input parameter
          GALGAS_string joker_51060 ; // Joker input parameter
          var_superType.reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1150)).method_searchKey (object->mAttribute_mOverridingCategoryMethodName, joker_50993, var_inheritedSignature, var_inheritedDeclarationLocation, joker_51046, var_qualifier, joker_51060, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1150)) ;
          const enumGalgasBool test_5 = GALGAS_bool (kIsInfOrEqual, var_qualifier.objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticAnalysis.galgas", 1151)))).boolEnum () ;
          if (kBoolTrue == test_5) {
            var_baseTypeName = var_superType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1152)) ;
          }
        }
        var_superType = var_superType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1155)) ;
      }
    }
  }
  const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_6) {
    GALGAS_location location_7 (object->mAttribute_mOverridingCategoryMethodName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_7, GALGAS_string ("this getter is not declared by a super class")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1158)) ;
  }
  GALGAS_variableMap var_variableMap = GALGAS_variableMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 1161)) ;
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration ;
  {
  routine_buildLocalVariableMapAndSignature (constinArgument_inSemanticContext, object->mAttribute_mOverridingCategoryMethodFormalParameterList, var_variableMap, var_formalParameterListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1163)) ;
  }
  const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_8) {
    {
    routine_checkMethodSignatures (var_formalParameterListForGeneration, object->mAttribute_mOverridingCategoryMethodName.reader_location (SOURCE_FILE ("semanticAnalysis.galgas", 1173)), var_inheritedSignature, var_inheritedDeclarationLocation, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1171)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingAbstractCategoryMethodAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_overridingAbstractCategoryMethodAST.mSlotID,
                                        categoryMethod_overridingAbstractCategoryMethodAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingAbstractCategoryMethodAST_semanticAnalysis (defineCategoryMethod_overridingAbstractCategoryMethodAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@abstractCategoryModifierAST semanticAnalysis'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_abstractCategoryModifierAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                         const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                         const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                         const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                         GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractCategoryModifierAST * object = (const cPtr_abstractCategoryModifierAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractCategoryModifierAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1188)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1190)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 1190)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mAbstractCategoryModifierName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("cannot declare a category setter: '@").add_operation (var_selfType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1191)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1191)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1191))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1191)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = var_selfType.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1192)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (object->mAttribute_mAbstractCategoryModifierName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_3, GALGAS_string ("cannot declare an abstract category setter: '@").add_operation (var_selfType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1193)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1193)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1193))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1193)) ;
    }
  }
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1196)) ;
  cEnumerator_formalParameterListAST enumerator_53012 (object->mAttribute_mAbstractCategoryModifierFormalParameterList, kEnumeration_up) ;
  while (enumerator_53012.hasCurrentObject ()) {
    var_formalParameterListForGeneration.addAssign_operation (enumerator_53012.current_mFormalSelector (HERE), enumerator_53012.current_mFormalArgumentPassingMode (HERE), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_53012.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1201)), enumerator_53012.current_mFormalArgumentName (HERE), enumerator_53012.current_mFormalArgumentName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1203))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1198)) ;
    enumerator_53012.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string (" abstract extension setter ").add_operation (object->mAttribute_mAbstractCategoryModifierName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1207)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1207)), GALGAS_abstractCategoryModifierForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("setter-").add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1210)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1210)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1210)).add_operation (object->mAttribute_mAbstractCategoryModifierName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1210)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1210)), var_selfType, object->mAttribute_mAbstractCategoryModifierName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1212)), var_formalParameterListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1208)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1206)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_abstractCategoryModifierAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_abstractCategoryModifierAST.mSlotID,
                                        categoryMethod_abstractCategoryModifierAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractCategoryModifierAST_semanticAnalysis (defineCategoryMethod_abstractCategoryModifierAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@categoryModifierAST semanticAnalysis'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_categoryModifierAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                 const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                 const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                 const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                 GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_categoryModifierAST * object = (const cPtr_categoryModifierAST *) inObject ;
  macroValidSharedObject (object, cPtr_categoryModifierAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1225)) ;
  GALGAS_string var_selfObjectName ;
  GALGAS_string var_selfObjectAccessor ;
  GALGAS_bool var_implementedAsFunction ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_selfType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1230)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 1230)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_selfObjectName = GALGAS_string ("object") ;
    var_selfObjectAccessor = GALGAS_string ("object->") ;
    var_implementedAsFunction = GALGAS_bool (false) ;
  }else if (kBoolFalse == test_0) {
    var_selfObjectName = GALGAS_string ("ioObject") ;
    var_selfObjectAccessor = GALGAS_string ("ioObject.") ;
    var_implementedAsFunction = GALGAS_bool (true) ;
  }
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1240)) ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration ;
  GALGAS_analysisContext var_analysisContext = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfType, var_selfObjectName, var_selfType  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1242)) ;
  {
  routine_analyzeRoutineBody (var_analysisContext, object->mAttribute_mCategoryModifierFormalParameterList, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1251)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1252)), var_selfType.reader_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1253)), var_selfObjectAccessor, object->mAttribute_mCategoryModifierInstructionList, object->mAttribute_mEndOfModifierLocation, var_semanticInstructionListForGeneration, var_formalParameterListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1248)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extension setter ").add_operation (object->mAttribute_mCategoryModifierName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1262)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1262)), GALGAS_categoryModifierForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("setter-").add_operation (var_selfType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1265)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1265)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1265)).add_operation (object->mAttribute_mCategoryModifierName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1265)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1265)), var_selfType, object->mAttribute_mCategoryModifierName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1267)), var_implementedAsFunction, var_formalParameterListForGeneration, var_selfType.reader_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1270)), var_semanticInstructionListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1263)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1261)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_categoryModifierAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_categoryModifierAST.mSlotID,
                                        categoryMethod_categoryModifierAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_categoryModifierAST_semanticAnalysis (defineCategoryMethod_categoryModifierAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@overridingCategoryModifierAST semanticAnalysis'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingCategoryModifierAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                           const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                           const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                           const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                           GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingCategoryModifierAST * object = (const cPtr_overridingCategoryModifierAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingCategoryModifierAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1283)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1285)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 1285)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mOverridingCategoryModifierName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("cannot declare a category setter: '@").add_operation (var_selfType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1286)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1286)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1286))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1286)) ;
  }
  GALGAS_string var_baseTypeName = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMap_2D_proxy var_superType = var_selfType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1290)) ;
  GALGAS_formalParameterSignature var_inheritedSignature = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1291)) ;
  GALGAS_location var_inheritedDeclarationLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1292)) ;
  if (constinArgument_inSemanticContext.mAttribute_mTypeMap.reader_count (SOURCE_FILE ("semanticAnalysis.galgas", 1293)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1293)).isValid ()) {
    uint32_t variant_56728 = constinArgument_inSemanticContext.mAttribute_mTypeMap.reader_count (SOURCE_FILE ("semanticAnalysis.galgas", 1293)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1293)).uintValue () ;
    bool loop_56728 = true ;
    while (loop_56728) {
      loop_56728 = var_superType.reader_isNull (SOURCE_FILE ("semanticAnalysis.galgas", 1294)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1294)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1294)).isValid () ;
      if (loop_56728) {
        loop_56728 = var_superType.reader_isNull (SOURCE_FILE ("semanticAnalysis.galgas", 1294)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1294)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1294)).boolValue () ;
      }
      if (loop_56728 && (0 == variant_56728)) {
        loop_56728 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticAnalysis.galgas", 1293)) ;
      }
      if (loop_56728) {
        variant_56728 -- ;
        const enumGalgasBool test_2 = var_superType.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1295)).reader_hasKey (object->mAttribute_mOverridingCategoryModifierName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1295)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1295)).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_methodQualifier var_qualifier ;
          GALGAS_methodKind joker_57026 ; // Joker input parameter
          GALGAS_bool joker_57049 ; // Joker input parameter
          GALGAS_string joker_57063 ; // Joker input parameter
          var_superType.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1297)).method_searchKey (object->mAttribute_mOverridingCategoryModifierName, joker_57026, var_inheritedSignature, joker_57049, var_qualifier, joker_57063, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1297)) ;
          const enumGalgasBool test_3 = GALGAS_bool (kIsInfOrEqual, var_qualifier.objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticAnalysis.galgas", 1298)))).boolEnum () ;
          if (kBoolTrue == test_3) {
            var_baseTypeName = var_superType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1299)) ;
          }
        }
        var_superType = var_superType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1302)) ;
      }
    }
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_location location_5 (object->mAttribute_mOverridingCategoryModifierName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_5, GALGAS_string ("this setter is not declared by a super class")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1305)) ;
  }
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1308)) ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration ;
  GALGAS_analysisContext var_analysisContext = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfType, GALGAS_string ("object"), var_selfType  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1310)) ;
  {
  routine_analyzeRoutineBody (var_analysisContext, object->mAttribute_mOverridingCategoryModifierFormalParameterList, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1319)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1320)), var_selfType.reader_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1321)), GALGAS_string ("object->"), object->mAttribute_mOverridingCategoryModifierInstructionList, object->mAttribute_mEndOfModifierLocation, var_semanticInstructionListForGeneration, var_formalParameterListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1316)) ;
  }
  const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_6) {
    {
    routine_checkMethodSignatures (var_formalParameterListForGeneration, object->mAttribute_mOverridingCategoryModifierName.reader_location (SOURCE_FILE ("semanticAnalysis.galgas", 1332)), var_inheritedSignature, var_inheritedDeclarationLocation, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1330)) ;
    }
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string (" overriding extension setter ").add_operation (object->mAttribute_mOverridingCategoryModifierName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1339)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1339)), GALGAS_overridingCategoryModifierForGeneration::constructor_new (GALGAS_bool (false), GALGAS_string ("setter-").add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1342)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1342)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1342)).add_operation (object->mAttribute_mOverridingCategoryModifierName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1342)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1342)), var_selfType, var_baseTypeName, object->mAttribute_mOverridingCategoryModifierName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1345)), var_formalParameterListForGeneration, var_selfType.reader_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1347)), var_semanticInstructionListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1340)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1338)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingCategoryModifierAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_overridingCategoryModifierAST.mSlotID,
                                        categoryMethod_overridingCategoryModifierAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingCategoryModifierAST_semanticAnalysis (defineCategoryMethod_overridingCategoryModifierAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@overridingAbstractCategoryModifierAST semanticAnalysis'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingAbstractCategoryModifierAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                                   const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                                   const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                   const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                                   GALGAS_semanticDeclarationSortedListForGeneration & /* ioArgument_ioSemanticDeclarationListForGeneration */,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingAbstractCategoryModifierAST * object = (const cPtr_overridingAbstractCategoryModifierAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractCategoryModifierAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1360)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1362)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 1362)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mOverridingCategoryModifierName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("cannot declare a category setter: '@").add_operation (var_selfType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1363)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1363)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1363))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1363)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = var_selfType.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1364)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (object->mAttribute_mOverridingCategoryModifierName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_3, GALGAS_string ("cannot declare an abstract category setter: '@").add_operation (var_selfType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1365)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1365)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1365))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1365)) ;
    }
  }
  GALGAS_string var_baseTypeName = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMap_2D_proxy var_superType = var_selfType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1369)) ;
  GALGAS_formalParameterSignature var_inheritedSignature = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1370)) ;
  GALGAS_location var_inheritedDeclarationLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1371)) ;
  if (constinArgument_inSemanticContext.mAttribute_mTypeMap.reader_count (SOURCE_FILE ("semanticAnalysis.galgas", 1372)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1372)).isValid ()) {
    uint32_t variant_60002 = constinArgument_inSemanticContext.mAttribute_mTypeMap.reader_count (SOURCE_FILE ("semanticAnalysis.galgas", 1372)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1372)).uintValue () ;
    bool loop_60002 = true ;
    while (loop_60002) {
      loop_60002 = var_superType.reader_isNull (SOURCE_FILE ("semanticAnalysis.galgas", 1373)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1373)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1373)).isValid () ;
      if (loop_60002) {
        loop_60002 = var_superType.reader_isNull (SOURCE_FILE ("semanticAnalysis.galgas", 1373)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1373)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1373)).boolValue () ;
      }
      if (loop_60002 && (0 == variant_60002)) {
        loop_60002 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticAnalysis.galgas", 1372)) ;
      }
      if (loop_60002) {
        variant_60002 -- ;
        const enumGalgasBool test_4 = var_superType.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1374)).reader_hasKey (object->mAttribute_mOverridingCategoryModifierName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1374)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1374)).boolEnum () ;
        if (kBoolTrue == test_4) {
          GALGAS_methodQualifier var_qualifier ;
          GALGAS_methodKind joker_60300 ; // Joker input parameter
          GALGAS_bool joker_60323 ; // Joker input parameter
          GALGAS_string joker_60337 ; // Joker input parameter
          var_superType.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1376)).method_searchKey (object->mAttribute_mOverridingCategoryModifierName, joker_60300, var_inheritedSignature, joker_60323, var_qualifier, joker_60337, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1376)) ;
          const enumGalgasBool test_5 = GALGAS_bool (kIsInfOrEqual, var_qualifier.objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticAnalysis.galgas", 1377)))).boolEnum () ;
          if (kBoolTrue == test_5) {
            var_baseTypeName = var_superType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1378)) ;
          }
        }
        var_superType = var_superType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1381)) ;
      }
    }
  }
  const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_6) {
    GALGAS_location location_7 (object->mAttribute_mOverridingCategoryModifierName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_7, GALGAS_string ("this setter is not declared by a super class")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1384)) ;
  }
  GALGAS_variableMap var_variableMap = GALGAS_variableMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 1387)) ;
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration ;
  {
  routine_buildLocalVariableMapAndSignature (constinArgument_inSemanticContext, object->mAttribute_mOverridingCategoryModifierFormalParameterList, var_variableMap, var_formalParameterListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1389)) ;
  }
  const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_8) {
    {
    routine_checkMethodSignatures (var_formalParameterListForGeneration, object->mAttribute_mOverridingCategoryModifierName.reader_location (SOURCE_FILE ("semanticAnalysis.galgas", 1399)), var_inheritedSignature, var_inheritedDeclarationLocation, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1397)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingAbstractCategoryModifierAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_overridingAbstractCategoryModifierAST.mSlotID,
                                        categoryMethod_overridingAbstractCategoryModifierAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingAbstractCategoryModifierAST_semanticAnalysis (defineCategoryMethod_overridingAbstractCategoryModifierAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@abstractCategoryReaderAST semanticAnalysis'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_abstractCategoryReaderAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                       const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                       const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                       const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                       GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractCategoryReaderAST * object = (const cPtr_abstractCategoryReaderAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractCategoryReaderAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1414)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1416)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 1416)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mAbstractCategoryReaderName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("cannot declare a category getter: '@").add_operation (var_selfType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1417)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1417)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1417))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1417)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = var_selfType.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1418)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (object->mAttribute_mAbstractCategoryReaderName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_3, GALGAS_string ("cannot declare an abstract category getter: '@").add_operation (var_selfType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1419)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1419)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1419))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1419)) ;
    }
  }
  GALGAS_formalInputParameterListForGeneration var_formalParameterListForGeneration = GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1422)) ;
  cEnumerator_formalInputParameterListAST enumerator_62297 (object->mAttribute_mAbstractCategoryReaderFormalInputParameterList, kEnumeration_up) ;
  while (enumerator_62297.hasCurrentObject ()) {
    var_formalParameterListForGeneration.addAssign_operation (enumerator_62297.current_mFormalSelector (HERE), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_62297.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1426)), enumerator_62297.current_mFormalArgumentName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1427)), enumerator_62297.current_mFormalArgumentName (HERE), enumerator_62297.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1424)) ;
    enumerator_62297.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("abstract extension getter ").add_operation (object->mAttribute_mAbstractCategoryReaderName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1433)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1433)), GALGAS_abstractCategoryReaderForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("getter-").add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1436)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1436)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1436)).add_operation (object->mAttribute_mAbstractCategoryReaderName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1436)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1436)), var_selfType, object->mAttribute_mAbstractCategoryReaderName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1438)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mAbstractCategoryReaderReturnedTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1439)), var_formalParameterListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1434)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1432)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_abstractCategoryReaderAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_abstractCategoryReaderAST.mSlotID,
                                        categoryMethod_abstractCategoryReaderAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractCategoryReaderAST_semanticAnalysis (defineCategoryMethod_abstractCategoryReaderAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category method '@categoryReaderAST semanticAnalysis'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_categoryReaderAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                               const GALGAS_string /* constinArgument_inProductDirectory */,
                                                               const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                               const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                               GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_categoryReaderAST * object = (const cPtr_categoryReaderAST *) inObject ;
  macroValidSharedObject (object, cPtr_categoryReaderAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1455)) ;
  GALGAS_string var_selfObjectName ;
  GALGAS_string var_selfObjectAccessor ;
  GALGAS_bool var_implementedAsFunction ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_selfType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1460)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 1460)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_selfObjectName = GALGAS_string ("object") ;
    var_selfObjectAccessor = GALGAS_string ("object->") ;
    var_implementedAsFunction = GALGAS_bool (false) ;
  }else if (kBoolFalse == test_0) {
    var_selfObjectName = GALGAS_string ("inObject") ;
    var_selfObjectAccessor = GALGAS_string ("inObject.") ;
    var_implementedAsFunction = GALGAS_bool (true) ;
  }
  GALGAS_analysisContext var_analysisContext = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfType, var_selfObjectName, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 1475))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1470)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_returnType ;
  GALGAS_string var_returnVariableCppName ;
  GALGAS_formalInputParameterListForGeneration var_formalParameterListForGeneration ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration ;
  {
  GALGAS_typedPropertyList temp_1 ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_selfType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1483)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 1483)))).operator_or (GALGAS_bool (kIsEqual, var_selfType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1483)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("semanticAnalysis.galgas", 1483)))) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1483)).operator_or (GALGAS_bool (kIsEqual, var_selfType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1483)).objectCompare (GALGAS_typeKindEnum::constructor_mapProxyType (SOURCE_FILE ("semanticAnalysis.galgas", 1483)))) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1483)).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = var_selfType.reader_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1484)) ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1485)) ;
  }
  routine_analyzeFunctionBody (var_analysisContext, object->mAttribute_mCategoryReaderFormalInputParameterList, temp_1, var_selfObjectAccessor, object->mAttribute_mCategoryReaderInstructionList, object->mAttribute_mCategoryReaderReturnedVariableName, object->mAttribute_mCategoryReaderReturnedTypeName, object->mAttribute_mEndOfReaderLocation, var_formalParameterListForGeneration, var_returnType, var_returnVariableCppName, var_semanticInstructionListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1480)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extension getter ").add_operation (object->mAttribute_mCategoryReaderName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1499)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1499)), GALGAS_categoryReaderForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("getter-").add_operation (var_selfType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1502)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1502)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1502)).add_operation (object->mAttribute_mCategoryReaderName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1502)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1502)), var_selfType, object->mAttribute_mCategoryReaderName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1504)), var_implementedAsFunction, var_returnType, var_returnVariableCppName, var_formalParameterListForGeneration, var_selfType.reader_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1509)), var_semanticInstructionListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1500)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1498)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_categoryReaderAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_categoryReaderAST.mSlotID,
                                        categoryMethod_categoryReaderAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_categoryReaderAST_semanticAnalysis (defineCategoryMethod_categoryReaderAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@overridingCategoryReaderAST semanticAnalysis'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingCategoryReaderAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                         const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                         const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                         const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                         GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingCategoryReaderAST * object = (const cPtr_overridingCategoryReaderAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingCategoryReaderAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1522)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1524)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 1524)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mOverridingCategoryReaderName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("cannot declare a category getter: '@").add_operation (var_selfType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1525)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1525)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1525))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1525)) ;
  }
  GALGAS_string var_baseTypeName = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMap_2D_proxy var_superType = var_selfType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1529)) ;
  GALGAS_functionSignature var_inheritedSignature = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1530)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_inheritedReturnType = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 1531)) ;
  GALGAS_location var_inheritedDeclarationLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1532)) ;
  if (constinArgument_inSemanticContext.mAttribute_mTypeMap.reader_count (SOURCE_FILE ("semanticAnalysis.galgas", 1533)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1533)).isValid ()) {
    uint32_t variant_66541 = constinArgument_inSemanticContext.mAttribute_mTypeMap.reader_count (SOURCE_FILE ("semanticAnalysis.galgas", 1533)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1533)).uintValue () ;
    bool loop_66541 = true ;
    while (loop_66541) {
      loop_66541 = var_superType.reader_isNull (SOURCE_FILE ("semanticAnalysis.galgas", 1534)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1534)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1534)).isValid () ;
      if (loop_66541) {
        loop_66541 = var_superType.reader_isNull (SOURCE_FILE ("semanticAnalysis.galgas", 1534)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1534)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1534)).boolValue () ;
      }
      if (loop_66541 && (0 == variant_66541)) {
        loop_66541 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticAnalysis.galgas", 1533)) ;
      }
      if (loop_66541) {
        variant_66541 -- ;
        const enumGalgasBool test_2 = var_superType.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1535)).reader_hasKey (object->mAttribute_mOverridingCategoryReaderName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1535)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1535)).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_methodQualifier var_qualifier ;
          GALGAS_methodKind joker_66814 ; // Joker input parameter
          GALGAS_bool joker_66891 ; // Joker input parameter
          GALGAS_string joker_66971 ; // Joker input parameter
          var_superType.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1536)).method_searchKey (object->mAttribute_mOverridingCategoryReaderName, joker_66814, var_inheritedSignature, var_inheritedDeclarationLocation, joker_66891, var_inheritedReturnType, var_qualifier, joker_66971, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1536)) ;
          const enumGalgasBool test_3 = GALGAS_bool (kIsInfOrEqual, var_qualifier.objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticAnalysis.galgas", 1546)))).boolEnum () ;
          if (kBoolTrue == test_3) {
            var_baseTypeName = var_superType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1547)) ;
          }
        }
        var_superType = var_superType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1550)) ;
      }
    }
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_location location_5 (object->mAttribute_mOverridingCategoryReaderName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_5, GALGAS_string ("this getter is not declared by a super class")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1553)) ;
  }
  GALGAS_analysisContext var_analysisContext = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfType, GALGAS_string ("object"), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 1561))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1556)) ;
  GALGAS_formalInputParameterListForGeneration var_formalParameterListForGeneration ;
  GALGAS_unifiedTypeMap_2D_proxy var_returnType ;
  GALGAS_string var_returnVariableCppName ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration ;
  {
  GALGAS_typedPropertyList temp_6 ;
  const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, var_selfType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1565)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 1565)))).operator_or (GALGAS_bool (kIsEqual, var_selfType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1565)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("semanticAnalysis.galgas", 1565)))) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1565)).boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = var_selfType.reader_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1566)) ;
  }else if (kBoolFalse == test_7) {
    temp_6 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1567)) ;
  }
  routine_analyzeFunctionBody (var_analysisContext, object->mAttribute_mOverridingCategoryReaderFormalInputParameterList, temp_6, GALGAS_string ("object->"), object->mAttribute_mOverridingCategoryReaderInstructionList, object->mAttribute_mOverridingCategoryReaderReturnedVariableName, object->mAttribute_mOverridingCategoryReaderReturnedTypeName, object->mAttribute_mEndOfReaderLocation, var_formalParameterListForGeneration, var_returnType, var_returnVariableCppName, var_semanticInstructionListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1562)) ;
  }
  const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_8) {
    {
    routine_checkReaderSignatures (var_formalParameterListForGeneration, var_returnType, object->mAttribute_mOverridingCategoryReaderName.reader_location (SOURCE_FILE ("semanticAnalysis.galgas", 1584)), var_inheritedSignature, var_inheritedReturnType, var_inheritedDeclarationLocation, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1581)) ;
    }
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("override extension getter ").add_operation (object->mAttribute_mOverridingCategoryReaderName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1592)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1592)), GALGAS_overrideCategoryReaderForGeneration::constructor_new (GALGAS_bool (false), GALGAS_string ("getter-").add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1595)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1595)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1595)).add_operation (object->mAttribute_mOverridingCategoryReaderName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1595)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1595)), var_selfType, var_baseTypeName, object->mAttribute_mOverridingCategoryReaderName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1598)), var_returnType, var_returnVariableCppName, var_formalParameterListForGeneration, var_selfType.reader_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1602)), var_semanticInstructionListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1593)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1591)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingCategoryReaderAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_overridingCategoryReaderAST.mSlotID,
                                        categoryMethod_overridingCategoryReaderAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingCategoryReaderAST_semanticAnalysis (defineCategoryMethod_overridingCategoryReaderAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@overridingAbstractCategoryReaderAST semanticAnalysis'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingAbstractCategoryReaderAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                                 const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                                 const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                 const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                                 GALGAS_semanticDeclarationSortedListForGeneration & /* ioArgument_ioSemanticDeclarationListForGeneration */,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingAbstractCategoryReaderAST * object = (const cPtr_overridingAbstractCategoryReaderAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractCategoryReaderAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1615)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_returnType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mAbstractCategoryReaderReturnedTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1617)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1619)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 1619)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mAbstractCategoryReaderName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("cannot declare a category getter: '@").add_operation (var_selfType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1620)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1620)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1620))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1620)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = var_selfType.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1621)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (object->mAttribute_mAbstractCategoryReaderName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_3, GALGAS_string ("cannot declare an abstract category getter: '@").add_operation (var_selfType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1622)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1622)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1622))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1622)) ;
    }
  }
  GALGAS_string var_baseTypeName = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMap_2D_proxy var_superType = var_selfType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1626)) ;
  GALGAS_functionSignature var_inheritedSignature = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1627)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_inheritedReturnType = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 1628)) ;
  GALGAS_location var_inheritedDeclarationLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1629)) ;
  if (constinArgument_inSemanticContext.mAttribute_mTypeMap.reader_count (SOURCE_FILE ("semanticAnalysis.galgas", 1630)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1630)).isValid ()) {
    uint32_t variant_70409 = constinArgument_inSemanticContext.mAttribute_mTypeMap.reader_count (SOURCE_FILE ("semanticAnalysis.galgas", 1630)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1630)).uintValue () ;
    bool loop_70409 = true ;
    while (loop_70409) {
      loop_70409 = var_superType.reader_isNull (SOURCE_FILE ("semanticAnalysis.galgas", 1631)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1631)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1631)).isValid () ;
      if (loop_70409) {
        loop_70409 = var_superType.reader_isNull (SOURCE_FILE ("semanticAnalysis.galgas", 1631)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1631)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1631)).boolValue () ;
      }
      if (loop_70409 && (0 == variant_70409)) {
        loop_70409 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticAnalysis.galgas", 1630)) ;
      }
      if (loop_70409) {
        variant_70409 -- ;
        const enumGalgasBool test_4 = var_superType.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1632)).reader_hasKey (object->mAttribute_mAbstractCategoryReaderName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1632)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1632)).boolEnum () ;
        if (kBoolTrue == test_4) {
          GALGAS_methodQualifier var_qualifier ;
          GALGAS_methodKind joker_70711 ; // Joker input parameter
          GALGAS_bool joker_70788 ; // Joker input parameter
          GALGAS_string joker_70847 ; // Joker input parameter
          var_superType.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1634)).method_searchKey (object->mAttribute_mAbstractCategoryReaderName, joker_70711, var_inheritedSignature, var_inheritedDeclarationLocation, joker_70788, var_inheritedReturnType, var_qualifier, joker_70847, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1634)) ;
          const enumGalgasBool test_5 = GALGAS_bool (kIsInfOrEqual, var_qualifier.objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticAnalysis.galgas", 1644)))).boolEnum () ;
          if (kBoolTrue == test_5) {
            var_baseTypeName = var_superType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1645)) ;
          }
        }
        var_superType = var_superType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1648)) ;
      }
    }
  }
  const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_6) {
    GALGAS_location location_7 (object->mAttribute_mAbstractCategoryReaderName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_7, GALGAS_string ("this getter is not declared by a super class")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1651)) ;
  }
  const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_8) {
    GALGAS_formalInputParameterListForGeneration var_formalParameterListForGeneration = GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1655)) ;
    cEnumerator_formalInputParameterListAST enumerator_71341 (object->mAttribute_mAbstractCategoryReaderFormalInputParameterList, kEnumeration_up) ;
    while (enumerator_71341.hasCurrentObject ()) {
      var_formalParameterListForGeneration.addAssign_operation (enumerator_71341.current_mFormalSelector (HERE), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_71341.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1659)), enumerator_71341.current_mFormalArgumentName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1660)), enumerator_71341.current_mFormalArgumentName (HERE), enumerator_71341.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1657)) ;
      enumerator_71341.gotoNextObject () ;
    }
    {
    routine_checkReaderSignatures (var_formalParameterListForGeneration, var_returnType, object->mAttribute_mAbstractCategoryReaderName.reader_location (SOURCE_FILE ("semanticAnalysis.galgas", 1667)), var_inheritedSignature, var_inheritedReturnType, var_inheritedDeclarationLocation, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1664)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingAbstractCategoryReaderAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_overridingAbstractCategoryReaderAST.mSlotID,
                                        categoryMethod_overridingAbstractCategoryReaderAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingAbstractCategoryReaderAST_semanticAnalysis (defineCategoryMethod_overridingAbstractCategoryReaderAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@galgas3SyntaxComponentAST semanticAnalysis'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_galgas_33_SyntaxComponentAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
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
  constinArgument_inSemanticContext.mAttribute_mLexiqueComponentMapForSemanticAnalysis.method_searchKey (object->mAttribute_mLexiqueName, var_terminalMap, var_indexingListAST, var_indexingDirectory, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1684)) ;
  GALGAS_stringset var_indexNameSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 1691)) ;
  cEnumerator_indexingListAST enumerator_72682 (var_indexingListAST, kEnumeration_up) ;
  while (enumerator_72682.hasCurrentObject ()) {
    var_indexNameSet.addAssign_operation (enumerator_72682.current_mIndexName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1693)) ;
    enumerator_72682.gotoNextObject () ;
  }
  GALGAS_bool var_hasIndexing = var_indexingDirectory.mAttribute_location.reader_isNowhere (SOURCE_FILE ("semanticAnalysis.galgas", 1695)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1695)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("semanticAnalysis.galgas", 1697)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string var_lexiqueName = object->mAttribute_mLexiqueName.mAttribute_string ;
    GALGAS_syntaxDeclarationForGeneration var_syntaxDeclarationForGeneration ;
    {
    routine_semanticAnalysisOfSyntaxComponent (object->mAttribute_mNonterminalDeclarationList, object->mAttribute_mRuleList, var_componentName, var_lexiqueName, constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_terminalMap, var_indexNameSet, var_hasIndexing, object->mAttribute_mHasTranslateFeature, var_syntaxDeclarationForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1699)) ;
    }
    ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string::makeEmptyString (), var_syntaxDeclarationForGeneration, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1712)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_galgas_33_SyntaxComponentAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentAST.mSlotID,
                                        categoryMethod_galgas_33_SyntaxComponentAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_galgas_33_SyntaxComponentAST_semanticAnalysis (defineCategoryMethod_galgas_33_SyntaxComponentAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@galgas3GrammarComponentAST semanticAnalysis'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_galgas_33_GrammarComponentAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                           const GALGAS_string constinArgument_inProductDirectory,
                                                                           const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                           const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                           GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_galgas_33_GrammarComponentAST * object = (const cPtr_galgas_33_GrammarComponentAST *) inObject ;
  macroValidSharedObject (object, cPtr_galgas_33_GrammarComponentAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (gOption_galgas_5F_builtin_5F_options_verbose_5F_output.reader_value ()).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->printMessage (GALGAS_string ("*** Analyzing '").add_operation (object->mAttribute_mGrammarComponentName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1729)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1729)).add_operation (GALGAS_string ("' grammar\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1729))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1729)) ;
  }
  GALGAS_terminalSymbolsMapForGrammarAnalysis var_actuallyUsedTerminalSymbolMap = GALGAS_terminalSymbolsMapForGrammarAnalysis::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 1732)) ;
  GALGAS_nonTerminalSymbolMapForGrammarAnalysis var_nonTerminalMapForGrammarAnalysis = GALGAS_nonTerminalSymbolMapForGrammarAnalysis::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 1733)) ;
  GALGAS_lstring var_lexiqueComponentName = GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticAnalysis.galgas", 1734)) ;
  GALGAS_syntaxComponentListForGrammarAnalysis var_syntaxComponentListForGrammarAnalysis = GALGAS_syntaxComponentListForGrammarAnalysis::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1735)) ;
  GALGAS_nonTerminalToAddList var_nonTerminalToAddList = GALGAS_nonTerminalToAddList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1736)) ;
  GALGAS_uint var_addedNonTerminalCount = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_lstringlist enumerator_74525 (object->mAttribute_mSyntaxComponents, kEnumeration_up) ;
  while (enumerator_74525.hasCurrentObject ()) {
    GALGAS_uint var_addedNonTerminalCountRef = var_addedNonTerminalCount ;
    GALGAS_string var_syntaxComponentName = enumerator_74525.current_mValue (HERE).mAttribute_string ;
    GALGAS_lstring var_lexiqueName ;
    GALGAS_nonterminalDeclarationListAST var_nonterminalDeclarationList ;
    GALGAS_syntaxRuleListAST var_ruleList ;
    GALGAS_bool var_hasTranslateFeature ;
    constinArgument_inSemanticContext.mAttribute_mSyntaxComponentMapForSemanticAnalysis.method_searchKey (enumerator_74525.current_mValue (HERE), var_lexiqueName, var_nonterminalDeclarationList, var_ruleList, var_hasTranslateFeature, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1741)) ;
    const enumGalgasBool test_1 = object->mAttribute_mHasTranslateFeature.operator_and (var_hasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1749)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1749)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_location location_2 (enumerator_74525.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_2, GALGAS_string ("as '").add_operation (object->mAttribute_mGrammarComponentName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1750)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1750)).add_operation (GALGAS_string ("' grammar declares 'translate' feature, this syntax component should do so"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1750))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1750)) ;
    }else if (kBoolFalse == test_1) {
      const enumGalgasBool test_3 = var_hasTranslateFeature.operator_and (object->mAttribute_mHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1751)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1751)).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_location location_4 (object->mAttribute_mGrammarComponentName.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_4, GALGAS_string ("as '").add_operation (enumerator_74525.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1752)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1752)).add_operation (GALGAS_string ("' syntax component declares 'translate' feature, this grammar should do so"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1752))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1752)) ;
      }
    }
    const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, var_lexiqueComponentName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_5) {
      var_lexiqueComponentName = var_lexiqueName ;
    }else if (kBoolFalse == test_5) {
      const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, var_lexiqueName.mAttribute_string.objectCompare (var_lexiqueComponentName.mAttribute_string)).boolEnum () ;
      if (kBoolTrue == test_6) {
        GALGAS_location location_7 (enumerator_74525.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_7, GALGAS_string ("this syntax component uses '").add_operation (var_lexiqueName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1758)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1758)).add_operation (GALGAS_string ("' lexique component, but the first syntax component uses the '"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1759)).add_operation (var_lexiqueComponentName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1759)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1759)).add_operation (GALGAS_string ("' lexique component (they should be the same)"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1760))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1758)) ;
      }
    }
    {
    routine_handleNonTerminalDeclarations (var_nonTerminalMapForGrammarAnalysis, var_nonterminalDeclarationList, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1763)) ;
    }
    {
    routine_handleNonTerminalDeclarationsFromRuleList (var_nonTerminalMapForGrammarAnalysis, var_ruleList, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1768)) ;
    }
    {
    routine_buildRuleList (var_nonTerminalMapForGrammarAnalysis, enumerator_74525.current_mValue (HERE), var_ruleList, var_actuallyUsedTerminalSymbolMap, var_syntaxComponentListForGrammarAnalysis, var_addedNonTerminalCount, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1773)) ;
    }
    GALGAS_uint var_i = GALGAS_uint ((uint32_t) 0U) ;
    if (var_addedNonTerminalCount.isValid ()) {
      uint32_t variant_76322 = var_addedNonTerminalCount.uintValue () ;
      bool loop_76322 = true ;
      while (loop_76322) {
        loop_76322 = GALGAS_bool (kIsStrictInf, var_i.objectCompare (var_addedNonTerminalCount.substract_operation (var_addedNonTerminalCountRef, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1782)))).isValid () ;
        if (loop_76322) {
          loop_76322 = GALGAS_bool (kIsStrictInf, var_i.objectCompare (var_addedNonTerminalCount.substract_operation (var_addedNonTerminalCountRef, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1782)))).boolValue () ;
        }
        if (loop_76322 && (0 == variant_76322)) {
          loop_76322 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticAnalysis.galgas", 1782)) ;
        }
        if (loop_76322) {
          variant_76322 -- ;
          var_nonTerminalToAddList.addAssign_operation (var_syntaxComponentName, var_i  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1783)) ;
          var_i.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1784)) ;
        }
      }
    }
    enumerator_74525.gotoNextObject () ;
  }
  GALGAS_stringset var_lexiqueComponentSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 1788)) ;
  GALGAS_lstring var_inIndexingDirectory ;
  GALGAS_terminalMap joker_76737 ; // Joker input parameter
  GALGAS_indexingListAST joker_76773 ; // Joker input parameter
  constinArgument_inSemanticContext.mAttribute_mLexiqueComponentMapForSemanticAnalysis.method_searchKey (var_lexiqueComponentName, joker_76737, joker_76773, var_inIndexingDirectory, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1789)) ;
  GALGAS_bool var_hasIndexing = var_inIndexingDirectory.mAttribute_location.reader_isNowhere (SOURCE_FILE ("semanticAnalysis.galgas", 1795)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1795)) ;
  const enumGalgasBool test_8 = var_hasIndexing.operator_and (object->mAttribute_mHasIndexing.mAttribute_bool.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1796)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1796)).boolEnum () ;
  if (kBoolTrue == test_8) {
    GALGAS_location location_9 (object->mAttribute_mGrammarComponentName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_9, GALGAS_string ("the grammar does not enable indexing, but the '").add_operation (var_lexiqueComponentName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1797)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1797)).add_operation (GALGAS_string ("' does"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1797))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1797)) ;
  }else if (kBoolFalse == test_8) {
    const enumGalgasBool test_10 = var_hasIndexing.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1798)).operator_and (object->mAttribute_mHasIndexing.mAttribute_bool COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1798)).boolEnum () ;
    if (kBoolTrue == test_10) {
      GALGAS_location location_11 (object->mAttribute_mHasIndexing.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_11, GALGAS_string ("the grammar enables indexing, but the '").add_operation (var_lexiqueComponentName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1799)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1799)).add_operation (GALGAS_string ("' does not"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1799))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1799)) ;
    }
  }
  GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis var_startSymbolAltMap ;
  GALGAS_uint var_startSymbolIndex ;
  var_nonTerminalMapForGrammarAnalysis.method_searchKey (object->mAttribute_mStartSymbolName, var_startSymbolIndex, var_startSymbolAltMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1805)) ;
  {
  routine_checkLabelMap (object->mAttribute_mStartSymbolName.mAttribute_location, object->mAttribute_mStartSymbolLabelList, var_nonTerminalMapForGrammarAnalysis.reader_locationForKey (object->mAttribute_mStartSymbolName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1810)), var_startSymbolAltMap, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1807)) ;
  }
  GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis var_unusedNonTerminalSymbolsForGrammar = GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 1814)) ;
  cEnumerator_lstringlist enumerator_77978 (object->mAttribute_mUnusedNonterminalList, kEnumeration_up) ;
  while (enumerator_77978.hasCurrentObject ()) {
    GALGAS_uint var_nonterminalIndex ;
    GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis joker_78084 ; // Joker input parameter
    var_nonTerminalMapForGrammarAnalysis.method_searchKey (enumerator_77978.current_mValue (HERE), var_nonterminalIndex, joker_78084, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1817)) ;
    {
    var_unusedNonTerminalSymbolsForGrammar.modifier_insertKey (enumerator_77978.current_mValue (HERE), var_nonterminalIndex, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1818)) ;
    }
    enumerator_77978.gotoNextObject () ;
  }
  GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis var_nonTerminalSymbolSortedListForGrammarAnalysis = GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis::constructor_emptySortedList (SOURCE_FILE ("semanticAnalysis.galgas", 1821)) ;
  cEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_78432 (var_nonTerminalMapForGrammarAnalysis, kEnumeration_up) ;
  while (enumerator_78432.hasCurrentObject ()) {
    var_nonTerminalSymbolSortedListForGrammarAnalysis.addAssign_operation (enumerator_78432.current_lkey (HERE), enumerator_78432.current_mNonTerminalIndex (HERE), enumerator_78432.current_mNonterminalSymbolParametersMap (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1823)) ;
    enumerator_78432.gotoNextObject () ;
  }
  GALGAS_stringset var_implementationFileHeader = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 1828)) ;
  cEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_78926 (var_nonTerminalMapForGrammarAnalysis, kEnumeration_up) ;
  while (enumerator_78926.hasCurrentObject ()) {
    cEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis enumerator_78975 (enumerator_78926.current_mNonterminalSymbolParametersMap (HERE), kEnumeration_up) ;
    while (enumerator_78975.hasCurrentObject ()) {
      cEnumerator_signatureForGrammarAnalysis enumerator_79016 (enumerator_78975.current_mFormalParametersList (HERE), kEnumeration_up) ;
      while (enumerator_79016.hasCurrentObject ()) {
        switch (enumerator_79016.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).enumValue ()) {
        case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
          {
            GALGAS_unifiedTypeMap_2D_proxy var_t = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_79016.current_mGalgasTypeNameForGrammarAnalysis (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1834)) ;
            categoryMethod_addHeaderFileName (var_t, var_implementationFileHeader, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1835)) ;
          }
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
          {
          }
          break ;
        }
        enumerator_79016.gotoNextObject () ;
      }
      enumerator_78975.gotoNextObject () ;
    }
    enumerator_78926.gotoNextObject () ;
  }
  const enumGalgasBool test_12 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateOneHeader.reader_value ()).boolEnum () ;
  if (kBoolTrue == test_12) {
    var_implementationFileHeader = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 1842)) ;
  }
  GALGAS_string var_HTMLFilePath = constinArgument_inProductDirectory.add_operation (GALGAS_string ("/../helpers/"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1845)).add_operation (object->mAttribute_mGrammarComponentName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1845)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1845)).add_operation (GALGAS_string (".html"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1845)) ;
  GALGAS_string var_grammarCppFile ;
  GALGAS_string var_grammarHTMLHelperContents ;
  {
  GALGAS_string temp_13 ;
  const enumGalgasBool test_14 = object->mAttribute_mHasTranslateFeature.boolEnum () ;
  if (kBoolTrue == test_14) {
    temp_13 = function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1858)) ;
  }else if (kBoolFalse == test_14) {
    temp_13 = GALGAS_string::makeEmptyString () ;
  }
  routine_grammarAnalysisAndGeneration (GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 1847)), object->mAttribute_mGrammarComponentName, object->mAttribute_mGrammarClass, var_startSymbolIndex, var_lexiqueComponentName.mAttribute_string, var_actuallyUsedTerminalSymbolMap, var_syntaxComponentListForGrammarAnalysis, var_unusedNonTerminalSymbolsForGrammar, var_HTMLFilePath, var_nonTerminalSymbolSortedListForGrammarAnalysis, var_hasIndexing, temp_13, var_grammarCppFile, var_grammarHTMLHelperContents, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1846)) ;
  }
  const enumGalgasBool test_15 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_outputHTMLgrammarFile.reader_value ()).boolEnum () ;
  if (kBoolTrue == test_15) {
    var_HTMLFilePath.reader_stringByDeletingLastPathComponent (SOURCE_FILE ("semanticAnalysis.galgas", 1864)).method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1864)) ;
    GALGAS_bool joker_80486 ; // Joker input parameter
    var_grammarHTMLHelperContents.method_writeToFileWhenDifferentContents (var_HTMLFilePath, joker_80486, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1865)) ;
  }else if (kBoolFalse == test_15) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_HTMLFilePath, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1867)) ;
    }
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string::makeEmptyString (), GALGAS_grammarForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("grammar-").add_operation (object->mAttribute_mGrammarComponentName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1874)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1874)), object->mAttribute_mGrammarComponentName.mAttribute_string, var_lexiqueComponentName.mAttribute_string, var_nonTerminalMapForGrammarAnalysis, var_nonTerminalToAddList, var_hasIndexing, object->mAttribute_mSyntaxComponents, object->mAttribute_mStartSymbolName.mAttribute_string, object->mAttribute_mHasTranslateFeature, var_grammarCppFile  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1872)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1870)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_galgas_33_GrammarComponentAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST.mSlotID,
                                        categoryMethod_galgas_33_GrammarComponentAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_galgas_33_GrammarComponentAST_semanticAnalysis (defineCategoryMethod_galgas_33_GrammarComponentAST_semanticAnalysis, NULL) ;

