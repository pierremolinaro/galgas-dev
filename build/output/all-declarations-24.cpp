#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-24.h"


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
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mFilewrapperPath.mAttribute_string.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2857)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mFilewrapperPath.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("path is empty")  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2858)) ;
    var_directoryList.drop () ; // Release error dropped variable
    var_fileName.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, object->mAttribute_mFilewrapperPath.mAttribute_string.getter_firstCharacterOrNul (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2859)).objectCompare (GALGAS_char (TO_UNICODE (47)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (object->mAttribute_mFilewrapperPath.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_3, GALGAS_string ("the path should not begin with '/'")  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2860)) ;
      var_directoryList.drop () ; // Release error dropped variable
      var_fileName.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      var_directoryList = object->mAttribute_mFilewrapperPath.mAttribute_string.getter_componentsSeparatedByString (GALGAS_string ("/") COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2862)) ;
      {
      var_directoryList.modifier_popLast (var_fileName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2863)) ;
      }
    }
  }
  GALGAS_wrapperFileMap var_filewrapperFileMap ;
  GALGAS_wrapperDirectoryMap var_filewrapperDirectoryMap ;
  GALGAS_bool var_isInternal ;
  GALGAS_lstring joker_125742 ; // Joker input parameter
  GALGAS_lstringlist joker_125749 ; // Joker input parameter
  GALGAS_filewrapperTemplateMap joker_125854 ; // Joker input parameter
  constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mFilewrapperMap.method_searchKey (object->mAttribute_mFilewrapperName, joker_125742, joker_125749, var_filewrapperFileMap, var_filewrapperDirectoryMap, joker_125854, var_isInternal, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2866)) ;
  const enumGalgasBool test_4 = var_isInternal.boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_location var_filewrapperDeclarationLocation = constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mFilewrapperMap.getter_locationForKey (object->mAttribute_mFilewrapperName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2877)) ;
    const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, object->mAttribute_mFilewrapperName.mAttribute_location.getter_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2878)).objectCompare (var_filewrapperDeclarationLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2878)))).boolEnum () ;
    if (kBoolTrue == test_5) {
      GALGAS_location location_6 (object->mAttribute_mFilewrapperName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_6, GALGAS_string ("this filewrapper is internal to '").add_operation (var_filewrapperDeclarationLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2879)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2879)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2879))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2879)) ;
    }
  }
  GALGAS_string var_builtPath = GALGAS_string::makeEmptyString () ;
  if (var_filewrapperDirectoryMap.getter_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2884)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2884)).isValid ()) {
    uint32_t variant_126331 = var_filewrapperDirectoryMap.getter_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2884)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2884)).uintValue () ;
    bool loop_126331 = true ;
    while (loop_126331) {
      loop_126331 = GALGAS_bool (kIsStrictSup, var_directoryList.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2885)).objectCompare (GALGAS_uint ((uint32_t) 0U))).isValid () ;
      if (loop_126331) {
        loop_126331 = GALGAS_bool (kIsStrictSup, var_directoryList.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2885)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolValue () ;
      }
      if (loop_126331 && (0 == variant_126331)) {
        loop_126331 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2884)) ;
      }
      if (loop_126331) {
        variant_126331 -- ;
        GALGAS_string var_directoryName ;
        {
        var_directoryList.modifier_popFirst (var_directoryName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2887)) ;
        }
        var_builtPath.plusAssign_operation (var_directoryName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2888)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2888)) ;
        const enumGalgasBool test_7 = var_filewrapperDirectoryMap.getter_hasKey (var_directoryName COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2889)).boolEnum () ;
        if (kBoolTrue == test_7) {
          GALGAS_uint joker_126743 ; // Joker input parameter
          var_filewrapperDirectoryMap.method_searchKey (GALGAS_lstring::constructor_new (var_directoryName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2891))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2891)), var_filewrapperFileMap, var_filewrapperDirectoryMap, joker_126743, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2890)) ;
        }else if (kBoolFalse == test_7) {
          GALGAS_location location_8 (object->mAttribute_mFilewrapperPath.getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_8, GALGAS_string ("the '").add_operation (var_builtPath, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2897)).add_operation (GALGAS_string ("' path does not exists for the '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2897)).add_operation (object->mAttribute_mFilewrapperName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2897)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2897)).add_operation (GALGAS_string ("' filewrapper"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2897))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2897)) ;
          var_filewrapperFileMap.drop () ; // Release error dropped variable
          var_directoryList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2898)) ;
        }
      }
    }
  }
  GALGAS_uint var_fileIndex ;
  GALGAS_bool var_isTextFile ;
  const enumGalgasBool test_9 = var_filewrapperFileMap.getter_hasKey (var_fileName COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2903)).boolEnum () ;
  if (kBoolTrue == test_9) {
    GALGAS_string joker_127149 ; // Joker input parameter
    GALGAS_uint joker_127164 ; // Joker input parameter
    var_filewrapperFileMap.method_searchKey (GALGAS_lstring::constructor_new (var_fileName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2904))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2904)), joker_127149, var_isTextFile, joker_127164, var_fileIndex, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2904)) ;
  }else if (kBoolFalse == test_9) {
    GALGAS_location location_10 (object->mAttribute_mFilewrapperPath.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_10, GALGAS_string ("the '").add_operation (var_fileName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2907)).add_operation (GALGAS_string ("' file does not exist in the '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2907)).add_operation (var_builtPath, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2907)).add_operation (GALGAS_string ("' directory of '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2907)).add_operation (object->mAttribute_mFilewrapperName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2907)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2907)).add_operation (GALGAS_string ("' filewrapper"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2907))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2906)) ;
    var_fileIndex.drop () ; // Release error dropped variable
    var_isTextFile.drop () ; // Release error dropped variable
  }
  GALGAS_unifiedTypeMap_2D_proxy temp_11 ;
  const enumGalgasBool test_12 = var_isTextFile.boolEnum () ;
  if (kBoolTrue == test_12) {
    temp_11 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType ;
  }else if (kBoolFalse == test_12) {
    temp_11 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("data"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2914))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2914)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2914)) ;
  }
  outArgument_outExpression = GALGAS_filewrapperStaticPathInExpressionForGeneration::constructor_new (temp_11, object->mAttribute_mFilewrapperName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2916)), object->mAttribute_mFilewrapperName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2917)), var_fileIndex, var_isTextFile  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2911)) ;
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
  GALGAS_terminalMap joker_128543_3 ; // Joker input parameter
  GALGAS_indexingListAST joker_128543_2 ; // Joker input parameter
  GALGAS_lstring joker_128543_1 ; // Joker input parameter
  constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mLexiqueComponentMapForSemanticAnalysis.method_searchKey (object->mAttribute_mLexiqueComponentName, joker_128543_3, joker_128543_2, joker_128543_1, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2937)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mLexiqueGetterName.mAttribute_string.objectCompare (GALGAS_string ("symbols"))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mLexiqueGetterName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("unknown getter")  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2943)) ;
  }
  outArgument_outExpression = GALGAS_lexiqueIntrospectionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, GALGAS_string ("stringlist").getter_nowhere (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2947)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2947)), object->mAttribute_mLexiqueComponentName.mAttribute_location, object->mAttribute_mLexiqueComponentName.mAttribute_string, object->mAttribute_mLexiqueGetterName.mAttribute_string  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2946)) ;
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
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2962)) ;
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
  categoryMethod_enterInSemanticContext (object->mAttribute_mExpressionList, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2968)) ;
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
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inElementType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2986)) ;
  {
  routine_checkAssignmentTypes (constinArgument_inElementType, var_expression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2993)), object->mAttribute_mExpressionLocation, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2993)) ;
  }
  ioArgument_ioCollectionValueElementListForGeneration.addAssign_operation (GALGAS_expressionCollectionValueForGeneration::constructor_new (object->mAttribute_mExpressionLocation, var_expression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2995))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2995)) ;
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
  GALGAS_functionSignature var_formalParameterTypeList = constinArgument_inElementType.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3005)) ;
  GALGAS_semanticExpressionListForGeneration var_semanticExpressionListForGeneration ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_formalParameterTypeList.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3007)).objectCompare (object->mAttribute_mExpressionList.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3007)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfExpressionLocation, GALGAS_string ("element of of '@").add_operation (constinArgument_inElementType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3008)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3008)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3008)).add_operation (var_formalParameterTypeList.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3009)).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3008)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3008)).add_operation (GALGAS_string (" parameter(s), while this list has "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3009)).add_operation (object->mAttribute_mExpressionList.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3010)).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3009)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3009)).add_operation (GALGAS_string (" element(s)"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3010))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3008)) ;
    var_semanticExpressionListForGeneration.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    var_semanticExpressionListForGeneration = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3012)) ;
    cEnumerator_actualOutputExpressionList enumerator_132060 (object->mAttribute_mExpressionList, kEnumeration_up) ;
    cEnumerator_functionSignature enumerator_132091 (var_formalParameterTypeList, kEnumeration_up) ;
    while (enumerator_132060.hasCurrentObject () && enumerator_132091.hasCurrentObject ()) {
      GALGAS_semanticExpressionForGeneration var_exp ;
      callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_132060.current_mExpression (HERE).ptr (), enumerator_132091.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_exp, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3014)) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, enumerator_132091.current_mFormalSelector (HERE).mAttribute_string.objectCompare (enumerator_132060.current_mActualSelector (HERE).mAttribute_string)).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_string temp_2 ;
        const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, enumerator_132091.current_mFormalSelector (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_3) {
          temp_2 = GALGAS_string (":") ;
        }else if (kBoolFalse == test_3) {
          temp_2 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_location location_4 (enumerator_132060.current_mActualSelector (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_4, GALGAS_string ("the selector should be '!").add_operation (enumerator_132091.current_mFormalSelector (HERE).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3016)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3016)).add_operation (temp_2, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3016)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3016))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3016)) ;
      }
      {
      routine_checkAssignmentTypes (enumerator_132091.current_mFormalArgumentType (HERE), var_exp.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3018)), enumerator_132060.current_mEndOfExpressionLocation (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3018)) ;
      }
      var_semanticExpressionListForGeneration.addAssign_operation (var_exp  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3019)) ;
      enumerator_132060.gotoNextObject () ;
      enumerator_132091.gotoNextObject () ;
    }
    ioArgument_ioCollectionValueElementListForGeneration.addAssign_operation (GALGAS_expressionListCollectionForGeneration::constructor_new (object->mAttribute_mEndOfExpressionLocation, var_semanticExpressionListForGeneration  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3021))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3021)) ;
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
  cEnumerator_collectionValueElementList enumerator_134279 (object->mAttribute_mElementList, kEnumeration_up) ;
  while (enumerator_134279.hasCurrentObject ()) {
    callCategoryMethod_enterInSemanticContext ((const cPtr_abstractCollectionValueElement *) enumerator_134279.current_mElement (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3061)) ;
    enumerator_134279.gotoNextObject () ;
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
    var_targetType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3078)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_targetType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3081)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_location location_2 (object->mAttribute_mTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_2, GALGAS_string ("Cannot infer type")  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3082)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_1) {
    const enumGalgasBool test_3 = var_targetType.getter_mSupportCollectionValue (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3083)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3083)).boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_location location_4 (object->mAttribute_mTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_4, GALGAS_string ("the @").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3084)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3084)).add_operation (GALGAS_string (" type does not support collection value"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3084))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3084)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_3) {
      const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, object->mAttribute_mElementList.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3086)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_5) {
        outArgument_outExpression = GALGAS_defaultConstructorExpressionForGeneration::constructor_new (var_targetType, object->mAttribute_mTypeName.mAttribute_location  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3087)) ;
      }else if (kBoolFalse == test_5) {
        GALGAS_collectionValueElementListForGeneration var_collectionValueElementListForGeneration = GALGAS_collectionValueElementListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3091)) ;
        cEnumerator_collectionValueElementList enumerator_135436 (object->mAttribute_mElementList, kEnumeration_up) ;
        while (enumerator_135436.hasCurrentObject ()) {
          callCategoryMethod_analyze ((const cPtr_abstractCollectionValueElement *) enumerator_135436.current_mElement (HERE).ptr (), constinArgument_inAnalysisContext, var_targetType, ioArgument_ioVariableMap, var_collectionValueElementListForGeneration, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3093)) ;
          enumerator_135436.gotoNextObject () ;
        }
        outArgument_outExpression = GALGAS_expressionCollectionForGeneration::constructor_new (var_targetType, object->mAttribute_mEndOfCollectionValue, var_collectionValueElementListForGeneration  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3100)) ;
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
  GALGAS_unifiedTypeMap_2D_proxy joker_4767 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioTypeMap, object->mAttribute_mTypeName, joker_4767 COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 87)) ;
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
    GALGAS_unifiedTypeMap_2D_proxy joker_6583 ; // Joker input parameter
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioTypeMap, object->mAttribute_mOptionalTypeName, joker_6583 COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 127)) ;
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
    ioArgument_ioVariableMap.modifier_insertLocalConstant (object->mAttribute_mVariableName, var_targetType, var_targetVariableCppName, var_targetVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 160)) ;
    }
  }else if (kBoolFalse == test_2) {
    {
    ioArgument_ioVariableMap.modifier_insertDefinedLocalVariable (object->mAttribute_mVariableName, var_targetType, var_targetVariableCppName, var_targetVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 162)) ;
    }
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithConstructorCallForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_targetType, object->mAttribute_mIsConstant, var_targetVariableCppName, object->mAttribute_mConstructorName.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 170)), var_constructorEffectiveParameterList, var_hasCompilerArgument  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 165))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 165)) ;
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
  GALGAS_string var_targetVariableCppName = GALGAS_string ("var_").add_operation (object->mAttribute_mVariableName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 197)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 197)) ;
  {
  ioArgument_ioVariableMap.modifier_insertDefinedLocalVariable (object->mAttribute_mVariableName, var_expression.getter_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 198)), var_targetVariableCppName, var_targetVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 198)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::constructor_new (var_expression.getter_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 201)), GALGAS_bool (false), var_targetVariableCppName, var_expression  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 200))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 200)) ;
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
    GALGAS_unifiedTypeMap_2D_proxy joker_10190 ; // Joker input parameter
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioTypeMap, object->mAttribute_mOptionalTypeName, joker_10190 COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 214)) ;
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
  GALGAS_string var_targetVariableCppName = GALGAS_string ("var_").add_operation (object->mAttribute_mVariableName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 234)) ;
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
  routine_checkAssignmentTypes (var_targetType, var_expression.getter_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 241)), object->mAttribute_mInstructionLocation, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 241)) ;
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
  GALGAS_string var_targetVariableCppName = GALGAS_string ("var_").add_operation (object->mAttribute_mVariableName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 272)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 272)) ;
  {
  ioArgument_ioVariableMap.modifier_insertLocalConstant (object->mAttribute_mVariableName, var_expression.getter_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 273)), var_targetVariableCppName, var_targetVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 273)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::constructor_new (var_expression.getter_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 276)), GALGAS_bool (true), var_targetVariableCppName, var_expression  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 275))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 275)) ;
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
  GALGAS_unifiedTypeMap_2D_proxy joker_13308 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioTypeMap, object->mAttribute_mTypeName, joker_13308 COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 287)) ;
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
  GALGAS_string var_targetVariableCppName = GALGAS_string ("var_").add_operation (object->mAttribute_mVariableName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 298)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 298)) ;
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mStructAttributeList.getter_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 328)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    GALGAS_string joker_15158 ; // Joker input parameter
    GALGAS_string joker_15167 ; // Joker input parameter
    ioArgument_ioVariableMap.modifier_neutralAccess (object->mAttribute_mTargetVariableName, var_targetType, joker_15158, joker_15167, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 329)) ;
    }
  }else if (kBoolFalse == test_0) {
    {
    GALGAS_string joker_15269 ; // Joker input parameter
    GALGAS_string joker_15278 ; // Joker input parameter
    ioArgument_ioVariableMap.modifier_neutralAccess (object->mAttribute_mTargetVariableName, var_targetType, joker_15269, joker_15278, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 336)) ;
    }
    cEnumerator_lstringlist enumerator_15320 (object->mAttribute_mStructAttributeList, kEnumeration_up) ;
    while (enumerator_15320.hasCurrentObject ()) {
      GALGAS_attributeMap var_attributeMap = var_targetType.getter_mAttributeMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 343)) ;
      var_attributeMap.method_searchKey (enumerator_15320.current_mValue (HERE), var_targetType, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 344)) ;
      enumerator_15320.gotoNextObject () ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mSourceExpression.ptr (), var_targetType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 355)) ;
  {
  routine_checkAssignmentTypes (var_targetType, var_expression.getter_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 362)), object->mAttribute_mInstructionLocation, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 362)) ;
  }
  GALGAS_string var_targetVariableCppName ;
  GALGAS_string var_nameForCheckingFormalParameterUsing ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mAttribute_mStructAttributeList.getter_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 366)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    GALGAS_unifiedTypeMap_2D_proxy joker_16202 ; // Joker input parameter
    ioArgument_ioVariableMap.modifier_searchForWriteAccess (object->mAttribute_mTargetVariableName, joker_16202, var_targetVariableCppName, var_nameForCheckingFormalParameterUsing, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 367)) ;
    }
  }else if (kBoolFalse == test_1) {
    {
    GALGAS_unifiedTypeMap_2D_proxy joker_16369 ; // Joker input parameter
    ioArgument_ioVariableMap.modifier_searchForReadWriteAccess (object->mAttribute_mTargetVariableName, joker_16369, var_targetVariableCppName, var_nameForCheckingFormalParameterUsing, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 374)) ;
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
  const enumGalgasBool test_0 = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy.getter_isNull (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 413)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("'self' can be used only in category setters")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 414)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 415)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 415)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("'self' assignment is not allowed for class instances")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 416)) ;
    }
  }
  {
  routine_checkAssignmentTypes (constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy, var_expression.getter_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 419)), object->mAttribute_mInstructionLocation, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 419)) ;
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 464)))).operator_and (GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 465)))) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 464)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mActualSelector.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 467)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 467)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 467)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 468)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 468)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 468))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 466)) ;
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
      inCompiler->emitSemanticError (location_5, GALGAS_string ("the selector should be '!").add_operation (constinArgument_inFormalSelector.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 471)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 471)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 471)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 471))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 471)) ;
    }
    GALGAS_semanticExpressionForGeneration var_expression ;
    callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mOutputActualParameterExpression.ptr (), constinArgument_inFormalArgumentType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 473)) ;
    {
    routine_checkAssignmentTypes (constinArgument_inFormalArgumentType, var_expression.getter_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 480)), object->mAttribute_mEndOfExpressionLocation, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 480)) ;
    }
    ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_outputActualParameterForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_expression  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 482))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 482)) ;
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 499)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mActualSelector.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 501)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 501)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 501)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 502)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 502)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 502))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 500)) ;
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
      inCompiler->emitSemanticError (location_5, GALGAS_string ("the selector should be '!\?").add_operation (constinArgument_inFormalSelector.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 504)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 504)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 504)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 504))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 504)) ;
    }
  }
  GALGAS_string var_variableCppName ;
  GALGAS_unifiedTypeMap_2D_proxy var_parameterType ;
  {
  GALGAS_string joker_22504 ; // Joker input parameter
  ioArgument_ioVariableMap.modifier_searchForReadWriteAccess (object->mAttribute_mOutputInputActualParameterName, var_parameterType, var_variableCppName, joker_22504, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 508)) ;
  }
  GALGAS_unifiedTypeMapProxyList var_typeList = GALGAS_unifiedTypeMapProxyList::constructor_listWithValue (var_parameterType  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 509)) ;
  cEnumerator_lstringlist enumerator_22613 (object->mAttribute_mStructAttributeList, kEnumeration_up) ;
  while (enumerator_22613.hasCurrentObject ()) {
    GALGAS_attributeMap var_attributeMap = var_parameterType.getter_mAttributeMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 511)) ;
    var_attributeMap.method_searchKey (enumerator_22613.current_mValue (HERE), var_parameterType, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 512)) ;
    var_typeList.addAssign_operation (var_parameterType  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 520)) ;
    enumerator_22613.gotoNextObject () ;
  }
  const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType)).boolEnum () ;
  if (kBoolTrue == test_6) {
    GALGAS_location location_7 (object->mAttribute_mOutputInputActualParameterName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_7, GALGAS_string ("the parameter object has the '@").add_operation (var_parameterType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 525)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 525)).add_operation (GALGAS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 525)).add_operation (constinArgument_inFormalArgumentType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 526)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 526)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 526))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 524)) ;
  }
  const enumGalgasBool test_8 = ioArgument_ioExclusiveVariableSet.getter_hasKey (object->mAttribute_mOutputInputActualParameterName.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 529)) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 529)).boolEnum () ;
  if (kBoolTrue == test_8) {
    GALGAS_location location_9 (object->mAttribute_mOutputInputActualParameterName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_9, GALGAS_string ("this variable is already named as input or output/input effective parameter")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 530)) ;
  }
  ioArgument_ioExclusiveVariableSet.addAssign_operation (object->mAttribute_mOutputInputActualParameterName.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 533))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 533)) ;
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_outputInputActualParameterForGeneration::constructor_new (var_parameterType, var_variableCppName, object->mAttribute_mStructAttributeList, var_typeList  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 535))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 535)) ;
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 553)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mActualSelector.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 555)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 555)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 555)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 556)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 556)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 556))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 554)) ;
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
      inCompiler->emitSemanticError (location_5, GALGAS_string ("the selector should be '!\?").add_operation (constinArgument_inFormalSelector.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 558)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 558)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 558)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 558))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 558)) ;
    }
  }
  GALGAS_string var_defaultConstructorName = constinArgument_inFormalArgumentType.getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 560)) ;
  const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_defaultConstructorName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_6) {
    GALGAS_location location_7 (object->mAttribute_mActualSelector.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_7, GALGAS_string ("the formal parameter type @").add_operation (constinArgument_inFormalArgumentType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 562)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 562)).add_operation (GALGAS_string (" should support the default constructor"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 562))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 562)) ;
  }
  GALGAS_string var_cppVarName = GALGAS_string ("joker_").add_operation (object->mAttribute_mActualSelector.mAttribute_location.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 565)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 565)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 565)) ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::constructor_new (constinArgument_inFormalArgumentType, GALGAS_bool (false), var_cppVarName, GALGAS_defaultConstructorExpressionForGeneration::constructor_new (constinArgument_inFormalArgumentType, object->mAttribute_mActualSelector.mAttribute_location  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 570))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 566))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 566)) ;
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_outputInputActualParameterForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_cppVarName, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 574)), GALGAS_unifiedTypeMapProxyList::constructor_listWithValue (constinArgument_inFormalArgumentType  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 575))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 571))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 571)) ;
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 589)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mQualifierLocation, GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 591)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 591)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 591)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 592)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 592)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 592))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 590)) ;
  }
  GALGAS_string var_defaultConstructorName = constinArgument_inFormalArgumentType.getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 594)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_defaultConstructorName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mQualifierLocation, GALGAS_string ("the formal parameter type @").add_operation (constinArgument_inFormalArgumentType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 596)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 596)).add_operation (GALGAS_string (" should support the default constructor"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 596))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 596)) ;
  }
  GALGAS_string var_cppVarName = GALGAS_string ("joker_").add_operation (object->mAttribute_mQualifierLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 599)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 599)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 599)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 599)).add_operation (object->mAttribute_mJokerIndex.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 599)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 599)) ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::constructor_new (constinArgument_inFormalArgumentType, GALGAS_bool (false), var_cppVarName, GALGAS_defaultConstructorExpressionForGeneration::constructor_new (constinArgument_inFormalArgumentType, object->mAttribute_mQualifierLocation  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 604))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 600))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 600)) ;
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_outputInputActualParameterForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_cppVarName, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 608)), GALGAS_unifiedTypeMapProxyList::constructor_listWithValue (constinArgument_inFormalArgumentType  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 609))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 605))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 605)) ;
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 623)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mActualSelector.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 625)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 625)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 625)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 626)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 626)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 626))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 624)) ;
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
      inCompiler->emitSemanticError (location_5, GALGAS_string ("the selector should be '\?").add_operation (constinArgument_inFormalSelector.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 628)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 628)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 628)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 628))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 628)) ;
    }
  }
  GALGAS_unifiedTypeMap_2D_proxy var_parameterType ;
  GALGAS_string var_targetVariableCppName ;
  {
  GALGAS_string joker_28940 ; // Joker input parameter
  ioArgument_ioVariableMap.modifier_searchForWriteAccess (object->mAttribute_mInputActualParameterName, var_parameterType, var_targetVariableCppName, joker_28940, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 630)) ;
  }
  const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType)).boolEnum () ;
  if (kBoolTrue == test_6) {
    GALGAS_location location_7 (object->mAttribute_mInputActualParameterName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_7, GALGAS_string ("the parameter object has the '@").add_operation (var_parameterType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 639)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 639)).add_operation (GALGAS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 639)).add_operation (constinArgument_inFormalArgumentType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 640)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 640)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 640))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 638)) ;
  }
  const enumGalgasBool test_8 = ioArgument_ioExclusiveVariableSet.getter_hasKey (object->mAttribute_mInputActualParameterName.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 643)) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 643)).boolEnum () ;
  if (kBoolTrue == test_8) {
    GALGAS_location location_9 (object->mAttribute_mInputActualParameterName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_9, GALGAS_string ("this variable is already named as input or output/input effective parameter")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 644)) ;
  }
  ioArgument_ioExclusiveVariableSet.addAssign_operation (object->mAttribute_mInputActualParameterName.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 647))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 647)) ;
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputActualParameterForGeneration::constructor_new (var_parameterType, var_targetVariableCppName  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 649))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 649)) ;
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 666)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mActualSelector.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 668)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 668)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 668)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 669)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 669)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 669))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 667)) ;
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
      inCompiler->emitSemanticError (location_5, GALGAS_string ("the selector should be '\?").add_operation (constinArgument_inFormalSelector.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 671)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 671)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 671)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 671))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 671)) ;
    }
  }
  const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, object->mAttribute_mInputOptionalActualTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_6) {
    GALGAS_unifiedTypeMap_2D_proxy var_parameterType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mInputOptionalActualTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 676)) ;
    const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType)).boolEnum () ;
    if (kBoolTrue == test_7) {
      GALGAS_location location_8 (object->mAttribute_mInputActualParameterName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_8, GALGAS_string ("the parameter object has the '@").add_operation (var_parameterType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 682)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 682)).add_operation (GALGAS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 682)).add_operation (constinArgument_inFormalArgumentType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 683)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 683)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 683))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 681)) ;
    }
  }
  GALGAS_string var_targetVariableCppName = GALGAS_string ("var_").add_operation (object->mAttribute_mInputActualParameterName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 687)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 687)) ;
  {
  ioArgument_ioVariableMap.modifier_insertDefinedLocalVariable (object->mAttribute_mInputActualParameterName, constinArgument_inFormalArgumentType, var_targetVariableCppName, var_targetVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 688)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableDeclarationForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_targetVariableCppName  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 695))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 695)) ;
  const enumGalgasBool test_9 = ioArgument_ioExclusiveVariableSet.getter_hasKey (object->mAttribute_mInputActualParameterName.mAttribute_string COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 699)).boolEnum () ;
  if (kBoolTrue == test_9) {
    GALGAS_location location_10 (object->mAttribute_mInputActualParameterName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_10, GALGAS_string ("this variable is already named as input or output/input effective parameter")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 700)) ;
  }
  ioArgument_ioExclusiveVariableSet.addAssign_operation (object->mAttribute_mInputActualParameterName.mAttribute_string  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 703)) ;
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputActualParameterForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_targetVariableCppName  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 705))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 705)) ;
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 722)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mActualSelector.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 724)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 724)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 724)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 725)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 725)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 725))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 723)) ;
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
      inCompiler->emitSemanticError (location_5, GALGAS_string ("the selector should be '\?").add_operation (constinArgument_inFormalSelector.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 727)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 727)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 727)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 727))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 727)) ;
    }
  }
  const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, object->mAttribute_mInputOptionalActualTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_6) {
    GALGAS_unifiedTypeMap_2D_proxy var_parameterType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mInputOptionalActualTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 731)) ;
    const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType)).boolEnum () ;
    if (kBoolTrue == test_7) {
      GALGAS_location location_8 (object->mAttribute_mInputActualParameterName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_8, GALGAS_string ("the parameter object has the '@").add_operation (var_parameterType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 737)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 737)).add_operation (GALGAS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 737)).add_operation (constinArgument_inFormalArgumentType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 738)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 738)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 738))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 736)) ;
    }
  }
  GALGAS_string var_targetVariableCppName = GALGAS_string ("var_").add_operation (object->mAttribute_mInputActualParameterName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 742)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 742)) ;
  const enumGalgasBool test_9 = object->mAttribute_mMarkedAsUnused.boolEnum () ;
  if (kBoolTrue == test_9) {
    {
    ioArgument_ioVariableMap.modifier_insertUsedLocalConstant (object->mAttribute_mInputActualParameterName, constinArgument_inFormalArgumentType, var_targetVariableCppName, var_targetVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 744)) ;
    }
  }else if (kBoolFalse == test_9) {
    {
    ioArgument_ioVariableMap.modifier_insertLocalConstant (object->mAttribute_mInputActualParameterName, constinArgument_inFormalArgumentType, var_targetVariableCppName, var_targetVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 751)) ;
    }
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableDeclarationForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_targetVariableCppName  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 759))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 759)) ;
  const enumGalgasBool test_10 = ioArgument_ioExclusiveVariableSet.getter_hasKey (object->mAttribute_mInputActualParameterName.mAttribute_string COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 764)).boolEnum () ;
  if (kBoolTrue == test_10) {
    GALGAS_location location_11 (object->mAttribute_mInputActualParameterName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_11, GALGAS_string ("this variable is already named as input or output/input effective parameter")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 765)) ;
  }
  ioArgument_ioExclusiveVariableSet.addAssign_operation (object->mAttribute_mInputActualParameterName.mAttribute_string  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 768)) ;
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputActualParameterForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_targetVariableCppName  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 770))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 770)) ;
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 787)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mActualSelector.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 789)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 789)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 789)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 790)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 790)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 790))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 788)) ;
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
      inCompiler->emitSemanticError (location_5, GALGAS_string ("the selector should be '\?").add_operation (constinArgument_inFormalSelector.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 792)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 792)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 792)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 792))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 792)) ;
    }else if (kBoolFalse == test_2) {
      GALGAS_string var_cppVarName = GALGAS_string ("joker_").add_operation (object->mAttribute_mActualSelector.mAttribute_location.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 794)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 794)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 794)) ;
      ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputJokerParameterForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_cppVarName  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 796))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 796)) ;
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 813)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mQualifierLocation, GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 815)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 815)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 815)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 816)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 816)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 816))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 814)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_string var_cppVarName = GALGAS_string ("joker_").add_operation (object->mAttribute_mQualifierLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 818)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 818)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 818)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 818)).add_operation (object->mAttribute_mJokerIndex.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 818)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 818)) ;
    ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputJokerParameterForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_cppVarName  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 820))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 820)) ;
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
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mOutputActualParameterExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 859)) ;
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
  const enumGalgasBool test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1041)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mLocation, GALGAS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1042)) ;
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
  const enumGalgasBool test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1054)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mActualParameterName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1055)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_type ;
  GALGAS_string var_cppName ;
  {
  GALGAS_string joker_48027 ; // Joker input parameter
  ioArgument_ioVariableMap.modifier_searchForWriteAccess (object->mAttribute_mActualParameterName, var_type, var_cppName, joker_48027, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1057)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_expectedType.objectCompare (var_type)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mActualParameterName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_3, GALGAS_string ("the '").add_operation (object->mAttribute_mActualParameterName.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1061)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1061)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1061)).add_operation (var_type.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1061)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1061)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1061)).add_operation (var_expectedType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1062)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1062)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1062))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1060)) ;
  }
  ioArgument_ioAssignementList.addAssign_operation (var_cppName.add_operation (GALGAS_string (" = GALGAS_string ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1064)).add_operation (constinArgument_inSyntaxDirectedTranslationResultVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1064)).add_operation (GALGAS_string (") ;"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1064))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1064)) ;
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
  const enumGalgasBool test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1075)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mActualParameterName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1076)) ;
  }
  GALGAS_string var_cppName = GALGAS_string ("var_").add_operation (object->mAttribute_mActualParameterName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1078)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1078)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mActualParameterTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1079)) ;
  {
  ioArgument_ioVariableMap.modifier_insertDefinedLocalVariable (object->mAttribute_mActualParameterName, var_type, var_cppName, var_cppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1080)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_expectedType.objectCompare (var_type)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mActualParameterName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_3, GALGAS_string ("the '").add_operation (object->mAttribute_mActualParameterName.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1084)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1084)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1084)).add_operation (var_type.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1084)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1084)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1084)).add_operation (var_expectedType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1085)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1085)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1085))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1083)) ;
  }
  ioArgument_ioAssignementList.addAssign_operation (GALGAS_string ("GALGAS_string ").add_operation (var_cppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1087)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1087)).add_operation (constinArgument_inSyntaxDirectedTranslationResultVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1087)).add_operation (GALGAS_string (") ;"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1087))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1087)) ;
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
  const enumGalgasBool test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1098)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mActualParameterName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1099)) ;
  }
  GALGAS_string var_cppName = GALGAS_string ("var_").add_operation (object->mAttribute_mActualParameterName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1101)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1101)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mActualParameterTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1102)) ;
  {
  ioArgument_ioVariableMap.modifier_insertLocalConstant (object->mAttribute_mActualParameterName, var_type, var_cppName, var_cppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1103)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_expectedType.objectCompare (var_type)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mActualParameterName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_3, GALGAS_string ("the '").add_operation (object->mAttribute_mActualParameterName.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1107)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1107)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1107)).add_operation (var_type.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1107)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1107)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1107)).add_operation (var_expectedType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1108)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1108)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1108))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1106)) ;
  }
  ioArgument_ioAssignementList.addAssign_operation (GALGAS_string ("const GALGAS_string ").add_operation (var_cppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1110)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1110)).add_operation (constinArgument_inSyntaxDirectedTranslationResultVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1110)).add_operation (GALGAS_string (") ;"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1110))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1110)) ;
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
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extern type ").add_operation (object->mAttribute_mExternTypeName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 171)), GALGAS_externTypeDeclarationForGeneration::constructor_new (var_externTypeProxy, object->mAttribute_mExternTypeName.mAttribute_string, object->mAttribute_mCppPreDeclarationCode, object->mAttribute_mCppClassCode  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 172)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 170)) ;
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
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("array ").add_operation (object->mAttribute_mArrayTypeName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 189)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 189)), GALGAS_arrayTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mArrayTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 191)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mElementTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 192)), object->mAttribute_mDimension.getter_uint (SOURCE_FILE ("semanticAnalysis.galgas", 193))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 190)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 188)) ;
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
    GALGAS_location location_1 (object->mAttribute_mAssociatedListTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("associated type should be a list type")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 217)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("list map ").add_operation (object->mAttribute_mListmapTypeName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 221)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 221)), GALGAS_listmapTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mListmapTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 223)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mAssociatedListTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 224)), var_listTypeAttributeList, GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (object->mAttribute_mListmapTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 226)), object->mAttribute_mListmapTypeName.mAttribute_location  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 226)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 226))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 222)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 220)) ;
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
    const enumGalgasBool test_0 = function_forbiddenKeysForMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 312)).getter_hasKey (enumerator_15709.current_mPropertyName (HERE).mAttribute_string COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 312)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_m = GALGAS_string ("an attribute cannot be named:") ;
      cEnumerator_stringset enumerator_16101 (function_forbiddenKeysForMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 314)), kEnumeration_up) ;
      while (enumerator_16101.hasCurrentObject ()) {
        var_m.plusAssign_operation (GALGAS_string (" ").add_operation (enumerator_16101.current (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 315)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 315)) ;
        enumerator_16101.gotoNextObject () ;
      }
      var_m.plusAssign_operation (GALGAS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 317)) ;
      GALGAS_location location_1 (enumerator_15709.current_mPropertyName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
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
  GALGAS_bool var_hasInsertOrReplaceModifier = GALGAS_bool (kIsStrictSup, object->mAttribute_mInsertOrReplaceDeclarationListAST.getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 346)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  const enumGalgasBool test_3 = var_hasInsertOrReplaceModifier.operator_and (var_insertMethodMap.getter_hasKey (GALGAS_string ("insertOrReplace") COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 347)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 347)).boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_location var_insertOrReplaceDeclarationLocation ;
    object->mAttribute_mInsertOrReplaceDeclarationListAST.method_first (var_insertOrReplaceDeclarationLocation, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 349)) ;
    inCompiler->emitSemanticError (var_insertOrReplaceDeclarationLocation, GALGAS_string ("the insertOrReplace' setter cannot be declared : an insert modifier or a remove modifier has been declared with this name")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 350)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("map ").add_operation (object->mAttribute_mMapTypeName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 363)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 363)), GALGAS_mapTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mMapTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 365)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (object->mAttribute_mMapTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 366)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 366)), object->mAttribute_mMapTypeName.mAttribute_location  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 366)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 366)), object->mAttribute_mMapTypeName, var_typedAttributeList, object->mAttribute_mInsertMethodList, object->mAttribute_mSearchMethodList, object->mAttribute_mRemoveMethodList, var_hasInsertOrReplaceModifier  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 364)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 362)) ;
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
    var_formalArgumentList.addAssign_operation (enumerator_24004.current_mFormalSelector (HERE), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_24004.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 494)), enumerator_24004.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 495)), enumerator_24004.current_mFormalArgumentName (HERE), enumerator_24004.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 492)) ;
    enumerator_24004.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extern func ").add_operation (object->mAttribute_mFunctionName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 500)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 500)), GALGAS_functionPrototypeDeclarationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("func-").add_operation (object->mAttribute_mFunctionName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 503)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 503)), object->mAttribute_mFunctionName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 504)), var_formalArgumentList, GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mResultTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 506))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 501)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 499)) ;
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
    var_formalArgumentList.addAssign_operation (enumerator_25105.current_mFormalSelector (HERE), enumerator_25105.current_mFormalArgumentPassingMode (HERE), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_25105.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 522)), enumerator_25105.current_mFormalArgumentName (HERE), enumerator_25105.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 524))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 519)) ;
    enumerator_25105.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extern proc ").add_operation (object->mAttribute_mRoutineName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 527)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 527)), GALGAS_routinePrototypeDeclarationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("proc-").add_operation (object->mAttribute_mRoutineName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 530)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 530)), object->mAttribute_mRoutineName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 531)), var_formalArgumentList  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 528)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 526)) ;
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
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("proc ").add_operation (object->mAttribute_mRoutineName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 566)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 566)), GALGAS_routineImplementationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("proc-").add_operation (object->mAttribute_mRoutineName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 569)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 569)), object->mAttribute_mRoutineName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 570)), var_formalArgumentList, GALGAS_bool (false), var_instructionList  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 567)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 565)) ;
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mSuperClassName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 591)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_superClassProxy = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 592)) ;
    var_allAttributeList = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 593)) ;
    GALGAS_bool var_generatedInSeparateFileFeature = GALGAS_bool (false) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, object->mAttribute_mClassFeatureList.getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 595)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      cEnumerator_lstringlist enumerator_27995 (object->mAttribute_mClassFeatureList, kEnumeration_up) ;
      while (enumerator_27995.hasCurrentObject ()) {
        const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_27995.current_mValue (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 597)).objectCompare (GALGAS_string ("generatedInSeparateFile"))).boolEnum () ;
        if (kBoolTrue == test_2) {
          const enumGalgasBool test_3 = var_generatedInSeparateFileFeature.boolEnum () ;
          if (kBoolTrue == test_3) {
            GALGAS_location location_4 (enumerator_27995.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
            inCompiler->emitSemanticError (location_4, GALGAS_string ("the 'generatedInSeparateFile' is already named")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 599)) ;
          }
          var_generatedInSeparateFileFeature = GALGAS_bool (true) ;
        }else if (kBoolFalse == test_2) {
          GALGAS_location location_5 (enumerator_27995.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_5, GALGAS_string ("only the 'generatedInSeparateFile' feature is allowed here")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 603)) ;
        }
        enumerator_27995.gotoNextObject () ;
      }
    }
  }else if (kBoolFalse == test_0) {
    var_superClassProxy = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mSuperClassName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 608)) ;
    var_allAttributeList = var_superClassProxy.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 609)) ;
    const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, object->mAttribute_mClassFeatureList.getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 610)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_6) {
      cEnumerator_lstringlist enumerator_28620 (object->mAttribute_mClassFeatureList, kEnumeration_up) ;
      while (enumerator_28620.hasCurrentObject ()) {
        GALGAS_location location_7 (enumerator_28620.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
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
      const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, enumerator_29066.current_mValue (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 624)).objectCompare (GALGAS_string ("setter"))).boolEnum () ;
      if (kBoolTrue == test_8) {
        const enumGalgasBool test_9 = var_hasSetter.boolEnum () ;
        if (kBoolTrue == test_9) {
          GALGAS_location location_10 (enumerator_29066.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_10, GALGAS_string ("the 'setter' feature is already named")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 626)) ;
        }
        var_hasSetter = GALGAS_bool (true) ;
      }else if (kBoolFalse == test_8) {
        const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, enumerator_29066.current_mValue (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 629)).objectCompare (GALGAS_string ("nogetter"))).boolEnum () ;
        if (kBoolTrue == test_11) {
          const enumGalgasBool test_12 = var_hasGetter.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 630)).boolEnum () ;
          if (kBoolTrue == test_12) {
            GALGAS_location location_13 (enumerator_29066.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
            inCompiler->emitSemanticError (location_13, GALGAS_string ("the 'nogetter' feature is already named")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 631)) ;
          }
          var_hasGetter = GALGAS_bool (false) ;
        }else if (kBoolFalse == test_11) {
          GALGAS_location location_14 (enumerator_29066.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
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
  GALGAS_string var_sortString = var_selfType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 651)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_t = var_selfType.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 652)) ;
  if (constinArgument_inSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 653)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 653)).isValid ()) {
    uint32_t variant_29914 = constinArgument_inSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 653)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 653)).uintValue () ;
    bool loop_29914 = true ;
    while (loop_29914) {
      loop_29914 = var_t.getter_isNull (SOURCE_FILE ("semanticAnalysis.galgas", 654)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 654)).isValid () ;
      if (loop_29914) {
        loop_29914 = var_t.getter_isNull (SOURCE_FILE ("semanticAnalysis.galgas", 654)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 654)).boolValue () ;
      }
      if (loop_29914 && (0 == variant_29914)) {
        loop_29914 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticAnalysis.galgas", 653)) ;
      }
      if (loop_29914) {
        variant_29914 -- ;
        var_sortString = var_t.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 655)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 655)).add_operation (var_sortString, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 655)) ;
        var_t = var_t.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 656)) ;
      }
    }
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("class ").add_operation (object->mAttribute_mClassTypeName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 660)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 660)), GALGAS_classTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mClassTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 662)), object->mAttribute_mIsAbstract, object->mAttribute_mClassTypeName, var_superClassProxy, var_allAttributeList, var_typedAttributeList, var_selfType.getter_mGenerateHeaderInSeparateFile (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 668))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 661)), var_sortString  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 659)) ;
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
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("function ").add_operation (object->mAttribute_mFunctionName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 780)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 780)), GALGAS_functionImplementationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("func-").add_operation (object->mAttribute_mFunctionName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 783)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 783)), object->mAttribute_mFunctionName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 784)), var_formalInputParameterList, var_returnType, var_resultVariableCppName, var_semanticInstructionListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 781)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 779)) ;
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
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("once function ").add_operation (object->mAttribute_mFunctionName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 825)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 825)), GALGAS_onceFunctionDeclarationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("func-").add_operation (object->mAttribute_mFunctionName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 828)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 828)), object->mAttribute_mFunctionName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 829)), var_returnType, var_resultVariableCppName, var_semanticInstructionListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 826)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 824)) ;
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mFilewrapperPath.mAttribute_string.getter_firstCharacterOrNul (SOURCE_FILE ("semanticAnalysis.galgas", 858)).objectCompare (GALGAS_char (TO_UNICODE (47)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_absoluteSourcePath = object->mAttribute_mFilewrapperPath.mAttribute_string ;
  }else if (kBoolFalse == test_0) {
    var_absoluteSourcePath = object->mAttribute_mSourceFileAbsolutePath.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("semanticAnalysis.galgas", 861)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 861)).add_operation (object->mAttribute_mFilewrapperPath.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 861)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 861)) ;
  }
  const enumGalgasBool test_1 = var_absoluteSourcePath.getter_directoryExists (SOURCE_FILE ("semanticAnalysis.galgas", 863)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 863)).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_location location_2 (object->mAttribute_mFilewrapperPath.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_2, GALGAS_string ("The '").add_operation (var_absoluteSourcePath, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 864)).add_operation (GALGAS_string ("' directory does not exist"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 864))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 864)) ;
  }else if (kBoolFalse == test_1) {
    GALGAS_filewrapperTemplateListForGeneration var_filewrapperTemplateListForGeneration = GALGAS_filewrapperTemplateListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 867)) ;
    cEnumerator_filewrapperTemplateListAST enumerator_38295 (object->mAttribute_mFilewrapperTemplateList, kEnumeration_up) ;
    while (enumerator_38295.hasCurrentObject ()) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_38295.current_mFilewrapperTemplatePath (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 869)).getter_firstCharacterOrNul (SOURCE_FILE ("semanticAnalysis.galgas", 869)).objectCompare (GALGAS_char (TO_UNICODE (47)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_location location_4 (enumerator_38295.current_mFilewrapperTemplatePath (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_4, GALGAS_string ("the path should not begin with a '/'; it is relative to filewrapper path '").add_operation (var_absoluteSourcePath, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 870)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 870))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 870)) ;
      }
      GALGAS_string var_absoluteTemplatePath = var_absoluteSourcePath.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 872)).add_operation (enumerator_38295.current_mFilewrapperTemplatePath (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 872)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 872)) ;
      GALGAS_templateInstructionListAST var_resultingInstructionList ;
      var_resultingInstructionList.drop () ;
      cGrammar_templateGrammar::_performSourceFileParsing_ (inCompiler, GALGAS_lstring::constructor_new (var_absoluteTemplatePath, enumerator_38295.current_mFilewrapperTemplatePath (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 875))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 875)), var_resultingInstructionList  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 875)) ;
      GALGAS_templateVariableMap var_templateVariableMap = GALGAS_templateVariableMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 877)) ;
      GALGAS_formalInputParameterListForGeneration var_filewrapperTemplateFormalInputParameters = GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 878)) ;
      cEnumerator_formalTemplateInputParameterListAST enumerator_39089 (enumerator_38295.current_mFilewrapperTemplateFormalInputParameters (HERE), kEnumeration_up) ;
      while (enumerator_39089.hasCurrentObject ()) {
        GALGAS_unifiedTypeMap_2D_proxy var_type = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_39089.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 880)) ;
        GALGAS_string var_cppVarName = GALGAS_string ("in_").add_operation (enumerator_39089.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 881)).getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 881)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 881)) ;
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
      var_filewrapperTemplateListForGeneration.addAssign_operation (enumerator_38295.current_mFilewrapperTemplateName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 894)), var_filewrapperTemplateFormalInputParameters, var_templateInstructionListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 893)) ;
      enumerator_38295.gotoNextObject () ;
    }
    ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("filewrapper ").add_operation (object->mAttribute_mFilewrapperName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 900)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 900)), GALGAS_filewrapperDeclarationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("filewrapper-").add_operation (object->mAttribute_mFilewrapperName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 903)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 903)), object->mAttribute_mFilewrapperName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 904)), object->mAttribute_mFilewrapperPath.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 905)), var_wrapperFileMap, var_wrapperDirectoryMap, var_filewrapperTemplateListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 901)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 899)) ;
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
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("option ").add_operation (object->mAttribute_mOptionComponentName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 934)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 934)), GALGAS_optionComponentForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("option-").add_operation (object->mAttribute_mOptionComponentName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 937)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 937)), var_isPredefined, object->mAttribute_mOptionComponentName.mAttribute_string, var_boolOptionMap, var_uintOptionMap, var_stringOptionMap, var_stringListOptionMap  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 935)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 933)) ;
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 958)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 958)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mAbstractCategoryMethodName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("cannot declare a category method: '@").add_operation (var_selfType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 959)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 959)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 959))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 959)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = var_selfType.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 960)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (object->mAttribute_mAbstractCategoryMethodName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_3, GALGAS_string ("cannot declare an abstract category method: '@").add_operation (var_selfType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 961)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 961)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 961))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 961)) ;
    }
  }
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 964)) ;
  cEnumerator_formalParameterListAST enumerator_43308 (object->mAttribute_mAbstractCategoryMethodFormalParameterList, kEnumeration_up) ;
  while (enumerator_43308.hasCurrentObject ()) {
    var_formalParameterListForGeneration.addAssign_operation (enumerator_43308.current_mFormalSelector (HERE), enumerator_43308.current_mFormalArgumentPassingMode (HERE), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_43308.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 969)), enumerator_43308.current_mFormalArgumentName (HERE), enumerator_43308.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 971))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 966)) ;
    enumerator_43308.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("abstract extension method ").add_operation (object->mAttribute_mAbstractCategoryMethodName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 975)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 975)), GALGAS_abstractCategoryMethodForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("method-").add_operation (var_selfType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 978)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 978)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 978)).add_operation (object->mAttribute_mAbstractCategoryMethodName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 978)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 978)), var_selfType, object->mAttribute_mAbstractCategoryMethodName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 980)), var_formalParameterListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 976)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 974)) ;
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_selfType.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 998)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 998)))).boolEnum () ;
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
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_selfType.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1020)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 1020)))).operator_or (GALGAS_bool (kIsEqual, var_selfType.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1020)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("semanticAnalysis.galgas", 1020)))) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1020)).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = var_selfType.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1021)) ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1022)) ;
  }
  routine_analyzeRoutineBody (var_analysisContext, object->mAttribute_mCategoryMethodFormalParameterList, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1019)), temp_1, GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1024)), var_selfObjectAccessor, object->mAttribute_mCategoryMethodInstructionList, object->mAttribute_mEndOfMethodLocation, var_semanticInstructionListForGeneration, var_formalParameterListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1016)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extension method ").add_operation (object->mAttribute_mCategoryMethodName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1033)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1033)), GALGAS_categoryMethodForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("method-").add_operation (var_selfType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1036)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1036)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1036)).add_operation (object->mAttribute_mCategoryMethodName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1036)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1036)), var_selfType, object->mAttribute_mCategoryMethodName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1038)), var_implementedAsFunction, var_formalParameterListForGeneration, var_selfType.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1041)), var_semanticInstructionListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1034)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1032)) ;
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1056)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 1056)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mOverridingCategoryMethodName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("cannot declare a category method: '@").add_operation (var_selfType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1057)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1057)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1057))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1057)) ;
  }
  GALGAS_string var_baseTypeName = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMap_2D_proxy var_superType = var_selfType.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1061)) ;
  GALGAS_formalParameterSignature var_inheritedSignature = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1062)) ;
  GALGAS_location var_inheritedDeclarationLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1063)) ;
  if (constinArgument_inSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 1064)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1064)).isValid ()) {
    uint32_t variant_47199 = constinArgument_inSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 1064)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1064)).uintValue () ;
    bool loop_47199 = true ;
    while (loop_47199) {
      loop_47199 = var_superType.getter_isNull (SOURCE_FILE ("semanticAnalysis.galgas", 1065)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1065)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1065)).isValid () ;
      if (loop_47199) {
        loop_47199 = var_superType.getter_isNull (SOURCE_FILE ("semanticAnalysis.galgas", 1065)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1065)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1065)).boolValue () ;
      }
      if (loop_47199 && (0 == variant_47199)) {
        loop_47199 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticAnalysis.galgas", 1064)) ;
      }
      if (loop_47199) {
        variant_47199 -- ;
        const enumGalgasBool test_2 = var_superType.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1066)).getter_hasKey (object->mAttribute_mOverridingCategoryMethodName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1066)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1066)).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_methodQualifier var_qualifier ;
          GALGAS_methodKind joker_47505 ; // Joker input parameter
          GALGAS_bool joker_47558 ; // Joker input parameter
          GALGAS_string joker_47572 ; // Joker input parameter
          var_superType.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1068)).method_searchKey (object->mAttribute_mOverridingCategoryMethodName, joker_47505, var_inheritedSignature, var_inheritedDeclarationLocation, joker_47558, var_qualifier, joker_47572, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1068)) ;
          const enumGalgasBool test_3 = GALGAS_bool (kIsInfOrEqual, var_qualifier.objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticAnalysis.galgas", 1069)))).boolEnum () ;
          if (kBoolTrue == test_3) {
            var_baseTypeName = var_superType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1070)) ;
          }
        }
        var_superType = var_superType.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1073)) ;
      }
    }
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_location location_5 (object->mAttribute_mOverridingCategoryMethodName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_5, GALGAS_string ("this method is not declared by a super class")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1076)) ;
  }
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1079)) ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration ;
  GALGAS_analysisContext var_analysisContext = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfType, GALGAS_string ("object"), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 1086))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1081)) ;
  {
  GALGAS_typedPropertyList temp_6 ;
  const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, var_selfType.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1091)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 1091)))).operator_or (GALGAS_bool (kIsEqual, var_selfType.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1091)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("semanticAnalysis.galgas", 1091)))) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1091)).boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = var_selfType.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1092)) ;
  }else if (kBoolFalse == test_7) {
    temp_6 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1093)) ;
  }
  routine_analyzeRoutineBody (var_analysisContext, object->mAttribute_mOverridingCategoryMethodFormalParameterList, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1090)), temp_6, GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1095)), GALGAS_string ("object->"), object->mAttribute_mOverridingCategoryMethodInstructionList, object->mAttribute_mEndOfMethodLocation, var_semanticInstructionListForGeneration, var_formalParameterListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1087)) ;
  }
  const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_8) {
    {
    routine_checkMethodSignatures (var_formalParameterListForGeneration, object->mAttribute_mOverridingCategoryMethodName.getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1106)), var_inheritedSignature, var_inheritedDeclarationLocation, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1104)) ;
    }
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("override extension method ").add_operation (object->mAttribute_mOverridingCategoryMethodName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1113)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1113)), GALGAS_overridingCategoryMethodForGeneration::constructor_new (GALGAS_bool (false), GALGAS_string ("method-").add_operation (var_selfType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1116)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1116)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1116)).add_operation (object->mAttribute_mOverridingCategoryMethodName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1116)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1116)), var_selfType, var_baseTypeName, object->mAttribute_mOverridingCategoryMethodName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1119)), var_formalParameterListForGeneration, var_selfType.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1121)), var_semanticInstructionListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1114)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1112)) ;
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1136)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 1136)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mOverridingCategoryMethodName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("cannot declare a category method: '@").add_operation (var_selfType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1137)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1137)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1137))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1137)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = var_selfType.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1138)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (object->mAttribute_mOverridingCategoryMethodName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_3, GALGAS_string ("cannot declare an abstract category method: '@").add_operation (var_selfType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1139)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1139)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1139))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1139)) ;
    }
  }
  GALGAS_string var_baseTypeName = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMap_2D_proxy var_superType = var_selfType.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1143)) ;
  GALGAS_formalParameterSignature var_inheritedSignature = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1144)) ;
  GALGAS_location var_inheritedDeclarationLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1145)) ;
  if (constinArgument_inSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 1146)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1146)).isValid ()) {
    uint32_t variant_50687 = constinArgument_inSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 1146)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1146)).uintValue () ;
    bool loop_50687 = true ;
    while (loop_50687) {
      loop_50687 = var_superType.getter_isNull (SOURCE_FILE ("semanticAnalysis.galgas", 1147)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1147)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1147)).isValid () ;
      if (loop_50687) {
        loop_50687 = var_superType.getter_isNull (SOURCE_FILE ("semanticAnalysis.galgas", 1147)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1147)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1147)).boolValue () ;
      }
      if (loop_50687 && (0 == variant_50687)) {
        loop_50687 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticAnalysis.galgas", 1146)) ;
      }
      if (loop_50687) {
        variant_50687 -- ;
        const enumGalgasBool test_4 = var_superType.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1148)).getter_hasKey (object->mAttribute_mOverridingCategoryMethodName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1148)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1148)).boolEnum () ;
        if (kBoolTrue == test_4) {
          GALGAS_methodQualifier var_qualifier ;
          GALGAS_methodKind joker_50993 ; // Joker input parameter
          GALGAS_bool joker_51046 ; // Joker input parameter
          GALGAS_string joker_51060 ; // Joker input parameter
          var_superType.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1150)).method_searchKey (object->mAttribute_mOverridingCategoryMethodName, joker_50993, var_inheritedSignature, var_inheritedDeclarationLocation, joker_51046, var_qualifier, joker_51060, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1150)) ;
          const enumGalgasBool test_5 = GALGAS_bool (kIsInfOrEqual, var_qualifier.objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticAnalysis.galgas", 1151)))).boolEnum () ;
          if (kBoolTrue == test_5) {
            var_baseTypeName = var_superType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1152)) ;
          }
        }
        var_superType = var_superType.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1155)) ;
      }
    }
  }
  const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_6) {
    GALGAS_location location_7 (object->mAttribute_mOverridingCategoryMethodName.getter_location (HERE)) ; // Implicit use of 'location' getter
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
    routine_checkMethodSignatures (var_formalParameterListForGeneration, object->mAttribute_mOverridingCategoryMethodName.getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1173)), var_inheritedSignature, var_inheritedDeclarationLocation, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1171)) ;
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1190)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 1190)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mAbstractCategoryModifierName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("cannot declare a category setter: '@").add_operation (var_selfType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1191)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1191)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1191))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1191)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = var_selfType.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1192)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (object->mAttribute_mAbstractCategoryModifierName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_3, GALGAS_string ("cannot declare an abstract category setter: '@").add_operation (var_selfType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1193)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1193)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1193))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1193)) ;
    }
  }
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1196)) ;
  cEnumerator_formalParameterListAST enumerator_53012 (object->mAttribute_mAbstractCategoryModifierFormalParameterList, kEnumeration_up) ;
  while (enumerator_53012.hasCurrentObject ()) {
    var_formalParameterListForGeneration.addAssign_operation (enumerator_53012.current_mFormalSelector (HERE), enumerator_53012.current_mFormalArgumentPassingMode (HERE), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_53012.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1201)), enumerator_53012.current_mFormalArgumentName (HERE), enumerator_53012.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1203))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1198)) ;
    enumerator_53012.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string (" abstract extension setter ").add_operation (object->mAttribute_mAbstractCategoryModifierName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1207)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1207)), GALGAS_abstractCategoryModifierForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("setter-").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1210)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1210)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1210)).add_operation (object->mAttribute_mAbstractCategoryModifierName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1210)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1210)), var_selfType, object->mAttribute_mAbstractCategoryModifierName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1212)), var_formalParameterListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1208)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1206)) ;
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_selfType.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1230)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 1230)))).boolEnum () ;
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
  routine_analyzeRoutineBody (var_analysisContext, object->mAttribute_mCategoryModifierFormalParameterList, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1251)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1252)), var_selfType.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1253)), var_selfObjectAccessor, object->mAttribute_mCategoryModifierInstructionList, object->mAttribute_mEndOfModifierLocation, var_semanticInstructionListForGeneration, var_formalParameterListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1248)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extension setter ").add_operation (object->mAttribute_mCategoryModifierName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1262)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1262)), GALGAS_categoryModifierForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("setter-").add_operation (var_selfType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1265)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1265)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1265)).add_operation (object->mAttribute_mCategoryModifierName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1265)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1265)), var_selfType, object->mAttribute_mCategoryModifierName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1267)), var_implementedAsFunction, var_formalParameterListForGeneration, var_selfType.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1270)), var_semanticInstructionListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1263)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1261)) ;
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1285)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 1285)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mOverridingCategoryModifierName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("cannot declare a category setter: '@").add_operation (var_selfType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1286)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1286)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1286))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1286)) ;
  }
  GALGAS_string var_baseTypeName = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMap_2D_proxy var_superType = var_selfType.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1290)) ;
  GALGAS_formalParameterSignature var_inheritedSignature = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1291)) ;
  GALGAS_location var_inheritedDeclarationLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1292)) ;
  if (constinArgument_inSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 1293)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1293)).isValid ()) {
    uint32_t variant_56728 = constinArgument_inSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 1293)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1293)).uintValue () ;
    bool loop_56728 = true ;
    while (loop_56728) {
      loop_56728 = var_superType.getter_isNull (SOURCE_FILE ("semanticAnalysis.galgas", 1294)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1294)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1294)).isValid () ;
      if (loop_56728) {
        loop_56728 = var_superType.getter_isNull (SOURCE_FILE ("semanticAnalysis.galgas", 1294)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1294)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1294)).boolValue () ;
      }
      if (loop_56728 && (0 == variant_56728)) {
        loop_56728 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticAnalysis.galgas", 1293)) ;
      }
      if (loop_56728) {
        variant_56728 -- ;
        const enumGalgasBool test_2 = var_superType.getter_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1295)).getter_hasKey (object->mAttribute_mOverridingCategoryModifierName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1295)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1295)).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_methodQualifier var_qualifier ;
          GALGAS_methodKind joker_57026 ; // Joker input parameter
          GALGAS_bool joker_57049 ; // Joker input parameter
          GALGAS_string joker_57063 ; // Joker input parameter
          var_superType.getter_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1297)).method_searchKey (object->mAttribute_mOverridingCategoryModifierName, joker_57026, var_inheritedSignature, joker_57049, var_qualifier, joker_57063, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1297)) ;
          const enumGalgasBool test_3 = GALGAS_bool (kIsInfOrEqual, var_qualifier.objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticAnalysis.galgas", 1298)))).boolEnum () ;
          if (kBoolTrue == test_3) {
            var_baseTypeName = var_superType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1299)) ;
          }
        }
        var_superType = var_superType.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1302)) ;
      }
    }
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_location location_5 (object->mAttribute_mOverridingCategoryModifierName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_5, GALGAS_string ("this setter is not declared by a super class")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1305)) ;
  }
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1308)) ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration ;
  GALGAS_analysisContext var_analysisContext = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfType, GALGAS_string ("object"), var_selfType  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1310)) ;
  {
  routine_analyzeRoutineBody (var_analysisContext, object->mAttribute_mOverridingCategoryModifierFormalParameterList, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1319)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1320)), var_selfType.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1321)), GALGAS_string ("object->"), object->mAttribute_mOverridingCategoryModifierInstructionList, object->mAttribute_mEndOfModifierLocation, var_semanticInstructionListForGeneration, var_formalParameterListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1316)) ;
  }
  const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_6) {
    {
    routine_checkMethodSignatures (var_formalParameterListForGeneration, object->mAttribute_mOverridingCategoryModifierName.getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1332)), var_inheritedSignature, var_inheritedDeclarationLocation, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1330)) ;
    }
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string (" overriding extension setter ").add_operation (object->mAttribute_mOverridingCategoryModifierName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1339)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1339)), GALGAS_overridingCategoryModifierForGeneration::constructor_new (GALGAS_bool (false), GALGAS_string ("setter-").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1342)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1342)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1342)).add_operation (object->mAttribute_mOverridingCategoryModifierName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1342)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1342)), var_selfType, var_baseTypeName, object->mAttribute_mOverridingCategoryModifierName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1345)), var_formalParameterListForGeneration, var_selfType.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1347)), var_semanticInstructionListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1340)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1338)) ;
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1362)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 1362)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mOverridingCategoryModifierName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("cannot declare a category setter: '@").add_operation (var_selfType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1363)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1363)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1363))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1363)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = var_selfType.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1364)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (object->mAttribute_mOverridingCategoryModifierName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_3, GALGAS_string ("cannot declare an abstract category setter: '@").add_operation (var_selfType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1365)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1365)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1365))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1365)) ;
    }
  }
  GALGAS_string var_baseTypeName = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMap_2D_proxy var_superType = var_selfType.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1369)) ;
  GALGAS_formalParameterSignature var_inheritedSignature = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1370)) ;
  GALGAS_location var_inheritedDeclarationLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1371)) ;
  if (constinArgument_inSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 1372)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1372)).isValid ()) {
    uint32_t variant_60002 = constinArgument_inSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 1372)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1372)).uintValue () ;
    bool loop_60002 = true ;
    while (loop_60002) {
      loop_60002 = var_superType.getter_isNull (SOURCE_FILE ("semanticAnalysis.galgas", 1373)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1373)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1373)).isValid () ;
      if (loop_60002) {
        loop_60002 = var_superType.getter_isNull (SOURCE_FILE ("semanticAnalysis.galgas", 1373)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1373)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1373)).boolValue () ;
      }
      if (loop_60002 && (0 == variant_60002)) {
        loop_60002 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticAnalysis.galgas", 1372)) ;
      }
      if (loop_60002) {
        variant_60002 -- ;
        const enumGalgasBool test_4 = var_superType.getter_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1374)).getter_hasKey (object->mAttribute_mOverridingCategoryModifierName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1374)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1374)).boolEnum () ;
        if (kBoolTrue == test_4) {
          GALGAS_methodQualifier var_qualifier ;
          GALGAS_methodKind joker_60300 ; // Joker input parameter
          GALGAS_bool joker_60323 ; // Joker input parameter
          GALGAS_string joker_60337 ; // Joker input parameter
          var_superType.getter_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1376)).method_searchKey (object->mAttribute_mOverridingCategoryModifierName, joker_60300, var_inheritedSignature, joker_60323, var_qualifier, joker_60337, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1376)) ;
          const enumGalgasBool test_5 = GALGAS_bool (kIsInfOrEqual, var_qualifier.objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticAnalysis.galgas", 1377)))).boolEnum () ;
          if (kBoolTrue == test_5) {
            var_baseTypeName = var_superType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1378)) ;
          }
        }
        var_superType = var_superType.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1381)) ;
      }
    }
  }
  const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_6) {
    GALGAS_location location_7 (object->mAttribute_mOverridingCategoryModifierName.getter_location (HERE)) ; // Implicit use of 'location' getter
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
    routine_checkMethodSignatures (var_formalParameterListForGeneration, object->mAttribute_mOverridingCategoryModifierName.getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1399)), var_inheritedSignature, var_inheritedDeclarationLocation, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1397)) ;
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
//                      Overriding category method '@abstractCategoryGetterAST semanticAnalysis'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_abstractCategoryGetterAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                       const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                       const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                       const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                       GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractCategoryGetterAST * object = (const cPtr_abstractCategoryGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractCategoryGetterAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1414)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1416)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 1416)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mAbstractCategoryGetterName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("cannot declare a category getter: '@").add_operation (var_selfType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1417)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1417)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1417))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1417)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = var_selfType.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1418)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (object->mAttribute_mAbstractCategoryGetterName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_3, GALGAS_string ("cannot declare an abstract category getter: '@").add_operation (var_selfType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1419)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1419)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1419))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1419)) ;
    }
  }
  GALGAS_formalInputParameterListForGeneration var_formalParameterListForGeneration = GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1422)) ;
  cEnumerator_formalInputParameterListAST enumerator_62297 (object->mAttribute_mAbstractCategoryGetterFormalInputParameterList, kEnumeration_up) ;
  while (enumerator_62297.hasCurrentObject ()) {
    var_formalParameterListForGeneration.addAssign_operation (enumerator_62297.current_mFormalSelector (HERE), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_62297.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1426)), enumerator_62297.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1427)), enumerator_62297.current_mFormalArgumentName (HERE), enumerator_62297.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1424)) ;
    enumerator_62297.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("abstract extension getter ").add_operation (object->mAttribute_mAbstractCategoryGetterName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1433)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1433)), GALGAS_abstractCategoryGetterForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("getter-").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1436)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1436)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1436)).add_operation (object->mAttribute_mAbstractCategoryGetterName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1436)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1436)), var_selfType, object->mAttribute_mAbstractCategoryGetterName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1438)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mAbstractCategoryGetterReturnedTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1439)), var_formalParameterListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1434)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1432)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_abstractCategoryGetterAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_abstractCategoryGetterAST.mSlotID,
                                        categoryMethod_abstractCategoryGetterAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractCategoryGetterAST_semanticAnalysis (defineCategoryMethod_abstractCategoryGetterAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category method '@categoryGetterAST semanticAnalysis'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_categoryGetterAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                               const GALGAS_string /* constinArgument_inProductDirectory */,
                                                               const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                               const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                               GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_categoryGetterAST * object = (const cPtr_categoryGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_categoryGetterAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1455)) ;
  GALGAS_string var_selfObjectName ;
  GALGAS_string var_selfObjectAccessor ;
  GALGAS_bool var_implementedAsFunction ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_selfType.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1460)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 1460)))).boolEnum () ;
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
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_selfType.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1483)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 1483)))).operator_or (GALGAS_bool (kIsEqual, var_selfType.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1483)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("semanticAnalysis.galgas", 1483)))) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1483)).operator_or (GALGAS_bool (kIsEqual, var_selfType.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1483)).objectCompare (GALGAS_typeKindEnum::constructor_mapProxyType (SOURCE_FILE ("semanticAnalysis.galgas", 1483)))) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1483)).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = var_selfType.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1484)) ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1485)) ;
  }
  routine_analyzeFunctionBody (var_analysisContext, object->mAttribute_mCategoryGetterFormalInputParameterList, temp_1, var_selfObjectAccessor, object->mAttribute_mCategoryGetterInstructionList, object->mAttribute_mCategoryGetterReturnedVariableName, object->mAttribute_mCategoryGetterReturnedTypeName, object->mAttribute_mEndOfReaderLocation, var_formalParameterListForGeneration, var_returnType, var_returnVariableCppName, var_semanticInstructionListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1480)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extension getter ").add_operation (object->mAttribute_mCategoryGetterName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1499)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1499)), GALGAS_categoryGetterForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("getter-").add_operation (var_selfType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1502)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1502)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1502)).add_operation (object->mAttribute_mCategoryGetterName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1502)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1502)), var_selfType, object->mAttribute_mCategoryGetterName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1504)), var_implementedAsFunction, var_returnType, var_returnVariableCppName, var_formalParameterListForGeneration, var_selfType.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1509)), var_semanticInstructionListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1500)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1498)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_categoryGetterAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_categoryGetterAST.mSlotID,
                                        categoryMethod_categoryGetterAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_categoryGetterAST_semanticAnalysis (defineCategoryMethod_categoryGetterAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@overridingCategoryGetterAST semanticAnalysis'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingCategoryGetterAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                         const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                         const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                         const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                         GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingCategoryGetterAST * object = (const cPtr_overridingCategoryGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingCategoryGetterAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1522)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1524)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 1524)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mOverridingCategoryGetterName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("cannot declare a category getter: '@").add_operation (var_selfType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1525)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1525)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1525))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1525)) ;
  }
  GALGAS_string var_baseTypeName = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMap_2D_proxy var_superType = var_selfType.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1529)) ;
  GALGAS_functionSignature var_inheritedSignature = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1530)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_inheritedReturnType = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 1531)) ;
  GALGAS_location var_inheritedDeclarationLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1532)) ;
  if (constinArgument_inSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 1533)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1533)).isValid ()) {
    uint32_t variant_66541 = constinArgument_inSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 1533)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1533)).uintValue () ;
    bool loop_66541 = true ;
    while (loop_66541) {
      loop_66541 = var_superType.getter_isNull (SOURCE_FILE ("semanticAnalysis.galgas", 1534)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1534)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1534)).isValid () ;
      if (loop_66541) {
        loop_66541 = var_superType.getter_isNull (SOURCE_FILE ("semanticAnalysis.galgas", 1534)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1534)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1534)).boolValue () ;
      }
      if (loop_66541 && (0 == variant_66541)) {
        loop_66541 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticAnalysis.galgas", 1533)) ;
      }
      if (loop_66541) {
        variant_66541 -- ;
        const enumGalgasBool test_2 = var_superType.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1535)).getter_hasKey (object->mAttribute_mOverridingCategoryGetterName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1535)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1535)).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_methodQualifier var_qualifier ;
          GALGAS_methodKind joker_66814 ; // Joker input parameter
          GALGAS_bool joker_66891 ; // Joker input parameter
          GALGAS_string joker_66971 ; // Joker input parameter
          var_superType.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1536)).method_searchKey (object->mAttribute_mOverridingCategoryGetterName, joker_66814, var_inheritedSignature, var_inheritedDeclarationLocation, joker_66891, var_inheritedReturnType, var_qualifier, joker_66971, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1536)) ;
          const enumGalgasBool test_3 = GALGAS_bool (kIsInfOrEqual, var_qualifier.objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticAnalysis.galgas", 1546)))).boolEnum () ;
          if (kBoolTrue == test_3) {
            var_baseTypeName = var_superType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1547)) ;
          }
        }
        var_superType = var_superType.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1550)) ;
      }
    }
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_location location_5 (object->mAttribute_mOverridingCategoryGetterName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_5, GALGAS_string ("this getter is not declared by a super class")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1553)) ;
  }
  GALGAS_analysisContext var_analysisContext = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfType, GALGAS_string ("object"), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 1561))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1556)) ;
  GALGAS_formalInputParameterListForGeneration var_formalParameterListForGeneration ;
  GALGAS_unifiedTypeMap_2D_proxy var_returnType ;
  GALGAS_string var_returnVariableCppName ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration ;
  {
  GALGAS_typedPropertyList temp_6 ;
  const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, var_selfType.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1565)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 1565)))).operator_or (GALGAS_bool (kIsEqual, var_selfType.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1565)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("semanticAnalysis.galgas", 1565)))) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1565)).boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = var_selfType.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1566)) ;
  }else if (kBoolFalse == test_7) {
    temp_6 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1567)) ;
  }
  routine_analyzeFunctionBody (var_analysisContext, object->mAttribute_mOverridingCategoryGetterFormalInputParameterList, temp_6, GALGAS_string ("object->"), object->mAttribute_mOverridingCategoryGetterInstructionList, object->mAttribute_mOverridingCategoryGetterReturnedVariableName, object->mAttribute_mOverridingCategoryGetterReturnedTypeName, object->mAttribute_mEndOfReaderLocation, var_formalParameterListForGeneration, var_returnType, var_returnVariableCppName, var_semanticInstructionListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1562)) ;
  }
  const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_8) {
    {
    routine_checkReaderSignatures (var_formalParameterListForGeneration, var_returnType, object->mAttribute_mOverridingCategoryGetterName.getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1584)), var_inheritedSignature, var_inheritedReturnType, var_inheritedDeclarationLocation, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1581)) ;
    }
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("override extension getter ").add_operation (object->mAttribute_mOverridingCategoryGetterName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1592)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1592)), GALGAS_overrideCategoryGetterForGeneration::constructor_new (GALGAS_bool (false), GALGAS_string ("getter-").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1595)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1595)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1595)).add_operation (object->mAttribute_mOverridingCategoryGetterName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1595)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1595)), var_selfType, var_baseTypeName, object->mAttribute_mOverridingCategoryGetterName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1598)), var_returnType, var_returnVariableCppName, var_formalParameterListForGeneration, var_selfType.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1602)), var_semanticInstructionListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1593)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1591)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingCategoryGetterAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_overridingCategoryGetterAST.mSlotID,
                                        categoryMethod_overridingCategoryGetterAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingCategoryGetterAST_semanticAnalysis (defineCategoryMethod_overridingCategoryGetterAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@overridingAbstractCategoryGetterAST semanticAnalysis'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingAbstractCategoryGetterAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                                 const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                                 const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                 const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                                 GALGAS_semanticDeclarationSortedListForGeneration & /* ioArgument_ioSemanticDeclarationListForGeneration */,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingAbstractCategoryGetterAST * object = (const cPtr_overridingAbstractCategoryGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractCategoryGetterAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1615)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_returnType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mAbstractCategoryGetterReturnedTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1617)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1619)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 1619)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mAbstractCategoryGetterName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("cannot declare a category getter: '@").add_operation (var_selfType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1620)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1620)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1620))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1620)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = var_selfType.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1621)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (object->mAttribute_mAbstractCategoryGetterName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_3, GALGAS_string ("cannot declare an abstract category getter: '@").add_operation (var_selfType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1622)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1622)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1622))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1622)) ;
    }
  }
  GALGAS_string var_baseTypeName = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMap_2D_proxy var_superType = var_selfType.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1626)) ;
  GALGAS_functionSignature var_inheritedSignature = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1627)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_inheritedReturnType = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 1628)) ;
  GALGAS_location var_inheritedDeclarationLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1629)) ;
  if (constinArgument_inSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 1630)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1630)).isValid ()) {
    uint32_t variant_70409 = constinArgument_inSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 1630)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1630)).uintValue () ;
    bool loop_70409 = true ;
    while (loop_70409) {
      loop_70409 = var_superType.getter_isNull (SOURCE_FILE ("semanticAnalysis.galgas", 1631)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1631)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1631)).isValid () ;
      if (loop_70409) {
        loop_70409 = var_superType.getter_isNull (SOURCE_FILE ("semanticAnalysis.galgas", 1631)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1631)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1631)).boolValue () ;
      }
      if (loop_70409 && (0 == variant_70409)) {
        loop_70409 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticAnalysis.galgas", 1630)) ;
      }
      if (loop_70409) {
        variant_70409 -- ;
        const enumGalgasBool test_4 = var_superType.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1632)).getter_hasKey (object->mAttribute_mAbstractCategoryGetterName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1632)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1632)).boolEnum () ;
        if (kBoolTrue == test_4) {
          GALGAS_methodQualifier var_qualifier ;
          GALGAS_methodKind joker_70711 ; // Joker input parameter
          GALGAS_bool joker_70788 ; // Joker input parameter
          GALGAS_string joker_70847 ; // Joker input parameter
          var_superType.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1634)).method_searchKey (object->mAttribute_mAbstractCategoryGetterName, joker_70711, var_inheritedSignature, var_inheritedDeclarationLocation, joker_70788, var_inheritedReturnType, var_qualifier, joker_70847, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1634)) ;
          const enumGalgasBool test_5 = GALGAS_bool (kIsInfOrEqual, var_qualifier.objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticAnalysis.galgas", 1644)))).boolEnum () ;
          if (kBoolTrue == test_5) {
            var_baseTypeName = var_superType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1645)) ;
          }
        }
        var_superType = var_superType.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1648)) ;
      }
    }
  }
  const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_6) {
    GALGAS_location location_7 (object->mAttribute_mAbstractCategoryGetterName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_7, GALGAS_string ("this getter is not declared by a super class")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1651)) ;
  }
  const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_8) {
    GALGAS_formalInputParameterListForGeneration var_formalParameterListForGeneration = GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1655)) ;
    cEnumerator_formalInputParameterListAST enumerator_71341 (object->mAttribute_mAbstractCategoryGetterFormalInputParameterList, kEnumeration_up) ;
    while (enumerator_71341.hasCurrentObject ()) {
      var_formalParameterListForGeneration.addAssign_operation (enumerator_71341.current_mFormalSelector (HERE), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_71341.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1659)), enumerator_71341.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1660)), enumerator_71341.current_mFormalArgumentName (HERE), enumerator_71341.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1657)) ;
      enumerator_71341.gotoNextObject () ;
    }
    {
    routine_checkReaderSignatures (var_formalParameterListForGeneration, var_returnType, object->mAttribute_mAbstractCategoryGetterName.getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1667)), var_inheritedSignature, var_inheritedReturnType, var_inheritedDeclarationLocation, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1664)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingAbstractCategoryGetterAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_overridingAbstractCategoryGetterAST.mSlotID,
                                        categoryMethod_overridingAbstractCategoryGetterAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingAbstractCategoryGetterAST_semanticAnalysis (defineCategoryMethod_overridingAbstractCategoryGetterAST_semanticAnalysis, NULL) ;

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
  GALGAS_bool var_hasIndexing = var_indexingDirectory.mAttribute_location.getter_isNowhere (SOURCE_FILE ("semanticAnalysis.galgas", 1695)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1695)) ;
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
  const enumGalgasBool test_0 = GALGAS_bool (gOption_galgas_5F_builtin_5F_options_quiet_5F_output.getter_value ()).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1726)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->printMessage (GALGAS_string ("*** Analyzing '").add_operation (object->mAttribute_mGrammarComponentName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1727)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1727)).add_operation (GALGAS_string ("' grammar\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1727))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1727)) ;
  }
  GALGAS_terminalSymbolsMapForGrammarAnalysis var_actuallyUsedTerminalSymbolMap = GALGAS_terminalSymbolsMapForGrammarAnalysis::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 1730)) ;
  GALGAS_nonTerminalSymbolMapForGrammarAnalysis var_nonTerminalMapForGrammarAnalysis = GALGAS_nonTerminalSymbolMapForGrammarAnalysis::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 1731)) ;
  GALGAS_lstring var_lexiqueComponentName = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticAnalysis.galgas", 1732)) ;
  GALGAS_syntaxComponentListForGrammarAnalysis var_syntaxComponentListForGrammarAnalysis = GALGAS_syntaxComponentListForGrammarAnalysis::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1733)) ;
  GALGAS_nonTerminalToAddList var_nonTerminalToAddList = GALGAS_nonTerminalToAddList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1734)) ;
  GALGAS_uint var_addedNonTerminalCount = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_lstringlist enumerator_74477 (object->mAttribute_mSyntaxComponents, kEnumeration_up) ;
  while (enumerator_74477.hasCurrentObject ()) {
    GALGAS_uint var_addedNonTerminalCountRef = var_addedNonTerminalCount ;
    GALGAS_string var_syntaxComponentName = enumerator_74477.current_mValue (HERE).mAttribute_string ;
    GALGAS_lstring var_lexiqueName ;
    GALGAS_nonterminalDeclarationListAST var_nonterminalDeclarationList ;
    GALGAS_syntaxRuleListAST var_ruleList ;
    GALGAS_bool var_hasTranslateFeature ;
    constinArgument_inSemanticContext.mAttribute_mSyntaxComponentMapForSemanticAnalysis.method_searchKey (enumerator_74477.current_mValue (HERE), var_lexiqueName, var_nonterminalDeclarationList, var_ruleList, var_hasTranslateFeature, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1739)) ;
    const enumGalgasBool test_1 = object->mAttribute_mHasTranslateFeature.operator_and (var_hasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1747)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1747)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_location location_2 (enumerator_74477.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_2, GALGAS_string ("as '").add_operation (object->mAttribute_mGrammarComponentName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1748)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1748)).add_operation (GALGAS_string ("' grammar declares 'translate' feature, this syntax component should do so"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1748))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1748)) ;
    }else if (kBoolFalse == test_1) {
      const enumGalgasBool test_3 = var_hasTranslateFeature.operator_and (object->mAttribute_mHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1749)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1749)).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_location location_4 (object->mAttribute_mGrammarComponentName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_4, GALGAS_string ("as '").add_operation (enumerator_74477.current_mValue (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1750)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1750)).add_operation (GALGAS_string ("' syntax component declares 'translate' feature, this grammar should do so"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1750))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1750)) ;
      }
    }
    const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, var_lexiqueComponentName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_5) {
      var_lexiqueComponentName = var_lexiqueName ;
    }else if (kBoolFalse == test_5) {
      const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, var_lexiqueName.mAttribute_string.objectCompare (var_lexiqueComponentName.mAttribute_string)).boolEnum () ;
      if (kBoolTrue == test_6) {
        GALGAS_location location_7 (enumerator_74477.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
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
    routine_buildRuleList (var_nonTerminalMapForGrammarAnalysis, enumerator_74477.current_mValue (HERE), var_ruleList, var_actuallyUsedTerminalSymbolMap, var_syntaxComponentListForGrammarAnalysis, var_addedNonTerminalCount, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1771)) ;
    }
    GALGAS_uint var_i = GALGAS_uint ((uint32_t) 0U) ;
    if (var_addedNonTerminalCount.isValid ()) {
      uint32_t variant_76274 = var_addedNonTerminalCount.uintValue () ;
      bool loop_76274 = true ;
      while (loop_76274) {
        loop_76274 = GALGAS_bool (kIsStrictInf, var_i.objectCompare (var_addedNonTerminalCount.substract_operation (var_addedNonTerminalCountRef, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1780)))).isValid () ;
        if (loop_76274) {
          loop_76274 = GALGAS_bool (kIsStrictInf, var_i.objectCompare (var_addedNonTerminalCount.substract_operation (var_addedNonTerminalCountRef, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1780)))).boolValue () ;
        }
        if (loop_76274 && (0 == variant_76274)) {
          loop_76274 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticAnalysis.galgas", 1780)) ;
        }
        if (loop_76274) {
          variant_76274 -- ;
          var_nonTerminalToAddList.addAssign_operation (var_syntaxComponentName, var_i  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1781)) ;
          var_i.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1782)) ;
        }
      }
    }
    enumerator_74477.gotoNextObject () ;
  }
  GALGAS_stringset var_lexiqueComponentSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 1786)) ;
  GALGAS_lstring var_inIndexingDirectory ;
  GALGAS_terminalMap joker_76689 ; // Joker input parameter
  GALGAS_indexingListAST joker_76725 ; // Joker input parameter
  constinArgument_inSemanticContext.mAttribute_mLexiqueComponentMapForSemanticAnalysis.method_searchKey (var_lexiqueComponentName, joker_76689, joker_76725, var_inIndexingDirectory, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1787)) ;
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
  cEnumerator_lstringlist enumerator_77930 (object->mAttribute_mUnusedNonterminalList, kEnumeration_up) ;
  while (enumerator_77930.hasCurrentObject ()) {
    GALGAS_uint var_nonterminalIndex ;
    GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis joker_78036 ; // Joker input parameter
    var_nonTerminalMapForGrammarAnalysis.method_searchKey (enumerator_77930.current_mValue (HERE), var_nonterminalIndex, joker_78036, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1815)) ;
    {
    var_unusedNonTerminalSymbolsForGrammar.modifier_insertKey (enumerator_77930.current_mValue (HERE), var_nonterminalIndex, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1816)) ;
    }
    enumerator_77930.gotoNextObject () ;
  }
  GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis var_nonTerminalSymbolSortedListForGrammarAnalysis = GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis::constructor_emptySortedList (SOURCE_FILE ("semanticAnalysis.galgas", 1819)) ;
  cEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_78384 (var_nonTerminalMapForGrammarAnalysis, kEnumeration_up) ;
  while (enumerator_78384.hasCurrentObject ()) {
    var_nonTerminalSymbolSortedListForGrammarAnalysis.addAssign_operation (enumerator_78384.current_lkey (HERE), enumerator_78384.current_mNonTerminalIndex (HERE), enumerator_78384.current_mNonterminalSymbolParametersMap (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1821)) ;
    enumerator_78384.gotoNextObject () ;
  }
  GALGAS_stringset var_implementationFileHeader = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 1826)) ;
  cEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_78878 (var_nonTerminalMapForGrammarAnalysis, kEnumeration_up) ;
  while (enumerator_78878.hasCurrentObject ()) {
    cEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis enumerator_78927 (enumerator_78878.current_mNonterminalSymbolParametersMap (HERE), kEnumeration_up) ;
    while (enumerator_78927.hasCurrentObject ()) {
      cEnumerator_signatureForGrammarAnalysis enumerator_78968 (enumerator_78927.current_mFormalParametersList (HERE), kEnumeration_up) ;
      while (enumerator_78968.hasCurrentObject ()) {
        switch (enumerator_78968.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).enumValue ()) {
        case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
          {
            GALGAS_unifiedTypeMap_2D_proxy var_t = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_78968.current_mGalgasTypeNameForGrammarAnalysis (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1832)) ;
            categoryMethod_addHeaderFileName (var_t, var_implementationFileHeader, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1833)) ;
          }
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
          {
          }
          break ;
        }
        enumerator_78968.gotoNextObject () ;
      }
      enumerator_78927.gotoNextObject () ;
    }
    enumerator_78878.gotoNextObject () ;
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
    GALGAS_bool joker_80438 ; // Joker input parameter
    var_grammarHTMLHelperContents.method_writeToFileWhenDifferentContents (var_HTMLFilePath, joker_80438, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1863)) ;
  }else if (kBoolFalse == test_15) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_HTMLFilePath, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1865)) ;
    }
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string::makeEmptyString (), GALGAS_grammarForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("grammar-").add_operation (object->mAttribute_mGrammarComponentName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1872)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1872)), object->mAttribute_mGrammarComponentName.mAttribute_string, var_lexiqueComponentName.mAttribute_string, var_nonTerminalMapForGrammarAnalysis, var_nonTerminalToAddList, var_hasIndexing, object->mAttribute_mSyntaxComponents, object->mAttribute_mStartSymbolName.mAttribute_string, object->mAttribute_mHasTranslateFeature, var_grammarCppFile  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1870)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1868)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_galgas_33_GrammarComponentAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST.mSlotID,
                                        categoryMethod_galgas_33_GrammarComponentAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_galgas_33_GrammarComponentAST_semanticAnalysis (defineCategoryMethod_galgas_33_GrammarComponentAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@lexiqueComponentAST semanticAnalysis'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lexiqueComponentAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
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
  cEnumerator_externRoutineListAST enumerator_81764 (object->mAttribute_mExternRoutineList, kEnumeration_up) ;
  while (enumerator_81764.hasCurrentObject ()) {
    GALGAS_lexicalRoutineFormalArgumentList var_lexicalRoutineFormalArgumentList = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1901)) ;
    cEnumerator_lexicalExternRoutineFormalArgumentListAST enumerator_81903 (enumerator_81764.current_mLexicalRoutineFormalArgumentList (HERE), kEnumeration_up) ;
    while (enumerator_81903.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_lexicalFormalArgumentType ;
      var_lexicalTypeMap.method_searchKey (enumerator_81903.current_mLexicalTypeName (HERE), var_lexicalFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1904)) ;
      var_lexicalRoutineFormalArgumentList.addAssign_operation (enumerator_81903.current_mPassingMode (HERE), var_lexicalFormalArgumentType, enumerator_81903.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1905))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1905)) ;
      enumerator_81903.gotoNextObject () ;
    }
    {
    var_lexicalRoutineMap.modifier_insertKey (enumerator_81764.current_mRoutineName (HERE), var_lexicalRoutineFormalArgumentList, enumerator_81764.current_mErrorMessageList (HERE), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1907)) ;
    }
    enumerator_81764.gotoNextObject () ;
  }
  GALGAS_lexicalFunctionMap var_lexicalFunctionMap ;
  {
  routine_buildLexicalFunctionMap (var_lexicalFunctionMap, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1911)) ;
  }
  cEnumerator_externFunctionListAST enumerator_82522 (object->mAttribute_mExternFunctionList, kEnumeration_up) ;
  while (enumerator_82522.hasCurrentObject ()) {
    GALGAS_lexicalFunctionFormalArgumentList var_lexicalFunctionFormalArgumentList = GALGAS_lexicalFunctionFormalArgumentList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1914)) ;
    cEnumerator_lexicalExternFunctionFormalArgumentListAST enumerator_82664 (enumerator_82522.current_mLexicalFunctionFormalArgumentList (HERE), kEnumeration_up) ;
    while (enumerator_82664.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_lexicalFormalArgumentType ;
      var_lexicalTypeMap.method_searchKey (enumerator_82664.current_mLexicalTypeName (HERE), var_lexicalFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1917)) ;
      var_lexicalFunctionFormalArgumentList.addAssign_operation (var_lexicalFormalArgumentType, enumerator_82664.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1918))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1918)) ;
      enumerator_82664.gotoNextObject () ;
    }
    GALGAS_lexicalTypeEnum var_returnedArgumentType ;
    var_lexicalTypeMap.method_searchKey (enumerator_82522.current_mReturnedTypeName (HERE), var_returnedArgumentType, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1921)) ;
    {
    var_lexicalFunctionMap.modifier_insertKey (enumerator_82522.current_mFunctionName (HERE), var_lexicalFunctionFormalArgumentList, var_returnedArgumentType, GALGAS_string::makeEmptyString (), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1922)) ;
    }
    enumerator_82522.gotoNextObject () ;
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
  cEnumerator_lexicalStyleListAST enumerator_84142 (object->mAttribute_mLexicalStyleList, kEnumeration_up) ;
  while (enumerator_84142.hasCurrentObject ()) {
    {
    var_lexiqueAnalysisContext.mAttribute_mStyleMap.modifier_insertKey (enumerator_84142.current_mName (HERE), enumerator_84142.current_mComment (HERE), var_styleIndex, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1957)) ;
    }
    var_styleIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1958)) ;
    enumerator_84142.gotoNextObject () ;
  }
  {
  routine_buildLexicalAttributeMap (var_lexicalTypeMap, object->mAttribute_mLexicalAttributeList, var_lexiqueAnalysisContext.mAttribute_mLexicalAttributeMap, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1961)) ;
  }
  cEnumerator_terminalDeclarationListAST enumerator_84542 (object->mAttribute_mTerminalDeclarationList, kEnumeration_up) ;
  while (enumerator_84542.hasCurrentObject ()) {
    GALGAS_uint var_terminalStyleIndex = GALGAS_uint ((uint32_t) 0U) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, enumerator_84542.current_mStyle (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1969)).getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 1969)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_lstring joker_84681 ; // Joker input parameter
      var_lexiqueAnalysisContext.getter_mStyleMap (SOURCE_FILE ("semanticAnalysis.galgas", 1970)).method_searchKey (enumerator_84542.current_mStyle (HERE), joker_84681, var_terminalStyleIndex, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1970)) ;
    }
    GALGAS_lexicalSentValueList var_argumentTypeList = GALGAS_lexicalSentValueList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1972)) ;
    cEnumerator_sentLexicalAttributeListAST enumerator_84804 (enumerator_84542.current_mSentAttributeList (HERE), kEnumeration_up) ;
    while (enumerator_84804.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_attributeLexicalType ;
      var_lexiqueAnalysisContext.mAttribute_mLexicalAttributeMap.method_searchKey (enumerator_84804.current_mAttributeName (HERE), var_attributeLexicalType, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1975)) ;
      var_argumentTypeList.addAssign_operation (enumerator_84804.current_mFormalSelector (HERE), enumerator_84804.current_mAttributeName (HERE).mAttribute_string, var_attributeLexicalType  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1976)) ;
      enumerator_84804.gotoNextObject () ;
    }
    {
    var_lexiqueAnalysisContext.mAttribute_mTerminalMap.modifier_insertKey (enumerator_84542.current_mName (HERE), var_argumentTypeList, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1978)) ;
    }
    GALGAS_bool var_isEndOfTemplateMark = GALGAS_bool (false) ;
    GALGAS_bool var_atomicSelection = GALGAS_bool (true) ;
    cEnumerator_lstringlist enumerator_85223 (enumerator_84542.current_mOptionList (HERE), kEnumeration_up) ;
    while (enumerator_85223.hasCurrentObject ()) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_85223.current_mValue (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1982)).objectCompare (GALGAS_string ("nonAtomicSelection"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        const enumGalgasBool test_3 = var_atomicSelection.boolEnum () ;
        if (kBoolTrue == test_3) {
          var_atomicSelection = GALGAS_bool (false) ;
        }else if (kBoolFalse == test_3) {
          GALGAS_location location_4 (enumerator_85223.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_4, GALGAS_string ("the 'nonAtomicSelection' feature is already set")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1986)) ;
        }
      }else if (kBoolFalse == test_2) {
        const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, enumerator_85223.current_mValue (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1988)).objectCompare (GALGAS_string ("templateEndMark"))).boolEnum () ;
        if (kBoolTrue == test_5) {
          GALGAS_location location_6 (enumerator_85223.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_6, GALGAS_string ("only the 'templateEndMark' and 'nonAtomicSelection' features are allowed here")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1989)) ;
        }else if (kBoolFalse == test_5) {
          const enumGalgasBool test_7 = var_isEndOfTemplateMark.boolEnum () ;
          if (kBoolTrue == test_7) {
            GALGAS_location location_8 (enumerator_85223.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
            inCompiler->emitSemanticError (location_8, GALGAS_string ("the 'templateEndMark' feature is already set")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1991)) ;
          }else if (kBoolFalse == test_7) {
            var_isEndOfTemplateMark = GALGAS_bool (true) ;
          }
        }
      }
      enumerator_85223.gotoNextObject () ;
    }
    var_lexiqueAnalysisContext.mAttribute_mTerminalList.addAssign_operation (enumerator_84542.current_mName (HERE), var_argumentTypeList, enumerator_84542.current_mSyntaxErrorMessage (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1999)), var_isEndOfTemplateMark, var_atomicSelection, var_terminalStyleIndex  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1996)) ;
    enumerator_84542.gotoNextObject () ;
  }
  cEnumerator_lexicalListDeclarationListAST enumerator_86008 (object->mAttribute_mLexicalListDeclarationList, kEnumeration_up) ;
  while (enumerator_86008.hasCurrentObject ()) {
    GALGAS_uint var_terminalStyleIndex = GALGAS_uint ((uint32_t) 0U) ;
    const enumGalgasBool test_9 = GALGAS_bool (kIsStrictSup, enumerator_86008.current_mStyle (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 2006)).getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 2006)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_9) {
      GALGAS_lstring joker_86147 ; // Joker input parameter
      var_lexiqueAnalysisContext.getter_mStyleMap (SOURCE_FILE ("semanticAnalysis.galgas", 2007)).method_searchKey (enumerator_86008.current_mStyle (HERE), joker_86147, var_terminalStyleIndex, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2007)) ;
    }
    GALGAS_lexicalSentValueList var_argumentTypeList = GALGAS_lexicalSentValueList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 2009)) ;
    cEnumerator_sentLexicalAttributeListAST enumerator_86270 (enumerator_86008.current_mSentAttributeList (HERE), kEnumeration_up) ;
    while (enumerator_86270.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_attributeLexicalType ;
      var_lexiqueAnalysisContext.mAttribute_mLexicalAttributeMap.method_searchKey (enumerator_86270.current_mAttributeName (HERE), var_attributeLexicalType, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2012)) ;
      var_argumentTypeList.addAssign_operation (enumerator_86270.current_mFormalSelector (HERE), enumerator_86270.current_mAttributeName (HERE).mAttribute_string, var_attributeLexicalType  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2013)) ;
      enumerator_86270.gotoNextObject () ;
    }
    GALGAS_lexicalExplicitTokenListMap var_lexicalTokenListMap = GALGAS_lexicalExplicitTokenListMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 2015)) ;
    GALGAS_tokenSortedlist var_tokenSortedlist = GALGAS_tokenSortedlist::constructor_emptySortedList (SOURCE_FILE ("semanticAnalysis.galgas", 2016)) ;
    cEnumerator_lexicalListEntryListAST enumerator_86667 (enumerator_86008.current_mEntryList (HERE), kEnumeration_up) ;
    while (enumerator_86667.hasCurrentObject ()) {
      GALGAS_string var_syntaxErrorMessage = enumerator_86008.current_mSyntaxErrorMessage (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 2018)).getter_stringByReplacingStringByString (GALGAS_string ("%K"), enumerator_86667.current_mTerminalSpelling (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 2018)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2018)) ;
      GALGAS_bool var_isEndOfTemplateMark = GALGAS_bool (false) ;
      GALGAS_bool var_atomicSelection = GALGAS_bool (true) ;
      cEnumerator_lstringlist enumerator_86906 (enumerator_86667.current_mFeatureList (HERE), kEnumeration_up) ;
      while (enumerator_86906.hasCurrentObject ()) {
        const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, enumerator_86906.current_mValue (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 2022)).objectCompare (GALGAS_string ("nonAtomicSelection"))).boolEnum () ;
        if (kBoolTrue == test_10) {
          const enumGalgasBool test_11 = var_atomicSelection.boolEnum () ;
          if (kBoolTrue == test_11) {
            var_atomicSelection = GALGAS_bool (false) ;
          }else if (kBoolFalse == test_11) {
            GALGAS_location location_12 (enumerator_86906.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
            inCompiler->emitSemanticError (location_12, GALGAS_string ("the 'nonAtomicSelection' feature is already set")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2026)) ;
          }
        }else if (kBoolFalse == test_10) {
          const enumGalgasBool test_13 = GALGAS_bool (kIsNotEqual, enumerator_86906.current_mValue (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 2028)).objectCompare (GALGAS_string ("templateEndMark"))).boolEnum () ;
          if (kBoolTrue == test_13) {
            GALGAS_location location_14 (enumerator_86906.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
            inCompiler->emitSemanticError (location_14, GALGAS_string ("only the 'templateEndMark' and 'nonAtomicSelection' features are allowed here")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2029)) ;
          }else if (kBoolFalse == test_13) {
            const enumGalgasBool test_15 = var_isEndOfTemplateMark.boolEnum () ;
            if (kBoolTrue == test_15) {
              GALGAS_location location_16 (enumerator_86906.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
              inCompiler->emitSemanticError (location_16, GALGAS_string ("the 'templateEndMark' feature is already set")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2031)) ;
            }else if (kBoolFalse == test_15) {
              var_isEndOfTemplateMark = GALGAS_bool (true) ;
            }
          }
        }
        enumerator_86906.gotoNextObject () ;
      }
      var_lexiqueAnalysisContext.mAttribute_mTerminalList.addAssign_operation (enumerator_86667.current_mTerminalSpelling (HERE), var_argumentTypeList, var_syntaxErrorMessage, var_isEndOfTemplateMark, var_atomicSelection, var_terminalStyleIndex  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2036)) ;
      {
      var_lexiqueAnalysisContext.mAttribute_mTerminalMap.modifier_insertKey (enumerator_86667.current_mTerminalSpelling (HERE), var_argumentTypeList, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2043)) ;
      }
      {
      var_lexicalTokenListMap.modifier_insertKey (enumerator_86667.current_mEntrySpelling (HERE), enumerator_86667.current_mTerminalSpelling (HERE), enumerator_86667.current_mFeatureList (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2044)) ;
      }
      var_tokenSortedlist.addAssign_operation (enumerator_86667.current_mEntrySpelling (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 2045)).getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 2045)), enumerator_86667.current_mEntrySpelling (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 2045)), enumerator_86667.current_mTerminalSpelling (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 2045))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2045)) ;
      var_lexiqueAnalysisContext.mAttribute_mUnicodeStringToGenerate.addAssign_operation (enumerator_86667.current_mEntrySpelling (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 2046))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2046)) ;
      enumerator_86667.gotoNextObject () ;
    }
    {
    var_lexiqueAnalysisContext.mAttribute_mLexicalTokenListMap.modifier_insertKey (enumerator_86008.current_mName (HERE), var_lexicalTokenListMap, var_tokenSortedlist, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2048)) ;
    }
    enumerator_86008.gotoNextObject () ;
  }
  cEnumerator_lexicalMessageDeclarationListAST enumerator_88295 (object->mAttribute_mLexicalMessageDeclarationList, kEnumeration_up) ;
  while (enumerator_88295.hasCurrentObject ()) {
    {
    var_lexiqueAnalysisContext.mAttribute_mLexicalMessageMap.modifier_insertKey (enumerator_88295.current_mMessageName (HERE), enumerator_88295.current_mMessageValue (HERE), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2052)) ;
    }
    enumerator_88295.gotoNextObject () ;
  }
  cEnumerator_lexicalRuleListAST enumerator_88482 (object->mAttribute_mLexicalRuleList, kEnumeration_up) ;
  while (enumerator_88482.hasCurrentObject ()) {
    callCategoryMethod_checkLexicalRule ((const cPtr_abstractLexicalRuleAST *) enumerator_88482.current_mLexicalRule (HERE).ptr (), var_lexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2056)) ;
    enumerator_88482.gotoNextObject () ;
  }
  cEnumerator_lexicalMessageMap enumerator_88674 (var_lexiqueAnalysisContext.getter_mLexicalMessageMap (SOURCE_FILE ("semanticAnalysis.galgas", 2059)), kEnumeration_up) ;
  while (enumerator_88674.hasCurrentObject ()) {
    const enumGalgasBool test_17 = enumerator_88674.current_mMessageIsUsed (HERE).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 2060)).boolEnum () ;
    if (kBoolTrue == test_17) {
      GALGAS_location location_18 (enumerator_88674.current_lkey (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticWarning (location_18, GALGAS_string ("unused message")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2061)) ;
    }
    enumerator_88674.gotoNextObject () ;
  }
  cEnumerator_metamodelTemplateDelimitorListAST enumerator_88854 (object->mAttribute_mTemplateDelimitorList, kEnumeration_up) ;
  while (enumerator_88854.hasCurrentObject ()) {
    var_lexiqueAnalysisContext.mAttribute_mUnicodeStringToGenerate.addAssign_operation (enumerator_88854.current_mStartString (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 2066))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2066)) ;
    var_lexiqueAnalysisContext.mAttribute_mUnicodeStringToGenerate.addAssign_operation (enumerator_88854.current_mEndString (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 2067))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2067)) ;
    GALGAS_bool var_preservesStartDelimiter = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_89075 (enumerator_88854.current_mOptionList (HERE), kEnumeration_up) ;
    while (enumerator_89075.hasCurrentObject ()) {
      const enumGalgasBool test_19 = GALGAS_bool (kIsNotEqual, enumerator_89075.current_mValue (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 2070)).objectCompare (GALGAS_string ("preserved"))).boolEnum () ;
      if (kBoolTrue == test_19) {
        GALGAS_location location_20 (enumerator_89075.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_20, GALGAS_string ("only the 'preserved' feature is allowed here")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2071)) ;
      }else if (kBoolFalse == test_19) {
        const enumGalgasBool test_21 = var_preservesStartDelimiter.boolEnum () ;
        if (kBoolTrue == test_21) {
          GALGAS_location location_22 (enumerator_89075.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_22, GALGAS_string ("the 'preserved' feature is already set")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2073)) ;
        }else if (kBoolFalse == test_21) {
          var_preservesStartDelimiter = GALGAS_bool (true) ;
        }
      }
      enumerator_89075.gotoNextObject () ;
    }
    var_lexiqueAnalysisContext.mAttribute_mTemplateDelimitorList.addAssign_operation (enumerator_88854.current_mStartString (HERE), enumerator_88854.current_mEndString (HERE), var_preservesStartDelimiter  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2078)) ;
    enumerator_88854.gotoNextObject () ;
  }
  const enumGalgasBool test_23 = object->mAttribute_mIndexingDirectory.mAttribute_location.getter_isNowhere (SOURCE_FILE ("semanticAnalysis.galgas", 2081)).boolEnum () ;
  if (kBoolTrue == test_23) {
    cEnumerator_indexingListAST enumerator_89606 (object->mAttribute_mIndexingListAST, kEnumeration_up) ;
    while (enumerator_89606.hasCurrentObject ()) {
      GALGAS_location location_24 (enumerator_89606.current_mIndexName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_24, GALGAS_string ("indexing declaration requires one 'indexing in \"path\";' declaration")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2083)) ;
      enumerator_89606.gotoNextObject () ;
    }
  }
  GALGAS_stringset var_indexNameSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 2086)) ;
  cEnumerator_indexingListAST enumerator_89791 (object->mAttribute_mIndexingListAST, kEnumeration_up) ;
  while (enumerator_89791.hasCurrentObject ()) {
    const enumGalgasBool test_25 = var_indexNameSet.getter_hasKey (enumerator_89791.current_mIndexName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 2088)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2088)).boolEnum () ;
    if (kBoolTrue == test_25) {
      GALGAS_location location_26 (enumerator_89791.current_mIndexName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_26, GALGAS_string ("the '").add_operation (enumerator_89791.current_mIndexName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 2089)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2089)).add_operation (GALGAS_string ("' index is already declared"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2089))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2089)) ;
    }
    var_indexNameSet.addAssign_operation (enumerator_89791.current_mIndexName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 2091))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2091)) ;
    enumerator_89791.gotoNextObject () ;
  }
  cEnumerator_templateReplacementListAST enumerator_90082 (object->mAttribute_mTemplateReplacementList, kEnumeration_up) ;
  while (enumerator_90082.hasCurrentObject ()) {
    var_lexiqueAnalysisContext.mAttribute_mUnicodeStringToGenerate.addAssign_operation (enumerator_90082.current_mMatchString (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 2095))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2095)) ;
    var_lexiqueAnalysisContext.mAttribute_mUnicodeStringToGenerate.addAssign_operation (enumerator_90082.current_mReplacementString (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 2096))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2096)) ;
    enumerator_90082.gotoNextObject () ;
  }
  const enumGalgasBool test_27 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("semanticAnalysis.galgas", 2100)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_27) {
    GALGAS_string var_lexiqueClassName = object->mAttribute_mLexiqueComponentName.mAttribute_string ;
    GALGAS_string var_headerContents = GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_newHeaderZone_32_ (inCompiler, var_lexiqueClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 2104)), var_lexiqueAnalysisContext, object->mAttribute_mTemplateDelimitorList COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2103))) ;
    var_headerContents.plusAssign_operation (GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_newHeaderZone_33_ (inCompiler, var_lexiqueClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 2109)), object->mAttribute_mLexicalListDeclarationList, var_lexiqueAnalysisContext, object->mAttribute_mIndexingListAST COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2108))), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2108)) ;
    GALGAS_string var_cppContents = GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_newImplementationZone_32_Galgas_33_ (inCompiler, var_lexiqueClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 2116)), var_lexiqueAnalysisContext.getter_mLexicalAttributeMap (SOURCE_FILE ("semanticAnalysis.galgas", 2117)), var_lexiqueAnalysisContext.getter_mLexicalMessageMap (SOURCE_FILE ("semanticAnalysis.galgas", 2118)), var_lexiqueAnalysisContext.getter_mTerminalList (SOURCE_FILE ("semanticAnalysis.galgas", 2119)), var_lexiqueAnalysisContext.getter_mLexicalTokenListMap (SOURCE_FILE ("semanticAnalysis.galgas", 2120)), var_lexiqueAnalysisContext.getter_mUnicodeStringToGenerate (SOURCE_FILE ("semanticAnalysis.galgas", 2121)), object->mAttribute_mLexicalRuleList, var_lexiqueAnalysisContext, object->mAttribute_mIndexingDirectory.mAttribute_string, object->mAttribute_mTemplateDelimitorList, var_lexiqueClassName, object->mAttribute_mTemplateReplacementList, object->mAttribute_mLexicalStyleList COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2115))) ;
    GALGAS_string var_cocoaHeader = GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_cocoaHeaderZone_32_ (inCompiler, var_lexiqueClassName, var_lexiqueAnalysisContext COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2131))) ;
    var_cocoaHeader.plusAssign_operation (GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_cocoaHeaderZone_33_ (inCompiler, var_lexiqueClassName, var_lexiqueAnalysisContext COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2135))), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2135)) ;
    GALGAS_string var_cocoaImplementation = GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_cocoaImplementationZone_32_ (inCompiler, GALGAS_string ("lexique-").add_operation (var_lexiqueClassName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2141)).add_operation (GALGAS_string ("-cocoa"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2141)), var_lexiqueClassName, var_lexiqueAnalysisContext.getter_mLexicalAttributeMap (SOURCE_FILE ("semanticAnalysis.galgas", 2143)), var_lexiqueAnalysisContext.getter_mLexicalMessageMap (SOURCE_FILE ("semanticAnalysis.galgas", 2144)), var_lexiqueAnalysisContext.getter_mTerminalList (SOURCE_FILE ("semanticAnalysis.galgas", 2145)), var_lexiqueAnalysisContext.getter_mUnicodeStringToGenerate (SOURCE_FILE ("semanticAnalysis.galgas", 2146)), object->mAttribute_mLexicalRuleList, var_lexiqueAnalysisContext, object->mAttribute_mTemplateReplacementList, object->mAttribute_mIndexingDirectory.mAttribute_string, object->mAttribute_mIndexingListAST, object->mAttribute_mLexicalStyleList, object->mAttribute_mTemplateDelimitorList COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2140))) ;
    ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string::makeEmptyString (), GALGAS_lexiqueDeclarationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("lexique-").add_operation (var_lexiqueClassName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2160)), var_lexiqueClassName, var_headerContents, var_cppContents, var_cocoaHeader, var_cocoaImplementation  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2158)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2156)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lexiqueComponentAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_lexiqueComponentAST.mSlotID,
                                        categoryMethod_lexiqueComponentAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexiqueComponentAST_semanticAnalysis (defineCategoryMethod_lexiqueComponentAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@semanticInstructionAST analyzeSyntaxInstruction'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_semanticInstructionAST_analyzeSyntaxInstruction (const cPtr_syntaxInstructionAST * inObject,
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
  callCategoryMethod_analyzeSemanticInstruction ((const cPtr_semanticInstructionAST *) temp_0.ptr (), constinArgument_inAnalysisContext, ioArgument_ioInstructionListForGeneration, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2427)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_semanticInstructionAST_analyzeSyntaxInstruction (void) {
  enterCategoryMethod_analyzeSyntaxInstruction (kTypeDescriptor_GALGAS_semanticInstructionAST.mSlotID,
                                                categoryMethod_semanticInstructionAST_analyzeSyntaxInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_semanticInstructionAST_analyzeSyntaxInstruction (defineCategoryMethod_semanticInstructionAST_analyzeSyntaxInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@nonterminalCallInstruction analyzeSyntaxInstruction'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_nonterminalCallInstruction_analyzeSyntaxInstruction (const cPtr_syntaxInstructionAST * inObject,
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
    GALGAS_formalParameterListForGeneration joker_107371 ; // Joker input parameter
    GALGAS_location joker_107385 ; // Joker input parameter
    var_labelMap.method_searchKey (object->mAttribute_mLabelName, joker_107371, var_signature, joker_107385, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2453)) ;
  }
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration ;
  {
  routine_analyzeRoutineArguments (constinArgument_inAnalysisContext, object->mAttribute_mNonterminalName, GALGAS_string ("'<").add_operation (object->mAttribute_mNonterminalName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 2459)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2459)).add_operation (GALGAS_string (">' nonterminal declaration"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2459)), var_signature, object->mAttribute_mActualParameterList, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2456)) ;
  }
  callCategoryMethod_analyzeSDT ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) object->mAttribute_mGrammarInstructionSyntaxDirectedTranslationResult.ptr (), constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2467)) ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_nonterminalInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mNonterminalName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 2475)), object->mAttribute_mLabelName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 2476)), var_actualParameterListForGeneration, object->mAttribute_mGrammarInstructionSyntaxDirectedTranslationResult  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2473))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2473)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_nonterminalCallInstruction_analyzeSyntaxInstruction (void) {
  enterCategoryMethod_analyzeSyntaxInstruction (kTypeDescriptor_GALGAS_nonterminalCallInstruction.mSlotID,
                                                categoryMethod_nonterminalCallInstruction_analyzeSyntaxInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_nonterminalCallInstruction_analyzeSyntaxInstruction (defineCategoryMethod_nonterminalCallInstruction_analyzeSyntaxInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@nonterminalInstructionForGeneration generateInstruction'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_nonterminalInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
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
  cEnumerator_actualParameterListForGeneration enumerator_108807 (object->mAttribute_mActualParameterList, kEnumeration_up) ;
  while (enumerator_108807.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName ;
    callCategoryMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_108807.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList, var_inputVariableList, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2494)) ;
    var_parameterCppNameList.addAssign_operation (var_parameterCppName  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2503)) ;
    enumerator_108807.gotoNextObject () ;
  }
  GALGAS_string var_sdtResultVarName = GALGAS_string ("syntaxDirectedTranslationResult_").add_operation (object->mAttribute_mInstructionLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2506)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 2506)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2506)) ;
  const enumGalgasBool test_0 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioGeneratedCode.plusAssign_operation (GALGAS_string ("C_String ").add_operation (var_sdtResultVarName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2508)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2508)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2508)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation (GALGAS_string ("nt_").add_operation (object->mAttribute_mNonterminalName.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 2510)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2510)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2510)).add_operation (object->mAttribute_mLabelName.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 2510)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2510)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2510)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2510)) ;
  cEnumerator_stringlist enumerator_109533 (var_parameterCppNameList, kEnumeration_up) ;
  while (enumerator_109533.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation (enumerator_109533.current_mValue (HERE).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2512)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2512)) ;
    enumerator_109533.gotoNextObject () ;
  }
  const enumGalgasBool test_1 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioGeneratedCode.plusAssign_operation (var_sdtResultVarName.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2515)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2515)) ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2517)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2517)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2518)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2518)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2518)) ;
  callCategoryMethod_generateCode ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) object->mAttribute_mGrammarInstructionSyntaxDirectedTranslationResult.ptr (), constinArgument_inGenerateSyntaxDirectedTranslationString, var_sdtResultVarName, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioGeneratedCode, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2519)) ;
  cEnumerator_stringlist enumerator_110067 (var_jokerParametersToReleaseList, kEnumeration_up) ;
  while (enumerator_110067.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation (enumerator_110067.current_mValue (HERE).add_operation (GALGAS_string (".drop () ; // Release temporary input variables (joker in source)\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2527)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2527)) ;
    enumerator_110067.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_nonterminalInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_nonterminalInstructionForGeneration.mSlotID,
                                           categoryMethod_nonterminalInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_nonterminalInstructionForGeneration_generateInstruction (defineCategoryMethod_nonterminalInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@inputParameterAnonymousVariable analyzeInputParameter'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_inputParameterAnonymousVariable_analyzeInputParameter (const cPtr_abstractInputParameter * /* inObject */,
                                                                                  const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                  const GALGAS_lexicalTypeEnum /* constinArgument_inRequiredLexicalType */,
                                                                                  const GALGAS_string /* constinArgument_inLexicalAttributeName */,
                                                                                  GALGAS_terminalCheckAssignementList & /* ioArgument_ioTerminalCheckAssignementList */,
                                                                                  GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_inputParameterAnonymousVariable_analyzeInputParameter (void) {
  enterCategoryMethod_analyzeInputParameter (kTypeDescriptor_GALGAS_inputParameterAnonymousVariable.mSlotID,
                                             categoryMethod_inputParameterAnonymousVariable_analyzeInputParameter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputParameterAnonymousVariable_analyzeInputParameter (defineCategoryMethod_inputParameterAnonymousVariable_analyzeInputParameter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@inputParameterVariable analyzeInputParameter'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_inputParameterVariable_analyzeInputParameter (const cPtr_abstractInputParameter * inObject,
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
  GALGAS_string joker_111715 ; // Joker input parameter
  ioArgument_ioVariableMap.modifier_searchForWriteAccess (object->mAttribute_mActualParameterName, var_type, var_cppName, joker_111715, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2562)) ;
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

static void defineCategoryMethod_inputParameterVariable_analyzeInputParameter (void) {
  enterCategoryMethod_analyzeInputParameter (kTypeDescriptor_GALGAS_inputParameterVariable.mSlotID,
                                             categoryMethod_inputParameterVariable_analyzeInputParameter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputParameterVariable_analyzeInputParameter (defineCategoryMethod_inputParameterVariable_analyzeInputParameter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@inputParameterDeclaredVariable analyzeInputParameter'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_inputParameterDeclaredVariable_analyzeInputParameter (const cPtr_abstractInputParameter * inObject,
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
  ioArgument_ioVariableMap.modifier_insertDefinedLocalVariable (object->mAttribute_mActualParameterName, var_expectedType, var_cppName, var_cppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2616)) ;
  }
  ioArgument_ioTerminalCheckAssignementList.addAssign_operation (var_expectedType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2618)), var_cppName, constinArgument_inLexicalAttributeName  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2617)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_inputParameterDeclaredVariable_analyzeInputParameter (void) {
  enterCategoryMethod_analyzeInputParameter (kTypeDescriptor_GALGAS_inputParameterDeclaredVariable.mSlotID,
                                             categoryMethod_inputParameterDeclaredVariable_analyzeInputParameter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputParameterDeclaredVariable_analyzeInputParameter (defineCategoryMethod_inputParameterDeclaredVariable_analyzeInputParameter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@inputParameterDeclaredConstant analyzeInputParameter'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_inputParameterDeclaredConstant_analyzeInputParameter (const cPtr_abstractInputParameter * inObject,
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
  ioArgument_ioVariableMap.modifier_insertLocalConstant (object->mAttribute_mActualParameterName, var_expectedType, var_cppName, var_cppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2654)) ;
  }
  ioArgument_ioTerminalCheckAssignementList.addAssign_operation (var_expectedType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2657)), var_cppName, constinArgument_inLexicalAttributeName  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2656)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_inputParameterDeclaredConstant_analyzeInputParameter (void) {
  enterCategoryMethod_analyzeInputParameter (kTypeDescriptor_GALGAS_inputParameterDeclaredConstant.mSlotID,
                                             categoryMethod_inputParameterDeclaredConstant_analyzeInputParameter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputParameterDeclaredConstant_analyzeInputParameter (defineCategoryMethod_inputParameterDeclaredConstant_analyzeInputParameter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@grammarInstructionSyntaxDirectedTranslationResultNone analyzeSDT'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * /* inObject */,
                                                                                             const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                             const GALGAS_bool /* constinArgument_inHasTranslateFeature */,
                                                                                             GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                             C_Compiler * /* inCompiler */
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeSDT (void) {
  enterCategoryMethod_analyzeSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone.mSlotID,
                                  categoryMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeSDT) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeSDT (defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeSDT, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@grammarInstructionSyntaxDirectedTranslationDropResult analyzeSDT'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
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

static void defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeSDT (void) {
  enterCategoryMethod_analyzeSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult.mSlotID,
                                  categoryMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeSDT) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeSDT (defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeSDT, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@grammarInstructionSyntaxDirectedTranslationResultInVar analyzeSDT'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
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
  GALGAS_string joker_118564 ; // Joker input parameter
  GALGAS_string joker_118567 ; // Joker input parameter
  ioArgument_ioVariableMap.modifier_searchForWriteAccess (object->mAttribute_mActualParameterName, var_type, joker_118564, joker_118567, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2697)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_expectedType.objectCompare (var_type)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mActualParameterName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_3, GALGAS_string ("the '").add_operation (object->mAttribute_mActualParameterName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 2701)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2701)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2701)).add_operation (var_type.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2701)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2701)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2701)).add_operation (var_expectedType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2702)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2702)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2702))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2700)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeSDT (void) {
  enterCategoryMethod_analyzeSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar.mSlotID,
                                  categoryMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeSDT) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeSDT (defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeSDT, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//       Overriding category method '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar analyzeSDT'       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
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
  ioArgument_ioVariableMap.modifier_insertDefinedLocalVariable (object->mAttribute_mActualParameterName, var_type, var_cppName, var_cppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2717)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_expectedType.objectCompare (var_type)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mActualParameterName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_3, GALGAS_string ("the '").add_operation (object->mAttribute_mActualParameterName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 2721)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2721)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2721)).add_operation (var_type.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2721)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2721)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2721)).add_operation (var_expectedType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2722)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2722)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2722))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2720)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeSDT (void) {
  enterCategoryMethod_analyzeSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar.mSlotID,
                                  categoryMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeSDT) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeSDT (defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeSDT, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//      Overriding category method '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst analyzeSDT'      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
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
  ioArgument_ioVariableMap.modifier_insertLocalConstant (object->mAttribute_mActualParameterName, var_type, var_cppName, var_cppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2737)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_expectedType.objectCompare (var_type)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mActualParameterName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_3, GALGAS_string ("the '").add_operation (object->mAttribute_mActualParameterName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 2741)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2741)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2741)).add_operation (var_type.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2741)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2741)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2741)).add_operation (var_expectedType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2742)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2742)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2742))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2740)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeSDT (void) {
  enterCategoryMethod_analyzeSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst.mSlotID,
                                  categoryMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeSDT) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeSDT (defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeSDT, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category method '@grammarInstructionSyntaxDirectedTranslationResultNone generateCode'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_grammarInstructionSyntaxDirectedTranslationResultNone_generateCode (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * /* inObject */,
                                                                                               const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                               const GALGAS_string constinArgument_inAccessMethodName,
                                                                                               GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                               GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioGeneratedCode.plusAssign_operation (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2762)).add_operation (GALGAS_string (" << "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2762)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2762)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2762)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2762)) ;
    {
    ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2763)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2763)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationResultNone_generateCode (void) {
  enterCategoryMethod_generateCode (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone.mSlotID,
                                    categoryMethod_grammarInstructionSyntaxDirectedTranslationResultNone_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultNone_generateCode (defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationResultNone_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category method '@grammarInstructionSyntaxDirectedTranslationDropResult generateCode'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_grammarInstructionSyntaxDirectedTranslationDropResult_generateCode (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * /* inObject */,
                                                                                               const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                               const GALGAS_string /* constinArgument_inAccessMethodName */,
                                                                                               GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                               GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                               C_Compiler * /* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationDropResult_generateCode (void) {
  enterCategoryMethod_generateCode (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult.mSlotID,
                                    categoryMethod_grammarInstructionSyntaxDirectedTranslationDropResult_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationDropResult_generateCode (defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationDropResult_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category method '@grammarInstructionSyntaxDirectedTranslationResultInVar generateCode'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_generateCode (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                                const GALGAS_string constinArgument_inAccessMethodName,
                                                                                                GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                                GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar) ;
  GALGAS_string var_cppName = GALGAS_string ("var_").add_operation (object->mAttribute_mActualParameterName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 2783)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2783)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation (var_cppName.add_operation (GALGAS_string (" = GALGAS_string ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2784)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2784)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2784)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2784)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_generateCode (void) {
  enterCategoryMethod_generateCode (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar.mSlotID,
                                    categoryMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_generateCode (defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//      Overriding category method '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar generateCode'      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_generateCode (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                        const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                                        const GALGAS_string constinArgument_inAccessMethodName,
                                                                                                        GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                                        GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar) ;
  GALGAS_string var_cppName = GALGAS_string ("var_").add_operation (object->mAttribute_mActualParameterName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 2794)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2794)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation (GALGAS_string ("GALGAS_string ").add_operation (var_cppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2795)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2795)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2795)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2795)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2795)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_generateCode (void) {
  enterCategoryMethod_generateCode (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar.mSlotID,
                                    categoryMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_generateCode (defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//     Overriding category method '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst generateCode'     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_generateCode (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                          const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                                          const GALGAS_string constinArgument_inAccessMethodName,
                                                                                                          GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                                          GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst) ;
  GALGAS_string var_cppName = GALGAS_string ("var_").add_operation (object->mAttribute_mActualParameterName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 2805)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2805)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation (GALGAS_string ("const GALGAS_string ").add_operation (var_cppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2806)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2806)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2806)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2806)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2806)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_generateCode (void) {
  enterCategoryMethod_generateCode (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst.mSlotID,
                                    categoryMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_generateCode (defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@terminalCheckInstruction analyzeSyntaxInstruction'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_terminalCheckInstruction_analyzeSyntaxInstruction (const cPtr_syntaxInstructionAST * inObject,
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
  cEnumerator_actualInputParameterListAST enumerator_125418 (object->mAttribute_mActualInputParameterList, kEnumeration_up) ;
  cEnumerator_lexicalSentValueList enumerator_125443 (var_sentAttributeList, kEnumeration_up) ;
  while (enumerator_125418.hasCurrentObject () && enumerator_125443.hasCurrentObject ()) {
    callCategoryMethod_analyzeInputParameter ((const cPtr_abstractInputParameter *) enumerator_125418.current_mInputParameter (HERE).ptr (), constinArgument_inAnalysisContext, enumerator_125443.current_mLexicalType (HERE), enumerator_125443.current_mLexicalAttributeName (HERE), var_terminalCheckAssignementList, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2835)) ;
    const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, enumerator_125443.current_mLexicalFormalSelector (HERE).mAttribute_string.objectCompare (enumerator_125418.current_mActualSelector (HERE).mAttribute_string)).boolEnum () ;
    if (kBoolTrue == test_6) {
      GALGAS_string temp_7 ;
      const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, enumerator_125443.current_mLexicalFormalSelector (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_8) {
        temp_7 = GALGAS_string (":") ;
      }else if (kBoolFalse == test_8) {
        temp_7 = GALGAS_string::makeEmptyString () ;
      }
      GALGAS_location location_9 (enumerator_125418.current_mActualSelector (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_9, GALGAS_string ("the actual selector should be '\?").add_operation (enumerator_125443.current_mLexicalFormalSelector (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 2843)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2843)).add_operation (temp_7, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2843)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2843))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2843)) ;
      GALGAS_location location_10 (enumerator_125443.current_mLexicalFormalSelector (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticWarning (location_10, GALGAS_string ("the formal selector is declared here")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2844)) ;
    }
    enumerator_125418.gotoNextObject () ;
    enumerator_125443.gotoNextObject () ;
  }
  cEnumerator__32_lstringlist enumerator_125980 (object->mAttribute_mIndexingKeyList, kEnumeration_up) ;
  while (enumerator_125980.hasCurrentObject ()) {
    const enumGalgasBool test_11 = constinArgument_inIndexNameSet.getter_hasKey (enumerator_125980.current_mValue_30_ (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 2849)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2849)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 2849)).boolEnum () ;
    if (kBoolTrue == test_11) {
      GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
      cEnumerator_stringset enumerator_126089 (constinArgument_inIndexNameSet, kEnumeration_up) ;
      while (enumerator_126089.hasCurrentObject ()) {
        var_s.plusAssign_operation (GALGAS_string ("\n"
          "  - ").add_operation (enumerator_126089.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2852)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2852)) ;
        enumerator_126089.gotoNextObject () ;
      }
      GALGAS_location location_12 (enumerator_125980.current_mValue_30_ (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_12, GALGAS_string ("the '").add_operation (enumerator_125980.current_mValue_30_ (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 2854)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2854)).add_operation (GALGAS_string ("' indexing name is not declared by the lexique; available names are:"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2854)).add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2854))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2854)) ;
    }
    enumerator_125980.gotoNextObject () ;
  }
  callCategoryMethod_analyzeSDT ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) object->mAttribute_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor.ptr (), constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2858)) ;
  callCategoryMethod_analyzeSDT ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) object->mAttribute_mGrammarInstructionSyntaxDirectedTranslationToken.ptr (), constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2863)) ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_terminalCheckInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTerminalName, constinArgument_inLexiqueName, var_terminalCheckAssignementList, object->mAttribute_mIndexingKeyList, object->mAttribute_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor, object->mAttribute_mGrammarInstructionSyntaxDirectedTranslationToken  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2869))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2869)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_terminalCheckInstruction_analyzeSyntaxInstruction (void) {
  enterCategoryMethod_analyzeSyntaxInstruction (kTypeDescriptor_GALGAS_terminalCheckInstruction.mSlotID,
                                                categoryMethod_terminalCheckInstruction_analyzeSyntaxInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_terminalCheckInstruction_analyzeSyntaxInstruction (defineCategoryMethod_terminalCheckInstruction_analyzeSyntaxInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@terminalCheckInstructionForGeneration generateInstruction'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_terminalCheckInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                      GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                      GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                      GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                      const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                      GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_terminalCheckInstructionForGeneration * object = (const cPtr_terminalCheckInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_terminalCheckInstructionForGeneration) ;
  cEnumerator_terminalCheckAssignementList enumerator_127423 (object->mAttribute_mTerminalCheckAssignementList, kEnumeration_up) ;
  while (enumerator_127423.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, enumerator_127423.current_mTypeName (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioGeneratedCode.plusAssign_operation (GALGAS_string ("GALGAS_").add_operation (enumerator_127423.current_mTypeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 2890)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2890)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2890)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2890)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation (enumerator_127423.current_mTargetVarCppName (HERE).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2893)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2893)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2893)).add_operation (GALGAS_string ("->synthetizedAttribute_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2893)).add_operation (enumerator_127423.current_mSourceLexicalAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 2894)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2893)).add_operation (GALGAS_string (" () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2894)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2893)) ;
    enumerator_127423.gotoNextObject () ;
  }
  cEnumerator__32_lstringlist enumerator_127807 (object->mAttribute_mIndexingKeyList, kEnumeration_up) ;
  while (enumerator_127807.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2899)).add_operation (GALGAS_string ("->enterIndexing (C_Lexique_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2899)).add_operation (object->mAttribute_mLexiqueIdentifier, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2900)).add_operation (GALGAS_string ("::kIndexing_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2900)).add_operation (enumerator_127807.current_mValue_30_ (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 2900)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2900)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2900)).add_operation (enumerator_127807.current_mValue_31_ (HERE).mAttribute_string.getter_utf_38_Representation (SOURCE_FILE ("semanticAnalysis.galgas", 2901)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2901)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2901)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2899)) ;
    enumerator_127807.gotoNextObject () ;
  }
  callCategoryMethod_generateCode ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) object->mAttribute_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor.ptr (), constinArgument_inGenerateSyntaxDirectedTranslationString, GALGAS_string ("inCompiler->preceedingSeparatorString ()"), ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioGeneratedCode, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2904)) ;
  callCategoryMethod_generateCode ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) object->mAttribute_mGrammarInstructionSyntaxDirectedTranslationToken.ptr (), constinArgument_inGenerateSyntaxDirectedTranslationString, GALGAS_string ("inCompiler->tokenString ()"), ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioGeneratedCode, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2910)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2917)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2917)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2918)).add_operation (GALGAS_string ("->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2918)).add_operation (object->mAttribute_mLexiqueIdentifier, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2918)).add_operation (GALGAS_string ("::kToken_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2919)).add_operation (object->mAttribute_mTerminalName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 2919)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2919)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2919)).add_operation (extensionGetter_commaSourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2920)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2920)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2920)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2918)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_terminalCheckInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_terminalCheckInstructionForGeneration.mSlotID,
                                           categoryMethod_terminalCheckInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_terminalCheckInstructionForGeneration_generateInstruction (defineCategoryMethod_terminalCheckInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@repeatInstruction analyzeSyntaxInstruction'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_repeatInstruction_analyzeSyntaxInstruction (const cPtr_syntaxInstructionAST * inObject,
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
  ioArgument_ioVariableMap.modifier_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2976)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_repeated_5F_instructionList ;
  {
  routine_analyzeSyntaxInstructionList (constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, object->mAttribute_mRepeatedInstructionList, object->mAttribute_mEndOf_5F_repeated_5F_instructions_5F_branch, constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_repeated_5F_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2979)) ;
  }
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration = GALGAS_listOfSemanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 2994)) ;
  cEnumerator_listOfSyntaxInstructionList enumerator_131375 (object->mAttribute_mRepeatBranchList, kEnumeration_up) ;
  while (enumerator_131375.hasCurrentObject ()) {
    GALGAS_semanticInstructionListForGeneration var_instructionList ;
    {
    routine_analyzeSyntaxInstructionList (constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, enumerator_131375.current_mSyntaxInstructionList (HERE), enumerator_131375.current_mEndOf_5F_instructions (HERE), constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2997)) ;
    }
    var_listOfSemanticInstructionListForGeneration.addAssign_operation (var_instructionList, enumerator_131375.current_mEndOf_5F_instructions (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3011)) ;
    enumerator_131375.gotoNextObject () ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_repeat_5F_instruction, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3014)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_repeatInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, constinArgument_inComponentName, var_choiceIndex, var_repeated_5F_instructionList, object->mAttribute_mEndOf_5F_repeat_5F_instruction, var_listOfSemanticInstructionListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3016))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3016)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_repeatInstruction_analyzeSyntaxInstruction (void) {
  enterCategoryMethod_analyzeSyntaxInstruction (kTypeDescriptor_GALGAS_repeatInstruction.mSlotID,
                                                categoryMethod_repeatInstruction_analyzeSyntaxInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_repeatInstruction_analyzeSyntaxInstruction (defineCategoryMethod_repeatInstruction_analyzeSyntaxInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@repeatInstructionForGeneration generateInstruction'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_repeatInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
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
  ioArgument_ioGeneratedCode.plusAssign_operation (GALGAS_string ("bool ").add_operation (var_repeatFlagCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3035)).add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3035)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3035)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation (GALGAS_string ("while (").add_operation (var_repeatFlagCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3036)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3036)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3036)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_m_5F_repeated_5F_instructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3037)) ;
  }
  {
  ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3045)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation (GALGAS_string ("switch (select_").add_operation (object->mAttribute_mSyntaxComponentName.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 3046)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3046)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3046)).add_operation (object->mAttribute_mChoiceIndex.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 3046)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3046)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3046)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3046)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3046)).add_operation (GALGAS_string (")) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3046)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3046)) ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_133362 (object->mAttribute_mListOfSemanticInstructionListForGeneration, kEnumeration_up) ;
  GALGAS_uint index_133312 ((uint32_t) 0) ;
  while (enumerator_133362.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation (GALGAS_string ("case ").add_operation (index_133312.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3048)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 3048)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3048)).add_operation (GALGAS_string (": {\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3048)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3048)) ;
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_133362.current_mInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3049)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation (GALGAS_string ("} break ;\n"), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3057)) ;
    enumerator_133362.gotoNextObject () ;
    index_133312.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3047)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation (GALGAS_string ("default:\n"), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3059)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation (GALGAS_string ("  ").add_operation (var_repeatFlagCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3060)).add_operation (GALGAS_string (" = false ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3060)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3060)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation (GALGAS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3061)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation (GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3062)) ;
  {
  ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3063)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation (GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3064)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_repeatInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_repeatInstructionForGeneration.mSlotID,
                                           categoryMethod_repeatInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_repeatInstructionForGeneration_generateInstruction (defineCategoryMethod_repeatInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@selectInstruction analyzeSyntaxInstruction'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_selectInstruction_analyzeSyntaxInstruction (const cPtr_syntaxInstructionAST * inObject,
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
  ioArgument_ioVariableMap.modifier_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3083)) ;
  }
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration = GALGAS_listOfSemanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 3085)) ;
  cEnumerator_listOfSyntaxInstructionList enumerator_134777 (object->mAttribute_mSelectBranchList, kEnumeration_up) ;
  while (enumerator_134777.hasCurrentObject ()) {
    GALGAS_semanticInstructionListForGeneration var_instructionList ;
    {
    routine_analyzeSyntaxInstructionList (constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, enumerator_134777.current_mSyntaxInstructionList (HERE), enumerator_134777.current_mEndOf_5F_instructions (HERE), constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3088)) ;
    }
    var_listOfSemanticInstructionListForGeneration.addAssign_operation (var_instructionList, enumerator_134777.current_mEndOf_5F_instructions (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3102)) ;
    enumerator_134777.gotoNextObject () ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_select_5F_instruction, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3105)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_selectInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, constinArgument_inComponentName, var_choiceIndex, var_listOfSemanticInstructionListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3106))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3106)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_selectInstruction_analyzeSyntaxInstruction (void) {
  enterCategoryMethod_analyzeSyntaxInstruction (kTypeDescriptor_GALGAS_selectInstruction.mSlotID,
                                                categoryMethod_selectInstruction_analyzeSyntaxInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selectInstruction_analyzeSyntaxInstruction (defineCategoryMethod_selectInstruction_analyzeSyntaxInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@selectInstructionForGeneration generateInstruction'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_selectInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
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
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3122)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3122)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation (GALGAS_string ("switch (select_").add_operation (object->mAttribute_mSyntaxComponentName.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 3123)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3123)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3123)).add_operation (object->mAttribute_mChoiceIndex.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 3123)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3123)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3123)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3123)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3123)).add_operation (GALGAS_string (")) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3123)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3123)) ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_136265 (object->mAttribute_mListOfSemanticInstructionListForGeneration, kEnumeration_up) ;
  GALGAS_uint index_136215 ((uint32_t) 0) ;
  while (enumerator_136265.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation (GALGAS_string ("case ").add_operation (index_136215.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3125)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 3125)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3125)).add_operation (GALGAS_string (": {\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3125)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3125)) ;
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_136265.current_mInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3126)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation (GALGAS_string ("} break ;\n"), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3134)) ;
    enumerator_136265.gotoNextObject () ;
    index_136215.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3124)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation (GALGAS_string ("default:\n"), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3136)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation (GALGAS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3137)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation (GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3138)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_selectInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_selectInstructionForGeneration.mSlotID,
                                           categoryMethod_selectInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selectInstructionForGeneration_generateInstruction (defineCategoryMethod_selectInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@parseRewindInstruction analyzeSyntaxInstruction'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_parseRewindInstruction_analyzeSyntaxInstruction (const cPtr_syntaxInstructionAST * inObject,
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
  cEnumerator_listOfSyntaxInstructionList enumerator_137490 (object->mAttribute_mParseRewindBranchList, kEnumeration_up) ;
  while (enumerator_137490.hasCurrentObject ()) {
    ioArgument_ioSelectMethodCount = var_referenceSelectMethodCount ;
    GALGAS_semanticInstructionListForGeneration var_instructionList = GALGAS_semanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 3159)) ;
    cEnumerator_syntaxInstructionList enumerator_137658 (enumerator_137490.current_mSyntaxInstructionList (HERE), kEnumeration_up) ;
    while (enumerator_137658.hasCurrentObject ()) {
      callCategoryMethod_analyzeSyntaxInstruction ((const cPtr_syntaxInstructionAST *) enumerator_137658.current_mInstruction (HERE).ptr (), constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, constinArgument_inIndexNameSet, var_instructionList, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3161)) ;
      enumerator_137658.gotoNextObject () ;
    }
    var_listOfSemanticInstructionListForGeneration.addAssign_operation (var_instructionList, enumerator_137490.current_mEndOf_5F_instructions (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3174)) ;
    enumerator_137490.gotoNextObject () ;
  }
  GALGAS_listOfSemanticInstructionListForGeneration var_tempListOfBranches = var_listOfSemanticInstructionListForGeneration ;
  GALGAS_semanticInstructionListForGeneration var_instructionList ;
  {
  GALGAS_location joker_138333 ; // Joker input parameter
  var_tempListOfBranches.modifier_popFirst (var_instructionList, joker_138333, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3179)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_referenceSignature = function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), var_instructionList, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3180)) ;
  GALGAS_bool var_ok = GALGAS_bool (true) ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_138510 (var_tempListOfBranches, kEnumeration_up) ;
  bool bool_0 = var_ok.isValidAndTrue () ;
  if (enumerator_138510.hasCurrentObject () && bool_0) {
    while (enumerator_138510.hasCurrentObject () && bool_0) {
      var_ok = function_compareSyntaxSignature (var_referenceSignature, function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), enumerator_138510.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3185)), enumerator_138510.current_mEndOfInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3183)) ;
      enumerator_138510.gotoNextObject () ;
      if (enumerator_138510.hasCurrentObject ()) {
        bool_0 = var_ok.isValidAndTrue () ;
      }
    }
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_parseRewindInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_listOfSemanticInstructionListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3190))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3190)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_parseRewindInstruction_analyzeSyntaxInstruction (void) {
  enterCategoryMethod_analyzeSyntaxInstruction (kTypeDescriptor_GALGAS_parseRewindInstruction.mSlotID,
                                                categoryMethod_parseRewindInstruction_analyzeSyntaxInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_parseRewindInstruction_analyzeSyntaxInstruction (defineCategoryMethod_parseRewindInstruction_analyzeSyntaxInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@parseRewindInstructionForGeneration generateInstruction'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_parseRewindInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
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
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3204)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3204)) ;
  }
  GALGAS_string var_parsingContextVar = GALGAS_string ("parsingContext_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 3205)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3205)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3205)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation (GALGAS_string ("const C_parsingContext ").add_operation (var_parsingContextVar, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3206)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3206)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3206)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3206)).add_operation (GALGAS_string ("->parsingContext () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3206)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3206)) ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_139698 (object->mAttribute_mListOfSemanticInstructionListForGeneration, kEnumeration_up) ;
  while (enumerator_139698.hasCurrentObject ()) {
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_139698.current_mInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3209)) ;
    }
    if (enumerator_139698.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3218)).add_operation (GALGAS_string ("->setParsingContext ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3218)).add_operation (var_parsingContextVar, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3218)).add_operation (GALGAS_string (") ; // rewind\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3218)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3218)) ;
    }
    enumerator_139698.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation (GALGAS_string ("//-------- END OF @parseRewindInstructionForGeneration\n"), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3220)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_parseRewindInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_parseRewindInstructionForGeneration.mSlotID,
                                           categoryMethod_parseRewindInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_parseRewindInstructionForGeneration_generateInstruction (defineCategoryMethod_parseRewindInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@parseLoopInstruction analyzeSyntaxInstruction'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_parseLoopInstruction_analyzeSyntaxInstruction (const cPtr_syntaxInstructionAST * inObject,
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
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mVariantExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 3239)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_variant_5F_expression, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3238)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_variant_5F_expression.getter_mResultType (SOURCE_FILE ("semanticAnalysis.galgas", 3244)).objectCompare (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mUIntType)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfVariantExpression, GALGAS_string ("the variant expression type is '@").add_operation (var_variant_5F_expression.getter_mResultType (SOURCE_FILE ("semanticAnalysis.galgas", 3246)).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3246)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3246)).add_operation (GALGAS_string ("', but it should be '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3246)).add_operation (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mUIntType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3247)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3247)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3247))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3245)) ;
  }
  GALGAS_semanticExpressionForGeneration var_while_5F_expression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mWhileExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 3252)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_while_5F_expression, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3251)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_while_5F_expression.getter_mResultType (SOURCE_FILE ("semanticAnalysis.galgas", 3257)).objectCompare (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfWhileExpression, GALGAS_string ("the variant expression type is '@").add_operation (var_variant_5F_expression.getter_mResultType (SOURCE_FILE ("semanticAnalysis.galgas", 3259)).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3259)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3259)).add_operation (GALGAS_string ("', but it should be '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3259)).add_operation (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3260)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3260)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3260))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3258)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3264)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_instructionList ;
  {
  routine_analyzeSyntaxInstructionList (constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, object->mAttribute_mDoInstructionList, object->mAttribute_mEndOfInstructionList, constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3267)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOfInstructionList, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3282)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_parseLoopInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_variant_5F_expression, var_while_5F_expression, var_instructionList  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3284))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3284)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_parseLoopInstruction_analyzeSyntaxInstruction (void) {
  enterCategoryMethod_analyzeSyntaxInstruction (kTypeDescriptor_GALGAS_parseLoopInstruction.mSlotID,
                                                categoryMethod_parseLoopInstruction_analyzeSyntaxInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_parseLoopInstruction_analyzeSyntaxInstruction (defineCategoryMethod_parseLoopInstruction_analyzeSyntaxInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@parseLoopInstructionForGeneration generateInstruction'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_parseLoopInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
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
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3299)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3299)) ;
  }
  GALGAS_string var_variantVarCppName ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mVariantExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_variantVarCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3303)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation (GALGAS_string ("if (").add_operation (var_variantVarCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3305)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3305)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3305)) ;
  {
  ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3306)) ;
  }
  GALGAS_string var_variantVar = GALGAS_string ("variant_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 3307)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3307)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3307)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation (GALGAS_string ("uint32_t ").add_operation (var_variantVar, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3308)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3308)).add_operation (var_variantVarCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3308)).add_operation (GALGAS_string (".uintValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3308)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3308)) ;
  GALGAS_string var_loopVar = GALGAS_string ("loop_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 3310)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3310)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3310)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation (GALGAS_string ("bool ").add_operation (var_loopVar, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3311)).add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3311)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3311)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation (GALGAS_string ("while (").add_operation (var_loopVar, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3312)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3312)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3312)) ;
  {
  ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3313)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation (var_loopVar.add_operation (GALGAS_string (" = false ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3314)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3314)) ;
  GALGAS_string var_whileVarCppName ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mWhileExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_whileVarCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3316)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation (GALGAS_string ("if (").add_operation (var_whileVarCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3317)).add_operation (GALGAS_string (".isValidAndTrue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3317)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3317)) ;
  {
  ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3318)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation (var_loopVar.add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3319)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3319)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation (var_variantVar.add_operation (GALGAS_string (" -- ; // Decrement variant\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3320)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3320)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation (GALGAS_string ("const C_parsingContext parsingContext = ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3321)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3321)).add_operation (GALGAS_string ("->parsingContext () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3321)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3321)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mInstructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3322)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3330)).add_operation (GALGAS_string ("->setParsingContext (parsingContext) ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3330)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3330)) ;
  {
  ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3331)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation (GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3332)) ;
  {
  ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3333)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation (GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3334)) ;
  {
  ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3335)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation (GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3336)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation (GALGAS_string ("//--- 'parse'\n"), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3338)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), object->mAttribute_mInstructionList, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3341)), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3339)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3347)).add_operation (GALGAS_string ("->resetTemplateString () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3347)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3347)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation (GALGAS_string ("//-------- END OF @parseLoopInstructionForGeneration\n"), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3348)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_parseLoopInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_parseLoopInstructionForGeneration.mSlotID,
                                           categoryMethod_parseLoopInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_parseLoopInstructionForGeneration_generateInstruction (defineCategoryMethod_parseLoopInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@parseWhenInstruction analyzeSyntaxInstruction'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_parseWhenInstruction_analyzeSyntaxInstruction (const cPtr_syntaxInstructionAST * inObject,
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
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mWhenExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 3367)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_when_5F_expression, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3366)) ;
  {
  ioArgument_ioVariableMap.modifier_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3373)) ;
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
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOfElseInstructionList, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3408)) ;
  }
  GALGAS_bool var_ok = function_compareSyntaxSignature (function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), var_when_5F_instructionListForGeneration, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3411)), function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), var_else_5F_instructionListForGeneration, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3412)), object->mAttribute_mEndOfElseInstructionList, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3410)) ;
  const enumGalgasBool test_0 = var_ok.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_parseWhenInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_when_5F_expression, var_when_5F_instructionListForGeneration, var_else_5F_instructionListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3417))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3417)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_parseWhenInstruction_analyzeSyntaxInstruction (void) {
  enterCategoryMethod_analyzeSyntaxInstruction (kTypeDescriptor_GALGAS_parseWhenInstruction.mSlotID,
                                                categoryMethod_parseWhenInstruction_analyzeSyntaxInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_parseWhenInstruction_analyzeSyntaxInstruction (defineCategoryMethod_parseWhenInstruction_analyzeSyntaxInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@parseWhenInstructionForGeneration generateInstruction'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_parseWhenInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
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
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mWhenExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3435)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation (GALGAS_string ("if (").add_operation (var_sourceVar, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3436)).add_operation (GALGAS_string (".isValidAndTrue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3436)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3436)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mInstructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3437)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation (GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3445)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mElseInstructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3446)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation (GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3454)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_parseWhenInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_parseWhenInstructionForGeneration.mSlotID,
                                           categoryMethod_parseWhenInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_parseWhenInstructionForGeneration_generateInstruction (defineCategoryMethod_parseWhenInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@syntaxSendInstruction analyzeSyntaxInstruction'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_syntaxSendInstruction_analyzeSyntaxInstruction (const cPtr_syntaxInstructionAST * inObject,
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
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 3475)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3474)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_expression.getter_mResultType (SOURCE_FILE ("semanticAnalysis.galgas", 3481)).objectCompare (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("'send' expresion should be an @string expression")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3482)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_syntaxSendInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_expression  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3485))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3485)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_syntaxSendInstruction_analyzeSyntaxInstruction (void) {
  enterCategoryMethod_analyzeSyntaxInstruction (kTypeDescriptor_GALGAS_syntaxSendInstruction.mSlotID,
                                                categoryMethod_syntaxSendInstruction_analyzeSyntaxInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_syntaxSendInstruction_analyzeSyntaxInstruction (defineCategoryMethod_syntaxSendInstruction_analyzeSyntaxInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@syntaxSendInstructionForGeneration generateInstruction'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_syntaxSendInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
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
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3498)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3500)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3500)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation (GALGAS_string ("if (").add_operation (var_sourceVar, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3501)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3501)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3501)).add_operation (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3502)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3502)).add_operation (GALGAS_string (" << "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3502)).add_operation (var_sourceVar, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3502)).add_operation (GALGAS_string (".stringValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3502)).add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3502)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3501)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_syntaxSendInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_syntaxSendInstructionForGeneration.mSlotID,
                                           categoryMethod_syntaxSendInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_syntaxSendInstructionForGeneration_generateInstruction (defineCategoryMethod_syntaxSendInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category getter '@trueExpressionForGeneration isTrueExpression'                      *
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

static void defineCategoryGetter_trueExpressionForGeneration_isTrueExpression (void) {
  enterCategoryGetter_isTrueExpression (kTypeDescriptor_GALGAS_trueExpressionForGeneration.mSlotID,
                                        extensionGetter_trueExpressionForGeneration_isTrueExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_trueExpressionForGeneration_isTrueExpression (defineCategoryGetter_trueExpressionForGeneration_isTrueExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@selfCopyInExpressionForGeneration generateExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_selfCopyInExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
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
  ioArgument_ioGeneratedCode.plusAssign_operation (GALGAS_string ("const GALGAS_").add_operation (object->mAttribute_mResultType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 45)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 45)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 45)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 45)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 45)).add_operation (object->mAttribute_mSelfCppName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 45)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 45)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 45)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (object->mAttribute_mSelfCppName COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 46)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_selfCopyInExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_selfCopyInExpressionForGeneration.mSlotID,
                                          categoryMethod_selfCopyInExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfCopyInExpressionForGeneration_generateExpression (defineCategoryMethod_selfCopyInExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@hereExpressionForGeneration generateExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_hereExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * /* inObject */,
                                                                           GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                           GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                           GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                           GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                           GALGAS_string & outArgument_outCppExpression,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 57)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 57)) ;
  }
  outArgument_outCppExpression = function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 58)).add_operation (GALGAS_string ("->here ()"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 58)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_hereExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_hereExpressionForGeneration.mSlotID,
                                          categoryMethod_hereExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_hereExpressionForGeneration_generateExpression (defineCategoryMethod_hereExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@trueExpressionForGeneration generateExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_trueExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * /* inObject */,
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

static void defineCategoryMethod_trueExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_trueExpressionForGeneration.mSlotID,
                                          categoryMethod_trueExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_trueExpressionForGeneration_generateExpression (defineCategoryMethod_trueExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@falseExpressionForGeneration generateExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_falseExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * /* inObject */,
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

static void defineCategoryMethod_falseExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_falseExpressionForGeneration.mSlotID,
                                          categoryMethod_falseExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_falseExpressionForGeneration_generateExpression (defineCategoryMethod_falseExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@literalCharExpressionForGeneration generateExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalCharExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
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

static void defineCategoryMethod_literalCharExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_literalCharExpressionForGeneration.mSlotID,
                                          categoryMethod_literalCharExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalCharExpressionForGeneration_generateExpression (defineCategoryMethod_literalCharExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@literalStringExpressionForGeneration generateExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalStringExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
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

static void defineCategoryMethod_literalStringExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_literalStringExpressionForGeneration.mSlotID,
                                          categoryMethod_literalStringExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalStringExpressionForGeneration_generateExpression (defineCategoryMethod_literalStringExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@literalDoubleExpressionForGeneration generateExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalDoubleExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
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

static void defineCategoryMethod_literalDoubleExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_literalDoubleExpressionForGeneration.mSlotID,
                                          categoryMethod_literalDoubleExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalDoubleExpressionForGeneration_generateExpression (defineCategoryMethod_literalDoubleExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@literalUIntExpressionForGeneration generateExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalUIntExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
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

static void defineCategoryMethod_literalUIntExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_literalUIntExpressionForGeneration.mSlotID,
                                          categoryMethod_literalUIntExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalUIntExpressionForGeneration_generateExpression (defineCategoryMethod_literalUIntExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@literalUInt64ExpressionForGeneration generateExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalUInt_36__34_ExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
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

static void defineCategoryMethod_literalUInt_36__34_ExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_literalUInt_36__34_ExpressionForGeneration.mSlotID,
                                          categoryMethod_literalUInt_36__34_ExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalUInt_36__34_ExpressionForGeneration_generateExpression (defineCategoryMethod_literalUInt_36__34_ExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@literalSIntExpressionForGeneration generateExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalSIntExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
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

static void defineCategoryMethod_literalSIntExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_literalSIntExpressionForGeneration.mSlotID,
                                          categoryMethod_literalSIntExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalSIntExpressionForGeneration_generateExpression (defineCategoryMethod_literalSIntExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@literalBigIntExpressionForGeneration generateExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalBigIntExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
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
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 163)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 163)) ;
  }
  outArgument_outCppExpression.plusAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 164)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 164)) ;
  outArgument_outCppExpression.plusAssign_operation (GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 165)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 165)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 165)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalBigIntExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_literalBigIntExpressionForGeneration.mSlotID,
                                          categoryMethod_literalBigIntExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalBigIntExpressionForGeneration_generateExpression (defineCategoryMethod_literalBigIntExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@literalSInt64ExpressionForGeneration generateExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalSInt_36__34_ExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
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

static void defineCategoryMethod_literalSInt_36__34_ExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_literalSInt_36__34_ExpressionForGeneration.mSlotID,
                                          categoryMethod_literalSInt_36__34_ExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalSInt_36__34_ExpressionForGeneration_generateExpression (defineCategoryMethod_literalSInt_36__34_ExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@defaultConstructorExpressionForGeneration generateExpression'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_defaultConstructorExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                         GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                         GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                         GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                         GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                         GALGAS_string & outArgument_outCppExpression,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_defaultConstructorExpressionForGeneration * object = (const cPtr_defaultConstructorExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_defaultConstructorExpressionForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 188)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_").add_operation (object->mAttribute_mResultType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 190)).add_operation (GALGAS_string ("::constructor_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 190)).add_operation (object->mAttribute_mResultType.getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 192)).getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 191)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 192)).add_operation (extensionGetter_sourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 193)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 193)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_defaultConstructorExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_defaultConstructorExpressionForGeneration.mSlotID,
                                          categoryMethod_defaultConstructorExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_defaultConstructorExpressionForGeneration_generateExpression (defineCategoryMethod_defaultConstructorExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@constructorExpressionForGeneration generateExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_constructorExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                  GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                  GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                  GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                  GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                  GALGAS_string & outArgument_outCppExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_constructorExpressionForGeneration * object = (const cPtr_constructorExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_constructorExpressionForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 204)) ;
  GALGAS_stringlist var_parameterList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticExpressionGeneration.galgas", 205)) ;
  cEnumerator_semanticExpressionListForGeneration enumerator_10335 (object->mAttribute_mEffectiveParameterList, kEnumeration_up) ;
  while (enumerator_10335.hasCurrentObject ()) {
    GALGAS_string var_parameter ;
    callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_10335.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 208)) ;
    var_parameterList.addAssign_operation (var_parameter  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 209)) ;
    enumerator_10335.gotoNextObject () ;
  }
  outArgument_outCppExpression = GALGAS_string ("GALGAS_").add_operation (object->mAttribute_mConstructorType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 211)).add_operation (GALGAS_string ("::constructor_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 211)).add_operation (object->mAttribute_mConstructorName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 212)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 212)) ;
  cEnumerator_stringlist enumerator_10753 (var_parameterList, kEnumeration_up) ;
  while (enumerator_10753.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssign_operation (enumerator_10753.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 215)) ;
    if (enumerator_10753.hasNextObject ()) {
      outArgument_outCppExpression.plusAssign_operation (GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 216)) ;
    }
    enumerator_10753.gotoNextObject () ;
  }
  GALGAS_bool var_needsComma = GALGAS_bool (kIsStrictSup, var_parameterList.getter_length (SOURCE_FILE ("semanticExpressionGeneration.galgas", 218)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  const enumGalgasBool test_0 = object->mAttribute_mHasCompilerArgument.boolEnum () ;
  if (kBoolTrue == test_0) {
    const enumGalgasBool test_1 = var_needsComma.boolEnum () ;
    if (kBoolTrue == test_1) {
      outArgument_outCppExpression.plusAssign_operation (GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 221)) ;
    }
    {
    ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 223)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 223)) ;
    }
    outArgument_outCppExpression.plusAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 224)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 224)) ;
    var_needsComma = GALGAS_bool (true) ;
  }
  const enumGalgasBool test_2 = var_needsComma.boolEnum () ;
  if (kBoolTrue == test_2) {
    outArgument_outCppExpression.plusAssign_operation (GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 228)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 228)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 228)) ;
  }else if (kBoolFalse == test_2) {
    outArgument_outCppExpression.plusAssign_operation (extensionGetter_sourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 230)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 230)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 230)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_constructorExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_constructorExpressionForGeneration.mSlotID,
                                          categoryMethod_constructorExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_constructorExpressionForGeneration_generateExpression (defineCategoryMethod_constructorExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@optionValueExpressionForGeneration generateExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_optionValueExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
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

static void defineCategoryMethod_optionValueExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_optionValueExpressionForGeneration.mSlotID,
                                          categoryMethod_optionValueExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_optionValueExpressionForGeneration_generateExpression (defineCategoryMethod_optionValueExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@optionCharExpressionForGeneration generateExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_optionCharExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
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

static void defineCategoryMethod_optionCharExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_optionCharExpressionForGeneration.mSlotID,
                                          categoryMethod_optionCharExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_optionCharExpressionForGeneration_generateExpression (defineCategoryMethod_optionCharExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@optionStringExpressionForGeneration generateExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_optionStringExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
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

static void defineCategoryMethod_optionStringExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_optionStringExpressionForGeneration.mSlotID,
                                          categoryMethod_optionStringExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_optionStringExpressionForGeneration_generateExpression (defineCategoryMethod_optionStringExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@optionCommentExpressionForGeneration generateExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_optionCommentExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
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

static void defineCategoryMethod_optionCommentExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_optionCommentExpressionForGeneration.mSlotID,
                                          categoryMethod_optionCommentExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_optionCommentExpressionForGeneration_generateExpression (defineCategoryMethod_optionCommentExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@orExpressionForGeneration generateExpression'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_orExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                         GALGAS_string & ioArgument_ioGeneratedCode,
                                                                         GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                         GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                         GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                         GALGAS_string & outArgument_outCppExpression,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_orExpressionForGeneration * object = (const cPtr_orExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_orExpressionForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 306)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 306)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 309)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 312)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand.add_operation (GALGAS_string (".operator_or ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 314)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 314)).add_operation (extensionGetter_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 315)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 315)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 315)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_orExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_orExpressionForGeneration.mSlotID,
                                          categoryMethod_orExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_orExpressionForGeneration_generateExpression (defineCategoryMethod_orExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@orShortExpressionForGeneration generateExpression'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_orShortExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                              GALGAS_string & ioArgument_ioGeneratedCode,
                                                                              GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                              GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                              GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                              GALGAS_string & outArgument_outCppExpression,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_orShortExpressionForGeneration * object = (const cPtr_orShortExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_orShortExpressionForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 326)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 326)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 328)) ;
  GALGAS_string var_testVar = GALGAS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 336)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 336)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 336)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation (GALGAS_string ("GALGAS_bool ").add_operation (var_testVar, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 337)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 337)).add_operation (var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 337)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 337)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 337)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation (GALGAS_string ("if (kBoolTrue != ").add_operation (var_testVar, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 338)).add_operation (GALGAS_string (".boolEnum ()) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 338)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 338)) ;
  {
  ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 340)) ;
  }
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 341)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation (var_testVar.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 348)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 348)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 348)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 348)) ;
  {
  ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 349)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation (GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 350)) ;
  outArgument_outCppExpression = var_testVar ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_orShortExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_orShortExpressionForGeneration.mSlotID,
                                          categoryMethod_orShortExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_orShortExpressionForGeneration_generateExpression (defineCategoryMethod_orShortExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@xorExpressionForGeneration generateExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_xorExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                          GALGAS_string & ioArgument_ioGeneratedCode,
                                                                          GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                          GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                          GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                          GALGAS_string & outArgument_outCppExpression,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_xorExpressionForGeneration * object = (const cPtr_xorExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_xorExpressionForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 363)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 363)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 365)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 373)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand.add_operation (GALGAS_string (".operator_xor ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 381)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 381)).add_operation (extensionGetter_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 382)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 382)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 382)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_xorExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_xorExpressionForGeneration.mSlotID,
                                          categoryMethod_xorExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_xorExpressionForGeneration_generateExpression (defineCategoryMethod_xorExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@closedSliceExpressionForGeneration generateExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_closedSliceExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                  GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                  GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                  GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                  GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                  GALGAS_string & outArgument_outCppExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_closedSliceExpressionForGeneration * object = (const cPtr_closedSliceExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_closedSliceExpressionForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 393)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 393)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 395)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 403)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_range (").add_operation (var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 412)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 412)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 412)).add_operation (GALGAS_string (".substract_operation ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 413)).add_operation (var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 413)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 413)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 413)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 413)).add_operation (extensionGetter_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 413)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 413)).add_operation (GALGAS_string (").add_operation (GALGAS_uint (1), "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 413)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 413)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 413)).add_operation (extensionGetter_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 413)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 413)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 413)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_closedSliceExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_closedSliceExpressionForGeneration.mSlotID,
                                          categoryMethod_closedSliceExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_closedSliceExpressionForGeneration_generateExpression (defineCategoryMethod_closedSliceExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@openedSliceExpressionForGeneration generateExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_openedSliceExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                  GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                  GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                  GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                  GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                  GALGAS_string & outArgument_outCppExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_openedSliceExpressionForGeneration * object = (const cPtr_openedSliceExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_openedSliceExpressionForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 424)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 424)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 426)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 434)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_range (").add_operation (var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 443)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 443)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 443)).add_operation (GALGAS_string (".substract_operation ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 444)).add_operation (var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 444)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 444)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 444)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 444)).add_operation (extensionGetter_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 444)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 444)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 444)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_openedSliceExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_openedSliceExpressionForGeneration.mSlotID,
                                          categoryMethod_openedSliceExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_openedSliceExpressionForGeneration_generateExpression (defineCategoryMethod_openedSliceExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@andExpressionForGeneration generateExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_andExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                          GALGAS_string & ioArgument_ioGeneratedCode,
                                                                          GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                          GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                          GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                          GALGAS_string & outArgument_outCppExpression,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_andExpressionForGeneration * object = (const cPtr_andExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_andExpressionForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 455)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 455)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 457)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 465)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand.add_operation (GALGAS_string (".operator_and ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 473)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 473)).add_operation (extensionGetter_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 474)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 474)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 474)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_andExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_andExpressionForGeneration.mSlotID,
                                          categoryMethod_andExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_andExpressionForGeneration_generateExpression (defineCategoryMethod_andExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@andShortExpressionForGeneration generateExpression'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_andShortExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                               GALGAS_string & ioArgument_ioGeneratedCode,
                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                               GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                               GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                               GALGAS_string & outArgument_outCppExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_andShortExpressionForGeneration * object = (const cPtr_andShortExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_andShortExpressionForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 485)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 485)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 487)) ;
  GALGAS_string var_testVar = GALGAS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 495)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 495)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 495)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation (GALGAS_string ("GALGAS_bool ").add_operation (var_testVar, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 496)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 496)).add_operation (var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 496)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 496)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 496)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation (GALGAS_string ("if (kBoolTrue == ").add_operation (var_testVar, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 497)).add_operation (GALGAS_string (".boolEnum ()) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 497)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 497)) ;
  {
  ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 499)) ;
  }
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 500)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation (var_testVar.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 507)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 507)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 507)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 507)) ;
  {
  ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 508)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation (GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 509)) ;
  outArgument_outCppExpression = var_testVar ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_andShortExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_andShortExpressionForGeneration.mSlotID,
                                          categoryMethod_andShortExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_andShortExpressionForGeneration_generateExpression (defineCategoryMethod_andShortExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@equalExpressionForGeneration generateExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_equalExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                            GALGAS_string & ioArgument_ioGeneratedCode,
                                                                            GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                            GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                            GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                            GALGAS_string & outArgument_outCppExpression,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_equalExpressionForGeneration * object = (const cPtr_equalExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_equalExpressionForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 521)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 521)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 524)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 527)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (kIsEqual, ").add_operation (var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 529)).add_operation (GALGAS_string (".objectCompare ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 529)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 529)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 529)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_equalExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_equalExpressionForGeneration.mSlotID,
                                          categoryMethod_equalExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_equalExpressionForGeneration_generateExpression (defineCategoryMethod_equalExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@notEqualExpressionForGeneration generateExpression'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_notEqualExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                               GALGAS_string & ioArgument_ioGeneratedCode,
                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                               GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                               GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                               GALGAS_string & outArgument_outCppExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_notEqualExpressionForGeneration * object = (const cPtr_notEqualExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_notEqualExpressionForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 540)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 540)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 543)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 546)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (kIsNotEqual, ").add_operation (var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 548)).add_operation (GALGAS_string (".objectCompare ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 548)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 548)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 548)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_notEqualExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_notEqualExpressionForGeneration.mSlotID,
                                          categoryMethod_notEqualExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_notEqualExpressionForGeneration_generateExpression (defineCategoryMethod_notEqualExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@lowerOrEqualExpressionForGeneration generateExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lowerOrEqualExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                   GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                   GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                   GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                   GALGAS_string & outArgument_outCppExpression,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lowerOrEqualExpressionForGeneration * object = (const cPtr_lowerOrEqualExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_lowerOrEqualExpressionForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 559)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 559)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 562)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 565)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (kIsInfOrEqual, ").add_operation (var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 567)).add_operation (GALGAS_string (".objectCompare ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 567)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 567)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 567)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lowerOrEqualExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_lowerOrEqualExpressionForGeneration.mSlotID,
                                          categoryMethod_lowerOrEqualExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lowerOrEqualExpressionForGeneration_generateExpression (defineCategoryMethod_lowerOrEqualExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@greaterOrEqualExpressionForGeneration generateExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_greaterOrEqualExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                     GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                     GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                     GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                     GALGAS_string & outArgument_outCppExpression,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_greaterOrEqualExpressionForGeneration * object = (const cPtr_greaterOrEqualExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_greaterOrEqualExpressionForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 578)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 578)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 581)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 584)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (kIsSupOrEqual, ").add_operation (var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 586)).add_operation (GALGAS_string (".objectCompare ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 586)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 586)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 586)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_greaterOrEqualExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_greaterOrEqualExpressionForGeneration.mSlotID,
                                          categoryMethod_greaterOrEqualExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_greaterOrEqualExpressionForGeneration_generateExpression (defineCategoryMethod_greaterOrEqualExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@strictGreaterExpressionForGeneration generateExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_strictGreaterExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                    GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                    GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                    GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                    GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                    GALGAS_string & outArgument_outCppExpression,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_strictGreaterExpressionForGeneration * object = (const cPtr_strictGreaterExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_strictGreaterExpressionForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 597)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 597)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 600)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 603)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (kIsStrictSup, ").add_operation (var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 605)).add_operation (GALGAS_string (".objectCompare ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 605)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 605)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 605)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_strictGreaterExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_strictGreaterExpressionForGeneration.mSlotID,
                                          categoryMethod_strictGreaterExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_strictGreaterExpressionForGeneration_generateExpression (defineCategoryMethod_strictGreaterExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@strictLowerExpressionForGeneration generateExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_strictLowerExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                  GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                  GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                  GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                  GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                  GALGAS_string & outArgument_outCppExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_strictLowerExpressionForGeneration * object = (const cPtr_strictLowerExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_strictLowerExpressionForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 616)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 616)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 619)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 622)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (kIsStrictInf, ").add_operation (var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 624)).add_operation (GALGAS_string (".objectCompare ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 624)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 624)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 624)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_strictLowerExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_strictLowerExpressionForGeneration.mSlotID,
                                          categoryMethod_strictLowerExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_strictLowerExpressionForGeneration_generateExpression (defineCategoryMethod_strictLowerExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@rightShiftExpressionForGeneration generateExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_rightShiftExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                 GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                 GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                 GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                 GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                 GALGAS_string & outArgument_outCppExpression,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_rightShiftExpressionForGeneration * object = (const cPtr_rightShiftExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_rightShiftExpressionForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 635)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 635)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 638)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 641)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand.add_operation (GALGAS_string (".right_shift_operation ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 643)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 643)).add_operation (extensionGetter_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 644)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 644)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 644)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_rightShiftExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_rightShiftExpressionForGeneration.mSlotID,
                                          categoryMethod_rightShiftExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_rightShiftExpressionForGeneration_generateExpression (defineCategoryMethod_rightShiftExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@leftShiftExpressionForGeneration generateExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_leftShiftExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                GALGAS_string & outArgument_outCppExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_leftShiftExpressionForGeneration * object = (const cPtr_leftShiftExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_leftShiftExpressionForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 655)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 655)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 658)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 661)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand.add_operation (GALGAS_string (".left_shift_operation ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 663)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 663)).add_operation (extensionGetter_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 664)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 664)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 664)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_leftShiftExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_leftShiftExpressionForGeneration.mSlotID,
                                          categoryMethod_leftShiftExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_leftShiftExpressionForGeneration_generateExpression (defineCategoryMethod_leftShiftExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@addExpressionForGeneration generateExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_addExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                          GALGAS_string & ioArgument_ioGeneratedCode,
                                                                          GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                          GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                          GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                          GALGAS_string & outArgument_outCppExpression,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_addExpressionForGeneration * object = (const cPtr_addExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_addExpressionForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 676)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 676)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 678)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 686)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand.add_operation (GALGAS_string (".add_operation ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 694)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 694)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 695)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 695)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 695)).add_operation (extensionGetter_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 695)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 695)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 695)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 696)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 696)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_addExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_addExpressionForGeneration.mSlotID,
                                          categoryMethod_addExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_addExpressionForGeneration_generateExpression (defineCategoryMethod_addExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@addExpressionNoOverflowForGeneration generateExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_addExpressionNoOverflowForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                    GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                    GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                    GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                    GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                    GALGAS_string & outArgument_outCppExpression,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_addExpressionNoOverflowForGeneration * object = (const cPtr_addExpressionNoOverflowForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_addExpressionNoOverflowForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 708)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 708)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 710)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 718)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand.add_operation (GALGAS_string (".add_operation_no_ovf ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 726)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 726)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 726)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_addExpressionNoOverflowForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_addExpressionNoOverflowForGeneration.mSlotID,
                                          categoryMethod_addExpressionNoOverflowForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_addExpressionNoOverflowForGeneration_generateExpression (defineCategoryMethod_addExpressionNoOverflowForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@subExpressionForGeneration generateExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_subExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                          GALGAS_string & ioArgument_ioGeneratedCode,
                                                                          GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                          GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                          GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                          GALGAS_string & outArgument_outCppExpression,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_subExpressionForGeneration * object = (const cPtr_subExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_subExpressionForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 737)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 737)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 740)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 743)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand.add_operation (GALGAS_string (".substract_operation ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 745)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 745)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 746)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 746)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 746)).add_operation (extensionGetter_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 746)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 746)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 746)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 747)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 747)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_subExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_subExpressionForGeneration.mSlotID,
                                          categoryMethod_subExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_subExpressionForGeneration_generateExpression (defineCategoryMethod_subExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@subExpressionNoOverflowForGeneration generateExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_subExpressionNoOverflowForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                    GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                    GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                    GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                    GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                    GALGAS_string & outArgument_outCppExpression,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_subExpressionNoOverflowForGeneration * object = (const cPtr_subExpressionNoOverflowForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_subExpressionNoOverflowForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 758)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 758)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 761)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 764)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand.add_operation (GALGAS_string (".substract_operation_no_ovf ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 766)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 766)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 766)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_subExpressionNoOverflowForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_subExpressionNoOverflowForGeneration.mSlotID,
                                          categoryMethod_subExpressionNoOverflowForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_subExpressionNoOverflowForGeneration_generateExpression (defineCategoryMethod_subExpressionNoOverflowForGeneration_generateExpression, NULL) ;

