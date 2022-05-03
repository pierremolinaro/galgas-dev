#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-29.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionValueExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

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
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_optionValueExpressionForGeneration temp_1 = object ;
    test_0 = temp_1.readProperty_mOptionComponentIsPredefined ().operator_not (SOURCE_FILE ("expression-option.galgas", 191)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_optionValueExpressionForGeneration temp_2 = object ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("option-").add_operation (temp_2.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-option.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 192))  COMMA_SOURCE_FILE ("expression-option.galgas", 192)) ;
    }
  }
  const GALGAS_optionValueExpressionForGeneration temp_3 = object ;
  const GALGAS_optionValueExpressionForGeneration temp_4 = object ;
  const GALGAS_optionValueExpressionForGeneration temp_5 = object ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_").add_operation (temp_3.readProperty_mResultType ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 194)).add_operation (GALGAS_string (" (gOption_"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 194)).add_operation (temp_4.readProperty_mOptionComponentName ().getter_identifierRepresentation (SOURCE_FILE ("expression-option.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 194)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 194)).add_operation (temp_5.readProperty_mOptionEntryName ().getter_identifierRepresentation (SOURCE_FILE ("expression-option.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 195)).add_operation (GALGAS_string (".readProperty_value ())"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 195)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_optionValueExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_optionValueExpressionForGeneration.mSlotID,
                                           extensionMethod_optionValueExpressionForGeneration_generateExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_optionValueExpressionForGeneration_generateExpression (defineExtensionMethod_optionValueExpressionForGeneration_generateExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionCharExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

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
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_optionCharExpressionForGeneration temp_1 = object ;
    test_0 = temp_1.readProperty_mOptionComponentIsPredefined ().operator_not (SOURCE_FILE ("expression-option.galgas", 214)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_optionCharExpressionForGeneration temp_2 = object ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("option-").add_operation (temp_2.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-option.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 215))  COMMA_SOURCE_FILE ("expression-option.galgas", 215)) ;
    }
  }
  const GALGAS_optionCharExpressionForGeneration temp_3 = object ;
  const GALGAS_optionCharExpressionForGeneration temp_4 = object ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_char (gOption_").add_operation (temp_3.readProperty_mOptionComponentName ().getter_identifierRepresentation (SOURCE_FILE ("expression-option.galgas", 217)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 217)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 217)).add_operation (temp_4.readProperty_mOptionEntryName ().getter_identifierRepresentation (SOURCE_FILE ("expression-option.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 218)).add_operation (GALGAS_string (".readProperty_char ())"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 218)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_optionCharExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_optionCharExpressionForGeneration.mSlotID,
                                           extensionMethod_optionCharExpressionForGeneration_generateExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_optionCharExpressionForGeneration_generateExpression (defineExtensionMethod_optionCharExpressionForGeneration_generateExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionStringExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

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
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_optionStringExpressionForGeneration temp_1 = object ;
    test_0 = temp_1.readProperty_mOptionComponentIsPredefined ().operator_not (SOURCE_FILE ("expression-option.galgas", 237)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_optionStringExpressionForGeneration temp_2 = object ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("option-").add_operation (temp_2.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-option.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 238))  COMMA_SOURCE_FILE ("expression-option.galgas", 238)) ;
    }
  }
  const GALGAS_optionStringExpressionForGeneration temp_3 = object ;
  const GALGAS_optionStringExpressionForGeneration temp_4 = object ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_string (gOption_").add_operation (temp_3.readProperty_mOptionComponentName ().getter_identifierRepresentation (SOURCE_FILE ("expression-option.galgas", 240)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 240)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 240)).add_operation (temp_4.readProperty_mOptionEntryName ().getter_identifierRepresentation (SOURCE_FILE ("expression-option.galgas", 241)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 241)).add_operation (GALGAS_string (".readProperty_string ())"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 241)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_optionStringExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_optionStringExpressionForGeneration.mSlotID,
                                           extensionMethod_optionStringExpressionForGeneration_generateExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_optionStringExpressionForGeneration_generateExpression (defineExtensionMethod_optionStringExpressionForGeneration_generateExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionCommentExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

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
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_optionCommentExpressionForGeneration temp_1 = object ;
    test_0 = temp_1.readProperty_mOptionComponentIsPredefined ().operator_not (SOURCE_FILE ("expression-option.galgas", 252)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_optionCommentExpressionForGeneration temp_2 = object ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("option-").add_operation (temp_2.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-option.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 253))  COMMA_SOURCE_FILE ("expression-option.galgas", 253)) ;
    }
  }
  const GALGAS_optionCommentExpressionForGeneration temp_3 = object ;
  const GALGAS_optionCommentExpressionForGeneration temp_4 = object ;
  outArgument_outCppExpression = GALGAS_string ("gOption_").add_operation (temp_3.readProperty_mOptionComponentName ().getter_identifierRepresentation (SOURCE_FILE ("expression-option.galgas", 255)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 255)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 255)).add_operation (temp_4.readProperty_mOptionEntryName ().getter_identifierRepresentation (SOURCE_FILE ("expression-option.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 256)).add_operation (GALGAS_string (".readProperty_comment ()"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 256)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_optionCommentExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_optionCommentExpressionForGeneration.mSlotID,
                                           extensionMethod_optionCommentExpressionForGeneration_generateExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_optionCommentExpressionForGeneration_generateExpression (defineExtensionMethod_optionCommentExpressionForGeneration_generateExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexiqueIntrospectionExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexiqueIntrospectionExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                                GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexiqueIntrospectionExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_lexiqueIntrospectionExpressionAST.mSlotID,
                                                         extensionMethod_lexiqueIntrospectionExpressionAST_enterExpressionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexiqueIntrospectionExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_lexiqueIntrospectionExpressionAST_enterExpressionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexiqueIntrospectionExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexiqueIntrospectionExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                         const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                         GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                         const GALGAS_unifiedTypeMap_2D_entry /* constinArgument_inType */,
                                                                                         const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                         GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                                         GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexiqueIntrospectionExpressionAST * object = (const cPtr_lexiqueIntrospectionExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexiqueIntrospectionExpressionAST) ;
  const GALGAS_lexiqueIntrospectionExpressionAST temp_0 = object ;
  GALGAS_lstring var_usefulnessName_2763 = function_lexiqueNameForUsefulEntitiesGraph (temp_0.readProperty_mLexiqueComponentName (), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 71)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_2763 COMMA_SOURCE_FILE ("expression-lexique.galgas", 72)) ;
  }
  const GALGAS_lexiqueIntrospectionExpressionAST temp_1 = object ;
  GALGAS_terminalMap joker_3069_3 ; // Joker input parameter
  GALGAS_indexingListAST joker_3069_2 ; // Joker input parameter
  GALGAS_lstring joker_3069_1 ; // Joker input parameter
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mLexiqueComponentMapForSemanticAnalysis ().method_searchKey (temp_1.readProperty_mLexiqueComponentName (), joker_3069_3, joker_3069_2, joker_3069_1, inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 74)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_lexiqueIntrospectionExpressionAST temp_3 = object ;
    test_2 = GALGAS_bool (kIsNotEqual, temp_3.readProperty_mLexiqueGetterName ().readProperty_string ().objectCompare (GALGAS_string ("symbols"))).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_lexiqueIntrospectionExpressionAST temp_4 = object ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mLexiqueGetterName ().readProperty_location (), GALGAS_string ("unknown getter"), fixItArray5  COMMA_SOURCE_FILE ("expression-lexique.galgas", 80)) ;
    }
  }
  const GALGAS_lexiqueIntrospectionExpressionAST temp_6 = object ;
  const GALGAS_lexiqueIntrospectionExpressionAST temp_7 = object ;
  const GALGAS_lexiqueIntrospectionExpressionAST temp_8 = object ;
  outArgument_outExpression = GALGAS_lexiqueIntrospectionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), GALGAS_string ("stringlist").getter_nowhere (SOURCE_FILE ("expression-lexique.galgas", 84)), inCompiler  COMMA_SOURCE_FILE ("expression-lexique.galgas", 84)), temp_6.readProperty_mLexiqueComponentName ().readProperty_location (), temp_7.readProperty_mLexiqueComponentName ().readProperty_string (), temp_8.readProperty_mLexiqueGetterName ().readProperty_string ()  COMMA_SOURCE_FILE ("expression-lexique.galgas", 83)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexiqueIntrospectionExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_lexiqueIntrospectionExpressionAST.mSlotID,
                                                  extensionMethod_lexiqueIntrospectionExpressionAST_analyzeSemanticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexiqueIntrospectionExpressionAST_analyzeSemanticExpression (defineExtensionMethod_lexiqueIntrospectionExpressionAST_analyzeSemanticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexiqueIntrospectionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexiqueIntrospectionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                  GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                  GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                  GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                  GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                  GALGAS_string & outArgument_outCppExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexiqueIntrospectionForGeneration * object = (const cPtr_lexiqueIntrospectionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_lexiqueIntrospectionForGeneration) ;
  const GALGAS_lexiqueIntrospectionForGeneration temp_0 = object ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("lexique-").add_operation (temp_0.readProperty_mLexiqueComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-lexique.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 108))  COMMA_SOURCE_FILE ("expression-lexique.galgas", 108)) ;
  const GALGAS_lexiqueIntrospectionForGeneration temp_1 = object ;
  const GALGAS_lexiqueIntrospectionForGeneration temp_2 = object ;
  const GALGAS_lexiqueIntrospectionForGeneration temp_3 = object ;
  outArgument_outCppExpression = GALGAS_string ("C_Lexique_").add_operation (temp_1.readProperty_mLexiqueComponentName ().getter_identifierRepresentation (SOURCE_FILE ("expression-lexique.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 109)).add_operation (GALGAS_string ("::"), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 109)).add_operation (temp_2.readProperty_mLexiqueGetterName ().getter_identifierRepresentation (SOURCE_FILE ("expression-lexique.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 109)).add_operation (GALGAS_string ("("), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 110)).add_operation (extensionGetter_sourceFile (temp_3.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 111)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 111)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexiqueIntrospectionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_lexiqueIntrospectionForGeneration.mSlotID,
                                           extensionMethod_lexiqueIntrospectionForGeneration_generateExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexiqueIntrospectionForGeneration_generateExpression (defineExtensionMethod_lexiqueIntrospectionForGeneration_generateExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperObjectInstanciationInExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_filewrapperObjectInstanciationInExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                                            GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                            C_Compiler * /* inCompiler */
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_filewrapperObjectInstanciationInExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_filewrapperObjectInstanciationInExpressionAST.mSlotID,
                                                         extensionMethod_filewrapperObjectInstanciationInExpressionAST_enterExpressionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_filewrapperObjectInstanciationInExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_filewrapperObjectInstanciationInExpressionAST_enterExpressionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperObjectInstanciationInExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_filewrapperObjectInstanciationInExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                                     const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                                     const GALGAS_unifiedTypeMap_2D_entry /* constinArgument_inType */,
                                                                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                     GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                                                     GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperObjectInstanciationInExpressionAST * object = (const cPtr_filewrapperObjectInstanciationInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperObjectInstanciationInExpressionAST) ;
  const GALGAS_filewrapperObjectInstanciationInExpressionAST temp_0 = object ;
  GALGAS_lstring var_usefulnessName_4456 = function_filewrapperNameForUsefulEntitiesGraph (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 123)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_4456 COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 124)) ;
  }
  GALGAS_lstring var_filewrapperPath_4780 ;
  GALGAS_bool var_isInternal_4814 ;
  const GALGAS_filewrapperObjectInstanciationInExpressionAST temp_1 = object ;
  GALGAS_lstringlist joker_4786_4 ; // Joker input parameter
  GALGAS_wrapperFileMap joker_4786_3 ; // Joker input parameter
  GALGAS_wrapperDirectoryMap joker_4786_2 ; // Joker input parameter
  GALGAS_filewrapperTemplateMap joker_4786_1 ; // Joker input parameter
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mFilewrapperMap ().method_searchKey (temp_1.readProperty_mFilewrapperName (), var_filewrapperPath_4780, joker_4786_4, joker_4786_3, joker_4786_2, joker_4786_1, var_isInternal_4814, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 126)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_isInternal_4814.boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_filewrapperObjectInstanciationInExpressionAST temp_3 = object ;
      GALGAS_location var_filewrapperDeclarationLocation_4898 = constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mFilewrapperMap ().getter_locationForKey (temp_3.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 134)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        const GALGAS_filewrapperObjectInstanciationInExpressionAST temp_5 = object ;
        test_4 = GALGAS_bool (kIsNotEqual, temp_5.readProperty_mFilewrapperName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 135)).objectCompare (var_filewrapperDeclarationLocation_4898.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 135)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_filewrapperObjectInstanciationInExpressionAST temp_6 = object ;
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mFilewrapperName ().readProperty_location (), GALGAS_string ("this filewrapper is internal to '").add_operation (var_filewrapperDeclarationLocation_4898.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 136)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 136)), fixItArray7  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 136)) ;
        }
      }
    }
  }
  const GALGAS_filewrapperObjectInstanciationInExpressionAST temp_8 = object ;
  const GALGAS_filewrapperObjectInstanciationInExpressionAST temp_9 = object ;
  const GALGAS_filewrapperObjectInstanciationInExpressionAST temp_10 = object ;
  outArgument_outExpression = GALGAS_filewrapperInExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), GALGAS_lstring::constructor_new (GALGAS_string ("filewrapper"), temp_8.readProperty_mFilewrapperName ().readProperty_location ()  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 141)), inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 141)), temp_9.readProperty_mFilewrapperName ().readProperty_location (), temp_10.readProperty_mFilewrapperName ().readProperty_string (), var_filewrapperPath_4780.readProperty_string ()  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 140)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_filewrapperObjectInstanciationInExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_filewrapperObjectInstanciationInExpressionAST.mSlotID,
                                                  extensionMethod_filewrapperObjectInstanciationInExpressionAST_analyzeSemanticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_filewrapperObjectInstanciationInExpressionAST_analyzeSemanticExpression (defineExtensionMethod_filewrapperObjectInstanciationInExpressionAST_analyzeSemanticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperTemplateInExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_filewrapperTemplateInExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                                 GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperTemplateInExpressionAST * object = (const cPtr_filewrapperTemplateInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperTemplateInExpressionAST) ;
  const GALGAS_filewrapperTemplateInExpressionAST temp_0 = object ;
  cEnumerator_actualOutputExpressionList enumerator_5805 (temp_0.readProperty_mExpressions (), kENUMERATION_UP) ;
  while (enumerator_5805.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) enumerator_5805.current_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 153)) ;
    enumerator_5805.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_filewrapperTemplateInExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_filewrapperTemplateInExpressionAST.mSlotID,
                                                         extensionMethod_filewrapperTemplateInExpressionAST_enterExpressionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_filewrapperTemplateInExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_filewrapperTemplateInExpressionAST_enterExpressionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperTemplateInExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_filewrapperTemplateInExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                          const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                          GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                          const GALGAS_unifiedTypeMap_2D_entry /* constinArgument_inType */,
                                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                          GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                          GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperTemplateInExpressionAST * object = (const cPtr_filewrapperTemplateInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperTemplateInExpressionAST) ;
  const GALGAS_filewrapperTemplateInExpressionAST temp_0 = object ;
  const GALGAS_filewrapperTemplateInExpressionAST temp_1 = object ;
  GALGAS_lstring var_usefulnessName_6400 = function_filewrapperTemplateNameForUsefulEntitiesGraph (temp_0.readProperty_mFilewrapperName (), temp_1.readProperty_mFilewrapperTemplateName (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 167)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_6400 COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 168)) ;
  }
  GALGAS_filewrapperTemplateMap var_filewrapperTemplateMap_6749 ;
  GALGAS_bool var_isInternal_6776 ;
  const GALGAS_filewrapperTemplateInExpressionAST temp_2 = object ;
  GALGAS_lstring joker_6690_4 ; // Joker input parameter
  GALGAS_lstringlist joker_6690_3 ; // Joker input parameter
  GALGAS_wrapperFileMap joker_6690_2 ; // Joker input parameter
  GALGAS_wrapperDirectoryMap joker_6690_1 ; // Joker input parameter
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mFilewrapperMap ().method_searchKey (temp_2.readProperty_mFilewrapperName (), joker_6690_4, joker_6690_3, joker_6690_2, joker_6690_1, var_filewrapperTemplateMap_6749, var_isInternal_6776, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 170)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_isInternal_6776.boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_filewrapperTemplateInExpressionAST temp_4 = object ;
      GALGAS_location var_filewrapperDeclarationLocation_6861 = constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mFilewrapperMap ().getter_locationForKey (temp_4.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 178)) ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        const GALGAS_filewrapperTemplateInExpressionAST temp_6 = object ;
        test_5 = GALGAS_bool (kIsNotEqual, temp_6.readProperty_mFilewrapperName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 179)).objectCompare (var_filewrapperDeclarationLocation_6861.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 179)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_filewrapperTemplateInExpressionAST temp_7 = object ;
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (temp_7.readProperty_mFilewrapperName ().readProperty_location (), GALGAS_string ("this filewrapper is internal to '").add_operation (var_filewrapperDeclarationLocation_6861.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 180)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 180)), fixItArray8  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 180)) ;
        }
      }
    }
  }
  GALGAS_functionSignature var_templateSignature_7303 ;
  const GALGAS_filewrapperTemplateInExpressionAST temp_9 = object ;
  GALGAS_lstring joker_7305 ; // Joker input parameter
  var_filewrapperTemplateMap_6749.method_searchKey (temp_9.readProperty_mFilewrapperTemplateName (), var_templateSignature_7303, joker_7305, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 184)) ;
  GALGAS_semanticExpressionListForGeneration var_effectiveParameterList_7397 ;
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    const GALGAS_filewrapperTemplateInExpressionAST temp_11 = object ;
    test_10 = GALGAS_bool (kIsNotEqual, temp_11.readProperty_mExpressions ().getter_length (SOURCE_FILE ("expression-filewrapper.galgas", 187)).objectCompare (var_templateSignature_7303.getter_length (SOURCE_FILE ("expression-filewrapper.galgas", 187)))).boolEnum () ;
    if (kBoolTrue == test_10) {
      const GALGAS_filewrapperTemplateInExpressionAST temp_12 = object ;
      const GALGAS_filewrapperTemplateInExpressionAST temp_13 = object ;
      const GALGAS_filewrapperTemplateInExpressionAST temp_14 = object ;
      const GALGAS_filewrapperTemplateInExpressionAST temp_15 = object ;
      TC_Array <C_FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mFilewrapperTemplateName ().readProperty_location (), GALGAS_string ("calling the '").add_operation (temp_13.readProperty_mFilewrapperTemplateName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 189)).add_operation (GALGAS_string ("' template of '"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 189)).add_operation (temp_14.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 189)).add_operation (GALGAS_string ("' filewrapper requires "), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 189)).add_operation (var_templateSignature_7303.getter_length (SOURCE_FILE ("expression-filewrapper.galgas", 190)).getter_string (SOURCE_FILE ("expression-filewrapper.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 189)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 190)).add_operation (temp_15.readProperty_mExpressions ().getter_length (SOURCE_FILE ("expression-filewrapper.galgas", 191)).getter_string (SOURCE_FILE ("expression-filewrapper.galgas", 191)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 190)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 191)), fixItArray16  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 188)) ;
      var_effectiveParameterList_7397.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_10) {
    var_effectiveParameterList_7397 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("expression-filewrapper.galgas", 194)) ;
    const GALGAS_filewrapperTemplateInExpressionAST temp_17 = object ;
    cEnumerator_actualOutputExpressionList enumerator_7903 (temp_17.readProperty_mExpressions (), kENUMERATION_UP) ;
    cEnumerator_functionSignature enumerator_7965 (var_templateSignature_7303, kENUMERATION_UP) ;
    while (enumerator_7903.hasCurrentObject () && enumerator_7965.hasCurrentObject ()) {
      enumGalgasBool test_18 = kBoolTrue ;
      if (kBoolTrue == test_18) {
        test_18 = GALGAS_bool (kIsNotEqual, enumerator_7965.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_7903.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_18) {
          GALGAS_string temp_19 ;
          const enumGalgasBool test_20 = GALGAS_bool (kIsNotEqual, enumerator_7965.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_20) {
            temp_19 = enumerator_7965.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 197)) ;
          }else if (kBoolFalse == test_20) {
            temp_19 = GALGAS_string::makeEmptyString () ;
          }
          GALGAS_string var_s_8067 = GALGAS_string ("!").add_operation (temp_19, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 197)) ;
          TC_Array <C_FixItDescription> fixItArray21 ;
          appendFixItActions (fixItArray21, kFixItReplace, var_s_8067) ;
          inCompiler->emitSemanticError (enumerator_7903.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_8067, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 198)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 198)), fixItArray21  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 198)) ;
        }
      }
      GALGAS_semanticExpressionForGeneration var_exp_8649 ;
      callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_7903.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_7965.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_exp_8649, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 201)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_7965.current_mFormalArgumentType (HERE), var_exp_8649.readProperty_mResultType (), enumerator_7903.current_mEndOfExpressionLocation (HERE), var_exp_8649, inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 209)) ;
      }
      var_effectiveParameterList_7397.addAssign_operation (var_exp_8649  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 210)) ;
      enumerator_7903.gotoNextObject () ;
      enumerator_7965.gotoNextObject () ;
    }
  }
  const GALGAS_filewrapperTemplateInExpressionAST temp_22 = object ;
  const GALGAS_filewrapperTemplateInExpressionAST temp_23 = object ;
  const GALGAS_filewrapperTemplateInExpressionAST temp_24 = object ;
  outArgument_outExpression = GALGAS_filewrapperTemplateInExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType (), temp_22.readProperty_mFilewrapperName ().readProperty_location (), temp_23.readProperty_mFilewrapperName ().readProperty_string (), temp_24.readProperty_mFilewrapperTemplateName ().readProperty_string (), var_effectiveParameterList_7397  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 214)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_filewrapperTemplateInExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_filewrapperTemplateInExpressionAST.mSlotID,
                                                  extensionMethod_filewrapperTemplateInExpressionAST_analyzeSemanticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_filewrapperTemplateInExpressionAST_analyzeSemanticExpression (defineExtensionMethod_filewrapperTemplateInExpressionAST_analyzeSemanticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperInExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_filewrapperInExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                         GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_filewrapperInExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_filewrapperInExpressionAST.mSlotID,
                                                         extensionMethod_filewrapperInExpressionAST_enterExpressionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_filewrapperInExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_filewrapperInExpressionAST_enterExpressionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperInExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_filewrapperInExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                  const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                  const GALGAS_unifiedTypeMap_2D_entry /* constinArgument_inType */,
                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                  GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                                  GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperInExpressionAST * object = (const cPtr_filewrapperInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperInExpressionAST) ;
  const GALGAS_filewrapperInExpressionAST temp_0 = object ;
  GALGAS_lstring var_usefulnessName_9837 = function_filewrapperNameForUsefulEntitiesGraph (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 239)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_9837 COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 240)) ;
  }
  GALGAS_stringlist var_directoryList_10044 ;
  GALGAS_string var_fileName_10067 ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_filewrapperInExpressionAST temp_2 = object ;
    test_1 = GALGAS_bool (kIsEqual, temp_2.readProperty_mFilewrapperPath ().readProperty_string ().getter_length (SOURCE_FILE ("expression-filewrapper.galgas", 244)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_filewrapperInExpressionAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mFilewrapperPath ().readProperty_location (), GALGAS_string ("path is empty"), fixItArray4  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 245)) ;
      var_directoryList_10044.drop () ; // Release error dropped variable
      var_fileName_10067.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      const GALGAS_filewrapperInExpressionAST temp_6 = object ;
      test_5 = GALGAS_bool (kIsEqual, temp_6.readProperty_mFilewrapperPath ().readProperty_string ().getter_firstCharacterOrNul (SOURCE_FILE ("expression-filewrapper.galgas", 246)).objectCompare (GALGAS_char (TO_UNICODE (47)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_filewrapperInExpressionAST temp_7 = object ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mFilewrapperPath ().readProperty_location (), GALGAS_string ("the path should not begin with '/'"), fixItArray8  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 247)) ;
        var_directoryList_10044.drop () ; // Release error dropped variable
        var_fileName_10067.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_5) {
      const GALGAS_filewrapperInExpressionAST temp_9 = object ;
      var_directoryList_10044 = temp_9.readProperty_mFilewrapperPath ().readProperty_string ().getter_componentsSeparatedByString (GALGAS_string ("/") COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 249)) ;
      {
      var_directoryList_10044.setter_popLast (var_fileName_10067, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 250)) ;
      }
    }
  }
  GALGAS_wrapperFileMap var_filewrapperFileMap_10659 ;
  GALGAS_wrapperDirectoryMap var_filewrapperDirectoryMap_10713 ;
  GALGAS_bool var_isInternal_10746 ;
  const GALGAS_filewrapperInExpressionAST temp_10 = object ;
  GALGAS_lstring joker_10607 ; // Joker input parameter
  GALGAS_lstringlist joker_10614 ; // Joker input parameter
  GALGAS_filewrapperTemplateMap joker_10719 ; // Joker input parameter
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mFilewrapperMap ().method_searchKey (temp_10.readProperty_mFilewrapperName (), joker_10607, joker_10614, var_filewrapperFileMap_10659, var_filewrapperDirectoryMap_10713, joker_10719, var_isInternal_10746, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 253)) ;
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = var_isInternal_10746.boolEnum () ;
    if (kBoolTrue == test_11) {
      const GALGAS_filewrapperInExpressionAST temp_12 = object ;
      GALGAS_location var_filewrapperDeclarationLocation_10830 = constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mFilewrapperMap ().getter_locationForKey (temp_12.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 264)) ;
      enumGalgasBool test_13 = kBoolTrue ;
      if (kBoolTrue == test_13) {
        const GALGAS_filewrapperInExpressionAST temp_14 = object ;
        test_13 = GALGAS_bool (kIsNotEqual, temp_14.readProperty_mFilewrapperName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 265)).objectCompare (var_filewrapperDeclarationLocation_10830.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 265)))).boolEnum () ;
        if (kBoolTrue == test_13) {
          const GALGAS_filewrapperInExpressionAST temp_15 = object ;
          TC_Array <C_FixItDescription> fixItArray16 ;
          inCompiler->emitSemanticError (temp_15.readProperty_mFilewrapperName ().readProperty_location (), GALGAS_string ("this filewrapper is internal to '").add_operation (var_filewrapperDeclarationLocation_10830.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 266)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 266)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 266)), fixItArray16  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 266)) ;
        }
      }
    }
  }
  GALGAS_string var_builtPath_11203 = GALGAS_string::makeEmptyString () ;
  if (var_filewrapperDirectoryMap_10713.getter_count (SOURCE_FILE ("expression-filewrapper.galgas", 271)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 271)).isValid ()) {
    uint32_t variant_11215 = var_filewrapperDirectoryMap_10713.getter_count (SOURCE_FILE ("expression-filewrapper.galgas", 271)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 271)).uintValue () ;
    bool loop_11215 = true ;
    while (loop_11215) {
      loop_11215 = GALGAS_bool (kIsStrictSup, var_directoryList_10044.getter_length (SOURCE_FILE ("expression-filewrapper.galgas", 272)).objectCompare (GALGAS_uint ((uint32_t) 0U))).isValid () ;
      if (loop_11215) {
        loop_11215 = GALGAS_bool (kIsStrictSup, var_directoryList_10044.getter_length (SOURCE_FILE ("expression-filewrapper.galgas", 272)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolValue () ;
      }
      if (loop_11215 && (0 == variant_11215)) {
        loop_11215 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("expression-filewrapper.galgas", 271)) ;
      }
      if (loop_11215) {
        variant_11215 -- ;
        GALGAS_string var_directoryName_11321 ;
        {
        var_directoryList_10044.setter_popFirst (var_directoryName_11321, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 274)) ;
        }
        var_builtPath_11203.plusAssign_operation(var_directoryName_11321.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 275)), inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 275)) ;
        enumGalgasBool test_17 = kBoolTrue ;
        if (kBoolTrue == test_17) {
          test_17 = var_filewrapperDirectoryMap_10713.getter_hasKey (var_directoryName_11321 COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 276)).boolEnum () ;
          if (kBoolTrue == test_17) {
            GALGAS_uint joker_11631 ; // Joker input parameter
            var_filewrapperDirectoryMap_10713.method_searchKey (GALGAS_lstring::constructor_new (var_directoryName_11321, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 278))  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 278)), var_filewrapperFileMap_10659, var_filewrapperDirectoryMap_10713, joker_11631, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 277)) ;
          }
        }
        if (kBoolFalse == test_17) {
          const GALGAS_filewrapperInExpressionAST temp_18 = object ;
          const GALGAS_filewrapperInExpressionAST temp_19 = object ;
          TC_Array <C_FixItDescription> fixItArray20 ;
          inCompiler->emitSemanticError (temp_18.readProperty_mFilewrapperPath ().readProperty_location (), GALGAS_string ("the '").add_operation (var_builtPath_11203, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 284)).add_operation (GALGAS_string ("' path does not exists for the '"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 284)).add_operation (temp_19.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 284)).add_operation (GALGAS_string ("' filewrapper"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 284)), fixItArray20  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 284)) ;
          var_filewrapperFileMap_10659.drop () ; // Release error dropped variable
          var_directoryList_10044 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("expression-filewrapper.galgas", 285)) ;
        }
      }
    }
  }
  GALGAS_uint var_fileIndex_11898 ;
  GALGAS_bool var_isTextFile_11921 ;
  enumGalgasBool test_21 = kBoolTrue ;
  if (kBoolTrue == test_21) {
    test_21 = var_filewrapperFileMap_10659.getter_hasKey (var_fileName_10067 COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 290)).boolEnum () ;
    if (kBoolTrue == test_21) {
      GALGAS_string joker_12047 ; // Joker input parameter
      GALGAS_uint joker_12062 ; // Joker input parameter
      var_filewrapperFileMap_10659.method_searchKey (GALGAS_lstring::constructor_new (var_fileName_10067, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 291))  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 291)), joker_12047, var_isTextFile_11921, joker_12062, var_fileIndex_11898, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 291)) ;
    }
  }
  if (kBoolFalse == test_21) {
    const GALGAS_filewrapperInExpressionAST temp_22 = object ;
    const GALGAS_filewrapperInExpressionAST temp_23 = object ;
    TC_Array <C_FixItDescription> fixItArray24 ;
    inCompiler->emitSemanticError (temp_22.readProperty_mFilewrapperPath ().readProperty_location (), GALGAS_string ("the '").add_operation (var_fileName_10067, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 294)).add_operation (GALGAS_string ("' file does not exist in the '"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 294)).add_operation (var_builtPath_11203, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 294)).add_operation (GALGAS_string ("' directory of '"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 294)).add_operation (temp_23.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 294)).add_operation (GALGAS_string ("' filewrapper"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 294)), fixItArray24  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 293)) ;
    var_fileIndex_11898.drop () ; // Release error dropped variable
    var_isTextFile_11921.drop () ; // Release error dropped variable
  }
  GALGAS_unifiedTypeMap_2D_entry temp_25 ;
  const enumGalgasBool test_26 = var_isTextFile_11921.boolEnum () ;
  if (kBoolTrue == test_26) {
    temp_25 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType () ;
  }else if (kBoolFalse == test_26) {
    temp_25 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), GALGAS_lstring::constructor_new (GALGAS_string ("data"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 301))  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 301)), inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 301)) ;
  }
  const GALGAS_filewrapperInExpressionAST temp_27 = object ;
  const GALGAS_filewrapperInExpressionAST temp_28 = object ;
  outArgument_outExpression = GALGAS_filewrapperStaticPathInExpressionForGeneration::constructor_new (temp_25, temp_27.readProperty_mFilewrapperName ().readProperty_location (), temp_28.readProperty_mFilewrapperName ().readProperty_string (), var_fileIndex_11898, var_isTextFile_11921  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 298)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_filewrapperInExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_filewrapperInExpressionAST.mSlotID,
                                                  extensionMethod_filewrapperInExpressionAST_analyzeSemanticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_filewrapperInExpressionAST_analyzeSemanticExpression (defineExtensionMethod_filewrapperInExpressionAST_analyzeSemanticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperInExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_filewrapperInExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                     GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                     GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                     GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                     GALGAS_string & outArgument_outCppExpression,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperInExpressionForGeneration * object = (const cPtr_filewrapperInExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperInExpressionForGeneration) ;
  const GALGAS_filewrapperInExpressionForGeneration temp_0 = object ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("filewrapper-").add_operation (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 326))  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 326)) ;
  const GALGAS_filewrapperInExpressionForGeneration temp_1 = object ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_filewrapper (gWrapperDirectory_0_").add_operation (temp_1.readProperty_mFilewrapperName ().getter_identifierRepresentation (SOURCE_FILE ("expression-filewrapper.galgas", 327)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 327)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 327)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_filewrapperInExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_filewrapperInExpressionForGeneration.mSlotID,
                                           extensionMethod_filewrapperInExpressionForGeneration_generateExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_filewrapperInExpressionForGeneration_generateExpression (defineExtensionMethod_filewrapperInExpressionForGeneration_generateExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperTemplateInExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_filewrapperTemplateInExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                             GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                             GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                             GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                             GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                             GALGAS_string & outArgument_outCppExpression,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperTemplateInExpressionForGeneration * object = (const cPtr_filewrapperTemplateInExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperTemplateInExpressionForGeneration) ;
  const GALGAS_filewrapperTemplateInExpressionForGeneration temp_0 = object ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("filewrapper-").add_operation (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 347))  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 347)) ;
  GALGAS_stringlist var_parameterList_14499 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("expression-filewrapper.galgas", 348)) ;
  const GALGAS_filewrapperTemplateInExpressionForGeneration temp_1 = object ;
  cEnumerator_semanticExpressionListForGeneration enumerator_14534 (temp_1.readProperty_mActualOutputParameterList (), kENUMERATION_UP) ;
  while (enumerator_14534.hasCurrentObject ()) {
    GALGAS_string var_parameter_14599 ;
    callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_14534.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_14599, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 351)) ;
    var_parameterList_14499.addAssign_operation (var_parameter_14599  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 358)) ;
    enumerator_14534.gotoNextObject () ;
  }
  const GALGAS_filewrapperTemplateInExpressionForGeneration temp_2 = object ;
  const GALGAS_filewrapperTemplateInExpressionForGeneration temp_3 = object ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_string (filewrapperTemplate_").add_operation (temp_2.readProperty_mFilewrapperName ().getter_identifierRepresentation (SOURCE_FILE ("expression-filewrapper.galgas", 360)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 360)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 360)).add_operation (temp_3.readProperty_mFilewrapperTemplateName ().getter_identifierRepresentation (SOURCE_FILE ("expression-filewrapper.galgas", 360)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 360)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 360)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 361)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 361)) ;
  cEnumerator_stringlist enumerator_15048 (var_parameterList_14499, kENUMERATION_UP) ;
  while (enumerator_15048.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssign_operation(GALGAS_string (", ").add_operation (enumerator_15048.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 363)), inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 363)) ;
    enumerator_15048.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 365)) COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 365)) ;
  }
  const GALGAS_filewrapperTemplateInExpressionForGeneration temp_4 = object ;
  outArgument_outCppExpression.plusAssign_operation(extensionGetter_commaSourceFile (temp_4.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 366)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 366)), inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 366)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_filewrapperTemplateInExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_filewrapperTemplateInExpressionForGeneration.mSlotID,
                                           extensionMethod_filewrapperTemplateInExpressionForGeneration_generateExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_filewrapperTemplateInExpressionForGeneration_generateExpression (defineExtensionMethod_filewrapperTemplateInExpressionForGeneration_generateExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperStaticPathInExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_filewrapperStaticPathInExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                               GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                               GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                               GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                               GALGAS_string & outArgument_outCppExpression,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperStaticPathInExpressionForGeneration * object = (const cPtr_filewrapperStaticPathInExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperStaticPathInExpressionForGeneration) ;
  const GALGAS_filewrapperStaticPathInExpressionForGeneration temp_0 = object ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("filewrapper-").add_operation (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 386))  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 386)) ;
  const GALGAS_filewrapperStaticPathInExpressionForGeneration temp_1 = object ;
  GALGAS_string temp_2 ;
  const enumGalgasBool test_3 = temp_1.readProperty_mIsTextFile ().boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GALGAS_string ("GALGAS_string") ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_string ("GALGAS_data") ;
  }
  outArgument_outCppExpression = temp_2 ;
  const GALGAS_filewrapperStaticPathInExpressionForGeneration temp_4 = object ;
  const GALGAS_filewrapperStaticPathInExpressionForGeneration temp_5 = object ;
  outArgument_outCppExpression.plusAssign_operation(GALGAS_string (" (gWrapperFileContent_").add_operation (temp_4.readProperty_mFilewrapperFileIndex ().getter_string (SOURCE_FILE ("expression-filewrapper.galgas", 388)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 388)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 388)).add_operation (temp_5.readProperty_mFilewrapperName ().getter_identifierRepresentation (SOURCE_FILE ("expression-filewrapper.galgas", 388)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 388)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 388)), inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 388)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_filewrapperStaticPathInExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_filewrapperStaticPathInExpressionForGeneration.mSlotID,
                                           extensionMethod_filewrapperStaticPathInExpressionForGeneration_generateExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_filewrapperStaticPathInExpressionForGeneration_generateExpression (defineExtensionMethod_filewrapperStaticPathInExpressionForGeneration_generateExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@getterCallExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_getterCallExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_getterCallExpressionAST * object = (const cPtr_getterCallExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_getterCallExpressionAST) ;
  const GALGAS_getterCallExpressionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiver ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 82)) ;
  const GALGAS_getterCallExpressionAST temp_1 = object ;
  extensionMethod_enterInSemanticContext (temp_1.readProperty_mExpressions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 83)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_getterCallExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_getterCallExpressionAST.mSlotID,
                                                         extensionMethod_getterCallExpressionAST_enterExpressionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_getterCallExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_getterCallExpressionAST_enterExpressionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@getterCallExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_getterCallExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                               const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                               const GALGAS_unifiedTypeMap_2D_entry /* constinArgument_inType */,
                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_getterCallExpressionAST * object = (const cPtr_getterCallExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_getterCallExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_receiverExpression_4134 ;
  const GALGAS_getterCallExpressionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiver ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("expression-getter-call.galgas", 100)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_receiverExpression_4134, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 97)) ;
  GALGAS_unifiedTypeMap_2D_entry var_receiverType_4179 = var_receiverExpression_4134.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_getterCallExpressionAST temp_2 = object ;
    GALGAS_methodKind var_kind_4360 ;
    GALGAS_functionSignature var_getterFormalArgumentTypeList_4400 ;
    GALGAS_location var_unused_0_4409 ;
    GALGAS_bool var_hasCompilerArgument_4446 ;
    GALGAS_unifiedTypeMap_2D_entry var_returnedType_4492 ;
    GALGAS_methodQualifier var_unused_0_4501 ;
    GALGAS_string var_getterErrorMessage_4539 ;
    const bool optionalResult4313 = var_receiverType_4179.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 107)).optional_searchKey (temp_2.readProperty_mGetterName ().readProperty_string (), var_kind_4360, var_getterFormalArgumentTypeList_4400, var_unused_0_4409, var_hasCompilerArgument_4446, var_returnedType_4492, var_unused_0_4501, var_getterErrorMessage_4539) ;
    if (!optionalResult4313) {
      test_1 = kBoolFalse ;
    }
    if (kBoolTrue == test_1) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsNotEqual, var_getterErrorMessage_4539.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_getterCallExpressionAST temp_4 = object ;
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mGetterName ().readProperty_location (), var_getterErrorMessage_4539, fixItArray5  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 117)) ;
        }
      }
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        const GALGAS_getterCallExpressionAST temp_7 = object ;
        GALGAS_bool test_8 = temp_7.readProperty_errorOnGetterCallInsteadOfPropertyRead () ;
        if (kBoolTrue == test_8.boolEnum ()) {
          const GALGAS_getterCallExpressionAST temp_9 = object ;
          test_8 = var_receiverType_4179.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 120)).getter_hasKey (temp_9.readProperty_mGetterName ().readProperty_string () COMMA_SOURCE_FILE ("expression-getter-call.galgas", 120)) ;
        }
        GALGAS_bool test_10 = test_8 ;
        if (kBoolTrue == test_10.boolEnum ()) {
          const GALGAS_getterCallExpressionAST temp_11 = object ;
          test_10 = GALGAS_bool (kIsEqual, temp_11.readProperty_mExpressions ().getter_length (SOURCE_FILE ("expression-getter-call.galgas", 121)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
        }
        test_6 = test_10.boolEnum () ;
        if (kBoolTrue == test_6) {
          const GALGAS_getterCallExpressionAST temp_12 = object ;
          TC_Array <C_FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (temp_12.readProperty_mExpressionLocation (), GALGAS_string ("property getter call (due to '--error-property-getter-call' option)"), fixItArray13  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 122)) ;
        }
      }
      enumGalgasBool test_14 = kBoolTrue ;
      if (kBoolTrue == test_14) {
        const GALGAS_getterCallExpressionAST temp_15 = object ;
        test_14 = GALGAS_bool (kIsNotEqual, temp_15.readProperty_mExpressions ().getter_length (SOURCE_FILE ("expression-getter-call.galgas", 125)).objectCompare (var_getterFormalArgumentTypeList_4400.getter_length (SOURCE_FILE ("expression-getter-call.galgas", 125)))).boolEnum () ;
        if (kBoolTrue == test_14) {
          const GALGAS_getterCallExpressionAST temp_16 = object ;
          const GALGAS_getterCallExpressionAST temp_17 = object ;
          const GALGAS_getterCallExpressionAST temp_18 = object ;
          TC_Array <C_FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticError (temp_16.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("calling the '").add_operation (temp_17.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 126)).add_operation (GALGAS_string ("' getter of '@"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 126)).add_operation (var_receiverType_4179.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 126)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 126)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 126)).add_operation (var_getterFormalArgumentTypeList_4400.getter_length (SOURCE_FILE ("expression-getter-call.galgas", 127)).getter_string (SOURCE_FILE ("expression-getter-call.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 126)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 127)).add_operation (temp_18.readProperty_mExpressions ().getter_length (SOURCE_FILE ("expression-getter-call.galgas", 128)).getter_string (SOURCE_FILE ("expression-getter-call.galgas", 128)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 127)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 128)), fixItArray19  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 126)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_14) {
        GALGAS_semanticExpressionListForGeneration var_constructorEffectiveParameterList_5477 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("expression-getter-call.galgas", 130)) ;
        const GALGAS_getterCallExpressionAST temp_20 = object ;
        cEnumerator_actualOutputExpressionList enumerator_5546 (temp_20.readProperty_mExpressions (), kENUMERATION_UP) ;
        cEnumerator_functionSignature enumerator_5618 (var_getterFormalArgumentTypeList_4400, kENUMERATION_UP) ;
        while (enumerator_5546.hasCurrentObject () && enumerator_5618.hasCurrentObject ()) {
          GALGAS_semanticExpressionForGeneration var_exp_5924 ;
          callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_5546.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_5618.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_exp_5924, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 133)) ;
          enumGalgasBool test_21 = kBoolTrue ;
          if (kBoolTrue == test_21) {
            test_21 = GALGAS_bool (kIsNotEqual, enumerator_5618.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_5546.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_21) {
              GALGAS_string temp_22 ;
              const enumGalgasBool test_23 = GALGAS_bool (kIsNotEqual, enumerator_5618.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_23) {
                temp_22 = enumerator_5618.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 142)) ;
              }else if (kBoolFalse == test_23) {
                temp_22 = GALGAS_string::makeEmptyString () ;
              }
              GALGAS_string var_s_6015 = GALGAS_string ("!").add_operation (temp_22, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 142)) ;
              TC_Array <C_FixItDescription> fixItArray24 ;
              appendFixItActions (fixItArray24, kFixItReplace, var_s_6015) ;
              inCompiler->emitSemanticError (enumerator_5546.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_6015, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 143)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 143)), fixItArray24  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 143)) ;
            }
          }
          {
          routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_5618.current_mFormalArgumentType (HERE), var_exp_5924.readProperty_mResultType (), enumerator_5546.current_mEndOfExpressionLocation (HERE), var_exp_5924, inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 145)) ;
          }
          var_constructorEffectiveParameterList_5477.addAssign_operation (var_exp_5924  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 146)) ;
          enumerator_5546.gotoNextObject () ;
          enumerator_5618.gotoNextObject () ;
        }
        const GALGAS_getterCallExpressionAST temp_25 = object ;
        const GALGAS_getterCallExpressionAST temp_26 = object ;
        outArgument_outExpression = GALGAS_getterCallExpressionForGeneration::constructor_new (var_returnedType_4492, temp_25.readProperty_mGetterName ().readProperty_location (), var_kind_4360, var_receiverExpression_4134, GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("expression-getter-call.galgas", 153)), temp_26.readProperty_mGetterName ().readProperty_string (), var_constructorEffectiveParameterList_5477, var_hasCompilerArgument_4446  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 148)) ;
      }
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_27 = kBoolTrue ;
    if (kBoolTrue == test_27) {
      const GALGAS_getterCallExpressionAST temp_28 = object ;
      test_27 = GALGAS_bool (kIsEqual, temp_28.readProperty_mExpressions ().getter_length (SOURCE_FILE ("expression-getter-call.galgas", 160)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_27) {
        const GALGAS_getterCallExpressionAST temp_29 = object ;
        GALGAS_bool var_isPublic_6891 ;
        GALGAS_bool var_unused_0_6894 ;
        GALGAS_unifiedTypeMap_2D_entry var_propertyType_6912 ;
        const bool optionalResult6852 = var_receiverType_4179.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 160)).optional_searchKey (temp_29.readProperty_mGetterName ().readProperty_string (), var_isPublic_6891, var_unused_0_6894, var_propertyType_6912) ;
        if (!optionalResult6852) {
          test_27 = kBoolFalse ;
        }
        if (kBoolTrue == test_27) {
          enumGalgasBool test_30 = kBoolTrue ;
          if (kBoolTrue == test_30) {
            test_30 = var_isPublic_6891.operator_not (SOURCE_FILE ("expression-getter-call.galgas", 161)).boolEnum () ;
            if (kBoolTrue == test_30) {
              const GALGAS_getterCallExpressionAST temp_31 = object ;
              TC_Array <C_FixItDescription> fixItArray32 ;
              inCompiler->emitSemanticError (temp_31.readProperty_mGetterName ().readProperty_location (), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray32  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 162)) ;
            }
          }
          const GALGAS_getterCallExpressionAST temp_33 = object ;
          const GALGAS_getterCallExpressionAST temp_34 = object ;
          outArgument_outExpression = GALGAS_structPropertyAccessExpressionForGeneration::constructor_new (var_propertyType_6912, temp_33.readProperty_mGetterName ().readProperty_location (), var_receiverExpression_4134, temp_34.readProperty_mGetterName ().readProperty_string ()  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 164)) ;
          enumGalgasBool test_35 = kBoolTrue ;
          if (kBoolTrue == test_35) {
            const GALGAS_getterCallExpressionAST temp_36 = object ;
            test_35 = temp_36.readProperty_errorOnGetterCallInsteadOfPropertyRead ().boolEnum () ;
            if (kBoolTrue == test_35) {
              const GALGAS_getterCallExpressionAST temp_37 = object ;
              TC_Array <C_FixItDescription> fixItArray38 ;
              inCompiler->emitSemanticError (temp_37.readProperty_mExpressionLocation (), GALGAS_string ("property getter call (due to '--error-property-getter-call' option)"), fixItArray38  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 171)) ;
            }
          }
        }
      }
    }
    if (kBoolFalse == test_27) {
      GALGAS_uint var_matchingReaderCount_7575 = GALGAS_uint ((uint32_t) 0U) ;
      enumGalgasBool test_39 = kBoolTrue ;
      if (kBoolTrue == test_39) {
        test_39 = GALGAS_bool (kIsEqual, var_receiverType_4179.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 176)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("expression-getter-call.galgas", 176)))).boolEnum () ;
        if (kBoolTrue == test_39) {
          GALGAS_functionSignature var_getterFormalArgumentTypeList_7706 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("expression-getter-call.galgas", 177)) ;
          GALGAS_bool var_hasCompilerArgument_7741 = GALGAS_bool (true) ;
          GALGAS_unifiedTypeMap_2D_entry var_returnedType_7771 = GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("expression-getter-call.galgas", 179)) ;
          GALGAS_methodKind var_kind_7815 = GALGAS_methodKind::constructor_definedAsExtension (SOURCE_FILE ("expression-getter-call.galgas", 180)) ;
          GALGAS_stringlist var_fieldList_7880 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("expression-getter-call.galgas", 181)) ;
          cEnumerator_typedPropertyList enumerator_7931 (var_receiverType_4179.getter_mCurrentTypedPropertyList (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 182)), kENUMERATION_UP) ;
          while (enumerator_7931.hasCurrentObject ()) {
            GALGAS_unifiedTypeMap_2D_entry var_propertyType_8004 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), GALGAS_lstring::constructor_new (enumerator_7931.current_mPropertyTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 185)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 185))  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 185)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 183)) ;
            GALGAS_getterMap var_aMap_8172 = var_propertyType_8004.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 187)) ;
            const GALGAS_getterCallExpressionAST temp_40 = object ;
            const cMapElement_getterMap * objectArray_8213 = (const cMapElement_getterMap *) var_aMap_8172.readAccessForWithInstruction (temp_40.readProperty_mGetterName ().readProperty_string ()) ;
            if (NULL != objectArray_8213) {
                macroValidSharedObject (objectArray_8213, cMapElement_getterMap) ;
              enumGalgasBool test_41 = kBoolTrue ;
              if (kBoolTrue == test_41) {
                test_41 = GALGAS_bool (kIsEqual, var_propertyType_8004.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 189)).objectCompare (enumerator_7931.current_mPropertyName (HERE).readProperty_string ())).boolEnum () ;
                if (kBoolTrue == test_41) {
                  var_matchingReaderCount_7575.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 190)) ;
                  var_getterFormalArgumentTypeList_7706 = objectArray_8213->mProperty_mArgumentTypeList ;
                  var_hasCompilerArgument_7741 = objectArray_8213->mProperty_mHasCompilerArgument ;
                  var_returnedType_7771 = objectArray_8213->mProperty_mReturnedType ;
                  const GALGAS_getterCallExpressionAST temp_42 = object ;
                  var_receiverExpression_4134 = GALGAS_structPropertyAccessExpressionForGeneration::constructor_new (var_returnedType_7771, temp_42.readProperty_mGetterName ().readProperty_location (), var_receiverExpression_4134, enumerator_7931.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 194)) ;
                  var_kind_7815 = objectArray_8213->mProperty_mKind ;
                  enumGalgasBool test_43 = kBoolTrue ;
                  if (kBoolTrue == test_43) {
                    test_43 = GALGAS_bool (kIsNotEqual, objectArray_8213->mProperty_mErrorMessage.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                    if (kBoolTrue == test_43) {
                      const GALGAS_getterCallExpressionAST temp_44 = object ;
                      TC_Array <C_FixItDescription> fixItArray45 ;
                      inCompiler->emitSemanticError (temp_44.readProperty_mGetterName ().readProperty_location (), objectArray_8213->mProperty_mErrorMessage, fixItArray45  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 202)) ;
                    }
                  }
                }
              }
            }
            enumerator_7931.gotoNextObject () ;
          }
          enumGalgasBool test_46 = kBoolTrue ;
          if (kBoolTrue == test_46) {
            test_46 = GALGAS_bool (kIsEqual, var_matchingReaderCount_7575.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
            if (kBoolTrue == test_46) {
              const GALGAS_getterCallExpressionAST temp_47 = object ;
              const GALGAS_getterCallExpressionAST temp_48 = object ;
              TC_Array <C_FixItDescription> fixItArray49 ;
              inCompiler->emitSemanticError (temp_47.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("the '@").add_operation (var_receiverType_4179.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 209)).add_operation (GALGAS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 209)).add_operation (temp_48.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 209)).add_operation (GALGAS_string ("' getter, and none of its fields defines it"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 209)), fixItArray49  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 208)) ;
              var_getterFormalArgumentTypeList_7706.drop () ; // Release error dropped variable
              var_hasCompilerArgument_7741.drop () ; // Release error dropped variable
              var_returnedType_7771.drop () ; // Release error dropped variable
              var_kind_7815.drop () ; // Release error dropped variable
            }
          }
          if (kBoolFalse == test_46) {
            enumGalgasBool test_50 = kBoolTrue ;
            if (kBoolTrue == test_50) {
              test_50 = GALGAS_bool (kIsStrictSup, var_matchingReaderCount_7575.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
              if (kBoolTrue == test_50) {
                GALGAS_string var_s_9281 = GALGAS_string::makeEmptyString () ;
                cEnumerator_stringlist enumerator_9306 (var_fieldList_7880, kENUMERATION_UP) ;
                while (enumerator_9306.hasCurrentObject ()) {
                  var_s_9281.plusAssign_operation(enumerator_9306.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 215)) ;
                  if (enumerator_9306.hasNextObject ()) {
                    var_s_9281.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 216)) ;
                  }
                  enumerator_9306.gotoNextObject () ;
                }
                const GALGAS_getterCallExpressionAST temp_51 = object ;
                const GALGAS_getterCallExpressionAST temp_52 = object ;
                TC_Array <C_FixItDescription> fixItArray53 ;
                inCompiler->emitSemanticError (temp_51.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("the '@").add_operation (var_receiverType_4179.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 219)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 219)).add_operation (GALGAS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 219)).add_operation (temp_52.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 219)).add_operation (GALGAS_string ("' getter, and several of its fields defines it:"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 219)).add_operation (var_s_9281, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 220)).add_operation (GALGAS_string (" (exactly one field should define it)"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 220)), fixItArray53  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 218)) ;
                var_getterFormalArgumentTypeList_7706.drop () ; // Release error dropped variable
                var_hasCompilerArgument_7741.drop () ; // Release error dropped variable
                var_returnedType_7771.drop () ; // Release error dropped variable
                var_kind_7815.drop () ; // Release error dropped variable
              }
            }
          }
          enumGalgasBool test_54 = kBoolTrue ;
          if (kBoolTrue == test_54) {
            const GALGAS_getterCallExpressionAST temp_55 = object ;
            test_54 = GALGAS_bool (kIsNotEqual, temp_55.readProperty_mExpressions ().getter_length (SOURCE_FILE ("expression-getter-call.galgas", 224)).objectCompare (var_getterFormalArgumentTypeList_7706.getter_length (SOURCE_FILE ("expression-getter-call.galgas", 224)))).boolEnum () ;
            if (kBoolTrue == test_54) {
              const GALGAS_getterCallExpressionAST temp_56 = object ;
              const GALGAS_getterCallExpressionAST temp_57 = object ;
              const GALGAS_getterCallExpressionAST temp_58 = object ;
              TC_Array <C_FixItDescription> fixItArray59 ;
              inCompiler->emitSemanticError (temp_56.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("calling the '").add_operation (temp_57.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 225)).add_operation (GALGAS_string ("' getter of '@"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 225)).add_operation (var_receiverType_4179.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 225)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 225)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 225)).add_operation (var_getterFormalArgumentTypeList_7706.getter_length (SOURCE_FILE ("expression-getter-call.galgas", 226)).getter_string (SOURCE_FILE ("expression-getter-call.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 225)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 226)).add_operation (temp_58.readProperty_mExpressions ().getter_length (SOURCE_FILE ("expression-getter-call.galgas", 227)).getter_string (SOURCE_FILE ("expression-getter-call.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 226)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 227)), fixItArray59  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 225)) ;
              outArgument_outExpression.drop () ; // Release error dropped variable
            }
          }
          if (kBoolFalse == test_54) {
            GALGAS_semanticExpressionListForGeneration var_constructorEffectiveParameterList_10221 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("expression-getter-call.galgas", 229)) ;
            const GALGAS_getterCallExpressionAST temp_60 = object ;
            cEnumerator_actualOutputExpressionList enumerator_10292 (temp_60.readProperty_mExpressions (), kENUMERATION_UP) ;
            cEnumerator_functionSignature enumerator_10366 (var_getterFormalArgumentTypeList_7706, kENUMERATION_UP) ;
            while (enumerator_10292.hasCurrentObject () && enumerator_10366.hasCurrentObject ()) {
              GALGAS_semanticExpressionForGeneration var_exp_10686 ;
              callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_10292.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_10366.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_exp_10686, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 232)) ;
              enumGalgasBool test_61 = kBoolTrue ;
              if (kBoolTrue == test_61) {
                test_61 = GALGAS_bool (kIsNotEqual, enumerator_10366.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_10292.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
                if (kBoolTrue == test_61) {
                  GALGAS_string temp_62 ;
                  const enumGalgasBool test_63 = GALGAS_bool (kIsNotEqual, enumerator_10366.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                  if (kBoolTrue == test_63) {
                    temp_62 = enumerator_10366.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 241)) ;
                  }else if (kBoolFalse == test_63) {
                    temp_62 = GALGAS_string::makeEmptyString () ;
                  }
                  GALGAS_string var_s_10783 = GALGAS_string ("!").add_operation (temp_62, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 241)) ;
                  TC_Array <C_FixItDescription> fixItArray64 ;
                  appendFixItActions (fixItArray64, kFixItReplace, var_s_10783) ;
                  inCompiler->emitSemanticError (enumerator_10292.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_10783, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 242)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 242)), fixItArray64  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 242)) ;
                }
              }
              {
              routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_10366.current_mFormalArgumentType (HERE), var_exp_10686.readProperty_mResultType (), enumerator_10292.current_mEndOfExpressionLocation (HERE), var_exp_10686, inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 244)) ;
              }
              var_constructorEffectiveParameterList_10221.addAssign_operation (var_exp_10686  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 245)) ;
              enumerator_10292.gotoNextObject () ;
              enumerator_10366.gotoNextObject () ;
            }
            const GALGAS_getterCallExpressionAST temp_65 = object ;
            const GALGAS_getterCallExpressionAST temp_66 = object ;
            outArgument_outExpression = GALGAS_getterCallExpressionForGeneration::constructor_new (var_returnedType_7771, temp_65.readProperty_mGetterName ().readProperty_location (), var_kind_7815, var_receiverExpression_4134, var_fieldList_7880, temp_66.readProperty_mGetterName ().readProperty_string (), var_constructorEffectiveParameterList_10221, var_hasCompilerArgument_7741  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 247)) ;
          }
        }
      }
      if (kBoolFalse == test_39) {
        enumGalgasBool test_67 = kBoolTrue ;
        if (kBoolTrue == test_67) {
          test_67 = GALGAS_bool (kIsEqual, var_receiverType_4179.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 258)).getter_count (SOURCE_FILE ("expression-getter-call.galgas", 258)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_67) {
            const GALGAS_getterCallExpressionAST temp_68 = object ;
            TC_Array <C_FixItDescription> fixItArray69 ;
            inCompiler->emitSemanticError (temp_68.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("the '@").add_operation (var_receiverType_4179.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 260)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 260)).add_operation (GALGAS_string ("' type does not define any getter"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 260)), fixItArray69  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 259)) ;
            outArgument_outExpression.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_67) {
          const GALGAS_getterCallExpressionAST temp_70 = object ;
          const GALGAS_getterCallExpressionAST temp_71 = object ;
          TC_Array <C_FixItDescription> fixItArray72 ;
          appendFixItActions (fixItArray72, kFixItReplace, var_receiverType_4179.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 266)).getter_keyList (SOURCE_FILE ("expression-getter-call.galgas", 266))) ;
          inCompiler->emitSemanticError (temp_70.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("the '@").add_operation (var_receiverType_4179.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 264)).add_operation (GALGAS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 264)).add_operation (temp_71.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 264)).add_operation (GALGAS_string ("' getter "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 264)), fixItArray72  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 263)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_getterCallExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_getterCallExpressionAST.mSlotID,
                                                  extensionMethod_getterCallExpressionAST_analyzeSemanticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_getterCallExpressionAST_analyzeSemanticExpression (defineExtensionMethod_getterCallExpressionAST_analyzeSemanticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@getterCallExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_getterCallExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                  GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                  GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                  GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                  GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                  GALGAS_string & outArgument_outCppExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_getterCallExpressionForGeneration * object = (const cPtr_getterCallExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_getterCallExpressionForGeneration) ;
  const GALGAS_getterCallExpressionForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 294)) ;
  GALGAS_string var_receiverCppName_13174 ;
  const GALGAS_getterCallExpressionForGeneration temp_1 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppName_13174, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 296)) ;
  GALGAS_stringlist var_getterArgumentCppNameList_13243 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("expression-getter-call.galgas", 304)) ;
  const GALGAS_getterCallExpressionForGeneration temp_2 = object ;
  cEnumerator_semanticExpressionListForGeneration enumerator_13267 (temp_2.readProperty_mExpressions (), kENUMERATION_UP) ;
  while (enumerator_13267.hasCurrentObject ()) {
    GALGAS_string var_argumentCppName_13470 ;
    callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_13267.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_argumentCppName_13470, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 306)) ;
    var_getterArgumentCppNameList_13243.addAssign_operation (var_argumentCppName_13470  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 313)) ;
    enumerator_13267.gotoNextObject () ;
  }
  const GALGAS_getterCallExpressionForGeneration temp_3 = object ;
  switch (temp_3.readProperty_mKind ().enumValue ()) {
  case GALGAS_methodKind::kNotBuilt:
    break ;
  case GALGAS_methodKind::kEnum_definedAsExtension:
    {
      const GALGAS_getterCallExpressionForGeneration temp_4 = object ;
      GALGAS_unifiedTypeMap_2D_entry var_baseType_13645 = temp_4.readProperty_mReceiverExpression ().readProperty_mResultType () ;
      extensionMethod_addHeaderFileName (var_baseType_13645, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 319)) ;
      GALGAS_bool var_searching_13757 = GALGAS_bool (true) ;
      if (GALGAS_uint::constructor_max (SOURCE_FILE ("expression-getter-call.galgas", 321)).isValid ()) {
        uint32_t variant_13773 = GALGAS_uint::constructor_max (SOURCE_FILE ("expression-getter-call.galgas", 321)).uintValue () ;
        bool loop_13773 = true ;
        while (loop_13773) {
          loop_13773 = var_searching_13757.isValid () ;
          if (loop_13773) {
            loop_13773 = var_searching_13757.boolValue () ;
          }
          if (loop_13773 && (0 == variant_13773)) {
            loop_13773 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("expression-getter-call.galgas", 321)) ;
          }
          if (loop_13773) {
            variant_13773 -- ;
            enumGalgasBool test_5 = kBoolTrue ;
            if (kBoolTrue == test_5) {
              test_5 = var_baseType_13645.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 322)).getter_isNull (SOURCE_FILE ("expression-getter-call.galgas", 322)).operator_not (SOURCE_FILE ("expression-getter-call.galgas", 322)).boolEnum () ;
              if (kBoolTrue == test_5) {
                enumGalgasBool test_6 = kBoolTrue ;
                if (kBoolTrue == test_6) {
                  const GALGAS_getterCallExpressionForGeneration temp_7 = object ;
                  test_6 = var_baseType_13645.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 323)).getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 323)).getter_hasKey (temp_7.readProperty_mGetterName () COMMA_SOURCE_FILE ("expression-getter-call.galgas", 323)).boolEnum () ;
                  if (kBoolTrue == test_6) {
                    var_baseType_13645 = var_baseType_13645.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 324)) ;
                  }
                }
                if (kBoolFalse == test_6) {
                  var_searching_13757 = GALGAS_bool (false) ;
                }
              }
            }
            if (kBoolFalse == test_5) {
              var_searching_13757 = GALGAS_bool (false) ;
            }
          }
        }
      }
      const GALGAS_getterCallExpressionForGeneration temp_8 = object ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("getter-").add_operation (var_baseType_13645.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 332)).getter_fileNameRepresentation (SOURCE_FILE ("expression-getter-call.galgas", 332)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 332)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 332)).add_operation (temp_8.readProperty_mGetterName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-getter-call.galgas", 332)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 332))  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 332)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (var_receiverCppName_13174 COMMA_SOURCE_FILE ("expression-getter-call.galgas", 333)) ;
      }
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        const GALGAS_getterCallExpressionForGeneration temp_10 = object ;
        test_9 = temp_10.readProperty_mReceiverExpression ().readProperty_mResultType ().getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 334)).getter_isClassType (SOURCE_FILE ("expression-getter-call.galgas", 334)).boolEnum () ;
        if (kBoolTrue == test_9) {
          const GALGAS_getterCallExpressionForGeneration temp_11 = object ;
          const GALGAS_getterCallExpressionForGeneration temp_12 = object ;
          outArgument_outCppExpression = GALGAS_string ("callExtensionGetter_").add_operation (temp_11.readProperty_mGetterName ().getter_identifierRepresentation (SOURCE_FILE ("expression-getter-call.galgas", 335)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 335)).add_operation (GALGAS_string (" ((const cPtr_"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 335)).add_operation (temp_12.readProperty_mReceiverExpression ().readProperty_mResultType ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 336)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 336)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 336)).add_operation (var_receiverCppName_13174, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 336)).add_operation (GALGAS_string (".ptr (), "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 336)) ;
        }
      }
      if (kBoolFalse == test_9) {
        const GALGAS_getterCallExpressionForGeneration temp_13 = object ;
        extensionMethod_addHeaderFileName (temp_13.readProperty_mReceiverExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 338)) ;
        const GALGAS_getterCallExpressionForGeneration temp_14 = object ;
        outArgument_outCppExpression = GALGAS_string ("extensionGetter_").add_operation (temp_14.readProperty_mGetterName ().getter_identifierRepresentation (SOURCE_FILE ("expression-getter-call.galgas", 339)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 339)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 339)).add_operation (var_receiverCppName_13174, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 339)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 339)) ;
      }
    }
    break ;
  case GALGAS_methodKind::kEnum_definedAsMember:
    {
      outArgument_outCppExpression = var_receiverCppName_13174 ;
      const GALGAS_getterCallExpressionForGeneration temp_15 = object ;
      cEnumerator_stringlist enumerator_14878 (temp_15.readProperty_mFieldList (), kENUMERATION_UP) ;
      while (enumerator_14878.hasCurrentObject ()) {
        outArgument_outCppExpression.plusAssign_operation(GALGAS_string (".readProperty_").add_operation (enumerator_14878.current_mValue (HERE).getter_identifierRepresentation (SOURCE_FILE ("expression-getter-call.galgas", 344)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 344)).add_operation (GALGAS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 344)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 344)) ;
        enumerator_14878.gotoNextObject () ;
      }
      const GALGAS_getterCallExpressionForGeneration temp_16 = object ;
      extensionMethod_addHeaderFileName (temp_16.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 346)) ;
      const GALGAS_getterCallExpressionForGeneration temp_17 = object ;
      outArgument_outCppExpression.plusAssign_operation(GALGAS_string (".getter_").add_operation (temp_17.readProperty_mGetterName ().getter_identifierRepresentation (SOURCE_FILE ("expression-getter-call.galgas", 347)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 347)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 347)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 347)) ;
    }
    break ;
  }
  cEnumerator_stringlist enumerator_15163 (var_getterArgumentCppNameList_13243, kENUMERATION_UP) ;
  while (enumerator_15163.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssign_operation(enumerator_15163.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 350)) ;
    if (enumerator_15163.hasNextObject ()) {
      outArgument_outCppExpression.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 351)) ;
    }
    enumerator_15163.gotoNextObject () ;
  }
  enumGalgasBool test_18 = kBoolTrue ;
  if (kBoolTrue == test_18) {
    test_18 = GALGAS_bool (kIsEqual, var_getterArgumentCppNameList_13243.getter_length (SOURCE_FILE ("expression-getter-call.galgas", 353)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_18) {
      enumGalgasBool test_19 = kBoolTrue ;
      if (kBoolTrue == test_19) {
        const GALGAS_getterCallExpressionForGeneration temp_20 = object ;
        test_19 = temp_20.readProperty_mHasCompilerArgument ().boolEnum () ;
        if (kBoolTrue == test_19) {
          {
          ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 355)) COMMA_SOURCE_FILE ("expression-getter-call.galgas", 355)) ;
          }
          outArgument_outCppExpression.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 356)).add_operation (GALGAS_string (" COMMA_"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 356)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 356)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_18) {
    enumGalgasBool test_21 = kBoolTrue ;
    if (kBoolTrue == test_21) {
      const GALGAS_getterCallExpressionForGeneration temp_22 = object ;
      test_21 = temp_22.readProperty_mHasCompilerArgument ().boolEnum () ;
      if (kBoolTrue == test_21) {
        {
        ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 359)) COMMA_SOURCE_FILE ("expression-getter-call.galgas", 359)) ;
        }
        outArgument_outCppExpression.plusAssign_operation(GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 360)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 360)).add_operation (GALGAS_string (" COMMA_"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 360)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 360)) ;
      }
    }
    if (kBoolFalse == test_21) {
      outArgument_outCppExpression.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 362)) ;
    }
  }
  const GALGAS_getterCallExpressionForGeneration temp_23 = object ;
  outArgument_outCppExpression.plusAssign_operation(extensionGetter_sourceFile (temp_23.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 364)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 364)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 364)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_getterCallExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_getterCallExpressionForGeneration.mSlotID,
                                           extensionMethod_getterCallExpressionForGeneration_generateExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_getterCallExpressionForGeneration_generateExpression (defineExtensionMethod_getterCallExpressionForGeneration_generateExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@constructorExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_constructorExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_constructorExpressionAST * object = (const cPtr_constructorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_constructorExpressionAST) ;
  {
  const GALGAS_constructorExpressionAST temp_0 = object ;
  GALGAS_unifiedTypeMap_2D_entry joker_4907 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeOptionalEntry (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), joker_4907 COMMA_SOURCE_FILE ("expression-constructor.galgas", 141)) ;
  }
  const GALGAS_constructorExpressionAST temp_1 = object ;
  extensionMethod_enterInSemanticContext (temp_1.readProperty_mExpressions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 142)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_constructorExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_constructorExpressionAST.mSlotID,
                                                         extensionMethod_constructorExpressionAST_enterExpressionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_constructorExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_constructorExpressionAST_enterExpressionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeConstructorInvocation'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeConstructorInvocation (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                           const GALGAS_unifiedTypeMap_2D_entry constinArgument_inType,
                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                           GALGAS_localVarManager & ioArgument_ioVariableMap,
                                           const GALGAS_lstring constinArgument_inTypeName,
                                           const GALGAS_lstring constinArgument_inConstructorName,
                                           const GALGAS_actualOutputExpressionList constinArgument_inInitializerEffectiveParameterExpressions,
                                           const GALGAS_location constinArgument_inLocationForOldStyleCollectionInitializerError,
                                           GALGAS_unifiedTypeMap_2D_entry & outArgument_outReturnedType,
                                           GALGAS_unifiedTypeMap_2D_entry & outArgument_outConstructorType,
                                           GALGAS_semanticExpressionListForGeneration & outArgument_outConstructorEffectiveParameterList,
                                           GALGAS_bool & outArgument_outHasCompilerArgument,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outReturnedType.drop () ; // Release 'out' argument
  outArgument_outConstructorType.drop () ; // Release 'out' argument
  outArgument_outConstructorEffectiveParameterList.drop () ; // Release 'out' argument
  outArgument_outHasCompilerArgument.drop () ; // Release 'out' argument
  outArgument_outConstructorType = constinArgument_inType ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inTypeName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outConstructorType = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), constinArgument_inTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 164)) ;
    }
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = outArgument_outConstructorType.getter_isNull (SOURCE_FILE ("expression-constructor.galgas", 166)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GALGAS_string ("cannot infer type"), fixItArray2  COMMA_SOURCE_FILE ("expression-constructor.galgas", 167)) ;
      outArgument_outReturnedType.drop () ; // Release error dropped variable
      outArgument_outConstructorType.drop () ; // Release error dropped variable
      outArgument_outConstructorEffectiveParameterList.drop () ; // Release error dropped variable
      outArgument_outHasCompilerArgument.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    GALGAS_constructorMap var_constructorMap_6198 = outArgument_outConstructorType.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 172)) ;
    GALGAS_functionSignature var_constructorFormalArgumentTypeList_6323 ;
    const cMapElement_constructorMap * objectArray_6332 = (const cMapElement_constructorMap *) var_constructorMap_6198.readAccessForWithInstruction (constinArgument_inConstructorName.readProperty_string ()) ;
    if (NULL != objectArray_6332) {
        macroValidSharedObject (objectArray_6332, cMapElement_constructorMap) ;
      var_constructorFormalArgumentTypeList_6323 = objectArray_6332->mProperty_mArgumentTypeList ;
      outArgument_outHasCompilerArgument = objectArray_6332->mProperty_mHasCompilerArgument ;
      outArgument_outReturnedType = objectArray_6332->mProperty_mReturnedType ;
    }else{
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsEqual, var_constructorMap_6198.getter_count (SOURCE_FILE ("expression-constructor.galgas", 180)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (constinArgument_inConstructorName.readProperty_location (), GALGAS_string ("the '@").add_operation (outArgument_outConstructorType.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 182)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 182)).add_operation (GALGAS_string ("' type does not define any constructor"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 182)), fixItArray4  COMMA_SOURCE_FILE ("expression-constructor.galgas", 181)) ;
          var_constructorFormalArgumentTypeList_6323.drop () ; // Release error dropped variable
          outArgument_outHasCompilerArgument.drop () ; // Release error dropped variable
          outArgument_outReturnedType.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_3) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        appendFixItActions (fixItArray5, kFixItReplace, var_constructorMap_6198.getter_keyList (SOURCE_FILE ("expression-constructor.galgas", 188))) ;
        inCompiler->emitSemanticError (constinArgument_inConstructorName.readProperty_location (), GALGAS_string ("the '@").add_operation (outArgument_outConstructorType.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 186)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 186)).add_operation (GALGAS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 186)).add_operation (constinArgument_inConstructorName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 186)).add_operation (GALGAS_string ("' constructor"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 186)), fixItArray5  COMMA_SOURCE_FILE ("expression-constructor.galgas", 185)) ;
        var_constructorFormalArgumentTypeList_6323.drop () ; // Release error dropped variable
        outArgument_outHasCompilerArgument.drop () ; // Release error dropped variable
        outArgument_outReturnedType.drop () ; // Release error dropped variable
      }
    }
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = GALGAS_bool (kIsNotEqual, constinArgument_inInitializerEffectiveParameterExpressions.getter_length (SOURCE_FILE ("expression-constructor.galgas", 192)).objectCompare (var_constructorFormalArgumentTypeList_6323.getter_length (SOURCE_FILE ("expression-constructor.galgas", 192)))).boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (constinArgument_inConstructorName.readProperty_location (), GALGAS_string ("calling the '").add_operation (constinArgument_inConstructorName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 194)).add_operation (GALGAS_string ("' constructor of '@"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 194)).add_operation (outArgument_outConstructorType.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 194)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 194)).add_operation (var_constructorFormalArgumentTypeList_6323.getter_length (SOURCE_FILE ("expression-constructor.galgas", 195)).getter_string (SOURCE_FILE ("expression-constructor.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 194)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 195)).add_operation (constinArgument_inInitializerEffectiveParameterExpressions.getter_length (SOURCE_FILE ("expression-constructor.galgas", 196)).getter_string (SOURCE_FILE ("expression-constructor.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 195)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 196)), fixItArray7  COMMA_SOURCE_FILE ("expression-constructor.galgas", 193)) ;
      }
    }
    outArgument_outConstructorEffectiveParameterList = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("expression-constructor.galgas", 198)) ;
    cEnumerator_actualOutputExpressionList enumerator_7678 (constinArgument_inInitializerEffectiveParameterExpressions, kENUMERATION_UP) ;
    cEnumerator_functionSignature enumerator_7773 (var_constructorFormalArgumentTypeList_6323, kENUMERATION_UP) ;
    while (enumerator_7678.hasCurrentObject () && enumerator_7773.hasCurrentObject ()) {
      GALGAS_semanticExpressionForGeneration var_exp_8070 ;
      callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_7678.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_7773.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_exp_8070, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 201)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_7773.current_mFormalArgumentType (HERE), var_exp_8070.readProperty_mResultType (), enumerator_7678.current_mEndOfExpressionLocation (HERE), var_exp_8070, inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 209)) ;
      }
      outArgument_outConstructorEffectiveParameterList.addAssign_operation (var_exp_8070  COMMA_SOURCE_FILE ("expression-constructor.galgas", 210)) ;
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        test_8 = GALGAS_bool (kIsNotEqual, enumerator_7773.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_7678.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_8) {
          GALGAS_string temp_9 ;
          const enumGalgasBool test_10 = GALGAS_bool (kIsNotEqual, enumerator_7773.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_10) {
            temp_9 = enumerator_7773.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 212)) ;
          }else if (kBoolFalse == test_10) {
            temp_9 = GALGAS_string::makeEmptyString () ;
          }
          GALGAS_string var_s_8326 = GALGAS_string ("!").add_operation (temp_9, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 212)) ;
          TC_Array <C_FixItDescription> fixItArray11 ;
          appendFixItActions (fixItArray11, kFixItReplace, var_s_8326) ;
          inCompiler->emitSemanticError (enumerator_7678.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_8326, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 213)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 213)), fixItArray11  COMMA_SOURCE_FILE ("expression-constructor.galgas", 213)) ;
        }
      }
      enumerator_7678.gotoNextObject () ;
      enumerator_7773.gotoNextObject () ;
    }
  }
  enumGalgasBool test_12 = kBoolTrue ;
  if (kBoolTrue == test_12) {
    GALGAS_bool test_13 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorOldStyleCollectionInitializer.readProperty_value ()) ;
    if (kBoolTrue == test_13.boolEnum ()) {
      test_13 = GALGAS_bool (kIsEqual, constinArgument_inInitializerEffectiveParameterExpressions.getter_length (SOURCE_FILE ("expression-constructor.galgas", 218)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
    }
    test_12 = test_13.boolEnum () ;
    if (kBoolTrue == test_12) {
      GALGAS_stringset temp_14 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("expression-constructor.galgas", 219)) ;
      temp_14.addAssign_operation (GALGAS_string ("emptyList")  COMMA_SOURCE_FILE ("expression-constructor.galgas", 219)) ;
      temp_14.addAssign_operation (GALGAS_string ("emptyMap")  COMMA_SOURCE_FILE ("expression-constructor.galgas", 219)) ;
      temp_14.addAssign_operation (GALGAS_string ("emptySortedList")  COMMA_SOURCE_FILE ("expression-constructor.galgas", 219)) ;
      temp_14.addAssign_operation (GALGAS_string ("emptyDict")  COMMA_SOURCE_FILE ("expression-constructor.galgas", 219)) ;
      GALGAS_stringset var_oldInitializers_8695 = temp_14 ;
      enumGalgasBool test_15 = kBoolTrue ;
      if (kBoolTrue == test_15) {
        test_15 = var_oldInitializers_8695.getter_hasKey (constinArgument_inConstructorName.readProperty_string () COMMA_SOURCE_FILE ("expression-constructor.galgas", 220)).boolEnum () ;
        if (kBoolTrue == test_15) {
          TC_Array <C_FixItDescription> fixItArray16 ;
          appendFixItActions (fixItArray16, kFixItReplace, GALGAS_string (" {}")) ;
          inCompiler->emitSemanticError (constinArgument_inLocationForOldStyleCollectionInitializerError, GALGAS_string ("old style collection initializer call (due to '--error-old-syle-collection-initializer' option)"), fixItArray16  COMMA_SOURCE_FILE ("expression-constructor.galgas", 221)) ;
        }
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@constructorExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_constructorExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GALGAS_unifiedTypeMap_2D_entry constinArgument_inType,
                                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_constructorExpressionAST * object = (const cPtr_constructorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_constructorExpressionAST) ;
  GALGAS_unifiedTypeMap_2D_entry var_returnedType_9826 ;
  GALGAS_unifiedTypeMap_2D_entry var_constructorType_9873 ;
  GALGAS_semanticExpressionListForGeneration var_constructorEffectiveParameterList_9953 ;
  GALGAS_bool var_hasCompilerArgument_9988 ;
  {
  const GALGAS_constructorExpressionAST temp_0 = object ;
  const GALGAS_constructorExpressionAST temp_1 = object ;
  const GALGAS_constructorExpressionAST temp_2 = object ;
  const GALGAS_constructorExpressionAST temp_3 = object ;
  routine_analyzeConstructorInvocation (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, temp_0.readProperty_mTypeName (), temp_1.readProperty_mConstructorName (), temp_2.readProperty_mExpressions (), temp_3.readProperty_locationForOldStyleCollectionInitializerError (), var_returnedType_9826, var_constructorType_9873, var_constructorEffectiveParameterList_9953, var_hasCompilerArgument_9988, inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 238)) ;
  }
  const GALGAS_constructorExpressionAST temp_4 = object ;
  GALGAS_lstring var_constructorTypeUsefulnessName_10028 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (var_constructorType_9873.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 253)), temp_4.readProperty_mTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("expression-constructor.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 253)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_constructorTypeUsefulnessName_10028 COMMA_SOURCE_FILE ("expression-constructor.galgas", 254)) ;
  }
  const GALGAS_constructorExpressionAST temp_5 = object ;
  GALGAS_lstring var_returnedTypeUsefulnessName_10239 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (var_returnedType_9826.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 255)), temp_5.readProperty_mTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("expression-constructor.galgas", 255)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 255)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_returnedTypeUsefulnessName_10239 COMMA_SOURCE_FILE ("expression-constructor.galgas", 256)) ;
  }
  const GALGAS_constructorExpressionAST temp_6 = object ;
  const GALGAS_constructorExpressionAST temp_7 = object ;
  outArgument_outExpression = GALGAS_constructorExpressionForGeneration::constructor_new (var_returnedType_9826, temp_6.readProperty_mConstructorName ().readProperty_location (), var_constructorType_9873, temp_7.readProperty_mConstructorName ().readProperty_string (), var_constructorEffectiveParameterList_9953, var_hasCompilerArgument_9988  COMMA_SOURCE_FILE ("expression-constructor.galgas", 258)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_constructorExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_constructorExpressionAST.mSlotID,
                                                  extensionMethod_constructorExpressionAST_analyzeSemanticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_constructorExpressionAST_analyzeSemanticExpression (defineExtensionMethod_constructorExpressionAST_analyzeSemanticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@defaultConstructorExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_defaultConstructorExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                              C_Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_defaultConstructorExpressionAST * object = (const cPtr_defaultConstructorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_defaultConstructorExpressionAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_defaultConstructorExpressionAST temp_1 = object ;
    test_0 = GALGAS_bool (kIsNotEqual, temp_1.readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      const GALGAS_defaultConstructorExpressionAST temp_2 = object ;
      GALGAS_unifiedTypeMap_2D_entry joker_10997 ; // Joker input parameter
      GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioTypeMap, temp_2.readProperty_mTypeName (), joker_10997 COMMA_SOURCE_FILE ("expression-constructor.galgas", 274)) ;
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_defaultConstructorExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_defaultConstructorExpressionAST.mSlotID,
                                                         extensionMethod_defaultConstructorExpressionAST_enterExpressionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_defaultConstructorExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_defaultConstructorExpressionAST_enterExpressionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@defaultConstructorExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_defaultConstructorExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                       const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                       const GALGAS_unifiedTypeMap_2D_entry constinArgument_inType,
                                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                       GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_defaultConstructorExpressionAST * object = (const cPtr_defaultConstructorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_defaultConstructorExpressionAST) ;
  GALGAS_unifiedTypeMap_2D_entry var_type_11493 = constinArgument_inType ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_defaultConstructorExpressionAST temp_1 = object ;
    test_0 = GALGAS_bool (kIsNotEqual, temp_1.readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_defaultConstructorExpressionAST temp_2 = object ;
      var_type_11493 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), temp_2.readProperty_mTypeName (), inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 290)) ;
    }
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_type_11493.getter_isNull (SOURCE_FILE ("expression-constructor.galgas", 292)).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_defaultConstructorExpressionAST temp_4 = object ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("cannot infer type"), fixItArray5  COMMA_SOURCE_FILE ("expression-constructor.galgas", 293)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_3) {
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = var_type_11493.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 296)).operator_not (SOURCE_FILE ("expression-constructor.galgas", 296)).boolEnum () ;
      if (kBoolTrue == test_6) {
        const GALGAS_defaultConstructorExpressionAST temp_7 = object ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("an abstract class does not support the default constructor"), fixItArray8  COMMA_SOURCE_FILE ("expression-constructor.galgas", 297)) ;
      }
    }
    if (kBoolFalse == test_6) {
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = GALGAS_bool (kIsEqual, var_type_11493.getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 298)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_9) {
          const GALGAS_defaultConstructorExpressionAST temp_10 = object ;
          TC_Array <C_FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (temp_10.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("this class does not support the default constructor"), fixItArray11  COMMA_SOURCE_FILE ("expression-constructor.galgas", 299)) ;
        }
      }
    }
    const GALGAS_defaultConstructorExpressionAST temp_12 = object ;
    GALGAS_lstring var_usefulnessName_12088 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (var_type_11493.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 302)), temp_12.readProperty_mTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("expression-constructor.galgas", 302)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 302)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_12088 COMMA_SOURCE_FILE ("expression-constructor.galgas", 303)) ;
    }
    const GALGAS_defaultConstructorExpressionAST temp_13 = object ;
    outArgument_outExpression = GALGAS_defaultConstructorExpressionForGeneration::constructor_new (var_type_11493, temp_13.readProperty_mTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("expression-constructor.galgas", 305)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_defaultConstructorExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_defaultConstructorExpressionAST.mSlotID,
                                                  extensionMethod_defaultConstructorExpressionAST_analyzeSemanticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_defaultConstructorExpressionAST_analyzeSemanticExpression (defineExtensionMethod_defaultConstructorExpressionAST_analyzeSemanticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@constructorExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

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
  const GALGAS_constructorExpressionForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 332)) ;
  GALGAS_stringlist var_parameterList_13376 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("expression-constructor.galgas", 333)) ;
  const GALGAS_constructorExpressionForGeneration temp_1 = object ;
  cEnumerator_semanticExpressionListForGeneration enumerator_13400 (temp_1.readProperty_mEffectiveParameterList (), kENUMERATION_UP) ;
  while (enumerator_13400.hasCurrentObject ()) {
    GALGAS_string var_parameter_13617 ;
    callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_13400.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_13617, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 335)) ;
    var_parameterList_13376.addAssign_operation (var_parameter_13617  COMMA_SOURCE_FILE ("expression-constructor.galgas", 342)) ;
    enumerator_13400.gotoNextObject () ;
  }
  const GALGAS_constructorExpressionForGeneration temp_2 = object ;
  const GALGAS_constructorExpressionForGeneration temp_3 = object ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_").add_operation (temp_2.readProperty_mConstructorType ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 344)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 344)).add_operation (GALGAS_string ("::constructor_"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 344)).add_operation (temp_3.readProperty_mConstructorName ().getter_identifierRepresentation (SOURCE_FILE ("expression-constructor.galgas", 345)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 345)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 345)) ;
  cEnumerator_stringlist enumerator_13875 (var_parameterList_13376, kENUMERATION_UP) ;
  while (enumerator_13875.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssign_operation(enumerator_13875.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 348)) ;
    if (enumerator_13875.hasNextObject ()) {
      outArgument_outCppExpression.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 349)) ;
    }
    enumerator_13875.gotoNextObject () ;
  }
  GALGAS_bool var_needsComma_13993 = GALGAS_bool (kIsStrictSup, var_parameterList_13376.getter_length (SOURCE_FILE ("expression-constructor.galgas", 351)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_constructorExpressionForGeneration temp_5 = object ;
    test_4 = temp_5.readProperty_mHasCompilerArgument ().boolEnum () ;
    if (kBoolTrue == test_4) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = var_needsComma_13993.boolEnum () ;
        if (kBoolTrue == test_6) {
          outArgument_outCppExpression.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 354)) ;
        }
      }
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 356)) COMMA_SOURCE_FILE ("expression-constructor.galgas", 356)) ;
      }
      outArgument_outCppExpression.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 357)), inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 357)) ;
      var_needsComma_13993 = GALGAS_bool (true) ;
    }
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = var_needsComma_13993.boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_constructorExpressionForGeneration temp_8 = object ;
      outArgument_outCppExpression.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_8.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 361)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 361)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 361)), inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 361)) ;
    }
  }
  if (kBoolFalse == test_7) {
    const GALGAS_constructorExpressionForGeneration temp_9 = object ;
    outArgument_outCppExpression.plusAssign_operation(extensionGetter_sourceFile (temp_9.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 363)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 363)), inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 363)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_constructorExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_constructorExpressionForGeneration.mSlotID,
                                           extensionMethod_constructorExpressionForGeneration_generateExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_constructorExpressionForGeneration_generateExpression (defineExtensionMethod_constructorExpressionForGeneration_generateExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@defaultConstructorExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

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
  const GALGAS_defaultConstructorExpressionForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 381)) ;
  const GALGAS_defaultConstructorExpressionForGeneration temp_1 = object ;
  const GALGAS_defaultConstructorExpressionForGeneration temp_2 = object ;
  const GALGAS_defaultConstructorExpressionForGeneration temp_3 = object ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_").add_operation (temp_1.readProperty_mResultType ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 383)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 383)).add_operation (GALGAS_string ("::constructor_"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 383)).add_operation (temp_2.readProperty_mResultType ().getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 385)).getter_identifierRepresentation (SOURCE_FILE ("expression-constructor.galgas", 385)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 384)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 385)).add_operation (extensionGetter_sourceFile (temp_3.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 386)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 386)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 386)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_defaultConstructorExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_defaultConstructorExpressionForGeneration.mSlotID,
                                           extensionMethod_defaultConstructorExpressionForGeneration_generateExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_defaultConstructorExpressionForGeneration_generateExpression (defineExtensionMethod_defaultConstructorExpressionForGeneration_generateExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@functionCallExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_functionCallExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_functionCallExpressionAST * object = (const cPtr_functionCallExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_functionCallExpressionAST) ;
  const GALGAS_functionCallExpressionAST temp_0 = object ;
  cEnumerator_actualOutputExpressionList enumerator_2403 (temp_0.readProperty_mExpressionList (), kENUMERATION_UP) ;
  while (enumerator_2403.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) enumerator_2403.current_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 62)) ;
    enumerator_2403.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_functionCallExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_functionCallExpressionAST.mSlotID,
                                                         extensionMethod_functionCallExpressionAST_enterExpressionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_functionCallExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_functionCallExpressionAST_enterExpressionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@functionCallExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_functionCallExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                 const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                 const GALGAS_unifiedTypeMap_2D_entry /* constinArgument_inType */,
                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_functionCallExpressionAST * object = (const cPtr_functionCallExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_functionCallExpressionAST) ;
  const GALGAS_functionCallExpressionAST temp_0 = object ;
  GALGAS_lstring var_usefulnessName_2992 = function_functionNameForUsefulEntitiesGraph (temp_0.readProperty_mFunctionName (), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 76)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_2992 COMMA_SOURCE_FILE ("expression-function-call.galgas", 77)) ;
  }
  GALGAS_functionSignature var_functionSignature_3296 ;
  GALGAS_unifiedTypeMap_2D_entry var_resultType_3338 ;
  GALGAS_bool var_isInternal_3364 ;
  const GALGAS_functionCallExpressionAST temp_1 = object ;
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mFunctionMap ().method_searchKey (temp_1.readProperty_mFunctionName (), var_functionSignature_3296, var_resultType_3338, var_isInternal_3364, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 79)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_isInternal_3364.boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_functionCallExpressionAST temp_3 = object ;
      GALGAS_location var_procDeclarationLocation_3441 = constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mFunctionMap ().getter_locationForKey (temp_3.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 87)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        const GALGAS_functionCallExpressionAST temp_5 = object ;
        test_4 = GALGAS_bool (kIsNotEqual, temp_5.readProperty_mFunctionName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 88)).objectCompare (var_procDeclarationLocation_3441.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 88)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_functionCallExpressionAST temp_6 = object ;
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mFunctionName ().readProperty_location (), GALGAS_string ("this proc is internal to '").add_operation (var_procDeclarationLocation_3441.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 89)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 89)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 89)), fixItArray7  COMMA_SOURCE_FILE ("expression-function-call.galgas", 89)) ;
        }
      }
    }
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    const GALGAS_functionCallExpressionAST temp_9 = object ;
    test_8 = GALGAS_bool (kIsNotEqual, var_functionSignature_3296.getter_length (SOURCE_FILE ("expression-function-call.galgas", 93)).objectCompare (temp_9.readProperty_mExpressionList ().getter_length (SOURCE_FILE ("expression-function-call.galgas", 93)))).boolEnum () ;
    if (kBoolTrue == test_8) {
      const GALGAS_functionCallExpressionAST temp_10 = object ;
      const GALGAS_functionCallExpressionAST temp_11 = object ;
      const GALGAS_functionCallExpressionAST temp_12 = object ;
      TC_Array <C_FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_10.readProperty_mFunctionName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_11.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 95)).add_operation (GALGAS_string ("' function header declares "), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 95)).add_operation (var_functionSignature_3296.getter_length (SOURCE_FILE ("expression-function-call.galgas", 95)).getter_string (SOURCE_FILE ("expression-function-call.galgas", 95)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 95)).add_operation (GALGAS_string (" formal parameter(s), but this function call names "), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 95)).add_operation (temp_12.readProperty_mExpressionList ().getter_length (SOURCE_FILE ("expression-function-call.galgas", 96)).getter_string (SOURCE_FILE ("expression-function-call.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 96)).add_operation (GALGAS_string (" effective argument(s)"), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 96)), fixItArray13  COMMA_SOURCE_FILE ("expression-function-call.galgas", 94)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_8) {
    GALGAS_semanticExpressionListForGeneration var_semanticExpressionListForGeneration_4180 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("expression-function-call.galgas", 100)) ;
    const GALGAS_functionCallExpressionAST temp_14 = object ;
    cEnumerator_functionSignature enumerator_4268 (var_functionSignature_3296, kENUMERATION_UP) ;
    cEnumerator_actualOutputExpressionList enumerator_4345 (temp_14.readProperty_mExpressionList (), kENUMERATION_UP) ;
    while (enumerator_4268.hasCurrentObject () && enumerator_4345.hasCurrentObject ()) {
      GALGAS_semanticExpressionForGeneration var_expression_4636 ;
      callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_4345.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_4268.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_4636, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 102)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_4268.current_mFormalArgumentType (HERE), var_expression_4636.readProperty_mResultType (), enumerator_4345.current_mEndOfExpressionLocation (HERE), var_expression_4636, inCompiler  COMMA_SOURCE_FILE ("expression-function-call.galgas", 110)) ;
      }
      enumGalgasBool test_15 = kBoolTrue ;
      if (kBoolTrue == test_15) {
        test_15 = GALGAS_bool (kIsNotEqual, enumerator_4268.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_4345.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_15) {
          GALGAS_string temp_16 ;
          const enumGalgasBool test_17 = GALGAS_bool (kIsNotEqual, enumerator_4268.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_17) {
            temp_16 = enumerator_4268.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 117)) ;
          }else if (kBoolFalse == test_17) {
            temp_16 = GALGAS_string::makeEmptyString () ;
          }
          GALGAS_string var_s_4895 = GALGAS_string ("!").add_operation (temp_16, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 117)) ;
          TC_Array <C_FixItDescription> fixItArray18 ;
          appendFixItActions (fixItArray18, kFixItReplace, var_s_4895) ;
          inCompiler->emitSemanticError (enumerator_4345.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_4895, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 118)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 118)), fixItArray18  COMMA_SOURCE_FILE ("expression-function-call.galgas", 118)) ;
        }
      }
      var_semanticExpressionListForGeneration_4180.addAssign_operation (var_expression_4636  COMMA_SOURCE_FILE ("expression-function-call.galgas", 121)) ;
      enumerator_4268.gotoNextObject () ;
      enumerator_4345.gotoNextObject () ;
    }
    const GALGAS_functionCallExpressionAST temp_19 = object ;
    const GALGAS_functionCallExpressionAST temp_20 = object ;
    outArgument_outExpression = GALGAS_functionCallExpressionForGeneration::constructor_new (var_resultType_3338, temp_19.readProperty_mFunctionName ().readProperty_location (), temp_20.readProperty_mFunctionName ().readProperty_string (), var_semanticExpressionListForGeneration_4180  COMMA_SOURCE_FILE ("expression-function-call.galgas", 123)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_functionCallExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_functionCallExpressionAST.mSlotID,
                                                  extensionMethod_functionCallExpressionAST_analyzeSemanticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_functionCallExpressionAST_analyzeSemanticExpression (defineExtensionMethod_functionCallExpressionAST_analyzeSemanticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@functionCallExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_functionCallExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                    GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                    GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                    GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                    GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                    GALGAS_string & outArgument_outCppExpression,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_functionCallExpressionForGeneration * object = (const cPtr_functionCallExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_functionCallExpressionForGeneration) ;
  const GALGAS_functionCallExpressionForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 149)) ;
  const GALGAS_functionCallExpressionForGeneration temp_1 = object ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("func-").add_operation (temp_1.readProperty_mFunctionName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-function-call.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 151))  COMMA_SOURCE_FILE ("expression-function-call.galgas", 151)) ;
  GALGAS_stringlist var_parameterList_6369 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("expression-function-call.galgas", 153)) ;
  const GALGAS_functionCallExpressionForGeneration temp_2 = object ;
  cEnumerator_semanticExpressionListForGeneration enumerator_6404 (temp_2.readProperty_mExpressions (), kENUMERATION_UP) ;
  while (enumerator_6404.hasCurrentObject ()) {
    GALGAS_string var_parameter_6455 ;
    callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_6404.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_6455, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 156)) ;
    var_parameterList_6369.addAssign_operation (var_parameter_6455  COMMA_SOURCE_FILE ("expression-function-call.galgas", 157)) ;
    enumerator_6404.gotoNextObject () ;
  }
  const GALGAS_functionCallExpressionForGeneration temp_3 = object ;
  outArgument_outCppExpression = GALGAS_string ("function_").add_operation (temp_3.readProperty_mFunctionName ().getter_identifierRepresentation (SOURCE_FILE ("expression-function-call.galgas", 159)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 159)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 159)) ;
  cEnumerator_stringlist enumerator_6736 (var_parameterList_6369, kENUMERATION_UP) ;
  while (enumerator_6736.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssign_operation(enumerator_6736.current_mValue (HERE).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 161)), inCompiler  COMMA_SOURCE_FILE ("expression-function-call.galgas", 161)) ;
    enumerator_6736.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 163)) COMMA_SOURCE_FILE ("expression-function-call.galgas", 163)) ;
  }
  outArgument_outCppExpression.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 164)), inCompiler  COMMA_SOURCE_FILE ("expression-function-call.galgas", 164)) ;
  const GALGAS_functionCallExpressionForGeneration temp_4 = object ;
  outArgument_outCppExpression.plusAssign_operation(extensionGetter_commaSourceFile (temp_4.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 165)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 165)), inCompiler  COMMA_SOURCE_FILE ("expression-function-call.galgas", 165)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_functionCallExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_functionCallExpressionForGeneration.mSlotID,
                                           extensionMethod_functionCallExpressionForGeneration_generateExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_functionCallExpressionForGeneration_generateExpression (defineExtensionMethod_functionCallExpressionForGeneration_generateExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalTypeInExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_literalTypeInExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                         GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalTypeInExpressionAST * object = (const cPtr_literalTypeInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalTypeInExpressionAST) ;
  {
  const GALGAS_literalTypeInExpressionAST temp_0 = object ;
  GALGAS_unifiedTypeMap_2D_entry joker_2089 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_mLiteralTypeName (), joker_2089 COMMA_SOURCE_FILE ("expression-literal-type.galgas", 50)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_literalTypeInExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_literalTypeInExpressionAST.mSlotID,
                                                         extensionMethod_literalTypeInExpressionAST_enterExpressionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_literalTypeInExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_literalTypeInExpressionAST_enterExpressionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalTypeInExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_literalTypeInExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                  const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                  const GALGAS_unifiedTypeMap_2D_entry /* constinArgument_inType */,
                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                  GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                                  GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalTypeInExpressionAST * object = (const cPtr_literalTypeInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalTypeInExpressionAST) ;
  const GALGAS_literalTypeInExpressionAST temp_0 = object ;
  GALGAS_lstring var_usefulnessName_2591 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mLiteralTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-literal-type.galgas", 63)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_2591 COMMA_SOURCE_FILE ("expression-literal-type.galgas", 64)) ;
  }
  const GALGAS_literalTypeInExpressionAST temp_1 = object ;
  GALGAS_bool joker_2852_26 ; // Joker input parameter
  GALGAS_bool joker_2852_25 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_entry joker_2852_24 ; // Joker input parameter
  GALGAS_typeKindEnum joker_2852_23 ; // Joker input parameter
  GALGAS_bool joker_2852_22 ; // Joker input parameter
  GALGAS_typedPropertyList joker_2852_21 ; // Joker input parameter
  GALGAS_propertyMap joker_2852_20 ; // Joker input parameter
  GALGAS_typedPropertyList joker_2852_19 ; // Joker input parameter
  GALGAS_constructorMap joker_2852_18 ; // Joker input parameter
  GALGAS_getterMap joker_2852_17 ; // Joker input parameter
  GALGAS_setterMap joker_2852_16 ; // Joker input parameter
  GALGAS_instanceMethodMap joker_2852_15 ; // Joker input parameter
  GALGAS_classMethodMap joker_2852_14 ; // Joker input parameter
  GALGAS_optionalMethodMap joker_2852_13 ; // Joker input parameter
  GALGAS_enumerationDescriptorList joker_2852_12 ; // Joker input parameter
  GALGAS_operators joker_2852_11 ; // Joker input parameter
  GALGAS_functionSignature joker_2852_10 ; // Joker input parameter
  GALGAS_constantIndexMap joker_2852_9 ; // Joker input parameter
  GALGAS_enumConstantList joker_2852_8 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_2852_7 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_2852_6 ; // Joker input parameter
  GALGAS_bool joker_2852_5 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_entry joker_2852_4 ; // Joker input parameter
  GALGAS_string joker_2852_3 ; // Joker input parameter
  GALGAS_string joker_2852_2 ; // Joker input parameter
  GALGAS_headerKind joker_2852_1 ; // Joker input parameter
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap ().method_searchKey (temp_1.readProperty_mLiteralTypeName (), joker_2852_26, joker_2852_25, joker_2852_24, joker_2852_23, joker_2852_22, joker_2852_21, joker_2852_20, joker_2852_19, joker_2852_18, joker_2852_17, joker_2852_16, joker_2852_15, joker_2852_14, joker_2852_13, joker_2852_12, joker_2852_11, joker_2852_10, joker_2852_9, joker_2852_8, joker_2852_7, joker_2852_6, joker_2852_5, joker_2852_4, joker_2852_3, joker_2852_2, joker_2852_1, inCompiler COMMA_SOURCE_FILE ("expression-literal-type.galgas", 66)) ;
  const GALGAS_literalTypeInExpressionAST temp_2 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_type_2872 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), temp_2.readProperty_mLiteralTypeName (), inCompiler  COMMA_SOURCE_FILE ("expression-literal-type.galgas", 68)) ;
  const GALGAS_literalTypeInExpressionAST temp_3 = object ;
  outArgument_outExpression = GALGAS_literalTypeInExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), GALGAS_lstring::constructor_new (GALGAS_string ("type"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-literal-type.galgas", 70))  COMMA_SOURCE_FILE ("expression-literal-type.galgas", 70)), inCompiler  COMMA_SOURCE_FILE ("expression-literal-type.galgas", 70)), temp_3.readProperty_mLiteralTypeName ().readProperty_location (), var_type_2872  COMMA_SOURCE_FILE ("expression-literal-type.galgas", 69)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_literalTypeInExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_literalTypeInExpressionAST.mSlotID,
                                                  extensionMethod_literalTypeInExpressionAST_analyzeSemanticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_literalTypeInExpressionAST_analyzeSemanticExpression (defineExtensionMethod_literalTypeInExpressionAST_analyzeSemanticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalTypeInExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_literalTypeInExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                     GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                     GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                     GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                     GALGAS_string & outArgument_outCppExpression,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalTypeInExpressionForGeneration * object = (const cPtr_literalTypeInExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_literalTypeInExpressionForGeneration) ;
  const GALGAS_literalTypeInExpressionForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLiteralType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-literal-type.galgas", 93)) ;
  const GALGAS_literalTypeInExpressionForGeneration temp_1 = object ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_type (& kTypeDescriptor_GALGAS_").add_operation (temp_1.readProperty_mLiteralType ().getter_key (inCompiler COMMA_SOURCE_FILE ("expression-literal-type.galgas", 95)).getter_identifierRepresentation (SOURCE_FILE ("expression-literal-type.galgas", 95)), inCompiler COMMA_SOURCE_FILE ("expression-literal-type.galgas", 94)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-literal-type.galgas", 95)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_literalTypeInExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_literalTypeInExpressionForGeneration.mSlotID,
                                           extensionMethod_literalTypeInExpressionForGeneration_generateExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_literalTypeInExpressionForGeneration_generateExpression (defineExtensionMethod_literalTypeInExpressionForGeneration_generateExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@collectionValueAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_collectionValueAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                 GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_collectionValueAST * object = (const cPtr_collectionValueAST *) inObject ;
  macroValidSharedObject (object, cPtr_collectionValueAST) ;
  const GALGAS_collectionValueAST temp_0 = object ;
  cEnumerator_collectionValueElementList enumerator_5482 (temp_0.readProperty_mElementList (), kENUMERATION_UP) ;
  while (enumerator_5482.hasCurrentObject ()) {
    callExtensionMethod_enterInSemanticContext ((const cPtr_abstractCollectionValueElement *) enumerator_5482.current_mElement (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 145)) ;
    enumerator_5482.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_collectionValueAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_collectionValueAST.mSlotID,
                                                         extensionMethod_collectionValueAST_enterExpressionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_collectionValueAST_enterExpressionInSemanticContext (defineExtensionMethod_collectionValueAST_enterExpressionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@collectionValueAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_collectionValueAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                          const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                          GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                          const GALGAS_unifiedTypeMap_2D_entry constinArgument_inType,
                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                          GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                          GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_collectionValueAST * object = (const cPtr_collectionValueAST *) inObject ;
  macroValidSharedObject (object, cPtr_collectionValueAST) ;
  GALGAS_unifiedTypeMap_2D_entry var_targetType_6069 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_collectionValueAST temp_1 = object ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_targetType_6069 = constinArgument_inType ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_collectionValueAST temp_2 = object ;
    var_targetType_6069 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), temp_2.readProperty_mTypeName (), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 164)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (kIsEqual, var_targetType_6069.objectCompare (GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("expression-collection-value.galgas", 167)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_collectionValueAST temp_4 = object ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("Cannot infer type"), fixItArray5  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 168)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_3) {
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = var_targetType_6069.getter_mSupportCollectionValue (inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 169)).operator_not (SOURCE_FILE ("expression-collection-value.galgas", 169)).boolEnum () ;
      if (kBoolTrue == test_6) {
        const GALGAS_collectionValueAST temp_7 = object ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("the @").add_operation (var_targetType_6069.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 170)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 170)).add_operation (GALGAS_string (" type does not support collection value"), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 170)), fixItArray8  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 170)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_6) {
      const GALGAS_collectionValueAST temp_9 = object ;
      GALGAS_lstring var_usefulnessName_6531 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (var_targetType_6069.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 172)), temp_9.readProperty_mEndOfCollectionValue ()  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 172)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 172)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_6531 COMMA_SOURCE_FILE ("expression-collection-value.galgas", 173)) ;
      }
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        const GALGAS_collectionValueAST temp_11 = object ;
        test_10 = GALGAS_bool (kIsEqual, temp_11.readProperty_mElementList ().getter_length (SOURCE_FILE ("expression-collection-value.galgas", 174)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_10) {
          const GALGAS_collectionValueAST temp_12 = object ;
          outArgument_outExpression = GALGAS_defaultConstructorExpressionForGeneration::constructor_new (var_targetType_6069, temp_12.readProperty_mTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 175)) ;
        }
      }
      if (kBoolFalse == test_10) {
        GALGAS_collectionValueElementListForGeneration var_collectionValueElementListForGeneration_6980 = GALGAS_collectionValueElementListForGeneration::constructor_emptyList (SOURCE_FILE ("expression-collection-value.galgas", 180)) ;
        const GALGAS_collectionValueAST temp_13 = object ;
        cEnumerator_collectionValueElementList enumerator_7005 (temp_13.readProperty_mElementList (), kENUMERATION_UP) ;
        while (enumerator_7005.hasCurrentObject ()) {
          callExtensionMethod_analyze ((const cPtr_abstractCollectionValueElement *) enumerator_7005.current_mElement (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_targetType_6069, ioArgument_ioVariableMap, var_collectionValueElementListForGeneration_6980, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 182)) ;
          enumerator_7005.gotoNextObject () ;
        }
        const GALGAS_collectionValueAST temp_14 = object ;
        outArgument_outExpression = GALGAS_expressionCollectionForGeneration::constructor_new (var_targetType_6069, temp_14.readProperty_mEndOfCollectionValue (), var_collectionValueElementListForGeneration_6980  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 191)) ;
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_collectionValueAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_collectionValueAST.mSlotID,
                                                  extensionMethod_collectionValueAST_analyzeSemanticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_collectionValueAST_analyzeSemanticExpression (defineExtensionMethod_collectionValueAST_analyzeSemanticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@expressionCollectionValue enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_expressionCollectionValue_enterInSemanticContext (const cPtr_abstractCollectionValueElement * inObject,
                                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_expressionCollectionValue * object = (const cPtr_expressionCollectionValue *) inObject ;
  macroValidSharedObject (object, cPtr_expressionCollectionValue) ;
  const GALGAS_expressionCollectionValue temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 208)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_expressionCollectionValue_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_expressionCollectionValue.mSlotID,
                                               extensionMethod_expressionCollectionValue_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_expressionCollectionValue_enterInSemanticContext (defineExtensionMethod_expressionCollectionValue_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@expressionListCollectionValue enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_expressionListCollectionValue_enterInSemanticContext (const cPtr_abstractCollectionValueElement * inObject,
                                                                                  GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_expressionListCollectionValue * object = (const cPtr_expressionListCollectionValue *) inObject ;
  macroValidSharedObject (object, cPtr_expressionListCollectionValue) ;
  const GALGAS_expressionListCollectionValue temp_0 = object ;
  extensionMethod_enterInSemanticContext (temp_0.readProperty_mExpressionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 214)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_expressionListCollectionValue_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_expressionListCollectionValue.mSlotID,
                                               extensionMethod_expressionListCollectionValue_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_expressionListCollectionValue_enterInSemanticContext (defineExtensionMethod_expressionListCollectionValue_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@expressionCollectionValue analyze'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_expressionCollectionValue_analyze (const cPtr_abstractCollectionValueElement * inObject,
                                                               const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                               const GALGAS_unifiedTypeMap_2D_entry constinArgument_inElementType,
                                                               GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                               GALGAS_collectionValueElementListForGeneration & ioArgument_ioCollectionValueElementListForGeneration,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_expressionCollectionValue * object = (const cPtr_expressionCollectionValue *) inObject ;
  macroValidSharedObject (object, cPtr_expressionCollectionValue) ;
  GALGAS_semanticExpressionForGeneration var_expression_9457 ;
  const GALGAS_expressionCollectionValue temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inElementType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_9457, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 237)) ;
  {
  const GALGAS_expressionCollectionValue temp_1 = object ;
  routine_checkAssignmentTypeWithImplicitGetterCall (constinArgument_inElementType, var_expression_9457.readProperty_mResultType (), temp_1.readProperty_mExpressionLocation (), var_expression_9457, inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 246)) ;
  }
  const GALGAS_expressionCollectionValue temp_2 = object ;
  ioArgument_ioCollectionValueElementListForGeneration.addAssign_operation (GALGAS_expressionCollectionValueForGeneration::constructor_new (temp_2.readProperty_mExpressionLocation (), var_expression_9457  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 248))  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 248)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_expressionCollectionValue_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_expressionCollectionValue.mSlotID,
                                extensionMethod_expressionCollectionValue_analyze) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_expressionCollectionValue_analyze (defineExtensionMethod_expressionCollectionValue_analyze, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@expressionListCollectionValue analyze'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_expressionListCollectionValue_analyze (const cPtr_abstractCollectionValueElement * inObject,
                                                                   const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                   GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                   const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                   const GALGAS_unifiedTypeMap_2D_entry constinArgument_inElementType,
                                                                   GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                   GALGAS_collectionValueElementListForGeneration & ioArgument_ioCollectionValueElementListForGeneration,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_expressionListCollectionValue * object = (const cPtr_expressionListCollectionValue *) inObject ;
  macroValidSharedObject (object, cPtr_expressionListCollectionValue) ;
  GALGAS_functionSignature var_formalParameterTypeList_10293 = constinArgument_inElementType.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 260)) ;
  GALGAS_semanticExpressionListForGeneration var_semanticExpressionListForGeneration_10418 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_expressionListCollectionValue temp_1 = object ;
    test_0 = GALGAS_bool (kIsNotEqual, var_formalParameterTypeList_10293.getter_length (SOURCE_FILE ("expression-collection-value.galgas", 262)).objectCompare (temp_1.readProperty_mExpressionList ().getter_length (SOURCE_FILE ("expression-collection-value.galgas", 262)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_expressionListCollectionValue temp_2 = object ;
      const GALGAS_expressionListCollectionValue temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mEndOfExpressionLocation (), GALGAS_string ("element of of '@").add_operation (constinArgument_inElementType.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 263)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 263)).add_operation (var_formalParameterTypeList_10293.getter_length (SOURCE_FILE ("expression-collection-value.galgas", 264)).getter_string (SOURCE_FILE ("expression-collection-value.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 263)).add_operation (GALGAS_string (" parameter(s), while this list has "), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 264)).add_operation (temp_3.readProperty_mExpressionList ().getter_length (SOURCE_FILE ("expression-collection-value.galgas", 265)).getter_string (SOURCE_FILE ("expression-collection-value.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 264)).add_operation (GALGAS_string (" element(s)"), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 265)), fixItArray4  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 263)) ;
      var_semanticExpressionListForGeneration_10418.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    var_semanticExpressionListForGeneration_10418 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("expression-collection-value.galgas", 267)) ;
    const GALGAS_expressionListCollectionValue temp_5 = object ;
    cEnumerator_actualOutputExpressionList enumerator_10893 (temp_5.readProperty_mExpressionList (), kENUMERATION_UP) ;
    cEnumerator_functionSignature enumerator_10933 (var_formalParameterTypeList_10293, kENUMERATION_UP) ;
    while (enumerator_10893.hasCurrentObject () && enumerator_10933.hasCurrentObject ()) {
      GALGAS_semanticExpressionForGeneration var_exp_11231 ;
      callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_10893.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_10933.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_exp_11231, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 269)) ;
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = GALGAS_bool (kIsNotEqual, enumerator_10933.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_10893.current (HERE).readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          GALGAS_string temp_7 ;
          const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, enumerator_10933.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_8) {
            temp_7 = enumerator_10933.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 278)) ;
          }else if (kBoolFalse == test_8) {
            temp_7 = GALGAS_string::makeEmptyString () ;
          }
          GALGAS_string var_s_11327 = GALGAS_string ("!").add_operation (temp_7, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 278)) ;
          TC_Array <C_FixItDescription> fixItArray9 ;
          appendFixItActions (fixItArray9, kFixItReplace, var_s_11327) ;
          inCompiler->emitSemanticError (enumerator_10893.current (HERE).readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_11327, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 279)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 279)), fixItArray9  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 279)) ;
        }
      }
      {
      const GALGAS_expressionListCollectionValue temp_10 = object ;
      routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_10933.current_mFormalArgumentType (HERE), var_exp_11231.readProperty_mResultType (), temp_10.readProperty_mEndOfExpressionLocation (), var_exp_11231, inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 283)) ;
      }
      var_semanticExpressionListForGeneration_10418.addAssign_operation (var_exp_11231  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 284)) ;
      enumerator_10893.gotoNextObject () ;
      enumerator_10933.gotoNextObject () ;
    }
    const GALGAS_expressionListCollectionValue temp_11 = object ;
    ioArgument_ioCollectionValueElementListForGeneration.addAssign_operation (GALGAS_expressionListCollectionForGeneration::constructor_new (temp_11.readProperty_mEndOfExpressionLocation (), var_semanticExpressionListForGeneration_10418  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 286))  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 286)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_expressionListCollectionValue_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_expressionListCollectionValue.mSlotID,
                                extensionMethod_expressionListCollectionValue_analyze) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_expressionListCollectionValue_analyze (defineExtensionMethod_expressionListCollectionValue_analyze, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@expressionCollectionValueForGeneration generateCollectionElementCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_expressionCollectionValueForGeneration_generateCollectionElementCode (const cPtr_abstractCollectionValueElementForGeneration * inObject,
                                                                                                  const GALGAS_unifiedTypeMap_2D_entry /* constinArgument_inTargetType */,
                                                                                                  GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                                  GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                                  GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                                  GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                                  const GALGAS_string constinArgument_inCppTargetVar,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_expressionCollectionValueForGeneration * object = (const cPtr_expressionCollectionValueForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_expressionCollectionValueForGeneration) ;
  GALGAS_string var_sourceVar_13961 ;
  const GALGAS_expressionCollectionValueForGeneration temp_0 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_13961, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 331)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(constinArgument_inCppTargetVar, inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 338)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".plusAssign_operation (").add_operation (var_sourceVar_13961, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 339)), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 339)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 340)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 340)), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 340)) ;
  const GALGAS_expressionCollectionValueForGeneration temp_1 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_1.readProperty_mExpressionLocation (), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 341)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 341)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 341)), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 341)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 342)) COMMA_SOURCE_FILE ("expression-collection-value.galgas", 342)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_expressionCollectionValueForGeneration_generateCollectionElementCode (void) {
  enterExtensionMethod_generateCollectionElementCode (kTypeDescriptor_GALGAS_expressionCollectionValueForGeneration.mSlotID,
                                                      extensionMethod_expressionCollectionValueForGeneration_generateCollectionElementCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_expressionCollectionValueForGeneration_generateCollectionElementCode (defineExtensionMethod_expressionCollectionValueForGeneration_generateCollectionElementCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@expressionListCollectionForGeneration generateCollectionElementCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_expressionListCollectionForGeneration_generateCollectionElementCode (const cPtr_abstractCollectionValueElementForGeneration * inObject,
                                                                                                 const GALGAS_unifiedTypeMap_2D_entry constinArgument_inTargetType,
                                                                                                 GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                                 GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                                 GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                                 GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                                 const GALGAS_string constinArgument_inCppTargetVar,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_expressionListCollectionForGeneration * object = (const cPtr_expressionListCollectionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_expressionListCollectionForGeneration) ;
  GALGAS_stringlist var_parameterList_14991 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("expression-collection-value.galgas", 361)) ;
  const GALGAS_expressionListCollectionForGeneration temp_0 = object ;
  cEnumerator_semanticExpressionListForGeneration enumerator_15027 (temp_0.readProperty_mExpressionList (), kENUMERATION_UP) ;
  while (enumerator_15027.hasCurrentObject ()) {
    GALGAS_string var_parameter_15235 ;
    callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_15027.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_15235, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 363)) ;
    var_parameterList_14991.addAssign_operation (var_parameter_15235  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 370)) ;
    enumerator_15027.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(constinArgument_inCppTargetVar, inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 373)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".addAssign_operation ("), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 375)) ;
  cEnumerator_stringlist enumerator_15426 (var_parameterList_14991, kENUMERATION_UP) ;
  while (enumerator_15426.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_15426.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 377)) ;
    if (enumerator_15426.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 378)) ;
    }
    enumerator_15426.gotoNextObject () ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = constinArgument_inTargetType.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 380)).getter_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("expression-collection-value.galgas", 380)).boolEnum () ;
    if (kBoolTrue == test_1) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 381)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 381)), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 381)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 382)) COMMA_SOURCE_FILE ("expression-collection-value.galgas", 382)) ;
      }
    }
  }
  const GALGAS_expressionListCollectionForGeneration temp_2 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_2.readProperty_mExpressionLocation (), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 384)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 384)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 384)), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 384)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_expressionListCollectionForGeneration_generateCollectionElementCode (void) {
  enterExtensionMethod_generateCollectionElementCode (kTypeDescriptor_GALGAS_expressionListCollectionForGeneration.mSlotID,
                                                      extensionMethod_expressionListCollectionForGeneration_generateCollectionElementCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_expressionListCollectionForGeneration_generateCollectionElementCode (defineExtensionMethod_expressionListCollectionForGeneration_generateCollectionElementCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@expressionCollectionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_expressionCollectionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                  GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                  GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                  GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                  GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                  GALGAS_string & outArgument_outCppExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_expressionCollectionForGeneration * object = (const cPtr_expressionCollectionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_expressionCollectionForGeneration) ;
  const GALGAS_expressionCollectionForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 402)) ;
  outArgument_outCppExpression = GALGAS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-collection-value.galgas", 404)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 404)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 404)) ;
  const GALGAS_expressionCollectionForGeneration temp_1 = object ;
  const GALGAS_expressionCollectionForGeneration temp_2 = object ;
  const GALGAS_expressionCollectionForGeneration temp_3 = object ;
  const GALGAS_expressionCollectionForGeneration temp_4 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (temp_1.readProperty_mResultType ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 406)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 406)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 406)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 406)).add_operation (GALGAS_string (" = GALGAS_"), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 406)).add_operation (temp_2.readProperty_mResultType ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 407)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 407)).add_operation (GALGAS_string ("::constructor_"), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 407)).add_operation (temp_3.readProperty_mResultType ().getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 407)).getter_identifierRepresentation (SOURCE_FILE ("expression-collection-value.galgas", 407)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 407)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 407)).add_operation (extensionGetter_sourceFile (temp_4.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 407)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 407)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 407)), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 406)) ;
  const GALGAS_expressionCollectionForGeneration temp_5 = object ;
  cEnumerator_collectionValueElementListForGeneration enumerator_17034 (temp_5.readProperty_mElementList (), kENUMERATION_UP) ;
  while (enumerator_17034.hasCurrentObject ()) {
    const GALGAS_expressionCollectionForGeneration temp_6 = object ;
    callExtensionMethod_generateCollectionElementCode ((const cPtr_abstractCollectionValueElementForGeneration *) enumerator_17034.current_mElement (HERE).ptr (), temp_6.readProperty_mResultType (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 410)) ;
    enumerator_17034.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_expressionCollectionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_expressionCollectionForGeneration.mSlotID,
                                           extensionMethod_expressionCollectionForGeneration_generateExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_expressionCollectionForGeneration_generateExpression (defineExtensionMethod_expressionCollectionForGeneration_generateExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfInExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_selfInExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                  GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_selfInExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_selfInExpressionAST.mSlotID,
                                                         extensionMethod_selfInExpressionAST_enterExpressionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_selfInExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_selfInExpressionAST_enterExpressionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfInExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_selfInExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                           const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                           GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                           const GALGAS_unifiedTypeMap_2D_entry /* constinArgument_inType */,
                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                           GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                           GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfInExpressionAST * object = (const cPtr_selfInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfInExpressionAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMap_2D_entry var_selfType_2499 ;
    GALGAS_bool var_unused_0_2503 ;
    GALGAS_bool var_unused_1_2503 ;
    const bool optionalResult2479 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_2499, var_unused_0_2503, var_unused_1_2503) ;
    if (!optionalResult2479) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      GALGAS_string var_selfCppName_2537 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName () ;
      const GALGAS_selfInExpressionAST temp_1 = object ;
      outArgument_outExpression = GALGAS_selfInExpressionForGeneration::constructor_new (var_selfType_2499, temp_1.readProperty_mSelfLocation (), var_selfCppName_2537  COMMA_SOURCE_FILE ("expression-self.galgas", 62)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfInExpressionAST temp_2 = object ;
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (temp_2.readProperty_mSelfLocation (), GALGAS_string ("'self' not available in this context"), fixItArray3  COMMA_SOURCE_FILE ("expression-self.galgas", 64)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_selfInExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_selfInExpressionAST.mSlotID,
                                                  extensionMethod_selfInExpressionAST_analyzeSemanticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_selfInExpressionAST_analyzeSemanticExpression (defineExtensionMethod_selfInExpressionAST_analyzeSemanticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfInExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_selfInExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                              GALGAS_string & ioArgument_ioGeneratedCode,
                                                                              GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                              GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                              GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                              GALGAS_string & outArgument_outCppExpression,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfInExpressionForGeneration * object = (const cPtr_selfInExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_selfInExpressionForGeneration) ;
  outArgument_outCppExpression = GALGAS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-self.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("expression-self.galgas", 84)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-self.galgas", 84)) ;
  const GALGAS_selfInExpressionForGeneration temp_0 = object ;
  const GALGAS_selfInExpressionForGeneration temp_1 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const GALGAS_").add_operation (temp_0.readProperty_mResultType ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("expression-self.galgas", 85)), inCompiler COMMA_SOURCE_FILE ("expression-self.galgas", 85)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-self.galgas", 85)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("expression-self.galgas", 85)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-self.galgas", 85)).add_operation (temp_1.readProperty_mSelfCppName (), inCompiler COMMA_SOURCE_FILE ("expression-self.galgas", 85)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-self.galgas", 85)), inCompiler  COMMA_SOURCE_FILE ("expression-self.galgas", 85)) ;
  {
  const GALGAS_selfInExpressionForGeneration temp_2 = object ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_2.readProperty_mSelfCppName () COMMA_SOURCE_FILE ("expression-self.galgas", 86)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_selfInExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_selfInExpressionForGeneration.mSlotID,
                                           extensionMethod_selfInExpressionForGeneration_generateExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_selfInExpressionForGeneration_generateExpression (defineExtensionMethod_selfInExpressionForGeneration_generateExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structPropertyAccessExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_structPropertyAccessExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                                GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_structPropertyAccessExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_structPropertyAccessExpressionAST.mSlotID,
                                                         extensionMethod_structPropertyAccessExpressionAST_enterExpressionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_structPropertyAccessExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_structPropertyAccessExpressionAST_enterExpressionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structPropertyAccessExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_structPropertyAccessExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                         const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                         GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                         const GALGAS_unifiedTypeMap_2D_entry /* constinArgument_inType */,
                                                                                         const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                         GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                         GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structPropertyAccessExpressionAST * object = (const cPtr_structPropertyAccessExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_structPropertyAccessExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_3126 ;
  const GALGAS_structPropertyAccessExpressionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("expression-property-access.galgas", 75)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_3126, inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 72)) ;
  GALGAS_unifiedTypeMap_2D_entry var_expressionType_3210 = var_expression_3126.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_expressionType_3210.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 82)).getter_isStructType (SOURCE_FILE ("expression-property-access.galgas", 82)).operator_not (SOURCE_FILE ("expression-property-access.galgas", 82)).operator_and (var_expressionType_3210.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 82)).getter_isClassType (SOURCE_FILE ("expression-property-access.galgas", 82)).operator_not (SOURCE_FILE ("expression-property-access.galgas", 82)) COMMA_SOURCE_FILE ("expression-property-access.galgas", 82)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_structPropertyAccessExpressionAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mPropertyName ().readProperty_location (), GALGAS_string ("the '.' operator requires the receiver to be a struct or a class"), fixItArray3  COMMA_SOURCE_FILE ("expression-property-access.galgas", 83)) ;
    }
  }
  GALGAS_propertyMap var_propertyMap_3471 = var_expressionType_3210.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 85)) ;
  GALGAS_bool var_isPublic_3562 ;
  GALGAS_unifiedTypeMap_2D_entry var_type_3575 ;
  const GALGAS_structPropertyAccessExpressionAST temp_4 = object ;
  GALGAS_bool joker_3564 ; // Joker input parameter
  var_propertyMap_3471.method_searchKey (temp_4.readProperty_mPropertyName (), var_isPublic_3562, joker_3564, var_type_3575, inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 86)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = var_isPublic_3562.boolEnum () ;
    if (kBoolTrue == test_5) {
    }
  }
  if (kBoolFalse == test_5) {
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      GALGAS_unifiedTypeMap_2D_entry var_selfType_3674 ;
      GALGAS_bool var_unused_0_3678 ;
      GALGAS_bool var_unused_1_3678 ;
      const bool optionalResult3654 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_3674, var_unused_0_3678, var_unused_1_3678) ;
      if (!optionalResult3654) {
        test_6 = kBoolFalse ;
      }
      if (kBoolTrue == test_6) {
        test_6 = GALGAS_bool (kIsNotEqual, var_expressionType_3210.objectCompare (var_selfType_3674)).boolEnum () ;
        if (kBoolTrue == test_6) {
          const GALGAS_structPropertyAccessExpressionAST temp_7 = object ;
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (temp_7.readProperty_mPropertyName ().readProperty_location (), GALGAS_string ("inaccessible property (due to its 'private' qualifier)"), fixItArray8  COMMA_SOURCE_FILE ("expression-property-access.galgas", 90)) ;
        }
      }
    }
  }
  const GALGAS_structPropertyAccessExpressionAST temp_9 = object ;
  const GALGAS_structPropertyAccessExpressionAST temp_10 = object ;
  outArgument_outExpression = GALGAS_structPropertyAccessExpressionForGeneration::constructor_new (var_type_3575, temp_9.readProperty_mOperatorLocation (), var_expression_3126, temp_10.readProperty_mPropertyName ().readProperty_string ()  COMMA_SOURCE_FILE ("expression-property-access.galgas", 93)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_structPropertyAccessExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_structPropertyAccessExpressionAST.mSlotID,
                                                  extensionMethod_structPropertyAccessExpressionAST_analyzeSemanticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_structPropertyAccessExpressionAST_analyzeSemanticExpression (defineExtensionMethod_structPropertyAccessExpressionAST_analyzeSemanticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structPropertyAccessExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_structPropertyAccessExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                            GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                            GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                            GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                            GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                            GALGAS_string & outArgument_outCppExpression,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structPropertyAccessExpressionForGeneration * object = (const cPtr_structPropertyAccessExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_structPropertyAccessExpressionForGeneration) ;
  const GALGAS_structPropertyAccessExpressionForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 118)) ;
  GALGAS_string var_operand_5049 ;
  const GALGAS_structPropertyAccessExpressionForGeneration temp_1 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_5049, inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 120)) ;
  const GALGAS_structPropertyAccessExpressionForGeneration temp_2 = object ;
  outArgument_outCppExpression = var_operand_5049.add_operation (GALGAS_string (".readProperty_"), inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 128)).add_operation (temp_2.readProperty_mStructFieldName ().getter_identifierRepresentation (SOURCE_FILE ("expression-property-access.galgas", 128)), inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 128)).add_operation (GALGAS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 128)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_structPropertyAccessExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_structPropertyAccessExpressionForGeneration.mSlotID,
                                           extensionMethod_structPropertyAccessExpressionForGeneration_generateExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_structPropertyAccessExpressionForGeneration_generateExpression (defineExtensionMethod_structPropertyAccessExpressionForGeneration_generateExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@notExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_notExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                               GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_notExpressionAST * object = (const cPtr_notExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_notExpressionAST) ;
  const GALGAS_notExpressionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 53)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_notExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_notExpressionAST.mSlotID,
                                                         extensionMethod_notExpressionAST_enterExpressionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_notExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_notExpressionAST_enterExpressionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@notExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_notExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                        const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GALGAS_unifiedTypeMap_2D_entry /* constinArgument_inType */,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_notExpressionAST * object = (const cPtr_notExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_notExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_2755 ;
  const GALGAS_notExpressionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("expression-not.galgas", 70)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_2755, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 67)) ;
  GALGAS_unifiedTypeMap_2D_entry var_type_3039 = var_expression_2755.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (var_expression_2755.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_trueExpressionForGeneration).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_notExpressionAST temp_2 = object ;
      outArgument_outExpression = GALGAS_falseExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_2.readProperty_mOperatorLocation ()  COMMA_SOURCE_FILE ("expression-not.galgas", 78)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (var_expression_2755.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_falseExpressionForGeneration).boolEnum () ;
      if (kBoolTrue == test_3) {
        const GALGAS_notExpressionAST temp_4 = object ;
        outArgument_outExpression = GALGAS_trueExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_4.readProperty_mOperatorLocation ()  COMMA_SOURCE_FILE ("expression-not.galgas", 80)) ;
      }
    }
    if (kBoolFalse == test_3) {
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = var_type_3039.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 81)).getter_prefixNotOperator (SOURCE_FILE ("expression-not.galgas", 81)).operator_not (SOURCE_FILE ("expression-not.galgas", 81)).boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_notExpressionAST temp_6 = object ;
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mOperatorLocation (), GALGAS_string ("operand type is '@").add_operation (var_type_3039.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 83)), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 83)).add_operation (GALGAS_string ("' and does not support the 'not' operator"), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 83)), fixItArray7  COMMA_SOURCE_FILE ("expression-not.galgas", 82)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_5) {
        const GALGAS_notExpressionAST temp_8 = object ;
        outArgument_outExpression = GALGAS_notExpressionForGeneration::constructor_new (var_type_3039, temp_8.readProperty_mOperatorLocation (), var_expression_2755  COMMA_SOURCE_FILE ("expression-not.galgas", 87)) ;
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_notExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_notExpressionAST.mSlotID,
                                                  extensionMethod_notExpressionAST_analyzeSemanticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_notExpressionAST_analyzeSemanticExpression (defineExtensionMethod_notExpressionAST_analyzeSemanticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@notExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_notExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                           GALGAS_string & ioArgument_ioGeneratedCode,
                                                                           GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                           GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                           GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                           GALGAS_string & outArgument_outCppExpression,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_notExpressionForGeneration * object = (const cPtr_notExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_notExpressionForGeneration) ;
  const GALGAS_notExpressionForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 111)) ;
  GALGAS_string var_operand_4647 ;
  const GALGAS_notExpressionForGeneration temp_1 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_4647, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 114)) ;
  const GALGAS_notExpressionForGeneration temp_2 = object ;
  outArgument_outCppExpression = var_operand_4647.add_operation (GALGAS_string (".operator_not ("), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 116)).add_operation (extensionGetter_sourceFile (temp_2.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 116)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 116)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_notExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_notExpressionForGeneration.mSlotID,
                                           extensionMethod_notExpressionForGeneration_generateExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_notExpressionForGeneration_generateExpression (defineExtensionMethod_notExpressionForGeneration_generateExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@tildeExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_tildeExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                 GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_tildeExpressionAST * object = (const cPtr_tildeExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_tildeExpressionAST) ;
  const GALGAS_tildeExpressionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 53)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_tildeExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_tildeExpressionAST.mSlotID,
                                                         extensionMethod_tildeExpressionAST_enterExpressionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_tildeExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_tildeExpressionAST_enterExpressionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@tildeExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_tildeExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                          const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                          GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                          const GALGAS_unifiedTypeMap_2D_entry /* constinArgument_inType */,
                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                          GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                          GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_tildeExpressionAST * object = (const cPtr_tildeExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_tildeExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_2962 ;
  const GALGAS_tildeExpressionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("expression-tilde.galgas", 70)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_2962, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 67)) ;
  GALGAS_unifiedTypeMap_2D_entry var_type_3032 = var_expression_2962.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    GALGAS_literalBigIntExpressionForGeneration var_exp_3070 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_expression_2962.ptr ())) ;
    if (NULL == var_exp_3070.ptr ()) {
      test_1 = kBoolFalse ;
    }
    if (kBoolTrue == test_1) {
      outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::constructor_new (var_exp_3070.readProperty_mResultType (), var_exp_3070.readProperty_mLocation (), var_exp_3070.readProperty_mValue ().operator_tilde (SOURCE_FILE ("expression-tilde.galgas", 81))  COMMA_SOURCE_FILE ("expression-tilde.galgas", 78)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = var_type_3032.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 83)).getter_prefixTildeOperator (SOURCE_FILE ("expression-tilde.galgas", 83)).operator_not (SOURCE_FILE ("expression-tilde.galgas", 83)).boolEnum () ;
      if (kBoolTrue == test_2) {
        const GALGAS_tildeExpressionAST temp_3 = object ;
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GALGAS_string ("operand type is '@").add_operation (var_type_3032.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 85)), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 85)).add_operation (GALGAS_string ("' and does not support the '~' operator"), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 85)), fixItArray4  COMMA_SOURCE_FILE ("expression-tilde.galgas", 84)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_2) {
      const GALGAS_tildeExpressionAST temp_5 = object ;
      outArgument_outExpression = GALGAS_tildeExpressionForGeneration::constructor_new (var_type_3032, temp_5.readProperty_mOperatorLocation (), var_expression_2962  COMMA_SOURCE_FILE ("expression-tilde.galgas", 89)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_tildeExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_tildeExpressionAST.mSlotID,
                                                  extensionMethod_tildeExpressionAST_analyzeSemanticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_tildeExpressionAST_analyzeSemanticExpression (defineExtensionMethod_tildeExpressionAST_analyzeSemanticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@tildeExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_tildeExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                             GALGAS_string & ioArgument_ioGeneratedCode,
                                                                             GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                             GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                             GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                             GALGAS_string & outArgument_outCppExpression,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_tildeExpressionForGeneration * object = (const cPtr_tildeExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_tildeExpressionForGeneration) ;
  const GALGAS_tildeExpressionForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 113)) ;
  GALGAS_string var_operand_4485 ;
  const GALGAS_tildeExpressionForGeneration temp_1 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_4485, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 116)) ;
  const GALGAS_tildeExpressionForGeneration temp_2 = object ;
  outArgument_outCppExpression = var_operand_4485.add_operation (GALGAS_string (".operator_tilde ("), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 118)).add_operation (extensionGetter_sourceFile (temp_2.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 118)), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 118)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 118)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_tildeExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_tildeExpressionForGeneration.mSlotID,
                                           extensionMethod_tildeExpressionForGeneration_generateExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_tildeExpressionForGeneration_generateExpression (defineExtensionMethod_tildeExpressionForGeneration_generateExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@bangExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_bangExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_bangExpressionAST * object = (const cPtr_bangExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_bangExpressionAST) ;
  const GALGAS_bangExpressionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 53)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_bangExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_bangExpressionAST.mSlotID,
                                                         extensionMethod_bangExpressionAST_enterExpressionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_bangExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_bangExpressionAST_enterExpressionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@bangExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_bangExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                         const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                         GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                         const GALGAS_unifiedTypeMap_2D_entry /* constinArgument_inType */,
                                                                         const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                         GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                         GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_bangExpressionAST * object = (const cPtr_bangExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_bangExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_2959 ;
  const GALGAS_bangExpressionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("expression-bang.galgas", 70)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_2959, inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 67)) ;
  GALGAS_unifiedTypeMap_2D_entry var_type_3029 = var_expression_2959.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    GALGAS_unifiedTypeMap_2D_entry var_classIndex_3421 ;
    const bool optionalResult3390 = var_type_3029.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 84)).optional_weakReferenceType (var_classIndex_3421) ;
    if (!optionalResult3390) {
      test_1 = kBoolFalse ;
    }
    if (kBoolTrue == test_1) {
      const GALGAS_bangExpressionAST temp_2 = object ;
      outArgument_outExpression = GALGAS_bangExpressionForGeneration::constructor_new (var_classIndex_3421, temp_2.readProperty_mOperatorLocation (), var_expression_2959, var_type_3029.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 89))  COMMA_SOURCE_FILE ("expression-bang.galgas", 85)) ;
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_bangExpressionAST temp_3 = object ;
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GALGAS_string ("operand type is '@").add_operation (var_type_3029.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 93)), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 93)).add_operation (GALGAS_string ("' and does not support the '\xC2""\xB0""' operator"), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 93)), fixItArray4  COMMA_SOURCE_FILE ("expression-bang.galgas", 92)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_bangExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_bangExpressionAST.mSlotID,
                                                  extensionMethod_bangExpressionAST_analyzeSemanticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_bangExpressionAST_analyzeSemanticExpression (defineExtensionMethod_bangExpressionAST_analyzeSemanticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@bangExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_bangExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                            GALGAS_string & ioArgument_ioGeneratedCode,
                                                                            GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                            GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                            GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                            GALGAS_string & outArgument_outCppExpression,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_bangExpressionForGeneration * object = (const cPtr_bangExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_bangExpressionForGeneration) ;
  const GALGAS_bangExpressionForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 115)) ;
  GALGAS_string var_operand_4755 ;
  const GALGAS_bangExpressionForGeneration temp_1 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_4755, inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 117)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 125)) COMMA_SOURCE_FILE ("expression-bang.galgas", 125)) ;
  }
  const GALGAS_bangExpressionForGeneration temp_2 = object ;
  outArgument_outCppExpression = var_operand_4755.add_operation (GALGAS_string (".bang_"), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 126)).add_operation (temp_2.readProperty_mReceiverTypeName ().getter_identifierRepresentation (SOURCE_FILE ("expression-bang.galgas", 126)), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 126)) ;
  const GALGAS_bangExpressionForGeneration temp_3 = object ;
  outArgument_outCppExpression.plusAssign_operation(GALGAS_string (" (").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 127)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 127)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 127)), inCompiler  COMMA_SOURCE_FILE ("expression-bang.galgas", 127)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_bangExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_bangExpressionForGeneration.mSlotID,
                                           extensionMethod_bangExpressionForGeneration_generateExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_bangExpressionForGeneration_generateExpression (defineExtensionMethod_bangExpressionForGeneration_generateExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@unaryWrappingMinusExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_unaryWrappingMinusExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_unaryWrappingMinusExpressionAST * object = (const cPtr_unaryWrappingMinusExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_unaryWrappingMinusExpressionAST) ;
  const GALGAS_unaryWrappingMinusExpressionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 53)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_unaryWrappingMinusExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_unaryWrappingMinusExpressionAST.mSlotID,
                                                         extensionMethod_unaryWrappingMinusExpressionAST_enterExpressionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_unaryWrappingMinusExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_unaryWrappingMinusExpressionAST_enterExpressionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@unaryWrappingMinusExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_unaryWrappingMinusExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                       const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                       const GALGAS_unifiedTypeMap_2D_entry /* constinArgument_inType */,
                                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                       GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_unaryWrappingMinusExpressionAST * object = (const cPtr_unaryWrappingMinusExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_unaryWrappingMinusExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_2828 ;
  const GALGAS_unaryWrappingMinusExpressionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 70)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_2828, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 67)) ;
  GALGAS_unifiedTypeMap_2D_entry var_type_3112 = var_expression_2828.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_type_3112.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 77)).getter_prefixMinusOperatorNoOVF (SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 77)).operator_not (SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 77)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_unaryWrappingMinusExpressionAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOperatorLocation (), GALGAS_string ("operand type is '@").add_operation (var_type_3112.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 79)), inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 79)).add_operation (GALGAS_string ("' and does not support the prefix minus operator"), inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 79)), fixItArray3  COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 78)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_unaryWrappingMinusExpressionAST temp_4 = object ;
    outArgument_outExpression = GALGAS_unaryWrappingMinusExpressionForGeneration::constructor_new (var_type_3112, temp_4.readProperty_mOperatorLocation (), var_expression_2828  COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 83)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_unaryWrappingMinusExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_unaryWrappingMinusExpressionAST.mSlotID,
                                                  extensionMethod_unaryWrappingMinusExpressionAST_analyzeSemanticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_unaryWrappingMinusExpressionAST_analyzeSemanticExpression (defineExtensionMethod_unaryWrappingMinusExpressionAST_analyzeSemanticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@unaryWrappingMinusExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_unaryWrappingMinusExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                          GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                          GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                          GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                          GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                          GALGAS_string & outArgument_outCppExpression,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_unaryWrappingMinusExpressionForGeneration * object = (const cPtr_unaryWrappingMinusExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_unaryWrappingMinusExpressionForGeneration) ;
  const GALGAS_unaryWrappingMinusExpressionForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 106)) ;
  GALGAS_string var_operand_4558 ;
  const GALGAS_unaryWrappingMinusExpressionForGeneration temp_1 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_4558, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 108)) ;
  outArgument_outCppExpression = var_operand_4558.add_operation (GALGAS_string (".operator_unary_minus_no_ovf ()"), inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 116)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_unaryWrappingMinusExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_unaryWrappingMinusExpressionForGeneration.mSlotID,
                                           extensionMethod_unaryWrappingMinusExpressionForGeneration_generateExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_unaryWrappingMinusExpressionForGeneration_generateExpression (defineExtensionMethod_unaryWrappingMinusExpressionForGeneration_generateExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@orExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_orExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_orExpressionAST * object = (const cPtr_orExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_orExpressionAST) ;
  const GALGAS_orExpressionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 144)) ;
  const GALGAS_orExpressionAST temp_1 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 145)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_orExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_orExpressionAST.mSlotID,
                                                         extensionMethod_orExpressionAST_enterExpressionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_orExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_orExpressionAST_enterExpressionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@orExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_orExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                       const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GALGAS_unifiedTypeMap_2D_entry constinArgument_inInferenceType,
                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                       GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_orExpressionAST * object = (const cPtr_orExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_orExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_6613 ;
  const GALGAS_orExpressionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_6613, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 158)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_6906 ;
  const GALGAS_orExpressionAST temp_1 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_6613.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_6906, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 167)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_6978 = var_leftExpression_6613.readProperty_mResultType () ;
  {
  const GALGAS_orExpressionAST temp_2 = object ;
  routine_checkDiadicOperator (var_leftType_6978, var_rightExpression_6906.readProperty_mResultType (), var_leftType_6978.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 180)).getter_infixOrOperator (SOURCE_FILE ("expression-or.galgas", 180)), GALGAS_string ("|"), temp_2.readProperty_mOperatorLocation (), var_rightExpression_6906, inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 177)) ;
  }
  const GALGAS_orExpressionAST temp_3 = object ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_6978, temp_3.readProperty_mOperatorLocation (), var_leftExpression_6613, GALGAS_binaryOperator::constructor_operator_5F_or (SOURCE_FILE ("expression-or.galgas", 189)), var_rightExpression_6906  COMMA_SOURCE_FILE ("expression-or.galgas", 185)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_orExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_orExpressionAST.mSlotID,
                                                  extensionMethod_orExpressionAST_analyzeSemanticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_orExpressionAST_analyzeSemanticExpression (defineExtensionMethod_orExpressionAST_analyzeSemanticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@orShortExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_orShortExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_orShortExpressionAST * object = (const cPtr_orShortExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_orShortExpressionAST) ;
  const GALGAS_orShortExpressionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 199)) ;
  const GALGAS_orShortExpressionAST temp_1 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 200)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_orShortExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_orShortExpressionAST.mSlotID,
                                                         extensionMethod_orShortExpressionAST_enterExpressionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_orShortExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_orShortExpressionAST_enterExpressionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@orShortExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_orShortExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                            const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                            GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                            const GALGAS_unifiedTypeMap_2D_entry constinArgument_inInferenceType,
                                                                            const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                            GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                            GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_orShortExpressionAST * object = (const cPtr_orShortExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_orShortExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_8483 ;
  const GALGAS_orShortExpressionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_8483, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 213)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_8776 ;
  const GALGAS_orShortExpressionAST temp_1 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_8483.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_8776, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 222)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_8850 = var_leftExpression_8483.readProperty_mResultType () ;
  {
  const GALGAS_orShortExpressionAST temp_2 = object ;
  routine_checkDiadicOperator (var_leftType_8850, var_rightExpression_8776.readProperty_mResultType (), var_leftType_8850.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 235)).getter_infixOrOperator (SOURCE_FILE ("expression-or.galgas", 235)), GALGAS_string ("|"), temp_2.readProperty_mOperatorLocation (), var_rightExpression_8776, inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 232)) ;
  }
  const GALGAS_orShortExpressionAST temp_3 = object ;
  outArgument_outExpression = GALGAS_orShortExpressionForGeneration::constructor_new (var_leftType_8850, temp_3.readProperty_mOperatorLocation (), var_leftExpression_8483, var_rightExpression_8776  COMMA_SOURCE_FILE ("expression-or.galgas", 241)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_orShortExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_orShortExpressionAST.mSlotID,
                                                  extensionMethod_orShortExpressionAST_analyzeSemanticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_orShortExpressionAST_analyzeSemanticExpression (defineExtensionMethod_orShortExpressionAST_analyzeSemanticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@xorExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_xorExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                               GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_xorExpressionAST * object = (const cPtr_xorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_xorExpressionAST) ;
  const GALGAS_xorExpressionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 253)) ;
  const GALGAS_xorExpressionAST temp_1 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 254)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_xorExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_xorExpressionAST.mSlotID,
                                                         extensionMethod_xorExpressionAST_enterExpressionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_xorExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_xorExpressionAST_enterExpressionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@xorExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_xorExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                        const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GALGAS_unifiedTypeMap_2D_entry constinArgument_inInferenceType,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_xorExpressionAST * object = (const cPtr_xorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_xorExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_10344 ;
  const GALGAS_xorExpressionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_10344, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 267)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_10637 ;
  const GALGAS_xorExpressionAST temp_1 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_10344.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_10637, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 276)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_10711 = var_leftExpression_10344.readProperty_mResultType () ;
  {
  const GALGAS_xorExpressionAST temp_2 = object ;
  routine_checkDiadicOperator (var_leftType_10711, var_rightExpression_10637.readProperty_mResultType (), var_leftType_10711.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 289)).getter_infixXorOperator (SOURCE_FILE ("expression-or.galgas", 289)), GALGAS_string ("^"), temp_2.readProperty_mOperatorLocation (), var_rightExpression_10637, inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 286)) ;
  }
  const GALGAS_xorExpressionAST temp_3 = object ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_10711, temp_3.readProperty_mOperatorLocation (), var_leftExpression_10344, GALGAS_binaryOperator::constructor_operator_5F_xor (SOURCE_FILE ("expression-or.galgas", 299)), var_rightExpression_10637  COMMA_SOURCE_FILE ("expression-or.galgas", 295)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_xorExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_xorExpressionAST.mSlotID,
                                                  extensionMethod_xorExpressionAST_analyzeSemanticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_xorExpressionAST_analyzeSemanticExpression (defineExtensionMethod_xorExpressionAST_analyzeSemanticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@closedSliceExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_closedSliceExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_closedSliceExpressionAST * object = (const cPtr_closedSliceExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_closedSliceExpressionAST) ;
  const GALGAS_closedSliceExpressionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 309)) ;
  const GALGAS_closedSliceExpressionAST temp_1 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 310)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_closedSliceExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_closedSliceExpressionAST.mSlotID,
                                                         extensionMethod_closedSliceExpressionAST_enterExpressionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_closedSliceExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_closedSliceExpressionAST_enterExpressionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@closedSliceExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_closedSliceExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GALGAS_unifiedTypeMap_2D_entry /* constinArgument_inInferenceType */,
                                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_closedSliceExpressionAST * object = (const cPtr_closedSliceExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_closedSliceExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_12287 ;
  const GALGAS_closedSliceExpressionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType (), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_12287, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 324)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_12598 ;
  const GALGAS_closedSliceExpressionAST temp_1 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType (), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_12598, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 333)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_12672 = var_leftExpression_12287.readProperty_mResultType () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsNotEqual, var_leftType_12672.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 343)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (var_leftExpression_12287.readProperty_mLocation (), GALGAS_string ("the left expression or '...' operator should an @uint"), fixItArray3  COMMA_SOURCE_FILE ("expression-or.galgas", 344)) ;
    }
  }
  GALGAS_unifiedTypeMap_2D_entry var_rightType_12873 = var_rightExpression_12598.readProperty_mResultType () ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsNotEqual, var_rightType_12873.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 347)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (var_rightExpression_12598.readProperty_mLocation (), GALGAS_string ("the right expression or '...' operator should an @uint"), fixItArray5  COMMA_SOURCE_FILE ("expression-or.galgas", 348)) ;
    }
  }
  const GALGAS_closedSliceExpressionAST temp_6 = object ;
  outArgument_outExpression = GALGAS_closedSliceExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), GALGAS_lstring::constructor_new (GALGAS_string ("range"), var_leftExpression_12287.readProperty_mLocation ()  COMMA_SOURCE_FILE ("expression-or.galgas", 352)), inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 352)), temp_6.readProperty_mOperatorLocation (), var_leftExpression_12287, var_rightExpression_12598  COMMA_SOURCE_FILE ("expression-or.galgas", 351)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_closedSliceExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_closedSliceExpressionAST.mSlotID,
                                                  extensionMethod_closedSliceExpressionAST_analyzeSemanticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_closedSliceExpressionAST_analyzeSemanticExpression (defineExtensionMethod_closedSliceExpressionAST_analyzeSemanticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@openedSliceExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_openedSliceExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_openedSliceExpressionAST * object = (const cPtr_openedSliceExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_openedSliceExpressionAST) ;
  const GALGAS_openedSliceExpressionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 364)) ;
  const GALGAS_openedSliceExpressionAST temp_1 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 365)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_openedSliceExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_openedSliceExpressionAST.mSlotID,
                                                         extensionMethod_openedSliceExpressionAST_enterExpressionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_openedSliceExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_openedSliceExpressionAST_enterExpressionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@openedSliceExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_openedSliceExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GALGAS_unifiedTypeMap_2D_entry /* constinArgument_inInferenceType */,
                                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_openedSliceExpressionAST * object = (const cPtr_openedSliceExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_openedSliceExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_14464 ;
  const GALGAS_openedSliceExpressionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType (), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_14464, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 379)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_14775 ;
  const GALGAS_openedSliceExpressionAST temp_1 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType (), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_14775, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 388)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_14849 = var_leftExpression_14464.readProperty_mResultType () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsNotEqual, var_leftType_14849.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 398)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (var_leftExpression_14464.readProperty_mLocation (), GALGAS_string ("the left expression or '...' operator should an @uint"), fixItArray3  COMMA_SOURCE_FILE ("expression-or.galgas", 399)) ;
    }
  }
  GALGAS_unifiedTypeMap_2D_entry var_rightType_15050 = var_rightExpression_14775.readProperty_mResultType () ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsNotEqual, var_rightType_15050.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 402)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (var_rightExpression_14775.readProperty_mLocation (), GALGAS_string ("the right expression or '...' operator should an @uint"), fixItArray5  COMMA_SOURCE_FILE ("expression-or.galgas", 403)) ;
    }
  }
  const GALGAS_openedSliceExpressionAST temp_6 = object ;
  outArgument_outExpression = GALGAS_openedSliceExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), GALGAS_lstring::constructor_new (GALGAS_string ("range"), var_leftExpression_14464.readProperty_mLocation ()  COMMA_SOURCE_FILE ("expression-or.galgas", 407)), inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 407)), temp_6.readProperty_mOperatorLocation (), var_leftExpression_14464, var_rightExpression_14775  COMMA_SOURCE_FILE ("expression-or.galgas", 406)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_openedSliceExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_openedSliceExpressionAST.mSlotID,
                                                  extensionMethod_openedSliceExpressionAST_analyzeSemanticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_openedSliceExpressionAST_analyzeSemanticExpression (defineExtensionMethod_openedSliceExpressionAST_analyzeSemanticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@orShortExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

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
  const GALGAS_orShortExpressionForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLeftExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 445)) ;
  GALGAS_string var_leftTemporaryOperand_17248 ;
  const GALGAS_orShortExpressionForGeneration temp_1 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_17248, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 447)) ;
  GALGAS_string var_testVar_17291 = GALGAS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-or.galgas", 455)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 455)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 455)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_bool ").add_operation (var_testVar_17291, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 456)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 456)).add_operation (var_leftTemporaryOperand_17248, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 456)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 456)), inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 456)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolTrue != ").add_operation (var_testVar_17291, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 457)).add_operation (GALGAS_string (".boolEnum ()) {\n"), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 457)), inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 457)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 459)) ;
  }
  GALGAS_string var_rightTemporaryOperand_17773 ;
  const GALGAS_orShortExpressionForGeneration temp_2 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_17773, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 460)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_testVar_17291.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 467)).add_operation (var_rightTemporaryOperand_17773, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 467)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 467)), inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 467)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 468)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 469)) ;
  outArgument_outCppExpression = var_testVar_17291 ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_orShortExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_orShortExpressionForGeneration.mSlotID,
                                           extensionMethod_orShortExpressionForGeneration_generateExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_orShortExpressionForGeneration_generateExpression (defineExtensionMethod_orShortExpressionForGeneration_generateExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@closedSliceExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

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
  const GALGAS_closedSliceExpressionForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLeftExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 481)) ;
  GALGAS_string var_leftTemporaryOperand_18572 ;
  const GALGAS_closedSliceExpressionForGeneration temp_1 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_18572, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 483)) ;
  GALGAS_string var_rightTemporaryOperand_18777 ;
  const GALGAS_closedSliceExpressionForGeneration temp_2 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_18777, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 491)) ;
  const GALGAS_closedSliceExpressionForGeneration temp_3 = object ;
  const GALGAS_closedSliceExpressionForGeneration temp_4 = object ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_range (").add_operation (var_leftTemporaryOperand_18572, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 500)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 500)).add_operation (var_rightTemporaryOperand_18777, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 500)).add_operation (GALGAS_string (".substract_operation ("), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 501)).add_operation (var_leftTemporaryOperand_18572, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 501)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 501)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 501)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 501)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 501)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 501)).add_operation (GALGAS_string (").add_operation (GALGAS_uint (1), "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 501)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 501)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 501)).add_operation (extensionGetter_commaSourceFile (temp_4.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 501)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 501)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 501)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_closedSliceExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_closedSliceExpressionForGeneration.mSlotID,
                                           extensionMethod_closedSliceExpressionForGeneration_generateExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_closedSliceExpressionForGeneration_generateExpression (defineExtensionMethod_closedSliceExpressionForGeneration_generateExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@openedSliceExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

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
  const GALGAS_openedSliceExpressionForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLeftExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 513)) ;
  GALGAS_string var_leftTemporaryOperand_19750 ;
  const GALGAS_openedSliceExpressionForGeneration temp_1 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_19750, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 515)) ;
  GALGAS_string var_rightTemporaryOperand_19955 ;
  const GALGAS_openedSliceExpressionForGeneration temp_2 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_19955, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 523)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 531)) COMMA_SOURCE_FILE ("expression-or.galgas", 531)) ;
  }
  const GALGAS_openedSliceExpressionForGeneration temp_3 = object ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_range (").add_operation (var_leftTemporaryOperand_19750, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 533)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 533)).add_operation (var_rightTemporaryOperand_19955, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 533)).add_operation (GALGAS_string (".substract_operation ("), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 534)).add_operation (var_leftTemporaryOperand_19750, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 534)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 534)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 534)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 534)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 535)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 534)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 535)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_openedSliceExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_openedSliceExpressionForGeneration.mSlotID,
                                           extensionMethod_openedSliceExpressionForGeneration_generateExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_openedSliceExpressionForGeneration_generateExpression (defineExtensionMethod_openedSliceExpressionForGeneration_generateExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@andExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_andExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                               GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_andExpressionAST * object = (const cPtr_andExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_andExpressionAST) ;
  const GALGAS_andExpressionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 84)) ;
  const GALGAS_andExpressionAST temp_1 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 85)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_andExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_andExpressionAST.mSlotID,
                                                         extensionMethod_andExpressionAST_enterExpressionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_andExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_andExpressionAST_enterExpressionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@andExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_andExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                        const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GALGAS_unifiedTypeMap_2D_entry constinArgument_inInferenceType,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_andExpressionAST * object = (const cPtr_andExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_andExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_4278 ;
  const GALGAS_andExpressionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_4278, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 98)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_4570 ;
  const GALGAS_andExpressionAST temp_1 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_4278.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_4570, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 107)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_4644 = var_leftExpression_4278.readProperty_mResultType () ;
  {
  const GALGAS_andExpressionAST temp_2 = object ;
  routine_checkDiadicOperator (var_leftType_4644, var_rightExpression_4570.readProperty_mResultType (), var_leftType_4644.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 120)).getter_infixAndOperator (SOURCE_FILE ("expression-and.galgas", 120)), GALGAS_string ("&"), temp_2.readProperty_mOperatorLocation (), var_rightExpression_4570, inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 117)) ;
  }
  const GALGAS_andExpressionAST temp_3 = object ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_4644, temp_3.readProperty_mOperatorLocation (), var_leftExpression_4278, GALGAS_binaryOperator::constructor_operator_5F_and (SOURCE_FILE ("expression-and.galgas", 130)), var_rightExpression_4570  COMMA_SOURCE_FILE ("expression-and.galgas", 126)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_andExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_andExpressionAST.mSlotID,
                                                  extensionMethod_andExpressionAST_analyzeSemanticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_andExpressionAST_analyzeSemanticExpression (defineExtensionMethod_andExpressionAST_analyzeSemanticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@andShortExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_andShortExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                    GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_andShortExpressionAST * object = (const cPtr_andShortExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_andShortExpressionAST) ;
  const GALGAS_andShortExpressionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 140)) ;
  const GALGAS_andShortExpressionAST temp_1 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 141)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_andShortExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_andShortExpressionAST.mSlotID,
                                                         extensionMethod_andShortExpressionAST_enterExpressionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_andShortExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_andShortExpressionAST_enterExpressionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@andShortExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_andShortExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                             const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GALGAS_unifiedTypeMap_2D_entry constinArgument_inInferenceType,
                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                             GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                             GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_andShortExpressionAST * object = (const cPtr_andShortExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_andShortExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_6177 ;
  const GALGAS_andShortExpressionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_6177, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 154)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_6469 ;
  const GALGAS_andShortExpressionAST temp_1 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_6177.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_6469, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 163)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_6543 = var_leftExpression_6177.readProperty_mResultType () ;
  {
  const GALGAS_andShortExpressionAST temp_2 = object ;
  routine_checkDiadicOperator (var_leftType_6543, var_rightExpression_6469.readProperty_mResultType (), var_leftType_6543.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 176)).getter_infixAndOperator (SOURCE_FILE ("expression-and.galgas", 176)), GALGAS_string ("&"), temp_2.readProperty_mOperatorLocation (), var_rightExpression_6469, inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 173)) ;
  }
  const GALGAS_andShortExpressionAST temp_3 = object ;
  outArgument_outExpression = GALGAS_andShortExpressionForGeneration::constructor_new (var_leftType_6543, temp_3.readProperty_mOperatorLocation (), var_leftExpression_6177, var_rightExpression_6469  COMMA_SOURCE_FILE ("expression-and.galgas", 182)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_andShortExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_andShortExpressionAST.mSlotID,
                                                  extensionMethod_andShortExpressionAST_analyzeSemanticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_andShortExpressionAST_analyzeSemanticExpression (defineExtensionMethod_andShortExpressionAST_analyzeSemanticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@andShortExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

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
  const GALGAS_andShortExpressionForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLeftExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 206)) ;
  GALGAS_string var_leftTemporaryOperand_8034 ;
  const GALGAS_andShortExpressionForGeneration temp_1 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_8034, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 208)) ;
  GALGAS_string var_testVar_8077 = GALGAS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-and.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 216)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 216)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_bool ").add_operation (var_testVar_8077, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 217)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 217)).add_operation (var_leftTemporaryOperand_8034, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 217)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 217)), inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 217)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolTrue == ").add_operation (var_testVar_8077, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 218)).add_operation (GALGAS_string (".boolEnum ()) {\n"), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 218)), inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 218)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 220)) ;
  }
  GALGAS_string var_rightTemporaryOperand_8559 ;
  const GALGAS_andShortExpressionForGeneration temp_2 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_8559, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 221)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_testVar_8077.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 228)).add_operation (var_rightTemporaryOperand_8559, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 228)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 228)), inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 228)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 229)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 230)) ;
  outArgument_outCppExpression = var_testVar_8077 ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_andShortExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_andShortExpressionForGeneration.mSlotID,
                                           extensionMethod_andShortExpressionForGeneration_generateExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_andShortExpressionForGeneration_generateExpression (defineExtensionMethod_andShortExpressionForGeneration_generateExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'checkAssignmentTypes'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_checkAssignmentTypes (const GALGAS_unifiedTypeMap_2D_entry constinArgument_inTargetType,
                                   const GALGAS_unifiedTypeMap_2D_entry constinArgument_inSourceType,
                                   const GALGAS_location constinArgument_inErrorLocation,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_entry var_sourceType_2264 = constinArgument_inSourceType ;
  GALGAS_bool var_ok_2294 = GALGAS_bool (kIsEqual, constinArgument_inTargetType.objectCompare (var_sourceType_2264)) ;
  if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 46)).isValid ()) {
    uint32_t variant_2330 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 46)).uintValue () ;
    bool loop_2330 = true ;
    while (loop_2330) {
      loop_2330 = var_ok_2294.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 46)).operator_and (var_sourceType_2264.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 46)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 46)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 46)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 46)).isValid () ;
      if (loop_2330) {
        loop_2330 = var_ok_2294.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 46)).operator_and (var_sourceType_2264.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 46)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 46)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 46)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 46)).boolValue () ;
      }
      if (loop_2330 && (0 == variant_2330)) {
        loop_2330 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 46)) ;
      }
      if (loop_2330) {
        variant_2330 -- ;
        var_sourceType_2264 = var_sourceType_2264.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 47)) ;
        var_ok_2294 = GALGAS_bool (kIsEqual, constinArgument_inTargetType.objectCompare (var_sourceType_2264)) ;
      }
    }
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_ok_2294.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 50)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_unifiedTypeMap_2D_entry var_targetType_2580 ;
      const bool optionalResult2549 = constinArgument_inTargetType.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 50)).optional_weakReferenceType (var_targetType_2580) ;
      if (!optionalResult2549) {
        test_0 = kBoolFalse ;
      }
      if (kBoolTrue == test_0) {
        var_sourceType_2264 = constinArgument_inSourceType ;
        var_ok_2294 = GALGAS_bool (kIsEqual, var_targetType_2580.objectCompare (var_sourceType_2264)) ;
        if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 53)).isValid ()) {
          uint32_t variant_2659 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 53)).uintValue () ;
          bool loop_2659 = true ;
          while (loop_2659) {
            loop_2659 = var_ok_2294.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 53)).operator_and (var_sourceType_2264.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 53)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 53)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 53)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 53)).isValid () ;
            if (loop_2659) {
              loop_2659 = var_ok_2294.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 53)).operator_and (var_sourceType_2264.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 53)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 53)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 53)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 53)).boolValue () ;
            }
            if (loop_2659 && (0 == variant_2659)) {
              loop_2659 = false ;
              inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 53)) ;
            }
            if (loop_2659) {
              variant_2659 -- ;
              var_sourceType_2264 = var_sourceType_2264.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 54)) ;
              var_ok_2294 = GALGAS_bool (kIsEqual, var_targetType_2580.objectCompare (var_sourceType_2264)) ;
            }
          }
        }
      }
    }
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_ok_2294.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 58)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("target object type is '@").add_operation (constinArgument_inTargetType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 60)).add_operation (GALGAS_string ("' and cannot be assigned from an '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 60)).add_operation (constinArgument_inSourceType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 60)).add_operation (GALGAS_string ("' object"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 60)), fixItArray2  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 59)) ;
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'checkAssignmentTypeWithImplicitGetterCall'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_checkAssignmentTypeWithImplicitGetterCall (const GALGAS_unifiedTypeMap_2D_entry constinArgument_inTargetType,
                                                        const GALGAS_unifiedTypeMap_2D_entry constinArgument_inSourceType,
                                                        const GALGAS_location constinArgument_inErrorLocation,
                                                        GALGAS_semanticExpressionForGeneration & ioArgument_ioExpression,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_entry var_sourceType_3381 = constinArgument_inSourceType ;
  GALGAS_bool var_ok_3411 = GALGAS_bool (kIsEqual, constinArgument_inTargetType.objectCompare (constinArgument_inSourceType)) ;
  if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 74)).isValid ()) {
    uint32_t variant_3449 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 74)).uintValue () ;
    bool loop_3449 = true ;
    while (loop_3449) {
      loop_3449 = var_ok_3411.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 74)).operator_and (var_sourceType_3381.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 74)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 74)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 74)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 74)).isValid () ;
      if (loop_3449) {
        loop_3449 = var_ok_3411.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 74)).operator_and (var_sourceType_3381.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 74)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 74)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 74)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 74)).boolValue () ;
      }
      if (loop_3449 && (0 == variant_3449)) {
        loop_3449 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 74)) ;
      }
      if (loop_3449) {
        variant_3449 -- ;
        var_sourceType_3381 = var_sourceType_3381.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 75)) ;
        var_ok_3411 = GALGAS_bool (kIsEqual, constinArgument_inTargetType.objectCompare (var_sourceType_3381)) ;
      }
    }
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_ok_3411.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 78)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_unifiedTypeMap_2D_entry var_targetType_3699 ;
      const bool optionalResult3668 = constinArgument_inTargetType.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 78)).optional_weakReferenceType (var_targetType_3699) ;
      if (!optionalResult3668) {
        test_0 = kBoolFalse ;
      }
      if (kBoolTrue == test_0) {
        var_sourceType_3381 = constinArgument_inSourceType ;
        var_ok_3411 = GALGAS_bool (kIsEqual, var_targetType_3699.objectCompare (var_sourceType_3381)) ;
        if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 81)).isValid ()) {
          uint32_t variant_3778 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 81)).uintValue () ;
          bool loop_3778 = true ;
          while (loop_3778) {
            loop_3778 = var_ok_3411.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 81)).operator_and (var_sourceType_3381.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 81)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 81)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 81)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 81)).isValid () ;
            if (loop_3778) {
              loop_3778 = var_ok_3411.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 81)).operator_and (var_sourceType_3381.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 81)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 81)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 81)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 81)).boolValue () ;
            }
            if (loop_3778 && (0 == variant_3778)) {
              loop_3778 = false ;
              inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 81)) ;
            }
            if (loop_3778) {
              variant_3778 -- ;
              var_sourceType_3381 = var_sourceType_3381.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 82)) ;
              var_ok_3411 = GALGAS_bool (kIsEqual, var_targetType_3699.objectCompare (var_sourceType_3381)) ;
            }
          }
        }
      }
    }
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_ok_3411.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 87)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_bool var_isPublic_4099 ;
      GALGAS_bool var_unused_0_4102 ;
      GALGAS_unifiedTypeMap_2D_entry var_propertyType_4120 ;
      const bool optionalResult4065 = constinArgument_inSourceType.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 87)).optional_searchKey (constinArgument_inTargetType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 87)), var_isPublic_4099, var_unused_0_4102, var_propertyType_4120) ;
      if (!optionalResult4065) {
        test_1 = kBoolFalse ;
      }
      if (kBoolTrue == test_1) {
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = var_isPublic_4099.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 88)).boolEnum () ;
          if (kBoolTrue == test_2) {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray3  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 89)) ;
          }
        }
        GALGAS_structPropertyAccessExpressionForGeneration var_conversionExpression_4276 = GALGAS_structPropertyAccessExpressionForGeneration::constructor_new (var_propertyType_4120, constinArgument_inErrorLocation, ioArgument_ioExpression, constinArgument_inTargetType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 95))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 91)) ;
        ioArgument_ioExpression = var_conversionExpression_4276 ;
        var_ok_3411 = GALGAS_bool (kIsEqual, var_propertyType_4120.objectCompare (constinArgument_inTargetType)) ;
      }
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      GALGAS_bool test_5 = var_ok_3411.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 99)) ;
      if (kBoolTrue == test_5.boolEnum ()) {
        test_5 = constinArgument_inSourceType.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 99)).getter_hasKey (constinArgument_inTargetType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 99)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 99)) ;
      }
      test_4 = test_5.boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_methodKind var_kind_4667 ;
        GALGAS_functionSignature var_argumentTypeList_4714 ;
        GALGAS_bool var_hasCompilerArgument_4754 ;
        GALGAS_unifiedTypeMap_2D_entry var_returnedType_4778 ;
        GALGAS_location joker_4722 ; // Joker input parameter
        GALGAS_methodQualifier joker_4786_2 ; // Joker input parameter
        GALGAS_string joker_4786_1 ; // Joker input parameter
        constinArgument_inSourceType.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 100)).method_searchKey (constinArgument_inTargetType.getter_lkey (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 101)), var_kind_4667, var_argumentTypeList_4714, joker_4722, var_hasCompilerArgument_4754, var_returnedType_4778, joker_4786_2, joker_4786_1, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 100)) ;
        var_ok_3411 = GALGAS_bool (kIsEqual, var_argumentTypeList_4714.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 109)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsEqual, var_returnedType_4778.objectCompare (constinArgument_inTargetType)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 109)) ;
        GALGAS_getterCallExpressionForGeneration var_conversionExpression_4930 = GALGAS_getterCallExpressionForGeneration::constructor_new (constinArgument_inTargetType, constinArgument_inErrorLocation, var_kind_4667, ioArgument_ioExpression, GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 116)), constinArgument_inTargetType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 117)), GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 118)), var_hasCompilerArgument_4754  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 111)) ;
        ioArgument_ioExpression = var_conversionExpression_4930 ;
      }
    }
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = var_ok_3411.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 123)).boolEnum () ;
    if (kBoolTrue == test_6) {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("target object type is '@").add_operation (constinArgument_inTargetType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 125)).add_operation (GALGAS_string ("' and cannot be assigned from an '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 125)).add_operation (constinArgument_inSourceType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 125)).add_operation (GALGAS_string ("' object; this type have no '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 125)).add_operation (constinArgument_inTargetType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 126)).add_operation (GALGAS_string ("' getter without argument that returns a '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 127)).add_operation (constinArgument_inTargetType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 127)).add_operation (GALGAS_string ("' object"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 127)), fixItArray7  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 124)) ;
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'checkDiadicOperator'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_checkDiadicOperator (const GALGAS_unifiedTypeMap_2D_entry constinArgument_inLeftType,
                                  const GALGAS_unifiedTypeMap_2D_entry constinArgument_inRightType,
                                  const GALGAS_bool constinArgument_inOperandIsHandled,
                                  const GALGAS_string constinArgument_inOperatorNameForErrorMessage,
                                  const GALGAS_location constinArgument_inErrorLocation,
                                  GALGAS_semanticExpressionForGeneration & ioArgument_ioRightExpression,
                                  C_Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inOperandIsHandled.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 141)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("left operand type is '@").add_operation (constinArgument_inLeftType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 143)).add_operation (GALGAS_string ("' and does not accept '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 143)).add_operation (constinArgument_inOperatorNameForErrorMessage, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 143)).add_operation (GALGAS_string ("' operator (right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 143)).add_operation (constinArgument_inRightType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 144)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 144)), fixItArray1  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 142)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_unifiedTypeMap_2D_entry var_rightType_6173 = constinArgument_inRightType ;
    GALGAS_bool var_ok_6204 = GALGAS_bool (kIsEqual, constinArgument_inLeftType.objectCompare (var_rightType_6173)) ;
    if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 148)).isValid ()) {
      uint32_t variant_6239 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 148)).uintValue () ;
      bool loop_6239 = true ;
      while (loop_6239) {
        loop_6239 = var_ok_6204.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 148)).operator_and (var_rightType_6173.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 148)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 148)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 148)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 148)).isValid () ;
        if (loop_6239) {
          loop_6239 = var_ok_6204.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 148)).operator_and (var_rightType_6173.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 148)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 148)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 148)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 148)).boolValue () ;
        }
        if (loop_6239 && (0 == variant_6239)) {
          loop_6239 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 148)) ;
        }
        if (loop_6239) {
          variant_6239 -- ;
          var_rightType_6173 = var_rightType_6173.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 149)) ;
          var_ok_6204 = GALGAS_bool (kIsEqual, constinArgument_inLeftType.objectCompare (var_rightType_6173)) ;
        }
      }
    }
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = var_ok_6204.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 153)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_bool var_isPublic_6549 ;
        GALGAS_bool var_unused_0_6552 ;
        GALGAS_unifiedTypeMap_2D_entry var_propertyType_6570 ;
        const bool optionalResult6517 = constinArgument_inRightType.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 153)).optional_searchKey (constinArgument_inLeftType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 153)), var_isPublic_6549, var_unused_0_6552, var_propertyType_6570) ;
        if (!optionalResult6517) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_isPublic_6549.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 154)).boolEnum () ;
            if (kBoolTrue == test_3) {
              TC_Array <C_FixItDescription> fixItArray4 ;
              inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray4  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 155)) ;
            }
          }
          GALGAS_structPropertyAccessExpressionForGeneration var_conversionExpression_6734 = GALGAS_structPropertyAccessExpressionForGeneration::constructor_new (var_propertyType_6570, constinArgument_inErrorLocation, ioArgument_ioRightExpression, constinArgument_inLeftType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 161))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 157)) ;
          ioArgument_ioRightExpression = var_conversionExpression_6734 ;
          var_ok_6204 = GALGAS_bool (kIsEqual, var_propertyType_6570.objectCompare (constinArgument_inLeftType)) ;
        }
      }
    }
    if (kBoolFalse == test_2) {
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        GALGAS_bool test_6 = var_ok_6204.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 165)) ;
        if (kBoolTrue == test_6.boolEnum ()) {
          test_6 = constinArgument_inRightType.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 165)).getter_hasKey (constinArgument_inLeftType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 165)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 165)) ;
        }
        test_5 = test_6.boolEnum () ;
        if (kBoolTrue == test_5) {
          GALGAS_methodKind var_kind_7147 ;
          GALGAS_functionSignature var_argumentTypeList_7196 ;
          GALGAS_bool var_hasCompilerArgument_7240 ;
          GALGAS_unifiedTypeMap_2D_entry var_returnedType_7266 ;
          GALGAS_location joker_7206 ; // Joker input parameter
          GALGAS_methodQualifier joker_7276_2 ; // Joker input parameter
          GALGAS_string joker_7276_1 ; // Joker input parameter
          constinArgument_inRightType.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 166)).method_searchKey (constinArgument_inLeftType.getter_lkey (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 167)), var_kind_7147, var_argumentTypeList_7196, joker_7206, var_hasCompilerArgument_7240, var_returnedType_7266, joker_7276_2, joker_7276_1, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 166)) ;
          var_ok_6204 = GALGAS_bool (kIsEqual, var_argumentTypeList_7196.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 175)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsEqual, var_returnedType_7266.objectCompare (constinArgument_inLeftType)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 175)) ;
          GALGAS_getterCallExpressionForGeneration var_conversionExpression_7426 = GALGAS_getterCallExpressionForGeneration::constructor_new (constinArgument_inLeftType, constinArgument_inErrorLocation, var_kind_7147, ioArgument_ioRightExpression, GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 182)), constinArgument_inLeftType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 183)), GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 184)), var_hasCompilerArgument_7240  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 177)) ;
          ioArgument_ioRightExpression = var_conversionExpression_7426 ;
        }
      }
    }
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = var_ok_6204.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 189)).boolEnum () ;
      if (kBoolTrue == test_7) {
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("left operand type of '").add_operation (constinArgument_inOperatorNameForErrorMessage, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 191)).add_operation (GALGAS_string ("' operator is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 191)).add_operation (constinArgument_inLeftType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 191)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 191)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 191)).add_operation (constinArgument_inRightType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 192)).add_operation (GALGAS_string ("', it should be either the same, either inherits from left operand type, either have a '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 192)).add_operation (constinArgument_inLeftType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 193)).add_operation (GALGAS_string ("' getter without argument that returns a '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 194)).add_operation (constinArgument_inLeftType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 194)).add_operation (GALGAS_string ("' object"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 194)), fixItArray8  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 190)) ;
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@assignmentInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_assignmentInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assignmentInstructionAST * object = (const cPtr_assignmentInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_assignmentInstructionAST) ;
  const GALGAS_assignmentInstructionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 136)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_assignmentInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_assignmentInstructionAST.mSlotID,
                                                          extensionMethod_assignmentInstructionAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_assignmentInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_assignmentInstructionAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfPropertyAssignmentInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_selfPropertyAssignmentInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                                    GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfPropertyAssignmentInstructionAST * object = (const cPtr_selfPropertyAssignmentInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfPropertyAssignmentInstructionAST) ;
  const GALGAS_selfPropertyAssignmentInstructionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 144)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_selfPropertyAssignmentInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_selfPropertyAssignmentInstructionAST.mSlotID,
                                                          extensionMethod_selfPropertyAssignmentInstructionAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_selfPropertyAssignmentInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_selfPropertyAssignmentInstructionAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@assignmentInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_assignmentInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                 const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                 GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assignmentInstructionAST * object = (const cPtr_assignmentInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_assignmentInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_entry var_targetType_5643 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_assignmentInstructionAST temp_1 = object ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.readProperty_mOptionalProperty ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      const GALGAS_assignmentInstructionAST temp_2 = object ;
      GALGAS_string joker_5782 ; // Joker input parameter
      GALGAS_string joker_5791 ; // Joker input parameter
      ioArgument_ioVariableMap.setter_neutralAccess (temp_2.readProperty_mTargetVariableName (), var_targetType_5643, joker_5782, joker_5791, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 161)) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_assignmentInstructionAST temp_3 = object ;
    GALGAS_string joker_5898 ; // Joker input parameter
    GALGAS_string joker_5907 ; // Joker input parameter
    ioArgument_ioVariableMap.setter_neutralAccess (temp_3.readProperty_mTargetVariableName (), var_targetType_5643, joker_5898, joker_5907, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 168)) ;
    }
    GALGAS_propertyMap var_propertyMap_5934 = var_targetType_5643.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 174)) ;
    GALGAS_bool var_isPublic_6027 ;
    GALGAS_bool var_isConstant_6043 ;
    const GALGAS_assignmentInstructionAST temp_4 = object ;
    var_propertyMap_5934.method_searchKey (temp_4.readProperty_mOptionalProperty (), var_isPublic_6027, var_isConstant_6043, var_targetType_5643, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 175)) ;
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = var_isPublic_6027.operator_not (SOURCE_FILE ("instruction-assignment.galgas", 176)).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_assignmentInstructionAST temp_6 = object ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mOptionalProperty ().readProperty_location (), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray7  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 177)) ;
      }
    }
    enumGalgasBool test_8 = kBoolTrue ;
    if (kBoolTrue == test_8) {
      test_8 = var_isConstant_6043.boolEnum () ;
      if (kBoolTrue == test_8) {
        const GALGAS_assignmentInstructionAST temp_9 = object ;
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (temp_9.readProperty_mOptionalProperty ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray10  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 180)) ;
      }
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_6568 ;
  const GALGAS_assignmentInstructionAST temp_11 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_11.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_5643, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_6568, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 184)) ;
  {
  const GALGAS_assignmentInstructionAST temp_12 = object ;
  routine_checkAssignmentTypeWithImplicitGetterCall (var_targetType_5643, var_expression_6568.readProperty_mResultType (), temp_12.readProperty_mInstructionLocation (), var_expression_6568, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 193)) ;
  }
  GALGAS_string var_targetVariableCppName_6816 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_6866 ;
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    const GALGAS_assignmentInstructionAST temp_14 = object ;
    test_13 = GALGAS_bool (kIsEqual, temp_14.readProperty_mOptionalProperty ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_13) {
      {
      const GALGAS_assignmentInstructionAST temp_15 = object ;
      GALGAS_unifiedTypeMap_2D_entry joker_6994 ; // Joker input parameter
      ioArgument_ioVariableMap.setter_searchForWriteAccess (temp_15.readProperty_mTargetVariableName (), joker_6994, var_targetVariableCppName_6816, var_nameForCheckingFormalParameterUsing_6866, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 203)) ;
      }
    }
  }
  if (kBoolFalse == test_13) {
    {
    const GALGAS_assignmentInstructionAST temp_16 = object ;
    GALGAS_unifiedTypeMap_2D_entry joker_7166 ; // Joker input parameter
    ioArgument_ioVariableMap.setter_searchForReadWriteAccess (temp_16.readProperty_mTargetVariableName (), joker_7166, var_targetVariableCppName_6816, var_nameForCheckingFormalParameterUsing_6866, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 210)) ;
    }
  }
  const GALGAS_assignmentInstructionAST temp_17 = object ;
  const GALGAS_assignmentInstructionAST temp_18 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_assignmentInstructionForGeneration::constructor_new (var_targetType_5643, var_targetVariableCppName_6816, var_nameForCheckingFormalParameterUsing_6866, temp_17.readProperty_mOptionalProperty ().readProperty_string (), var_expression_6568, temp_18.readProperty_mTargetVariableName ().readProperty_location ()  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 218))  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 218)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_assignmentInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_assignmentInstructionAST.mSlotID,
                                                   extensionMethod_assignmentInstructionAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_assignmentInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_assignmentInstructionAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfPropertyAssignmentInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_selfPropertyAssignmentInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                             const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                             GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                             GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfPropertyAssignmentInstructionAST * object = (const cPtr_selfPropertyAssignmentInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfPropertyAssignmentInstructionAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMap_2D_entry var_selfType_8044 ;
    GALGAS_bool var_unused_0_8056 ;
    GALGAS_bool var_mutableProperties_8098 ;
    const bool optionalResult8024 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_8044, var_unused_0_8056, var_mutableProperties_8098) ;
    if (!optionalResult8024) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_mutableProperties_8098.operator_not (SOURCE_FILE ("instruction-assignment.galgas", 238)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfPropertyAssignmentInstructionAST temp_2 = object ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("'self' property not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 239)) ;
        }
      }
      GALGAS_propertyMap var_propertyMap_8252 = var_selfType_8044.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 241)) ;
      GALGAS_bool var_isConstant_8354 ;
      GALGAS_unifiedTypeMap_2D_entry var_targetType_8370 ;
      const GALGAS_selfPropertyAssignmentInstructionAST temp_4 = object ;
      GALGAS_bool joker_8337 ; // Joker input parameter
      var_propertyMap_8252.method_searchKey (temp_4.readProperty_mTargetSelfPropertyName (), joker_8337, var_isConstant_8354, var_targetType_8370, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 242)) ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = var_isConstant_8354.boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_selfPropertyAssignmentInstructionAST temp_6 = object ;
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mTargetSelfPropertyName ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray7  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 244)) ;
        }
      }
      const GALGAS_selfPropertyAssignmentInstructionAST temp_8 = object ;
      GALGAS_string var_targetVariableCppName_8516 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 246)).add_operation (temp_8.readProperty_mTargetSelfPropertyName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-assignment.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 247)) ;
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        const GALGAS_selfPropertyAssignmentInstructionAST temp_10 = object ;
        test_9 = GALGAS_bool (kIsNotEqual, temp_10.readProperty_mOptionalProperty ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_9) {
          GALGAS_propertyMap var_propertyMap_8763 = var_targetType_8370.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 250)) ;
          GALGAS_bool var_isPublic_8858 ;
          GALGAS_bool var_isConstant_8874 ;
          const GALGAS_selfPropertyAssignmentInstructionAST temp_11 = object ;
          var_propertyMap_8763.method_searchKey (temp_11.readProperty_mOptionalProperty (), var_isPublic_8858, var_isConstant_8874, var_targetType_8370, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 251)) ;
          enumGalgasBool test_12 = kBoolTrue ;
          if (kBoolTrue == test_12) {
            test_12 = var_isPublic_8858.operator_not (SOURCE_FILE ("instruction-assignment.galgas", 252)).boolEnum () ;
            if (kBoolTrue == test_12) {
              const GALGAS_selfPropertyAssignmentInstructionAST temp_13 = object ;
              TC_Array <C_FixItDescription> fixItArray14 ;
              inCompiler->emitSemanticError (temp_13.readProperty_mOptionalProperty ().readProperty_location (), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray14  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 253)) ;
            }
          }
          enumGalgasBool test_15 = kBoolTrue ;
          if (kBoolTrue == test_15) {
            test_15 = var_isConstant_8874.boolEnum () ;
            if (kBoolTrue == test_15) {
              const GALGAS_selfPropertyAssignmentInstructionAST temp_16 = object ;
              TC_Array <C_FixItDescription> fixItArray17 ;
              inCompiler->emitSemanticError (temp_16.readProperty_mOptionalProperty ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray17  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 256)) ;
            }
          }
        }
      }
      GALGAS_semanticExpressionForGeneration var_expression_9429 ;
      const GALGAS_selfPropertyAssignmentInstructionAST temp_18 = object ;
      callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_18.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_8370, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_9429, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 260)) ;
      {
      const GALGAS_selfPropertyAssignmentInstructionAST temp_19 = object ;
      routine_checkAssignmentTypeWithImplicitGetterCall (var_targetType_8370, var_expression_9429.readProperty_mResultType (), temp_19.readProperty_mInstructionLocation (), var_expression_9429, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 269)) ;
      }
      const GALGAS_selfPropertyAssignmentInstructionAST temp_20 = object ;
      const GALGAS_selfPropertyAssignmentInstructionAST temp_21 = object ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_assignmentInstructionForGeneration::constructor_new (var_targetType_8370, var_targetVariableCppName_8516, constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), temp_20.readProperty_mOptionalProperty ().readProperty_string (), var_expression_9429, temp_21.readProperty_mTargetSelfPropertyName ().readProperty_location ()  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 271))  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 271)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfPropertyAssignmentInstructionAST temp_22 = object ;
    TC_Array <C_FixItDescription> fixItArray23 ;
    inCompiler->emitSemanticError (temp_22.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray23  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 280)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_selfPropertyAssignmentInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_selfPropertyAssignmentInstructionAST.mSlotID,
                                                   extensionMethod_selfPropertyAssignmentInstructionAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_selfPropertyAssignmentInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_selfPropertyAssignmentInstructionAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@assignmentInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_assignmentInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                    GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                    GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                    GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                    const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                    GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assignmentInstructionForGeneration * object = (const cPtr_assignmentInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_assignmentInstructionForGeneration) ;
  GALGAS_string var_sourceVar_13964 ;
  const GALGAS_assignmentInstructionForGeneration temp_0 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_13964, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 370)) ;
  {
  const GALGAS_assignmentInstructionForGeneration temp_1 = object ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_1.readProperty_mNameForCheckingFormalParameterUsing () COMMA_SOURCE_FILE ("instruction-assignment.galgas", 377)) ;
  }
  const GALGAS_assignmentInstructionForGeneration temp_2 = object ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mTargetType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 379)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_assignmentInstructionForGeneration temp_4 = object ;
    test_3 = GALGAS_bool (kIsEqual, temp_4.readProperty_mOptionalProperty ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_assignmentInstructionForGeneration temp_5 = object ;
      ioArgument_ioGeneratedCode.plusAssign_operation(temp_5.readProperty_mTargetCppName ().add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 381)).add_operation (var_sourceVar_13964, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 381)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 381)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 381)) ;
    }
  }
  if (kBoolFalse == test_3) {
    const GALGAS_assignmentInstructionForGeneration temp_6 = object ;
    ioArgument_ioGeneratedCode.plusAssign_operation(temp_6.readProperty_mTargetCppName ().add_operation (GALGAS_string (".setter_set"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 383)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 383)) ;
    const GALGAS_assignmentInstructionForGeneration temp_7 = object ;
    ioArgument_ioGeneratedCode.plusAssign_operation(temp_7.readProperty_mOptionalProperty ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("instruction-assignment.galgas", 384)).getter_identifierRepresentation (SOURCE_FILE ("instruction-assignment.galgas", 384)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 384)) ;
    const GALGAS_assignmentInstructionForGeneration temp_8 = object ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" (").add_operation (var_sourceVar_13964, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 385)).add_operation (GALGAS_string (" COMMA_"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 385)).add_operation (extensionGetter_sourceFile (temp_8.readProperty_mSourceLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 385)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 385)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 385)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 385)) ;
  }
  {
  const GALGAS_assignmentInstructionForGeneration temp_9 = object ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_9.readProperty_mTargetCppName () COMMA_SOURCE_FILE ("instruction-assignment.galgas", 387)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_assignmentInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_assignmentInstructionForGeneration.mSlotID,
                                            extensionMethod_assignmentInstructionForGeneration_generateInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_assignmentInstructionForGeneration_generateInstruction (defineExtensionMethod_assignmentInstructionForGeneration_generateInstruction, NULL) ;

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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mCastExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 221)) ;
  const GALGAS_structuredCastInstructionAST temp_1 = object ;
  extensionMethod_enterInstructionListInSemanticContext (temp_1.readProperty_mElseInstructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 222)) ;
  const GALGAS_structuredCastInstructionAST temp_2 = object ;
  cEnumerator_castInstructionBranchListAST enumerator_7813 (temp_2.readProperty_mCastInstructionBranchList (), kENUMERATION_UP) ;
  while (enumerator_7813.hasCurrentObject ()) {
    extensionMethod_enterInstructionListInSemanticContext (enumerator_7813.current_mInstructionList (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 224)) ;
    enumerator_7813.gotoNextObject () ;
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
  GALGAS_semanticExpressionForGeneration var_castExpression_8577 ;
  const GALGAS_structuredCastInstructionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mCastExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-cast.galgas", 243)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_castExpression_8577, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 240)) ;
  {
  ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 249)) ;
  }
  GALGAS_castInstructionBranchListForGeneration var_castBranchList_8939 = GALGAS_castInstructionBranchListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 251)) ;
  const GALGAS_structuredCastInstructionAST temp_1 = object ;
  cEnumerator_castInstructionBranchListAST enumerator_9073 (temp_1.readProperty_mCastInstructionBranchList (), kENUMERATION_UP) ;
  while (enumerator_9073.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_entry var_type_9147 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), enumerator_9073.current_mTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 254)) ;
    GALGAS_unifiedTypeMap_2D_entry var_t_9329 = var_type_9147 ;
    GALGAS_bool var_found_9356 = GALGAS_bool (kIsEqual, var_t_9329.objectCompare (var_castExpression_8577.readProperty_mResultType ())) ;
    if (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap ().getter_count (SOURCE_FILE ("instruction-cast.galgas", 258)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 258)).isValid ()) {
      uint32_t variant_9399 = constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap ().getter_count (SOURCE_FILE ("instruction-cast.galgas", 258)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 258)).uintValue () ;
      bool loop_9399 = true ;
      while (loop_9399) {
        loop_9399 = var_found_9356.operator_not (SOURCE_FILE ("instruction-cast.galgas", 259)).operator_and (var_t_9329.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 259)).getter_isNull (SOURCE_FILE ("instruction-cast.galgas", 259)).operator_not (SOURCE_FILE ("instruction-cast.galgas", 259)) COMMA_SOURCE_FILE ("instruction-cast.galgas", 259)).isValid () ;
        if (loop_9399) {
          loop_9399 = var_found_9356.operator_not (SOURCE_FILE ("instruction-cast.galgas", 259)).operator_and (var_t_9329.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 259)).getter_isNull (SOURCE_FILE ("instruction-cast.galgas", 259)).operator_not (SOURCE_FILE ("instruction-cast.galgas", 259)) COMMA_SOURCE_FILE ("instruction-cast.galgas", 259)).boolValue () ;
        }
        if (loop_9399 && (0 == variant_9399)) {
          loop_9399 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-cast.galgas", 258)) ;
        }
        if (loop_9399) {
          variant_9399 -- ;
          var_t_9329 = var_t_9329.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 260)) ;
          var_found_9356 = GALGAS_bool (kIsEqual, var_t_9329.objectCompare (var_castExpression_8577.readProperty_mResultType ())) ;
        }
      }
    }
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = var_found_9356.operator_not (SOURCE_FILE ("instruction-cast.galgas", 263)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_9073.current_mTypeName (HERE).readProperty_location (), GALGAS_string ("the '@").add_operation (enumerator_9073.current_mTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 265)).add_operation (GALGAS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 265)).add_operation (var_castExpression_8577.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 265)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 265)).add_operation (GALGAS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 265)), fixItArray3  COMMA_SOURCE_FILE ("instruction-cast.galgas", 264)) ;
      }
    }
    GALGAS_string var_localConstantName_9844 ;
    GALGAS_localConstantList var_localConstantList_9870 = GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 269)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsStrictSup, enumerator_9073.current_mConstantVarName (HERE).readProperty_string ().getter_length (SOURCE_FILE ("instruction-cast.galgas", 270)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_4) {
        var_localConstantName_9844 = GALGAS_string ("cast_").add_operation (enumerator_9073.current_mConstantVarName (HERE).readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 271)).getter_string (SOURCE_FILE ("instruction-cast.galgas", 271)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 271)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 271)).add_operation (enumerator_9073.current_mConstantVarName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 271)) ;
        var_localConstantList_9870.addAssign_operation (var_type_9147, enumerator_9073.current_mConstantVarName (HERE), GALGAS_bool (true), var_localConstantName_9844  COMMA_SOURCE_FILE ("instruction-cast.galgas", 272)) ;
      }
    }
    if (kBoolFalse == test_4) {
      var_localConstantName_9844 = GALGAS_string::makeEmptyString () ;
    }
    GALGAS_semanticInstructionListForGeneration var_instructionList_10318 ;
    {
    routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_localConstantList_9870, GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 287)), enumerator_9073.current_mInstructionList (HERE), enumerator_9073.current_mEndOfInstructions (HERE), ioArgument_ioVariableMap, var_instructionList_10318, inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 282)) ;
    }
    var_castBranchList_8939.addAssign_operation (enumerator_9073.current_mTypeComparisonKind (HERE), var_type_9147, var_localConstantName_9844, var_instructionList_10318  COMMA_SOURCE_FILE ("instruction-cast.galgas", 293)) ;
    enumerator_9073.gotoNextObject () ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionList_10766 ;
  {
  const GALGAS_structuredCastInstructionAST temp_5 = object ;
  const GALGAS_structuredCastInstructionAST temp_6 = object ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 301)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 302)), temp_5.readProperty_mElseInstructionList (), temp_6.readProperty_mEndOfCastInstruction (), ioArgument_ioVariableMap, var_else_5F_instructionList_10766, inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 297)) ;
  }
  {
  const GALGAS_structuredCastInstructionAST temp_7 = object ;
  ioArgument_ioVariableMap.setter_closeOverride (temp_7.readProperty_mEndOfCastInstruction (), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 309)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_structuredCastInstructionForGeneration::constructor_new (var_castExpression_8577, var_castBranchList_8939, var_else_5F_instructionList_10766  COMMA_SOURCE_FILE ("instruction-cast.galgas", 311))  COMMA_SOURCE_FILE ("instruction-cast.galgas", 311)) ;
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
  GALGAS_string var_castCppVarName_12963 ;
  const GALGAS_structuredCastInstructionForGeneration temp_0 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_castCppVarName_12963, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 347)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_castCppVarName_12963, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 355)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 355)), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 355)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 356)) ;
  }
  const GALGAS_structuredCastInstructionForGeneration temp_1 = object ;
  cEnumerator_castInstructionBranchListForGeneration enumerator_13146 (temp_1.readProperty_mCastBranchList (), kENUMERATION_UP) ;
  while (enumerator_13146.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_13146.current_mType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 358)) ;
    switch (enumerator_13146.current_mTypeComparisonKind (HERE).enumValue ()) {
    case GALGAS_dynamicTypeComparisonKind::kNotBuilt:
      break ;
    case GALGAS_dynamicTypeComparisonKind::kEnum_equal:
      {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_castCppVarName_12963, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 361)).add_operation (GALGAS_string (".dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 361)).add_operation (enumerator_13146.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 363)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 362)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 363)), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 361)) ;
      }
      break ;
    case GALGAS_dynamicTypeComparisonKind::kEnum_inherited:
      {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (NULL != dynamic_cast <const cPtr_").add_operation (enumerator_13146.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 366)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 365)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 366)).add_operation (var_castCppVarName_12963, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 367)).add_operation (GALGAS_string (".ptr ())) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 367)), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 365)) ;
      }
      break ;
    case GALGAS_dynamicTypeComparisonKind::kEnum_strictlyInherited:
      {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ((").add_operation (var_castCppVarName_12963, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 369)).add_operation (GALGAS_string (".dynamicTypeDescriptor () != & kTypeDescriptor_GALGAS_"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 369)).add_operation (enumerator_13146.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 371)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 370)).add_operation (GALGAS_string (") && (NULL != dynamic_cast <const cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 371)).add_operation (enumerator_13146.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 372)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 371)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 372)).add_operation (var_castCppVarName_12963, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 373)).add_operation (GALGAS_string (".ptr ()))) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 373)), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 369)) ;
      }
      break ;
    }
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsStrictSup, enumerator_13146.current_mCastedVarCppName (HERE).getter_length (SOURCE_FILE ("instruction-cast.galgas", 375)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_2) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  GALGAS_").add_operation (enumerator_13146.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 377)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 377)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 377)).add_operation (enumerator_13146.current_mCastedVarCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 378)).add_operation (GALGAS_string (" ((cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 378)).add_operation (enumerator_13146.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 378)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 378)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 378)).add_operation (var_castCppVarName_12963, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 379)).add_operation (GALGAS_string (".ptr ()) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 379)), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 376)) ;
      }
    }
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_13146.current_mInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 381)) ;
    }
    if (enumerator_13146.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 389)) ;
    }
    enumerator_13146.gotoNextObject () ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_structuredCastInstructionForGeneration temp_4 = object ;
    test_3 = GALGAS_bool (kIsStrictSup, temp_4.readProperty_mElseInstructionList ().getter_length (SOURCE_FILE ("instruction-cast.galgas", 392)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 393)) ;
      {
      const GALGAS_structuredCastInstructionForGeneration temp_5 = object ;
      routine_generateInstructionList (ioArgument_ioInclusionSet, temp_5.readProperty_mElseInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 394)) ;
      }
    }
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 404)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 405)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 406)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 255)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 261)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 267)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 273)) ;
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
  extensionMethod_enterInSemanticContext (temp_0.readProperty_mExpressions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 279)) ;
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
  GALGAS_unifiedTypeMap_2D_entry var_targetType_10809 ;
  GALGAS_string var_targetVariableCppName_10845 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_10895 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_plusEqualExpressionInstructionAST temp_1 = object ;
    test_0 = temp_1.readProperty_mPrefixedBySelf ().boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GALGAS_unifiedTypeMap_2D_entry var_selfType_10995 ;
        GALGAS_bool var_unused_0_10999 ;
        GALGAS_bool var_mutableProperties_11041 ;
        const bool optionalResult10975 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_10995, var_unused_0_10999, var_mutableProperties_11041) ;
        if (!optionalResult10975) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_mutableProperties_11041.operator_not (SOURCE_FILE ("instruction-concat.galgas", 299)).boolEnum () ;
            if (kBoolTrue == test_3) {
              const GALGAS_plusEqualExpressionInstructionAST temp_4 = object ;
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (temp_4.readProperty_mInstructionLocation (), GALGAS_string ("property not mutable in this context"), fixItArray5  COMMA_SOURCE_FILE ("instruction-concat.galgas", 300)) ;
            }
          }
          GALGAS_propertyMap var_propertyMap_11196 = var_selfType_10995.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 302)) ;
          GALGAS_bool var_isConstant_11290 ;
          const GALGAS_plusEqualExpressionInstructionAST temp_6 = object ;
          GALGAS_bool joker_11273 ; // Joker input parameter
          var_propertyMap_11196.method_searchKey (temp_6.readProperty_mReceiverName (), joker_11273, var_isConstant_11290, var_targetType_10809, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 303)) ;
          var_nameForCheckingFormalParameterUsing_10895 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName () ;
          const GALGAS_plusEqualExpressionInstructionAST temp_7 = object ;
          var_targetVariableCppName_10845 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 305)).add_operation (temp_7.readProperty_mReceiverName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 306)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 306)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = var_isConstant_11290.boolEnum () ;
            if (kBoolTrue == test_8) {
              const GALGAS_plusEqualExpressionInstructionAST temp_9 = object ;
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray10  COMMA_SOURCE_FILE ("instruction-concat.galgas", 308)) ;
            }
          }
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            test_11 = var_mutableProperties_11041.operator_not (SOURCE_FILE ("instruction-concat.galgas", 310)).boolEnum () ;
            if (kBoolTrue == test_11) {
              const GALGAS_plusEqualExpressionInstructionAST temp_12 = object ;
              TC_Array <C_FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (temp_12.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("the property is not mutable in this context"), fixItArray13  COMMA_SOURCE_FILE ("instruction-concat.galgas", 311)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_2) {
        const GALGAS_plusEqualExpressionInstructionAST temp_14 = object ;
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray15  COMMA_SOURCE_FILE ("instruction-concat.galgas", 314)) ;
        var_targetType_10809.drop () ; // Release error dropped variable
        var_targetVariableCppName_10845.drop () ; // Release error dropped variable
        var_nameForCheckingFormalParameterUsing_10895.drop () ; // Release error dropped variable
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_plusEqualExpressionInstructionAST temp_16 = object ;
    ioArgument_ioVariableMap.setter_searchForReadWriteAccess (temp_16.readProperty_mReceiverName (), var_targetType_10809, var_targetVariableCppName_10845, var_nameForCheckingFormalParameterUsing_10895, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 318)) ;
    }
  }
  const GALGAS_plusEqualExpressionInstructionAST temp_17 = object ;
  cEnumerator_lstringlist enumerator_12158 (temp_17.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_12158.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_12211 = var_targetType_10809.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 326)) ;
    GALGAS_bool var_isPublic_12288 ;
    GALGAS_bool var_isConstant_12304 ;
    var_propertyMap_12211.method_searchKey (enumerator_12158.current_mValue (HERE), var_isPublic_12288, var_isConstant_12304, var_targetType_10809, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 327)) ;
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      test_18 = var_isPublic_12288.operator_not (SOURCE_FILE ("instruction-concat.galgas", 328)).boolEnum () ;
      if (kBoolTrue == test_18) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (enumerator_12158.current_mValue (HERE).readProperty_location (), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray19  COMMA_SOURCE_FILE ("instruction-concat.galgas", 329)) ;
      }
    }
    enumGalgasBool test_20 = kBoolTrue ;
    if (kBoolTrue == test_20) {
      test_20 = var_isConstant_12304.boolEnum () ;
      if (kBoolTrue == test_20) {
        TC_Array <C_FixItDescription> fixItArray21 ;
        inCompiler->emitSemanticError (enumerator_12158.current_mValue (HERE).readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray21  COMMA_SOURCE_FILE ("instruction-concat.galgas", 332)) ;
      }
    }
    enumerator_12158.gotoNextObject () ;
  }
  enumGalgasBool test_22 = kBoolTrue ;
  if (kBoolTrue == test_22) {
    test_22 = var_targetType_10809.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 336)).getter_plusEqualOperatorWithExpression (SOURCE_FILE ("instruction-concat.galgas", 336)).operator_not (SOURCE_FILE ("instruction-concat.galgas", 336)).boolEnum () ;
    if (kBoolTrue == test_22) {
      const GALGAS_plusEqualExpressionInstructionAST temp_23 = object ;
      TC_Array <C_FixItDescription> fixItArray24 ;
      inCompiler->emitSemanticError (temp_23.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (var_targetType_10809.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 338)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 338)).add_operation (GALGAS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 338)), fixItArray24  COMMA_SOURCE_FILE ("instruction-concat.galgas", 337)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_13090 ;
  const GALGAS_plusEqualExpressionInstructionAST temp_25 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_25.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_10809, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_13090, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 341)) ;
  {
  const GALGAS_plusEqualExpressionInstructionAST temp_26 = object ;
  routine_checkAssignmentTypeWithImplicitGetterCall (var_targetType_10809, var_expression_13090.readProperty_mResultType (), temp_26.readProperty_mInstructionLocation (), var_expression_13090, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 350)) ;
  }
  const GALGAS_plusEqualExpressionInstructionAST temp_27 = object ;
  const GALGAS_plusEqualExpressionInstructionAST temp_28 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (temp_27.readProperty_mInstructionLocation (), var_targetType_10809, var_targetVariableCppName_10845, var_nameForCheckingFormalParameterUsing_10895, temp_28.readProperty_mStructAttributeList (), var_expression_13090, GALGAS_string ("plusAssign_operation")  COMMA_SOURCE_FILE ("instruction-concat.galgas", 352))  COMMA_SOURCE_FILE ("instruction-concat.galgas", 352)) ;
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
  GALGAS_unifiedTypeMap_2D_entry var_targetType_14094 ;
  GALGAS_string var_targetVariableCppName_14130 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_14180 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_minusEqualExpressionInstructionAST temp_1 = object ;
    test_0 = temp_1.readProperty_mPrefixedBySelf ().boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GALGAS_unifiedTypeMap_2D_entry var_selfType_14280 ;
        GALGAS_bool var_selfIsMutable_14308 ;
        GALGAS_bool var_mutableProperties_14350 ;
        const bool optionalResult14260 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_14280, var_selfIsMutable_14308, var_mutableProperties_14350) ;
        if (!optionalResult14260) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_selfIsMutable_14308.operator_not (SOURCE_FILE ("instruction-concat.galgas", 378)).boolEnum () ;
            if (kBoolTrue == test_3) {
              const GALGAS_minusEqualExpressionInstructionAST temp_4 = object ;
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (temp_4.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray5  COMMA_SOURCE_FILE ("instruction-concat.galgas", 379)) ;
            }
          }
          GALGAS_propertyMap var_propertyMap_14499 = var_selfType_14280.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 381)) ;
          GALGAS_bool var_isConstant_14593 ;
          const GALGAS_minusEqualExpressionInstructionAST temp_6 = object ;
          GALGAS_bool joker_14576 ; // Joker input parameter
          var_propertyMap_14499.method_searchKey (temp_6.readProperty_mReceiverName (), joker_14576, var_isConstant_14593, var_targetType_14094, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 382)) ;
          var_nameForCheckingFormalParameterUsing_14180 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName () ;
          const GALGAS_minusEqualExpressionInstructionAST temp_7 = object ;
          var_targetVariableCppName_14130 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 384)).add_operation (temp_7.readProperty_mReceiverName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 385)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 385)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = var_isConstant_14593.boolEnum () ;
            if (kBoolTrue == test_8) {
              const GALGAS_minusEqualExpressionInstructionAST temp_9 = object ;
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray10  COMMA_SOURCE_FILE ("instruction-concat.galgas", 387)) ;
            }
          }
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            test_11 = var_mutableProperties_14350.operator_not (SOURCE_FILE ("instruction-concat.galgas", 389)).boolEnum () ;
            if (kBoolTrue == test_11) {
              const GALGAS_minusEqualExpressionInstructionAST temp_12 = object ;
              TC_Array <C_FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (temp_12.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("the property is not mutable in this context"), fixItArray13  COMMA_SOURCE_FILE ("instruction-concat.galgas", 390)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_2) {
        const GALGAS_minusEqualExpressionInstructionAST temp_14 = object ;
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray15  COMMA_SOURCE_FILE ("instruction-concat.galgas", 393)) ;
        var_targetType_14094.drop () ; // Release error dropped variable
        var_targetVariableCppName_14130.drop () ; // Release error dropped variable
        var_nameForCheckingFormalParameterUsing_14180.drop () ; // Release error dropped variable
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_minusEqualExpressionInstructionAST temp_16 = object ;
    ioArgument_ioVariableMap.setter_searchForReadWriteAccess (temp_16.readProperty_mReceiverName (), var_targetType_14094, var_targetVariableCppName_14130, var_nameForCheckingFormalParameterUsing_14180, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 416)) ;
    }
  }
  const GALGAS_minusEqualExpressionInstructionAST temp_17 = object ;
  cEnumerator_lstringlist enumerator_16418 (temp_17.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_16418.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_16471 = var_targetType_14094.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 424)) ;
    GALGAS_bool var_isPublic_16548 ;
    GALGAS_bool var_isConstant_16564 ;
    var_propertyMap_16471.method_searchKey (enumerator_16418.current_mValue (HERE), var_isPublic_16548, var_isConstant_16564, var_targetType_14094, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 425)) ;
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      test_18 = var_isPublic_16548.operator_not (SOURCE_FILE ("instruction-concat.galgas", 426)).boolEnum () ;
      if (kBoolTrue == test_18) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (enumerator_16418.current_mValue (HERE).readProperty_location (), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray19  COMMA_SOURCE_FILE ("instruction-concat.galgas", 427)) ;
      }
    }
    enumGalgasBool test_20 = kBoolTrue ;
    if (kBoolTrue == test_20) {
      test_20 = var_isConstant_16564.boolEnum () ;
      if (kBoolTrue == test_20) {
        TC_Array <C_FixItDescription> fixItArray21 ;
        inCompiler->emitSemanticError (enumerator_16418.current_mValue (HERE).readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray21  COMMA_SOURCE_FILE ("instruction-concat.galgas", 430)) ;
      }
    }
    enumerator_16418.gotoNextObject () ;
  }
  enumGalgasBool test_22 = kBoolTrue ;
  if (kBoolTrue == test_22) {
    test_22 = var_targetType_14094.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 434)).getter_minusEqualOperatorWithExpression (SOURCE_FILE ("instruction-concat.galgas", 434)).operator_not (SOURCE_FILE ("instruction-concat.galgas", 434)).boolEnum () ;
    if (kBoolTrue == test_22) {
      const GALGAS_minusEqualExpressionInstructionAST temp_23 = object ;
      TC_Array <C_FixItDescription> fixItArray24 ;
      inCompiler->emitSemanticError (temp_23.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (var_targetType_14094.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 436)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 436)).add_operation (GALGAS_string ("' type, but this type does not support the '-=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 436)), fixItArray24  COMMA_SOURCE_FILE ("instruction-concat.galgas", 435)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_17351 ;
  const GALGAS_minusEqualExpressionInstructionAST temp_25 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_25.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_14094, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_17351, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 439)) ;
  {
  const GALGAS_minusEqualExpressionInstructionAST temp_26 = object ;
  routine_checkAssignmentTypeWithImplicitGetterCall (var_targetType_14094, var_expression_17351.readProperty_mResultType (), temp_26.readProperty_mInstructionLocation (), var_expression_17351, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 448)) ;
  }
  const GALGAS_minusEqualExpressionInstructionAST temp_27 = object ;
  const GALGAS_minusEqualExpressionInstructionAST temp_28 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (temp_27.readProperty_mInstructionLocation (), var_targetType_14094, var_targetVariableCppName_14130, var_nameForCheckingFormalParameterUsing_14180, temp_28.readProperty_mStructAttributeList (), var_expression_17351, GALGAS_string ("minusAssign_operation")  COMMA_SOURCE_FILE ("instruction-concat.galgas", 450))  COMMA_SOURCE_FILE ("instruction-concat.galgas", 450)) ;
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
  GALGAS_unifiedTypeMap_2D_entry var_targetType_18354 ;
  GALGAS_string var_targetVariableCppName_18390 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_18440 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_mulEqualExpressionInstructionAST temp_1 = object ;
    test_0 = temp_1.readProperty_mPrefixedBySelf ().boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GALGAS_unifiedTypeMap_2D_entry var_selfType_18540 ;
        GALGAS_bool var_selfIsMutable_18568 ;
        GALGAS_bool var_mutableProperties_18610 ;
        const bool optionalResult18520 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_18540, var_selfIsMutable_18568, var_mutableProperties_18610) ;
        if (!optionalResult18520) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_selfIsMutable_18568.operator_not (SOURCE_FILE ("instruction-concat.galgas", 476)).boolEnum () ;
            if (kBoolTrue == test_3) {
              const GALGAS_mulEqualExpressionInstructionAST temp_4 = object ;
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (temp_4.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray5  COMMA_SOURCE_FILE ("instruction-concat.galgas", 477)) ;
            }
          }
          GALGAS_propertyMap var_propertyMap_18759 = var_selfType_18540.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 479)) ;
          GALGAS_bool var_isConstant_18853 ;
          const GALGAS_mulEqualExpressionInstructionAST temp_6 = object ;
          GALGAS_bool joker_18836 ; // Joker input parameter
          var_propertyMap_18759.method_searchKey (temp_6.readProperty_mReceiverName (), joker_18836, var_isConstant_18853, var_targetType_18354, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 480)) ;
          var_nameForCheckingFormalParameterUsing_18440 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName () ;
          const GALGAS_mulEqualExpressionInstructionAST temp_7 = object ;
          var_targetVariableCppName_18390 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 482)).add_operation (temp_7.readProperty_mReceiverName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 483)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 483)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = var_isConstant_18853.boolEnum () ;
            if (kBoolTrue == test_8) {
              const GALGAS_mulEqualExpressionInstructionAST temp_9 = object ;
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray10  COMMA_SOURCE_FILE ("instruction-concat.galgas", 485)) ;
            }
          }
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            test_11 = var_mutableProperties_18610.operator_not (SOURCE_FILE ("instruction-concat.galgas", 487)).boolEnum () ;
            if (kBoolTrue == test_11) {
              const GALGAS_mulEqualExpressionInstructionAST temp_12 = object ;
              TC_Array <C_FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (temp_12.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("the property is not mutable in this context"), fixItArray13  COMMA_SOURCE_FILE ("instruction-concat.galgas", 488)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_2) {
        const GALGAS_mulEqualExpressionInstructionAST temp_14 = object ;
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray15  COMMA_SOURCE_FILE ("instruction-concat.galgas", 491)) ;
        var_targetType_18354.drop () ; // Release error dropped variable
        var_targetVariableCppName_18390.drop () ; // Release error dropped variable
        var_nameForCheckingFormalParameterUsing_18440.drop () ; // Release error dropped variable
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_mulEqualExpressionInstructionAST temp_16 = object ;
    ioArgument_ioVariableMap.setter_searchForReadWriteAccess (temp_16.readProperty_mReceiverName (), var_targetType_18354, var_targetVariableCppName_18390, var_nameForCheckingFormalParameterUsing_18440, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 513)) ;
    }
  }
  const GALGAS_mulEqualExpressionInstructionAST temp_17 = object ;
  cEnumerator_lstringlist enumerator_20905 (temp_17.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_20905.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_20958 = var_targetType_18354.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 528)) ;
    GALGAS_bool var_isPublic_21035 ;
    GALGAS_bool var_isConstant_21051 ;
    var_propertyMap_20958.method_searchKey (enumerator_20905.current_mValue (HERE), var_isPublic_21035, var_isConstant_21051, var_targetType_18354, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 529)) ;
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      test_18 = var_isPublic_21035.operator_not (SOURCE_FILE ("instruction-concat.galgas", 530)).boolEnum () ;
      if (kBoolTrue == test_18) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (enumerator_20905.current_mValue (HERE).readProperty_location (), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray19  COMMA_SOURCE_FILE ("instruction-concat.galgas", 531)) ;
      }
    }
    enumGalgasBool test_20 = kBoolTrue ;
    if (kBoolTrue == test_20) {
      test_20 = var_isConstant_21051.boolEnum () ;
      if (kBoolTrue == test_20) {
        TC_Array <C_FixItDescription> fixItArray21 ;
        inCompiler->emitSemanticError (enumerator_20905.current_mValue (HERE).readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray21  COMMA_SOURCE_FILE ("instruction-concat.galgas", 534)) ;
      }
    }
    enumerator_20905.gotoNextObject () ;
  }
  enumGalgasBool test_22 = kBoolTrue ;
  if (kBoolTrue == test_22) {
    test_22 = var_targetType_18354.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 538)).getter_mulEqualOperatorWithExpression (SOURCE_FILE ("instruction-concat.galgas", 538)).boolEnum () ;
    if (kBoolTrue == test_22) {
      const GALGAS_mulEqualExpressionInstructionAST temp_23 = object ;
      TC_Array <C_FixItDescription> fixItArray24 ;
      inCompiler->emitSemanticError (temp_23.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (var_targetType_18354.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 540)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 540)).add_operation (GALGAS_string ("' type, but this type does not support the '*=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 540)), fixItArray24  COMMA_SOURCE_FILE ("instruction-concat.galgas", 539)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_21832 ;
  const GALGAS_mulEqualExpressionInstructionAST temp_25 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_25.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_18354, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_21832, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 543)) ;
  {
  const GALGAS_mulEqualExpressionInstructionAST temp_26 = object ;
  routine_checkAssignmentTypeWithImplicitGetterCall (var_targetType_18354, var_expression_21832.readProperty_mResultType (), temp_26.readProperty_mInstructionLocation (), var_expression_21832, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 552)) ;
  }
  const GALGAS_mulEqualExpressionInstructionAST temp_27 = object ;
  const GALGAS_mulEqualExpressionInstructionAST temp_28 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (temp_27.readProperty_mInstructionLocation (), var_targetType_18354, var_targetVariableCppName_18390, var_nameForCheckingFormalParameterUsing_18440, temp_28.readProperty_mStructAttributeList (), var_expression_21832, GALGAS_string ("mulAssign_operation")  COMMA_SOURCE_FILE ("instruction-concat.galgas", 554))  COMMA_SOURCE_FILE ("instruction-concat.galgas", 554)) ;
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
  GALGAS_unifiedTypeMap_2D_entry var_targetType_22833 ;
  GALGAS_string var_targetVariableCppName_22869 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_22919 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_divEqualExpressionInstructionAST temp_1 = object ;
    test_0 = temp_1.readProperty_mPrefixedBySelf ().boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GALGAS_unifiedTypeMap_2D_entry var_selfType_23019 ;
        GALGAS_bool var_selfIsMutable_23047 ;
        GALGAS_bool var_mutableProperties_23089 ;
        const bool optionalResult22999 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_23019, var_selfIsMutable_23047, var_mutableProperties_23089) ;
        if (!optionalResult22999) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_selfIsMutable_23047.operator_not (SOURCE_FILE ("instruction-concat.galgas", 580)).boolEnum () ;
            if (kBoolTrue == test_3) {
              const GALGAS_divEqualExpressionInstructionAST temp_4 = object ;
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (temp_4.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray5  COMMA_SOURCE_FILE ("instruction-concat.galgas", 581)) ;
            }
          }
          GALGAS_propertyMap var_propertyMap_23238 = var_selfType_23019.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 583)) ;
          GALGAS_bool var_isConstant_23332 ;
          const GALGAS_divEqualExpressionInstructionAST temp_6 = object ;
          GALGAS_bool joker_23315 ; // Joker input parameter
          var_propertyMap_23238.method_searchKey (temp_6.readProperty_mReceiverName (), joker_23315, var_isConstant_23332, var_targetType_22833, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 584)) ;
          var_nameForCheckingFormalParameterUsing_22919 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName () ;
          const GALGAS_divEqualExpressionInstructionAST temp_7 = object ;
          var_targetVariableCppName_22869 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 586)).add_operation (temp_7.readProperty_mReceiverName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 587)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 587)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = var_isConstant_23332.boolEnum () ;
            if (kBoolTrue == test_8) {
              const GALGAS_divEqualExpressionInstructionAST temp_9 = object ;
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray10  COMMA_SOURCE_FILE ("instruction-concat.galgas", 589)) ;
            }
          }
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            test_11 = var_mutableProperties_23089.operator_not (SOURCE_FILE ("instruction-concat.galgas", 591)).boolEnum () ;
            if (kBoolTrue == test_11) {
              const GALGAS_divEqualExpressionInstructionAST temp_12 = object ;
              TC_Array <C_FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (temp_12.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("the property is not mutable in this context"), fixItArray13  COMMA_SOURCE_FILE ("instruction-concat.galgas", 592)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_2) {
        const GALGAS_divEqualExpressionInstructionAST temp_14 = object ;
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray15  COMMA_SOURCE_FILE ("instruction-concat.galgas", 595)) ;
        var_targetType_22833.drop () ; // Release error dropped variable
        var_targetVariableCppName_22869.drop () ; // Release error dropped variable
        var_nameForCheckingFormalParameterUsing_22919.drop () ; // Release error dropped variable
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_divEqualExpressionInstructionAST temp_16 = object ;
    ioArgument_ioVariableMap.setter_searchForReadWriteAccess (temp_16.readProperty_mReceiverName (), var_targetType_22833, var_targetVariableCppName_22869, var_nameForCheckingFormalParameterUsing_22919, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 618)) ;
    }
  }
  const GALGAS_divEqualExpressionInstructionAST temp_17 = object ;
  cEnumerator_lstringlist enumerator_25184 (temp_17.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_25184.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_25237 = var_targetType_22833.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 627)) ;
    GALGAS_bool var_isPublic_25314 ;
    GALGAS_bool var_isConstant_25330 ;
    var_propertyMap_25237.method_searchKey (enumerator_25184.current_mValue (HERE), var_isPublic_25314, var_isConstant_25330, var_targetType_22833, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 628)) ;
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      test_18 = var_isPublic_25314.operator_not (SOURCE_FILE ("instruction-concat.galgas", 629)).boolEnum () ;
      if (kBoolTrue == test_18) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (enumerator_25184.current_mValue (HERE).readProperty_location (), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray19  COMMA_SOURCE_FILE ("instruction-concat.galgas", 630)) ;
      }
    }
    enumGalgasBool test_20 = kBoolTrue ;
    if (kBoolTrue == test_20) {
      test_20 = var_isConstant_25330.boolEnum () ;
      if (kBoolTrue == test_20) {
        const GALGAS_divEqualExpressionInstructionAST temp_21 = object ;
        TC_Array <C_FixItDescription> fixItArray22 ;
        inCompiler->emitSemanticError (temp_21.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray22  COMMA_SOURCE_FILE ("instruction-concat.galgas", 633)) ;
      }
    }
    enumerator_25184.gotoNextObject () ;
  }
  enumGalgasBool test_23 = kBoolTrue ;
  if (kBoolTrue == test_23) {
    test_23 = var_targetType_22833.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 637)).getter_divEqualOperatorWithExpression (SOURCE_FILE ("instruction-concat.galgas", 637)).boolEnum () ;
    if (kBoolTrue == test_23) {
      const GALGAS_divEqualExpressionInstructionAST temp_24 = object ;
      TC_Array <C_FixItDescription> fixItArray25 ;
      inCompiler->emitSemanticError (temp_24.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (var_targetType_22833.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 639)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 639)).add_operation (GALGAS_string ("' type, but this type does not support the '/=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 639)), fixItArray25  COMMA_SOURCE_FILE ("instruction-concat.galgas", 638)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_26123 ;
  const GALGAS_divEqualExpressionInstructionAST temp_26 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_26.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_22833, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_26123, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 642)) ;
  {
  const GALGAS_divEqualExpressionInstructionAST temp_27 = object ;
  routine_checkAssignmentTypeWithImplicitGetterCall (var_targetType_22833, var_expression_26123.readProperty_mResultType (), temp_27.readProperty_mInstructionLocation (), var_expression_26123, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 651)) ;
  }
  const GALGAS_divEqualExpressionInstructionAST temp_28 = object ;
  const GALGAS_divEqualExpressionInstructionAST temp_29 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (temp_28.readProperty_mInstructionLocation (), var_targetType_22833, var_targetVariableCppName_22869, var_nameForCheckingFormalParameterUsing_22919, temp_29.readProperty_mStructAttributeList (), var_expression_26123, GALGAS_string ("divAssign_operation")  COMMA_SOURCE_FILE ("instruction-concat.galgas", 653))  COMMA_SOURCE_FILE ("instruction-concat.galgas", 653)) ;
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
  GALGAS_unifiedTypeMap_2D_entry var_targetType_27124 ;
  GALGAS_string var_targetVariableCppName_27160 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_27210 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_plusEqualElementsInstructionAST temp_1 = object ;
    test_0 = temp_1.readProperty_mPrefixedBySelf ().boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GALGAS_unifiedTypeMap_2D_entry var_selfType_27310 ;
        GALGAS_bool var_selfIsMutable_27338 ;
        GALGAS_bool var_mutableProperties_27380 ;
        const bool optionalResult27290 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_27310, var_selfIsMutable_27338, var_mutableProperties_27380) ;
        if (!optionalResult27290) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_selfIsMutable_27338.operator_not (SOURCE_FILE ("instruction-concat.galgas", 679)).boolEnum () ;
            if (kBoolTrue == test_3) {
              const GALGAS_plusEqualElementsInstructionAST temp_4 = object ;
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (temp_4.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray5  COMMA_SOURCE_FILE ("instruction-concat.galgas", 680)) ;
            }
          }
          GALGAS_propertyMap var_propertyMap_27529 = var_selfType_27310.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 682)) ;
          GALGAS_bool var_isConstant_27623 ;
          const GALGAS_plusEqualElementsInstructionAST temp_6 = object ;
          GALGAS_bool joker_27606 ; // Joker input parameter
          var_propertyMap_27529.method_searchKey (temp_6.readProperty_mReceiverName (), joker_27606, var_isConstant_27623, var_targetType_27124, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 683)) ;
          var_nameForCheckingFormalParameterUsing_27210 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName () ;
          const GALGAS_plusEqualElementsInstructionAST temp_7 = object ;
          var_targetVariableCppName_27160 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 685)).add_operation (temp_7.readProperty_mReceiverName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 686)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 686)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = var_isConstant_27623.boolEnum () ;
            if (kBoolTrue == test_8) {
              const GALGAS_plusEqualElementsInstructionAST temp_9 = object ;
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray10  COMMA_SOURCE_FILE ("instruction-concat.galgas", 688)) ;
            }
          }
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            test_11 = var_mutableProperties_27380.operator_not (SOURCE_FILE ("instruction-concat.galgas", 690)).boolEnum () ;
            if (kBoolTrue == test_11) {
              const GALGAS_plusEqualElementsInstructionAST temp_12 = object ;
              TC_Array <C_FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (temp_12.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("the property cannot be mutated in this context"), fixItArray13  COMMA_SOURCE_FILE ("instruction-concat.galgas", 691)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_2) {
        const GALGAS_plusEqualElementsInstructionAST temp_14 = object ;
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray15  COMMA_SOURCE_FILE ("instruction-concat.galgas", 694)) ;
        var_targetType_27124.drop () ; // Release error dropped variable
        var_targetVariableCppName_27160.drop () ; // Release error dropped variable
        var_nameForCheckingFormalParameterUsing_27210.drop () ; // Release error dropped variable
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_plusEqualElementsInstructionAST temp_16 = object ;
    ioArgument_ioVariableMap.setter_searchForReadWriteAccess (temp_16.readProperty_mReceiverName (), var_targetType_27124, var_targetVariableCppName_27160, var_nameForCheckingFormalParameterUsing_27210, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 716)) ;
    }
  }
  const GALGAS_plusEqualElementsInstructionAST temp_17 = object ;
  cEnumerator_lstringlist enumerator_29477 (temp_17.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_29477.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_29530 = var_targetType_27124.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 725)) ;
    GALGAS_bool var_isPublic_29607 ;
    GALGAS_bool var_isConstant_29623 ;
    var_propertyMap_29530.method_searchKey (enumerator_29477.current_mValue (HERE), var_isPublic_29607, var_isConstant_29623, var_targetType_27124, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 726)) ;
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      test_18 = var_isPublic_29607.operator_not (SOURCE_FILE ("instruction-concat.galgas", 727)).boolEnum () ;
      if (kBoolTrue == test_18) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (enumerator_29477.current_mValue (HERE).readProperty_location (), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray19  COMMA_SOURCE_FILE ("instruction-concat.galgas", 728)) ;
      }
    }
    enumGalgasBool test_20 = kBoolTrue ;
    if (kBoolTrue == test_20) {
      test_20 = var_isConstant_29623.boolEnum () ;
      if (kBoolTrue == test_20) {
        TC_Array <C_FixItDescription> fixItArray21 ;
        inCompiler->emitSemanticError (enumerator_29477.current_mValue (HERE).readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray21  COMMA_SOURCE_FILE ("instruction-concat.galgas", 731)) ;
      }
    }
    enumerator_29477.gotoNextObject () ;
  }
  GALGAS_functionSignature var_addAssignOperatorArguments_29934 = var_targetType_27124.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 735)) ;
  enumGalgasBool test_22 = kBoolTrue ;
  if (kBoolTrue == test_22) {
    test_22 = GALGAS_bool (kIsEqual, var_addAssignOperatorArguments_29934.getter_length (SOURCE_FILE ("instruction-concat.galgas", 736)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_22) {
      const GALGAS_plusEqualElementsInstructionAST temp_23 = object ;
      TC_Array <C_FixItDescription> fixItArray24 ;
      inCompiler->emitSemanticError (temp_23.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (var_targetType_27124.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 738)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 738)).add_operation (GALGAS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 738)), fixItArray24  COMMA_SOURCE_FILE ("instruction-concat.galgas", 737)) ;
    }
  }
  if (kBoolFalse == test_22) {
    enumGalgasBool test_25 = kBoolTrue ;
    if (kBoolTrue == test_25) {
      const GALGAS_plusEqualElementsInstructionAST temp_26 = object ;
      test_25 = GALGAS_bool (kIsNotEqual, temp_26.readProperty_mExpressions ().getter_length (SOURCE_FILE ("instruction-concat.galgas", 740)).objectCompare (var_addAssignOperatorArguments_29934.getter_length (SOURCE_FILE ("instruction-concat.galgas", 740)))).boolEnum () ;
      if (kBoolTrue == test_25) {
        const GALGAS_plusEqualElementsInstructionAST temp_27 = object ;
        const GALGAS_plusEqualElementsInstructionAST temp_28 = object ;
        TC_Array <C_FixItDescription> fixItArray29 ;
        inCompiler->emitSemanticError (temp_27.readProperty_mInstructionLocation (), GALGAS_string ("calling the '+=' operator on an '@").add_operation (var_targetType_27124.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 742)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 742)).add_operation (GALGAS_string ("' object requires "), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 742)).add_operation (var_addAssignOperatorArguments_29934.getter_length (SOURCE_FILE ("instruction-concat.galgas", 743)).getter_string (SOURCE_FILE ("instruction-concat.galgas", 743)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 742)).add_operation (GALGAS_string (" parameter(s), while this invocation has "), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 743)).add_operation (temp_28.readProperty_mExpressions ().getter_length (SOURCE_FILE ("instruction-concat.galgas", 744)).getter_string (SOURCE_FILE ("instruction-concat.galgas", 744)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 743)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 744)), fixItArray29  COMMA_SOURCE_FILE ("instruction-concat.galgas", 741)) ;
      }
    }
    if (kBoolFalse == test_25) {
      GALGAS_semanticExpressionListForGeneration var_effectiveParameterList_30688 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-concat.galgas", 746)) ;
      const GALGAS_plusEqualElementsInstructionAST temp_30 = object ;
      cEnumerator_actualOutputExpressionList enumerator_30755 (temp_30.readProperty_mExpressions (), kENUMERATION_UP) ;
      cEnumerator_functionSignature enumerator_30817 (var_addAssignOperatorArguments_29934, kENUMERATION_UP) ;
      while (enumerator_30755.hasCurrentObject () && enumerator_30817.hasCurrentObject ()) {
        GALGAS_semanticExpressionForGeneration var_expression_31114 ;
        callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_30755.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_30817.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_31114, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 748)) ;
        enumGalgasBool test_31 = kBoolTrue ;
        if (kBoolTrue == test_31) {
          test_31 = GALGAS_bool (kIsNotEqual, enumerator_30817.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_30755.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
          if (kBoolTrue == test_31) {
            GALGAS_string temp_32 ;
            const enumGalgasBool test_33 = GALGAS_bool (kIsNotEqual, enumerator_30817.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_33) {
              temp_32 = enumerator_30817.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 757)) ;
            }else if (kBoolFalse == test_33) {
              temp_32 = GALGAS_string::makeEmptyString () ;
            }
            GALGAS_string var_s_31199 = GALGAS_string ("!").add_operation (temp_32, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 757)) ;
            TC_Array <C_FixItDescription> fixItArray34 ;
            appendFixItActions (fixItArray34, kFixItReplace, var_s_31199) ;
            inCompiler->emitSemanticError (enumerator_30755.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_31199, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 758)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 758)), fixItArray34  COMMA_SOURCE_FILE ("instruction-concat.galgas", 758)) ;
          }
        }
        {
        routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_30817.current_mFormalArgumentType (HERE), var_expression_31114.readProperty_mResultType (), enumerator_30755.current_mEndOfExpressionLocation (HERE), var_expression_31114, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 762)) ;
        }
        var_effectiveParameterList_30688.addAssign_operation (var_expression_31114  COMMA_SOURCE_FILE ("instruction-concat.galgas", 763)) ;
        enumerator_30755.gotoNextObject () ;
        enumerator_30817.gotoNextObject () ;
      }
      const GALGAS_plusEqualElementsInstructionAST temp_35 = object ;
      const GALGAS_plusEqualElementsInstructionAST temp_36 = object ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_plusEqualnstructionForGeneration::constructor_new (var_targetVariableCppName_27160, var_targetType_27124, var_nameForCheckingFormalParameterUsing_27210, temp_35.readProperty_mInstructionLocation (), temp_36.readProperty_mStructAttributeList (), var_effectiveParameterList_30688  COMMA_SOURCE_FILE ("instruction-concat.galgas", 766))  COMMA_SOURCE_FILE ("instruction-concat.galgas", 766)) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_mTargetType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 798)) ;
  GALGAS_stringlist var_parameterList_33153 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-concat.galgas", 799)) ;
  const GALGAS_plusEqualnstructionForGeneration temp_1 = object ;
  cEnumerator_semanticExpressionListForGeneration enumerator_33188 (temp_1.readProperty_mExpressionList (), kENUMERATION_UP) ;
  while (enumerator_33188.hasCurrentObject ()) {
    GALGAS_string var_parameter_33396 ;
    callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_33188.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_33396, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 801)) ;
    var_parameterList_33153.addAssign_operation (var_parameter_33396  COMMA_SOURCE_FILE ("instruction-concat.galgas", 808)) ;
    enumerator_33188.gotoNextObject () ;
  }
  {
  const GALGAS_plusEqualnstructionForGeneration temp_2 = object ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_2.readProperty_mNameForCheckingFormalParameterUsing () COMMA_SOURCE_FILE ("instruction-concat.galgas", 811)) ;
  }
  const GALGAS_plusEqualnstructionForGeneration temp_3 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(temp_3.readProperty_mReceiverCppName (), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 812)) ;
  const GALGAS_plusEqualnstructionForGeneration temp_4 = object ;
  cEnumerator_lstringlist enumerator_33599 (temp_4.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_33599.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_33599.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 814)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 814)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 814)) ;
    enumerator_33599.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".addAssign_operation ("), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 817)) ;
  {
  const GALGAS_plusEqualnstructionForGeneration temp_5 = object ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_5.readProperty_mReceiverCppName () COMMA_SOURCE_FILE ("instruction-concat.galgas", 818)) ;
  }
  cEnumerator_stringlist enumerator_33879 (var_parameterList_33153, kENUMERATION_UP) ;
  while (enumerator_33879.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_33879.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 820)) ;
    if (enumerator_33879.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 821)) ;
    }
    enumerator_33879.gotoNextObject () ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_plusEqualnstructionForGeneration temp_7 = object ;
    test_6 = temp_7.readProperty_mTargetType ().getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 823)).getter_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("instruction-concat.galgas", 823)).boolEnum () ;
    if (kBoolTrue == test_6) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 824)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 824)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 824)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 825)) COMMA_SOURCE_FILE ("instruction-concat.galgas", 825)) ;
      }
    }
  }
  const GALGAS_plusEqualnstructionForGeneration temp_8 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_8.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 827)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 827)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 827)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 827)) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_mTargetType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 850)) ;
  GALGAS_string var_sourceVar_35454 ;
  const GALGAS_opEqualInstructionForGeneration temp_1 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mSourceExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_35454, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 851)) ;
  {
  const GALGAS_opEqualInstructionForGeneration temp_2 = object ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_2.readProperty_mNameForCheckingFormalParameterUsing () COMMA_SOURCE_FILE ("instruction-concat.galgas", 858)) ;
  }
  const GALGAS_opEqualInstructionForGeneration temp_3 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(temp_3.readProperty_mTargetVariableCppName (), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 859)) ;
  const GALGAS_opEqualInstructionForGeneration temp_4 = object ;
  cEnumerator_lstringlist enumerator_35607 (temp_4.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_35607.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_35607.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 861)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 861)) ;
    enumerator_35607.gotoNextObject () ;
  }
  const GALGAS_opEqualInstructionForGeneration temp_5 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".").add_operation (temp_5.readProperty_mGeneratedMethod (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 863)).add_operation (GALGAS_string ("("), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 863)).add_operation (var_sourceVar_35454, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 863)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 863)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 864)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 864)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 864)) ;
  const GALGAS_opEqualInstructionForGeneration temp_6 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_6.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 865)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 865)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 865)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 865)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 866)) COMMA_SOURCE_FILE ("instruction-concat.galgas", 866)) ;
  }
  {
  const GALGAS_opEqualInstructionForGeneration temp_7 = object ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_7.readProperty_mTargetVariableCppName () COMMA_SOURCE_FILE ("instruction-concat.galgas", 867)) ;
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
  cEnumerator_lstringlist enumerator_2983 (temp_0.readProperty_mDropList (), kENUMERATION_UP) ;
  while (enumerator_2983.hasCurrentObject ()) {
    {
    GALGAS_unifiedTypeMap_2D_entry joker_3056_3 ; // Joker input parameter
    GALGAS_string joker_3056_2 ; // Joker input parameter
    GALGAS_string joker_3056_1 ; // Joker input parameter
    ioArgument_ioVariableMap.setter_searchForDropAccess (enumerator_2983.current_mValue (HERE), joker_3056_3, joker_3056_2, joker_3056_1, inCompiler COMMA_SOURCE_FILE ("instruction-drop.galgas", 76)) ;
    }
    enumerator_2983.gotoNextObject () ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mLocationExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 184)) ;
  const GALGAS_errorInstructionAST temp_1 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_1.readProperty_mMessageExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 185)) ;
  const GALGAS_errorInstructionAST temp_2 = object ;
  extensionMethod_enterFixItListInSemanticContext (temp_2.readProperty_mFixitListAST (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 186)) ;
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
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) constinArgument_inLocationExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLocationType (), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, outArgument_outLocationExpression, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 239)) ;
  {
  routine_checkAssignmentTypeWithImplicitGetterCall (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLocationType (), outArgument_outLocationExpression.readProperty_mResultType (), constinArgument_inErrorLocation, outArgument_outLocationExpression, inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 248)) ;
  }
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) constinArgument_inMessageExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-error.galgas", 258)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, outArgument_outMessageExpression, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 255)) ;
  outArgument_outFixitListForGeneration = GALGAS_fixitListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-error.galgas", 264)) ;
  cEnumerator_fixitListAST enumerator_9357 (constinArgument_inFixitListAST, kENUMERATION_UP) ;
  while (enumerator_9357.hasCurrentObject ()) {
    switch (enumerator_9357.current_mElement (HERE).enumValue ()) {
    case GALGAS_fixitElementAST::kNotBuilt:
      break ;
    case GALGAS_fixitElementAST::kEnum_fixItRemove:
      {
        outArgument_outFixitListForGeneration.addAssign_operation (GALGAS_fixitElementForGeneration::constructor_fixItRemove (SOURCE_FILE ("instruction-error.galgas", 268))  COMMA_SOURCE_FILE ("instruction-error.galgas", 268)) ;
      }
      break ;
    case GALGAS_fixitElementAST::kEnum_fixItReplace:
      {
        const cEnumAssociatedValues_fixitElementAST_fixItReplace * extractPtr_10378 = (const cEnumAssociatedValues_fixitElementAST_fixItReplace *) (enumerator_9357.current_mElement (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_9498_exp = extractPtr_10378->mAssociatedValue0 ;
        const GALGAS_location extractedValue_9512_errorLocation = extractPtr_10378->mAssociatedValue1 ;
        GALGAS_semanticExpressionForGeneration var_expression_9772 ;
        callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) extractedValue_9498_exp.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringListType (), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_9772, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 270)) ;
        enumGalgasBool test_0 = kBoolTrue ;
        if (kBoolTrue == test_0) {
          GALGAS_bool test_1 = GALGAS_bool (kIsNotEqual, var_expression_9772.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringListType ())) ;
          if (kBoolTrue == test_1.boolEnum ()) {
            test_1 = GALGAS_bool (kIsNotEqual, var_expression_9772.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLStringListType ())) ;
          }
          GALGAS_bool test_2 = test_1 ;
          if (kBoolTrue == test_2.boolEnum ()) {
            test_2 = GALGAS_bool (kIsNotEqual, var_expression_9772.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringSetType ())) ;
          }
          GALGAS_bool test_3 = test_2 ;
          if (kBoolTrue == test_3.boolEnum ()) {
            test_3 = GALGAS_bool (kIsNotEqual, var_expression_9772.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType ())) ;
          }
          test_0 = test_3.boolEnum () ;
          if (kBoolTrue == test_0) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (extractedValue_9512_errorLocation, GALGAS_string ("expression type is @").add_operation (var_expression_9772.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 282)), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 282)).add_operation (GALGAS_string (", it should be an @string, @stringset, @stringlist or @lstringlist"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 282)), fixItArray4  COMMA_SOURCE_FILE ("instruction-error.galgas", 282)) ;
          }
        }
        outArgument_outFixitListForGeneration.addAssign_operation (GALGAS_fixitElementForGeneration::constructor_fixItReplace (var_expression_9772  COMMA_SOURCE_FILE ("instruction-error.galgas", 285))  COMMA_SOURCE_FILE ("instruction-error.galgas", 285)) ;
      }
      break ;
    case GALGAS_fixitElementAST::kEnum_fixItInsertBefore:
      {
        const cEnumAssociatedValues_fixitElementAST_fixItInsertBefore * extractPtr_11295 = (const cEnumAssociatedValues_fixitElementAST_fixItInsertBefore *) (enumerator_9357.current_mElement (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_10410_exp = extractPtr_11295->mAssociatedValue0 ;
        const GALGAS_location extractedValue_10424_errorLocation = extractPtr_11295->mAssociatedValue1 ;
        GALGAS_semanticExpressionForGeneration var_expression_10684 ;
        callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) extractedValue_10410_exp.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringListType (), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_10684, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 287)) ;
        enumGalgasBool test_5 = kBoolTrue ;
        if (kBoolTrue == test_5) {
          GALGAS_bool test_6 = GALGAS_bool (kIsNotEqual, var_expression_10684.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringListType ())) ;
          if (kBoolTrue == test_6.boolEnum ()) {
            test_6 = GALGAS_bool (kIsNotEqual, var_expression_10684.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLStringListType ())) ;
          }
          GALGAS_bool test_7 = test_6 ;
          if (kBoolTrue == test_7.boolEnum ()) {
            test_7 = GALGAS_bool (kIsNotEqual, var_expression_10684.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringSetType ())) ;
          }
          GALGAS_bool test_8 = test_7 ;
          if (kBoolTrue == test_8.boolEnum ()) {
            test_8 = GALGAS_bool (kIsNotEqual, var_expression_10684.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType ())) ;
          }
          test_5 = test_8.boolEnum () ;
          if (kBoolTrue == test_5) {
            TC_Array <C_FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (extractedValue_10424_errorLocation, GALGAS_string ("expression type is @").add_operation (var_expression_10684.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 299)), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 299)).add_operation (GALGAS_string (", it should be an @string, @stringset, @stringlist or @lstringlist"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 299)), fixItArray9  COMMA_SOURCE_FILE ("instruction-error.galgas", 299)) ;
          }
        }
        outArgument_outFixitListForGeneration.addAssign_operation (GALGAS_fixitElementForGeneration::constructor_fixItInsertBefore (var_expression_10684  COMMA_SOURCE_FILE ("instruction-error.galgas", 302))  COMMA_SOURCE_FILE ("instruction-error.galgas", 302)) ;
      }
      break ;
    case GALGAS_fixitElementAST::kEnum_fixItInsertAfter:
      {
        const cEnumAssociatedValues_fixitElementAST_fixItInsertAfter * extractPtr_12210 = (const cEnumAssociatedValues_fixitElementAST_fixItInsertAfter *) (enumerator_9357.current_mElement (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_11326_exp = extractPtr_12210->mAssociatedValue0 ;
        const GALGAS_location extractedValue_11340_errorLocation = extractPtr_12210->mAssociatedValue1 ;
        GALGAS_semanticExpressionForGeneration var_expression_11600 ;
        callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) extractedValue_11326_exp.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringListType (), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_11600, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 304)) ;
        enumGalgasBool test_10 = kBoolTrue ;
        if (kBoolTrue == test_10) {
          GALGAS_bool test_11 = GALGAS_bool (kIsNotEqual, var_expression_11600.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringListType ())) ;
          if (kBoolTrue == test_11.boolEnum ()) {
            test_11 = GALGAS_bool (kIsNotEqual, var_expression_11600.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLStringListType ())) ;
          }
          GALGAS_bool test_12 = test_11 ;
          if (kBoolTrue == test_12.boolEnum ()) {
            test_12 = GALGAS_bool (kIsNotEqual, var_expression_11600.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringSetType ())) ;
          }
          GALGAS_bool test_13 = test_12 ;
          if (kBoolTrue == test_13.boolEnum ()) {
            test_13 = GALGAS_bool (kIsNotEqual, var_expression_11600.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType ())) ;
          }
          test_10 = test_13.boolEnum () ;
          if (kBoolTrue == test_10) {
            TC_Array <C_FixItDescription> fixItArray14 ;
            inCompiler->emitSemanticError (extractedValue_11340_errorLocation, GALGAS_string ("expression type is @").add_operation (var_expression_11600.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 316)), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 316)).add_operation (GALGAS_string (", it should be an @string, @stringset, @stringlist or @lstringlist"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 316)), fixItArray14  COMMA_SOURCE_FILE ("instruction-error.galgas", 316)) ;
          }
        }
        outArgument_outFixitListForGeneration.addAssign_operation (GALGAS_fixitElementForGeneration::constructor_fixItInsertAfter (var_expression_11600  COMMA_SOURCE_FILE ("instruction-error.galgas", 319))  COMMA_SOURCE_FILE ("instruction-error.galgas", 319)) ;
      }
      break ;
    }
    enumerator_9357.gotoNextObject () ;
  }
  enumGalgasBool test_15 = kBoolTrue ;
  if (kBoolTrue == test_15) {
    test_15 = GALGAS_bool (kIsNotEqual, outArgument_outMessageExpression.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType ())).boolEnum () ;
    if (kBoolTrue == test_15) {
      TC_Array <C_FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the ").add_operation (constinArgument_inErrorOrWarningString, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 325)).add_operation (GALGAS_string (" message expression type is '@"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 325)).add_operation (outArgument_outMessageExpression.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 325)), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 325)).add_operation (GALGAS_string ("'; it should be of the '@string' type"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 325)), fixItArray16  COMMA_SOURCE_FILE ("instruction-error.galgas", 324)) ;
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
  GALGAS_semanticExpressionForGeneration var_locationExpression_13290 ;
  GALGAS_semanticExpressionForGeneration var_messageExpression_13317 ;
  GALGAS_fixitListForGeneration var_fixitListForGeneration_13349 ;
  {
  const GALGAS_errorInstructionAST temp_0 = object ;
  const GALGAS_errorInstructionAST temp_1 = object ;
  const GALGAS_errorInstructionAST temp_2 = object ;
  const GALGAS_errorInstructionAST temp_3 = object ;
  routine_analyzeErrorOrWarningInstruction (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_0.readProperty_mLocationExpression (), temp_1.readProperty_mMessageExpression (), temp_2.readProperty_mFixitListAST (), temp_3.readProperty_mInstructionLocation (), GALGAS_string ("error"), ioArgument_ioVariableMap, var_locationExpression_13290, var_messageExpression_13317, var_fixitListForGeneration_13349, inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 340)) ;
  }
  GALGAS_stringlist var_builtVariableCppNameList_13414 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-error.galgas", 355)) ;
  const GALGAS_errorInstructionAST temp_4 = object ;
  cEnumerator_lstringlist enumerator_13445 (temp_4.readProperty_mBuiltVariableList (), kENUMERATION_UP) ;
  while (enumerator_13445.hasCurrentObject ()) {
    GALGAS_string var_varCppName_13545 ;
    {
    GALGAS_unifiedTypeMap_2D_entry joker_13528 ; // Joker input parameter
    GALGAS_string joker_13547 ; // Joker input parameter
    ioArgument_ioVariableMap.setter_searchForWriteAccess (enumerator_13445.current_mValue (HERE), joker_13528, var_varCppName_13545, joker_13547, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 357)) ;
    }
    var_builtVariableCppNameList_13414.addAssign_operation (var_varCppName_13545  COMMA_SOURCE_FILE ("instruction-error.galgas", 358)) ;
    enumerator_13445.gotoNextObject () ;
  }
  const GALGAS_errorInstructionAST temp_5 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_errorInstructionForGeneration::constructor_new (temp_5.readProperty_mInstructionLocation (), var_locationExpression_13290, var_messageExpression_13317, var_builtVariableCppNameList_13414, var_fixitListForGeneration_13349  COMMA_SOURCE_FILE ("instruction-error.galgas", 361))  COMMA_SOURCE_FILE ("instruction-error.galgas", 361)) ;
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
  GALGAS_string var_receiverCppVarName_16992 ;
  const GALGAS_errorInstructionForGeneration temp_0 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppVarName_16992, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 440)) ;
  GALGAS_string var_messageCppVarName_17199 ;
  const GALGAS_errorInstructionForGeneration temp_1 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mErrorExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_messageCppVarName_17199, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 448)) ;
  GALGAS_string var_fixItArrayCppName_17452 ;
  const GALGAS_errorInstructionForGeneration temp_2 = object ;
  extensionMethod_generateFixIt (temp_2.readProperty_mFixitListForGeneration (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, var_fixItArrayCppName_17452, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 456)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 465)) COMMA_SOURCE_FILE ("instruction-error.galgas", 465)) ;
  }
  const GALGAS_errorInstructionForGeneration temp_3 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 466)).add_operation (GALGAS_string ("->emitSemanticError ("), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 466)).add_operation (var_receiverCppVarName_16992, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 466)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 467)).add_operation (var_messageCppVarName_17199, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 467)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 468)).add_operation (var_fixItArrayCppName_17452, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 468)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 469)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 470)), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 469)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 470)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 466)) ;
  const GALGAS_errorInstructionForGeneration temp_4 = object ;
  cEnumerator_stringlist enumerator_17815 (temp_4.readProperty_mBuiltVariableCppNameList (), kENUMERATION_UP) ;
  while (enumerator_17815.hasCurrentObject ()) {
    {
    ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (enumerator_17815.current_mValue (HERE) COMMA_SOURCE_FILE ("instruction-error.galgas", 473)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_17815.current_mValue (HERE).add_operation (GALGAS_string (".drop () ; // Release error dropped variable\n"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 474)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 474)) ;
    enumerator_17815.gotoNextObject () ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mWhileExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 500)) ;
  const GALGAS_forInstructionAST temp_1 = object ;
  extensionMethod_enterInstructionListInSemanticContext (temp_1.readProperty_mBeforeInstructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 501)) ;
  const GALGAS_forInstructionAST temp_2 = object ;
  extensionMethod_enterInstructionListInSemanticContext (temp_2.readProperty_mBetweenInstructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 502)) ;
  const GALGAS_forInstructionAST temp_3 = object ;
  extensionMethod_enterInstructionListInSemanticContext (temp_3.readProperty_mDoInstructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 503)) ;
  const GALGAS_forInstructionAST temp_4 = object ;
  extensionMethod_enterInstructionListInSemanticContext (temp_4.readProperty_mAfterInstructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 504)) ;
  const GALGAS_forInstructionAST temp_5 = object ;
  cEnumerator_forInstructionEnumeratedObjectListAST enumerator_16610 (temp_5.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
  while (enumerator_16610.hasCurrentObject ()) {
    callExtensionMethod_enterInSemanticContext ((const cPtr_abstractEnumeratedCollectionAST *) enumerator_16610.current_mEnumeratedCollection (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 506)) ;
    enumerator_16610.gotoNextObject () ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mEnumeratedExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 517)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mEnumeratedExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 523)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mEnumeratedExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 529)) ;
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
                                                                                        GALGAS_localConstantList & ioArgument_ioLocalConstantListForDoBranch,
                                                                                        GALGAS_string & outArgument_outEnumeratorCppName,
                                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outEnumerationExpression,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumeratedCollectionImplicitVarInExpAST * object = (const cPtr_enumeratedCollectionImplicitVarInExpAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumeratedCollectionImplicitVarInExpAST) ;
  const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mEnumeratedExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-for.galgas", 560)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, outArgument_outEnumerationExpression, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 557)) ;
  const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_1 = object ;
  outArgument_outEnumeratorCppName = GALGAS_string ("enumerator_").add_operation (temp_1.readProperty_mEndOfAnonymousEnumeration ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 566)).getter_string (SOURCE_FILE ("instruction-for.galgas", 566)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 566)) ;
  GALGAS_enumerationDescriptorList var_enumerationDescriptorList_19412 = outArgument_outEnumerationExpression.readProperty_mResultType ().getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 567)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsEqual, var_enumerationDescriptorList_19412.getter_length (SOURCE_FILE ("instruction-for.galgas", 568)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mEndOfAnonymousEnumeration (), GALGAS_string ("an '@").add_operation (outArgument_outEnumerationExpression.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 569)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 569)).add_operation (GALGAS_string ("' object cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 569)), fixItArray4  COMMA_SOURCE_FILE ("instruction-for.galgas", 569)) ;
    }
  }
  GALGAS_string var_suggestion_19712 = GALGAS_string ("(") ;
  cEnumerator_enumerationDescriptorList enumerator_19758 (var_enumerationDescriptorList_19412, kENUMERATION_UP) ;
  while (enumerator_19758.hasCurrentObject ()) {
    const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_5 = object ;
    var_suggestion_19712.plusAssign_operation(temp_5.readProperty_mPrefix ().readProperty_string ().add_operation (enumerator_19758.current_mEnumerationName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 575)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 575)) ;
    const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_6 = object ;
    const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_7 = object ;
    ioArgument_ioLocalConstantListForDoBranch.addAssign_operation (enumerator_19758.current_mEnumeratedType (HERE), GALGAS_lstring::constructor_new (temp_6.readProperty_mPrefix ().readProperty_string ().add_operation (enumerator_19758.current_mEnumerationName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 578)), temp_7.readProperty_mEndOfAnonymousEnumeration ()  COMMA_SOURCE_FILE ("instruction-for.galgas", 578)), GALGAS_bool (true), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 580)).add_operation (enumerator_19758.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-for.galgas", 580)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 580)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 580))  COMMA_SOURCE_FILE ("instruction-for.galgas", 576)) ;
    if (enumerator_19758.hasNextObject ()) {
      var_suggestion_19712.plusAssign_operation(GALGAS_string (" "), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 582)) ;
    }
    enumerator_19758.gotoNextObject () ;
  }
  var_suggestion_19712.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 584)) ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorAnomynousForInstructionEnumeratedObject.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_8) {
      const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_9 = object ;
      TC_Array <C_FixItDescription> fixItArray10 ;
      appendFixItActions (fixItArray10, kFixItReplace, var_suggestion_19712) ;
      inCompiler->emitSemanticError (temp_9.readProperty_mEndOfAnonymousEnumeration (), GALGAS_string ("anonymous 'for' enumerated object (due to '--error-anonymous-for-instruction' option)"), fixItArray10  COMMA_SOURCE_FILE ("instruction-for.galgas", 586)) ;
    }
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
                                                                                    GALGAS_localConstantList & ioArgument_ioLocalConstantListForDoBranch,
                                                                                    GALGAS_string & outArgument_outEnumeratorCppName,
                                                                                    GALGAS_semanticExpressionForGeneration & outArgument_outEnumerationExpression,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumeratedCollectionCstListInExpAST * object = (const cPtr_enumeratedCollectionCstListInExpAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumeratedCollectionCstListInExpAST) ;
  const GALGAS_enumeratedCollectionCstListInExpAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mEnumeratedExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-for.galgas", 606)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, outArgument_outEnumerationExpression, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 603)) ;
  const GALGAS_enumeratedCollectionCstListInExpAST temp_1 = object ;
  outArgument_outEnumeratorCppName = GALGAS_string ("enumerator_").add_operation (temp_1.readProperty_mEndOfEnumerationExpression ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 612)).getter_string (SOURCE_FILE ("instruction-for.galgas", 612)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 612)) ;
  GALGAS_enumerationDescriptorList var_enumerationDescriptorList_21377 = outArgument_outEnumerationExpression.readProperty_mResultType ().getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 613)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsEqual, var_enumerationDescriptorList_21377.getter_length (SOURCE_FILE ("instruction-for.galgas", 614)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_enumeratedCollectionCstListInExpAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mEndOfEnumerationExpression (), GALGAS_string ("an '@").add_operation (outArgument_outEnumerationExpression.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 615)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 615)).add_operation (GALGAS_string ("' object cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 615)), fixItArray4  COMMA_SOURCE_FILE ("instruction-for.galgas", 615)) ;
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      const GALGAS_enumeratedCollectionCstListInExpAST temp_6 = object ;
      const GALGAS_enumeratedCollectionCstListInExpAST temp_7 = object ;
      test_5 = GALGAS_bool (kIsEqual, temp_6.readProperty_mElementList ().getter_length (SOURCE_FILE ("instruction-for.galgas", 618)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (temp_7.readProperty_mEndsWithEllipsis ().operator_not (SOURCE_FILE ("instruction-for.galgas", 618)) COMMA_SOURCE_FILE ("instruction-for.galgas", 618)).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_enumerationDescriptorList var_currentTypedAttributeList_21756 = outArgument_outEnumerationExpression.readProperty_mResultType ().getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 619)) ;
        cEnumerator_enumerationDescriptorList enumerator_21864 (var_currentTypedAttributeList_21756, kENUMERATION_UP) ;
        while (enumerator_21864.hasCurrentObject ()) {
          {
          const GALGAS_enumeratedCollectionCstListInExpAST temp_8 = object ;
          ioArgument_ioVariableMap.setter_insertUsedLocalConstant (GALGAS_lstring::constructor_new (enumerator_21864.current_mEnumerationName (HERE), temp_8.readProperty_mEndOfEnumerationExpression ()  COMMA_SOURCE_FILE ("instruction-for.galgas", 622)), enumerator_21864.current_mEnumeratedType (HERE), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 624)).add_operation (enumerator_21864.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-for.galgas", 624)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 624)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 624)), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 625)).add_operation (enumerator_21864.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-for.galgas", 625)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 625)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 625)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 621)) ;
          }
          enumerator_21864.gotoNextObject () ;
        }
      }
    }
    if (kBoolFalse == test_5) {
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        const GALGAS_enumeratedCollectionCstListInExpAST temp_10 = object ;
        const GALGAS_enumeratedCollectionCstListInExpAST temp_11 = object ;
        test_9 = temp_10.readProperty_mEndsWithEllipsis ().operator_not (SOURCE_FILE ("instruction-for.galgas", 628)).operator_and (GALGAS_bool (kIsNotEqual, temp_11.readProperty_mElementList ().getter_length (SOURCE_FILE ("instruction-for.galgas", 628)).objectCompare (var_enumerationDescriptorList_21377.getter_length (SOURCE_FILE ("instruction-for.galgas", 628)))) COMMA_SOURCE_FILE ("instruction-for.galgas", 628)).boolEnum () ;
        if (kBoolTrue == test_9) {
          const GALGAS_enumeratedCollectionCstListInExpAST temp_12 = object ;
          GALGAS_string temp_13 ;
          const enumGalgasBool test_14 = GALGAS_bool (kIsStrictSup, var_enumerationDescriptorList_21377.getter_length (SOURCE_FILE ("instruction-for.galgas", 632)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
          if (kBoolTrue == test_14) {
            temp_13 = GALGAS_string ("s") ;
          }else if (kBoolFalse == test_14) {
            temp_13 = GALGAS_string::makeEmptyString () ;
          }
          const GALGAS_enumeratedCollectionCstListInExpAST temp_15 = object ;
          TC_Array <C_FixItDescription> fixItArray16 ;
          inCompiler->emitSemanticError (temp_12.readProperty_mEndOfEnumerationExpression (), GALGAS_string ("the '@").add_operation (outArgument_outEnumerationExpression.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 630)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 630)).add_operation (GALGAS_string ("' type requires "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 630)).add_operation (var_enumerationDescriptorList_21377.getter_length (SOURCE_FILE ("instruction-for.galgas", 631)).getter_string (SOURCE_FILE ("instruction-for.galgas", 631)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 630)).add_operation (GALGAS_string (" argument"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 631)).add_operation (temp_13, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 631)).add_operation (GALGAS_string (" for enumeration: this list provides "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 632)).add_operation (temp_15.readProperty_mElementList ().getter_length (SOURCE_FILE ("instruction-for.galgas", 634)).getter_string (SOURCE_FILE ("instruction-for.galgas", 634)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 633)), fixItArray16  COMMA_SOURCE_FILE ("instruction-for.galgas", 629)) ;
        }
      }
      if (kBoolFalse == test_9) {
        enumGalgasBool test_17 = kBoolTrue ;
        if (kBoolTrue == test_17) {
          const GALGAS_enumeratedCollectionCstListInExpAST temp_18 = object ;
          const GALGAS_enumeratedCollectionCstListInExpAST temp_19 = object ;
          test_17 = temp_18.readProperty_mEndsWithEllipsis ().operator_and (GALGAS_bool (kIsStrictSup, temp_19.readProperty_mElementList ().getter_length (SOURCE_FILE ("instruction-for.galgas", 635)).objectCompare (var_enumerationDescriptorList_21377.getter_length (SOURCE_FILE ("instruction-for.galgas", 635)))) COMMA_SOURCE_FILE ("instruction-for.galgas", 635)).boolEnum () ;
          if (kBoolTrue == test_17) {
            const GALGAS_enumeratedCollectionCstListInExpAST temp_20 = object ;
            GALGAS_string temp_21 ;
            const enumGalgasBool test_22 = GALGAS_bool (kIsStrictSup, var_enumerationDescriptorList_21377.getter_length (SOURCE_FILE ("instruction-for.galgas", 639)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
            if (kBoolTrue == test_22) {
              temp_21 = GALGAS_string ("s") ;
            }else if (kBoolFalse == test_22) {
              temp_21 = GALGAS_string::makeEmptyString () ;
            }
            const GALGAS_enumeratedCollectionCstListInExpAST temp_23 = object ;
            TC_Array <C_FixItDescription> fixItArray24 ;
            inCompiler->emitSemanticError (temp_20.readProperty_mEndOfEnumerationExpression (), GALGAS_string ("the '@").add_operation (outArgument_outEnumerationExpression.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 637)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 637)).add_operation (GALGAS_string ("' type requires "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 637)).add_operation (var_enumerationDescriptorList_21377.getter_length (SOURCE_FILE ("instruction-for.galgas", 638)).getter_string (SOURCE_FILE ("instruction-for.galgas", 638)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 637)).add_operation (GALGAS_string (" argument"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 638)).add_operation (temp_21, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 638)).add_operation (GALGAS_string (" or less for enumeration: this list provides "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 639)).add_operation (temp_23.readProperty_mElementList ().getter_length (SOURCE_FILE ("instruction-for.galgas", 641)).getter_string (SOURCE_FILE ("instruction-for.galgas", 641)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 640)), fixItArray24  COMMA_SOURCE_FILE ("instruction-for.galgas", 636)) ;
          }
        }
        if (kBoolFalse == test_17) {
          enumGalgasBool test_25 = kBoolTrue ;
          if (kBoolTrue == test_25) {
            GALGAS_bool test_26 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorEllipsisInEnumeratedObject.readProperty_value ()) ;
            if (kBoolTrue == test_26.boolEnum ()) {
              const GALGAS_enumeratedCollectionCstListInExpAST temp_27 = object ;
              test_26 = GALGAS_bool (kIsStrictSup, var_enumerationDescriptorList_21377.getter_length (SOURCE_FILE ("instruction-for.galgas", 643)).objectCompare (temp_27.readProperty_mElementList ().getter_length (SOURCE_FILE ("instruction-for.galgas", 643)))) ;
            }
            test_25 = test_26.boolEnum () ;
            if (kBoolTrue == test_25) {
              const GALGAS_enumeratedCollectionCstListInExpAST temp_28 = object ;
              GALGAS_uint var_missingArgumentCount_23408 = var_enumerationDescriptorList_21377.getter_length (SOURCE_FILE ("instruction-for.galgas", 644)).substract_operation (temp_28.readProperty_mElementList ().getter_length (SOURCE_FILE ("instruction-for.galgas", 644)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 644)) ;
              const GALGAS_enumeratedCollectionCstListInExpAST temp_29 = object ;
              TC_Array <C_FixItDescription> fixItArray30 ;
              GALGAS_string temp_31 ;
              const enumGalgasBool test_32 = GALGAS_bool (kIsEqual, var_missingArgumentCount_23408.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
              if (kBoolTrue == test_32) {
                temp_31 = GALGAS_string ("*") ;
              }else if (kBoolFalse == test_32) {
                temp_31 = GALGAS_string (" ").add_operation (var_missingArgumentCount_23408.getter_string (SOURCE_FILE ("instruction-for.galgas", 647)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 647)).add_operation (GALGAS_string ("*"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 647)) ;
              }
              appendFixItActions (fixItArray30, kFixItReplace, temp_31) ;
              inCompiler->emitSemanticError (temp_29.readProperty_mEndOfEnumerationExpression (), GALGAS_string ("enumerated object ends with '...' (due to '--error-ellipsis-in-for-instruction' option)"), fixItArray30  COMMA_SOURCE_FILE ("instruction-for.galgas", 645)) ;
            }
          }
          const GALGAS_enumeratedCollectionCstListInExpAST temp_33 = object ;
          cEnumerator_forInstructionEnumeratedObjectElementListAST enumerator_23806 (temp_33.readProperty_mElementList (), kENUMERATION_UP) ;
          cEnumerator_enumerationDescriptorList enumerator_23863 (var_enumerationDescriptorList_21377, kENUMERATION_UP) ;
          while (enumerator_23806.hasCurrentObject () && enumerator_23863.hasCurrentObject ()) {
            enumGalgasBool test_34 = kBoolTrue ;
            if (kBoolTrue == test_34) {
              test_34 = GALGAS_bool (kIsNotEqual, enumerator_23806.current_mOptionalConstantName (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_34) {
                enumGalgasBool test_35 = kBoolTrue ;
                if (kBoolTrue == test_35) {
                  test_35 = GALGAS_bool (kIsNotEqual, enumerator_23806.current_mOptionalTypeName (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                  if (kBoolTrue == test_35) {
                    GALGAS_unifiedTypeMap_2D_entry var_foundType_24046 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), enumerator_23806.current_mOptionalTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 652)) ;
                    enumGalgasBool test_36 = kBoolTrue ;
                    if (kBoolTrue == test_36) {
                      test_36 = GALGAS_bool (kIsNotEqual, var_foundType_24046.objectCompare (enumerator_23863.current_mEnumeratedType (HERE))).boolEnum () ;
                      if (kBoolTrue == test_36) {
                        TC_Array <C_FixItDescription> fixItArray37 ;
                        inCompiler->emitSemanticError (enumerator_23806.current_mOptionalTypeName (HERE).readProperty_location (), GALGAS_string ("incorrect '@").add_operation (var_foundType_24046.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 657)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 657)).add_operation (GALGAS_string ("' type: '@"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 657)).add_operation (enumerator_23863.current_mEnumeratedType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 657)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 657)).add_operation (GALGAS_string ("' type required here"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 657)), fixItArray37  COMMA_SOURCE_FILE ("instruction-for.galgas", 657)) ;
                      }
                    }
                  }
                }
                ioArgument_ioLocalConstantListForDoBranch.addAssign_operation (enumerator_23863.current_mEnumeratedType (HERE), enumerator_23806.current_mOptionalConstantName (HERE), enumerator_23806.current_mDeclaredAsUnused (HERE), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 664)).add_operation (enumerator_23863.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-for.galgas", 664)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 664)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 664))  COMMA_SOURCE_FILE ("instruction-for.galgas", 660)) ;
              }
            }
            enumerator_23806.gotoNextObject () ;
            enumerator_23863.gotoNextObject () ;
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
                                                                                GALGAS_localConstantList & ioArgument_ioLocalConstantListForDoBranch,
                                                                                GALGAS_string & outArgument_outEnumeratorCppName,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outEnumerationExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumeratedCollectionVarInExpAST * object = (const cPtr_enumeratedCollectionVarInExpAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumeratedCollectionVarInExpAST) ;
  const GALGAS_enumeratedCollectionVarInExpAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mEnumeratedExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-for.galgas", 685)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, outArgument_outEnumerationExpression, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 682)) ;
  const GALGAS_enumeratedCollectionVarInExpAST temp_1 = object ;
  outArgument_outEnumeratorCppName = GALGAS_string ("enumerator_").add_operation (temp_1.readProperty_mEndOfEnumerationExpression ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 691)).getter_string (SOURCE_FILE ("instruction-for.galgas", 691)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 691)) ;
  GALGAS_unifiedTypeMap_2D_entry var_enumeratedElementType_25614 = outArgument_outEnumerationExpression.readProperty_mResultType ().getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 692)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_enumeratedElementType_25614.getter_isNull (SOURCE_FILE ("instruction-for.galgas", 693)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_enumeratedCollectionVarInExpAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mEndOfEnumerationExpression (), GALGAS_string ("an '@").add_operation (outArgument_outEnumerationExpression.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 694)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 694)).add_operation (GALGAS_string ("' object cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 694)), fixItArray4  COMMA_SOURCE_FILE ("instruction-for.galgas", 694)) ;
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      const GALGAS_enumeratedCollectionVarInExpAST temp_6 = object ;
      test_5 = GALGAS_bool (kIsNotEqual, temp_6.readProperty_mEnumerationVariable ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_enumeratedCollectionVarInExpAST temp_7 = object ;
        ioArgument_ioLocalConstantListForDoBranch.addAssign_operation (var_enumeratedElementType_25614, temp_7.readProperty_mEnumerationVariable (), GALGAS_bool (false), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 696))  COMMA_SOURCE_FILE ("instruction-for.galgas", 696)) ;
      }
    }
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    const GALGAS_enumeratedCollectionVarInExpAST temp_9 = object ;
    test_8 = GALGAS_bool (kIsNotEqual, temp_9.readProperty_mEnumerationOptionalTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_8) {
      const GALGAS_enumeratedCollectionVarInExpAST temp_10 = object ;
      GALGAS_unifiedTypeMap_2D_entry var_explicitType_26155 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), temp_10.readProperty_mEnumerationOptionalTypeName (), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 700)) ;
      enumGalgasBool test_11 = kBoolTrue ;
      if (kBoolTrue == test_11) {
        test_11 = GALGAS_bool (kIsNotEqual, var_enumeratedElementType_25614.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 704)).objectCompare (var_explicitType_26155.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 704)))).boolEnum () ;
        if (kBoolTrue == test_11) {
          const GALGAS_enumeratedCollectionVarInExpAST temp_12 = object ;
          TC_Array <C_FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (temp_12.readProperty_mEnumerationOptionalTypeName ().readProperty_location (), GALGAS_string ("the '@").add_operation (var_enumeratedElementType_25614.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 705)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 705)).add_operation (GALGAS_string ("' type is expected here"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 705)), fixItArray13  COMMA_SOURCE_FILE ("instruction-for.galgas", 705)) ;
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
  ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 721)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openBranch (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 722)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 724)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_before_5F_instructionList_27177 ;
  {
  const GALGAS_forInstructionAST temp_0 = object ;
  const GALGAS_forInstructionAST temp_1 = object ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 730)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 731)), temp_0.readProperty_mBeforeInstructionList (), temp_1.readProperty_mEndOf_5F_before_5F_branch (), ioArgument_ioVariableMap, var_before_5F_instructionList_27177, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 726)) ;
  }
  {
  const GALGAS_forInstructionAST temp_2 = object ;
  ioArgument_ioVariableMap.setter_closeOverride (temp_2.readProperty_mEndOf_5F_before_5F_branch (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 737)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 739)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_between_5F_instructionList_27676 ;
  {
  const GALGAS_forInstructionAST temp_3 = object ;
  const GALGAS_forInstructionAST temp_4 = object ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 745)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 746)), temp_3.readProperty_mBetweenInstructionList (), temp_4.readProperty_mEndOf_5F_between_5F_branch (), ioArgument_ioVariableMap, var_between_5F_instructionList_27676, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 741)) ;
  }
  {
  const GALGAS_forInstructionAST temp_5 = object ;
  ioArgument_ioVariableMap.setter_closeOverride (temp_5.readProperty_mEndOf_5F_between_5F_branch (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 752)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 754)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_after_5F_instructionList_28445 ;
  {
  const GALGAS_forInstructionAST temp_6 = object ;
  const GALGAS_forInstructionAST temp_7 = object ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 759)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 760)), temp_6.readProperty_mAfterInstructionList (), temp_7.readProperty_mEndOf_5F_after_5F_branch (), ioArgument_ioVariableMap, var_after_5F_instructionList_28445, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 755)) ;
  }
  {
  const GALGAS_forInstructionAST temp_8 = object ;
  ioArgument_ioVariableMap.setter_closeOverride (temp_8.readProperty_mEndOf_5F_after_5F_branch (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 766)) ;
  }
  GALGAS_localConstantList var_localConstantListForDoBranch_28595 = GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 768)) ;
  GALGAS_forInstructionEnumeratedObjectListForGeneration var_enumerationList_28671 = GALGAS_forInstructionEnumeratedObjectListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 769)) ;
  const GALGAS_forInstructionAST temp_9 = object ;
  cEnumerator_forInstructionEnumeratedObjectListAST enumerator_28716 (temp_9.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
  while (enumerator_28716.hasCurrentObject ()) {
    GALGAS_string var_enumeratorCppName_28983 ;
    GALGAS_semanticExpressionForGeneration var_enumerationExpression_29049 ;
    callExtensionMethod_analyzeEnumeration ((const cPtr_abstractEnumeratedCollectionAST *) enumerator_28716.current_mEnumeratedCollection (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_localConstantListForDoBranch_28595, var_enumeratorCppName_28983, var_enumerationExpression_29049, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 771)) ;
    GALGAS_string temp_10 ;
    const enumGalgasBool test_11 = enumerator_28716.current_mAscending (HERE).boolEnum () ;
    if (kBoolTrue == test_11) {
      temp_10 = GALGAS_string ("UP") ;
    }else if (kBoolFalse == test_11) {
      temp_10 = GALGAS_string ("DOWN") ;
    }
    var_enumerationList_28671.addAssign_operation (temp_10, var_enumerationExpression_29049, var_enumeratorCppName_28983  COMMA_SOURCE_FILE ("instruction-for.galgas", 781)) ;
    enumerator_28716.gotoNextObject () ;
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 787)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openBranch (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 788)) ;
  }
  cEnumerator_localConstantList enumerator_29373 (var_localConstantListForDoBranch_28595, kENUMERATION_UP) ;
  while (enumerator_29373.hasCurrentObject ()) {
    {
    ioArgument_ioVariableMap.setter_insertUsedLocalConstant (enumerator_29373.current (HERE).readProperty_mName (), enumerator_29373.current (HERE).readProperty_mType (), enumerator_29373.current (HERE).readProperty_mCppName (), enumerator_29373.current (HERE).readProperty_mCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 791)) ;
    }
    enumerator_29373.gotoNextObject () ;
  }
  GALGAS_semanticExpressionForGeneration var_uncheckedWhileExpression_29816 ;
  const GALGAS_forInstructionAST temp_12 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_12.readProperty_mWhileExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-for.galgas", 802)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_uncheckedWhileExpression_29816, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 799)) ;
  GALGAS_semanticExpressionForGeneration var_whileExpression_29994 ;
  {
  const GALGAS_forInstructionAST temp_13 = object ;
  routine_checkExpressionIsBoolean (constinArgument_inAnalysisContext, temp_13.readProperty_mEndOf_5F_while_5F_expression (), var_uncheckedWhileExpression_29816, var_whileExpression_29994, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 807)) ;
  }
  {
  const GALGAS_forInstructionAST temp_14 = object ;
  ioArgument_ioVariableMap.setter_closeBranch (temp_14.readProperty_mEndOf_5F_while_5F_expression (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 814)) ;
  }
  {
  const GALGAS_forInstructionAST temp_15 = object ;
  ioArgument_ioVariableMap.setter_closeOverride (temp_15.readProperty_mEndOf_5F_while_5F_expression (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 815)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 817)) ;
  }
  GALGAS_string var_indexCppName_30221 = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_16 = kBoolTrue ;
  if (kBoolTrue == test_16) {
    const GALGAS_forInstructionAST temp_17 = object ;
    test_16 = GALGAS_bool (kIsNotEqual, temp_17.readProperty_mIndexVariableName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_16) {
      const GALGAS_forInstructionAST temp_18 = object ;
      var_indexCppName_30221 = GALGAS_string ("index_").add_operation (temp_18.readProperty_mInstructionLocation ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 821)).getter_string (SOURCE_FILE ("instruction-for.galgas", 821)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 821)) ;
      const GALGAS_forInstructionAST temp_19 = object ;
      var_localConstantListForDoBranch_28595.addAssign_operation (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType (), temp_19.readProperty_mIndexVariableName (), GALGAS_bool (false), var_indexCppName_30221  COMMA_SOURCE_FILE ("instruction-for.galgas", 822)) ;
    }
  }
  GALGAS_semanticInstructionListForGeneration var_do_5F_instructionList_30649 ;
  {
  const GALGAS_forInstructionAST temp_20 = object ;
  const GALGAS_forInstructionAST temp_21 = object ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_localConstantListForDoBranch_28595, GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 835)), temp_20.readProperty_mDoInstructionList (), temp_21.readProperty_mEndOf_5F_do_5F_branch (), ioArgument_ioVariableMap, var_do_5F_instructionList_30649, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 830)) ;
  }
  {
  const GALGAS_forInstructionAST temp_22 = object ;
  ioArgument_ioVariableMap.setter_closeOverride (temp_22.readProperty_mEndOf_5F_foreach_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 842)) ;
  }
  {
  const GALGAS_forInstructionAST temp_23 = object ;
  ioArgument_ioVariableMap.setter_closeBranch (temp_23.readProperty_mEndOf_5F_foreach_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 844)) ;
  }
  {
  const GALGAS_forInstructionAST temp_24 = object ;
  ioArgument_ioVariableMap.setter_closeOverride (temp_24.readProperty_mEndOf_5F_foreach_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 845)) ;
  }
  const GALGAS_forInstructionAST temp_25 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_forInstructionForGeneration::constructor_new (temp_25.readProperty_mInstructionLocation (), var_enumerationList_28671, var_indexCppName_30221, var_whileExpression_29994, var_before_5F_instructionList_27177, var_between_5F_instructionList_27676, var_do_5F_instructionList_30649, var_after_5F_instructionList_28445  COMMA_SOURCE_FILE ("instruction-for.galgas", 847))  COMMA_SOURCE_FILE ("instruction-for.galgas", 847)) ;
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
  GALGAS_stringlist var_enumerationVarCppNameList_33297 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 893)) ;
  const GALGAS_forInstructionForGeneration temp_0 = object ;
  cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_33335 (temp_0.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
  while (enumerator_33335.hasCurrentObject ()) {
    GALGAS_string var_enumerationVar_33400 ;
    callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_33335.current_mEnumeratedExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_enumerationVar_33400, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 896)) ;
    var_enumerationVarCppNameList_33297.addAssign_operation (var_enumerationVar_33400  COMMA_SOURCE_FILE ("instruction-for.galgas", 903)) ;
    enumerator_33335.gotoNextObject () ;
  }
  const GALGAS_forInstructionForGeneration temp_1 = object ;
  cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_33710 (temp_1.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
  cEnumerator_stringlist enumerator_33750 (var_enumerationVarCppNameList_33297, kENUMERATION_UP) ;
  while (enumerator_33710.hasCurrentObject () && enumerator_33750.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cEnumerator_").add_operation (enumerator_33710.current_mEnumeratedExpression (HERE).readProperty_mResultType ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 906)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 906)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 906)).add_operation (enumerator_33710.current_mEnumeratorCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 907)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 907)).add_operation (enumerator_33750.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 907)).add_operation (GALGAS_string (", kENUMERATION_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 907)).add_operation (enumerator_33710.current_mEnumerationOrder (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 908)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 908)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 906)) ;
    enumerator_33710.gotoNextObject () ;
    enumerator_33750.gotoNextObject () ;
  }
  const GALGAS_forInstructionForGeneration temp_2 = object ;
  GALGAS_bool var_whileExpressionIsAllwaysTrue_34062 = callExtensionGetter_isTrueExpression ((const cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mWhileExpression ().ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 911)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_forInstructionForGeneration temp_4 = object ;
    const GALGAS_forInstructionForGeneration temp_5 = object ;
    test_3 = GALGAS_bool (kIsStrictSup, temp_4.readProperty_mBeforeInstructionList ().getter_length (SOURCE_FILE ("instruction-for.galgas", 913)).add_operation (temp_5.readProperty_mAfterInstructionList ().getter_length (SOURCE_FILE ("instruction-for.galgas", 913)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 913)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_or (var_whileExpressionIsAllwaysTrue_34062.operator_not (SOURCE_FILE ("instruction-for.galgas", 913)) COMMA_SOURCE_FILE ("instruction-for.galgas", 913)).boolEnum () ;
    if (kBoolTrue == test_3) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        const GALGAS_forInstructionForGeneration temp_7 = object ;
        test_6 = GALGAS_bool (kIsNotEqual, temp_7.readProperty_mIndexVariableCppName ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          const GALGAS_forInstructionForGeneration temp_8 = object ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_uint ").add_operation (temp_8.readProperty_mIndexVariableCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 916)).add_operation (GALGAS_string (" ((uint32_t) 0) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 916)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 916)) ;
        }
      }
      GALGAS_string var_boolVarCppName_34497 = GALGAS_string ("bool_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-for.galgas", 918)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 918)) ;
      ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 918)) ;
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = var_whileExpressionIsAllwaysTrue_34062.boolEnum () ;
        if (kBoolTrue == test_9) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const bool ").add_operation (var_boolVarCppName_34497, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 920)).add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 920)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 920)) ;
        }
      }
      if (kBoolFalse == test_9) {
        GALGAS_string var_whileVar_34720 ;
        const GALGAS_forInstructionForGeneration temp_10 = object ;
        callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_10.readProperty_mWhileExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_whileVar_34720, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 923)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("bool ").add_operation (var_boolVarCppName_34497, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 924)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 924)).add_operation (var_whileVar_34720, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 924)).add_operation (GALGAS_string (".isValidAndTrue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 924)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 924)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 926)) ;
      const GALGAS_forInstructionForGeneration temp_11 = object ;
      cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_35036 (temp_11.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
      while (enumerator_35036.hasCurrentObject ()) {
        ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_35036.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject () && "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 928)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 928)) ;
        enumerator_35036.gotoNextObject () ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(var_boolVarCppName_34497.add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 930)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 930)) ;
      {
      const GALGAS_forInstructionForGeneration temp_12 = object ;
      routine_generateInstructionList (ioArgument_ioInclusionSet, temp_12.readProperty_mBeforeInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 931)) ;
      }
      {
      ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 939)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("while ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 940)) ;
      const GALGAS_forInstructionForGeneration temp_13 = object ;
      cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_35541 (temp_13.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
      while (enumerator_35541.hasCurrentObject ()) {
        ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_35541.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject () && "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 942)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 942)) ;
        enumerator_35541.gotoNextObject () ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(var_boolVarCppName_34497.add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 944)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 944)) ;
      {
      const GALGAS_forInstructionForGeneration temp_14 = object ;
      routine_generateInstructionList (ioArgument_ioInclusionSet, temp_14.readProperty_mDoInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 946)) ;
      }
      const GALGAS_forInstructionForGeneration temp_15 = object ;
      cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_36024 (temp_15.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
      while (enumerator_36024.hasCurrentObject ()) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (enumerator_36024.current_mEnumeratorCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 956)).add_operation (GALGAS_string (".gotoNextObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 956)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 956)) ;
        enumerator_36024.gotoNextObject () ;
      }
      enumGalgasBool test_16 = kBoolTrue ;
      if (kBoolTrue == test_16) {
        const GALGAS_forInstructionForGeneration temp_17 = object ;
        test_16 = GALGAS_bool (kIsNotEqual, temp_17.readProperty_mIndexVariableCppName ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_16) {
          const GALGAS_forInstructionForGeneration temp_18 = object ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (temp_18.readProperty_mIndexVariableCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 959)).add_operation (GALGAS_string (".increment () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 959)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 959)) ;
        }
      }
      enumGalgasBool test_19 = kBoolTrue ;
      if (kBoolTrue == test_19) {
        test_19 = var_whileExpressionIsAllwaysTrue_34062.operator_not (SOURCE_FILE ("instruction-for.galgas", 962)).boolEnum () ;
        if (kBoolTrue == test_19) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 963)) ;
          const GALGAS_forInstructionForGeneration temp_20 = object ;
          cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_36425 (temp_20.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
          while (enumerator_36425.hasCurrentObject ()) {
            ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_36425.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject ()"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 965)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 965)) ;
            if (enumerator_36425.hasNextObject ()) {
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" && "), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 966)) ;
            }
            enumerator_36425.gotoNextObject () ;
          }
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 968)) ;
          GALGAS_string var_whileVar_36639 ;
          const GALGAS_forInstructionForGeneration temp_21 = object ;
          callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_21.readProperty_mWhileExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_whileVar_36639, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 970)) ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("    ").add_operation (var_boolVarCppName_34497, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 977)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 977)).add_operation (var_whileVar_36639, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 977)).add_operation (GALGAS_string (".isValidAndTrue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 977)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 977)) ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  }\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 978)) ;
        }
      }
      enumGalgasBool test_22 = kBoolTrue ;
      if (kBoolTrue == test_22) {
        const GALGAS_forInstructionForGeneration temp_23 = object ;
        test_22 = GALGAS_bool (kIsStrictSup, temp_23.readProperty_mBetweenInstructionList ().getter_length (SOURCE_FILE ("instruction-for.galgas", 981)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_22) {
          {
          ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 982)) ;
          }
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 983)) ;
          const GALGAS_forInstructionForGeneration temp_24 = object ;
          cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_37174 (temp_24.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
          while (enumerator_37174.hasCurrentObject ()) {
            ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_37174.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject () && "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 985)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 985)) ;
            enumerator_37174.gotoNextObject () ;
          }
          ioArgument_ioGeneratedCode.plusAssign_operation(var_boolVarCppName_34497.add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 987)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 987)) ;
          {
          const GALGAS_forInstructionForGeneration temp_25 = object ;
          routine_generateInstructionList (ioArgument_ioInclusionSet, temp_25.readProperty_mBetweenInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 988)) ;
          }
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 996)) ;
          {
          ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 997)) ;
          }
        }
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1000)) ;
      {
      ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1002)) ;
      }
      {
      const GALGAS_forInstructionForGeneration temp_26 = object ;
      routine_generateInstructionList (ioArgument_ioInclusionSet, temp_26.readProperty_mAfterInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1003)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1011)) ;
    }
  }
  if (kBoolFalse == test_3) {
    enumGalgasBool test_27 = kBoolTrue ;
    if (kBoolTrue == test_27) {
      const GALGAS_forInstructionForGeneration temp_28 = object ;
      test_27 = GALGAS_bool (kIsNotEqual, temp_28.readProperty_mIndexVariableCppName ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_27) {
        const GALGAS_forInstructionForGeneration temp_29 = object ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_uint ").add_operation (temp_29.readProperty_mIndexVariableCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1014)).add_operation (GALGAS_string (" ((uint32_t) 0) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1014)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1014)) ;
      }
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("while ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1016)) ;
    const GALGAS_forInstructionForGeneration temp_30 = object ;
    cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_38371 (temp_30.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
    while (enumerator_38371.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_38371.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject ()"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1018)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1018)) ;
      if (enumerator_38371.hasNextObject ()) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" && "), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1019)) ;
      }
      enumerator_38371.gotoNextObject () ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1021)) ;
    {
    const GALGAS_forInstructionForGeneration temp_31 = object ;
    routine_generateInstructionList (ioArgument_ioInclusionSet, temp_31.readProperty_mDoInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1023)) ;
    }
    enumGalgasBool test_32 = kBoolTrue ;
    if (kBoolTrue == test_32) {
      const GALGAS_forInstructionForGeneration temp_33 = object ;
      test_32 = GALGAS_bool (kIsStrictSup, temp_33.readProperty_mBetweenInstructionList ().getter_length (SOURCE_FILE ("instruction-for.galgas", 1032)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_32) {
        {
        ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1033)) ;
        }
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1034)) ;
        const GALGAS_forInstructionForGeneration temp_34 = object ;
        cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_39019 (temp_34.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
        while (enumerator_39019.hasCurrentObject ()) {
          ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_39019.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasNextObject ()"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1036)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1036)) ;
          if (enumerator_39019.hasNextObject ()) {
            ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" && "), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1037)) ;
          }
          enumerator_39019.gotoNextObject () ;
        }
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1039)) ;
        {
        const GALGAS_forInstructionForGeneration temp_35 = object ;
        routine_generateInstructionList (ioArgument_ioInclusionSet, temp_35.readProperty_mBetweenInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1040)) ;
        }
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1048)) ;
        {
        ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1049)) ;
        }
      }
    }
    const GALGAS_forInstructionForGeneration temp_36 = object ;
    cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_39607 (temp_36.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
    while (enumerator_39607.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (enumerator_39607.current_mEnumeratorCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1053)).add_operation (GALGAS_string (".gotoNextObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1053)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1053)) ;
      enumerator_39607.gotoNextObject () ;
    }
    enumGalgasBool test_37 = kBoolTrue ;
    if (kBoolTrue == test_37) {
      const GALGAS_forInstructionForGeneration temp_38 = object ;
      test_37 = GALGAS_bool (kIsNotEqual, temp_38.readProperty_mIndexVariableCppName ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_37) {
        {
        ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1056)) COMMA_SOURCE_FILE ("instruction-for.galgas", 1056)) ;
        }
        const GALGAS_forInstructionForGeneration temp_39 = object ;
        const GALGAS_forInstructionForGeneration temp_40 = object ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (temp_39.readProperty_mIndexVariableCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1057)).add_operation (GALGAS_string (".increment_operation ("), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1057)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1057)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1057)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1057)).add_operation (extensionGetter_commaSourceFile (temp_40.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1058)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1058)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1058)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1057)) ;
      }
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1060)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 289)) ;
  const GALGAS_grammarInFileInstructionAST temp_1 = object ;
  cEnumerator_actualParameterListAST enumerator_11775 (temp_1.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_11775.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((const cPtr_actualParameterAST *) enumerator_11775.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 291)) ;
    enumerator_11775.gotoNextObject () ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 300)) ;
  const GALGAS_grammarInStringInstructionAST temp_1 = object ;
  cEnumerator_actualParameterListAST enumerator_12231 (temp_1.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_12231.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((const cPtr_actualParameterAST *) enumerator_12231.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 302)) ;
    enumerator_12231.gotoNextObject () ;
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
  GALGAS_lstring var_usefulnessName_12939 = function_grammarNameForUsefulEntitiesGraph (temp_0.readProperty_mGrammarComponentName (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 317)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_12939 COMMA_SOURCE_FILE ("instruction-grammar.galgas", 318)) ;
  }
  GALGAS_grammarLabelMap var_grammarLabelMap_13256 ;
  GALGAS_bool var_hasTranslateFeature_13298 ;
  const GALGAS_grammarInFileInstructionAST temp_1 = object ;
  GALGAS_bool joker_13262 ; // Joker input parameter
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mGrammarMap ().method_searchKey (temp_1.readProperty_mGrammarComponentName (), var_grammarLabelMap_13256, joker_13262, var_hasTranslateFeature_13298, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 320)) ;
  GALGAS_formalParameterSignature var_labelSignature_13420 ;
  const GALGAS_grammarInFileInstructionAST temp_2 = object ;
  var_grammarLabelMap_13256.method_searchKey (temp_2.readProperty_mLabelName (), var_labelSignature_13420, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 327)) ;
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_13870 ;
  {
  const GALGAS_grammarInFileInstructionAST temp_3 = object ;
  const GALGAS_grammarInFileInstructionAST temp_4 = object ;
  const GALGAS_grammarInFileInstructionAST temp_5 = object ;
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_3.readProperty_mLabelName (), GALGAS_string ("label of the ").add_operation (temp_4.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 337)).add_operation (GALGAS_string (" grammar"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 337)), var_labelSignature_13420, temp_5.readProperty_mActualParameterList (), ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_13870, inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 332)) ;
  }
  GALGAS_semanticExpressionForGeneration var_sourceExpression_14166 ;
  const GALGAS_grammarInFileInstructionAST temp_6 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_6.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-grammar.galgas", 348)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_sourceExpression_14166, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 345)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (kIsNotEqual, var_sourceExpression_14166.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLStringType ())).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_grammarInFileInstructionAST temp_8 = object ;
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mEndOfSourceExpression (), GALGAS_string ("this expression is the source file path and its type should be '@lstring', but it is '@").add_operation (var_sourceExpression_14166.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 357)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 356)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 357)), fixItArray9  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 355)) ;
    }
  }
  const GALGAS_grammarInFileInstructionAST temp_10 = object ;
  GALGAS_string var_syntaxDirectedTranslationResultVarName_14635 = GALGAS_string ("syntaxDirectedTranslationResult_").add_operation (temp_10.readProperty_mGrammarComponentName ().readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 360)).getter_string (SOURCE_FILE ("instruction-grammar.galgas", 360)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 360)) ;
  GALGAS_stringlist var_assignementList_14748 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 361)) ;
  const GALGAS_grammarInFileInstructionAST temp_11 = object ;
  callExtensionMethod_analyzeGrammarInstructionSDT ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_11.readProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult ().ptr (), constinArgument_inAnalysisContext, var_hasTranslateFeature_13298, var_syntaxDirectedTranslationResultVarName_14635, var_assignementList_14748, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 362)) ;
  const GALGAS_grammarInFileInstructionAST temp_12 = object ;
  const GALGAS_grammarInFileInstructionAST temp_13 = object ;
  const GALGAS_grammarInFileInstructionAST temp_14 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_grammarInstructionWithSourceFileForGeneration::constructor_new (temp_12.readProperty_mInstructionLocation (), temp_13.readProperty_mGrammarComponentName ().readProperty_string (), temp_14.readProperty_mLabelName ().readProperty_string (), var_sourceExpression_14166, var_actualParameterListForGeneration_13870, var_hasTranslateFeature_13298, var_assignementList_14748, var_syntaxDirectedTranslationResultVarName_14635  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 370))  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 370)) ;
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
  GALGAS_lstring var_grammarUsefulnessName_15838 = function_grammarNameForUsefulEntitiesGraph (temp_0.readProperty_mGrammarComponentName (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 391)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_grammarUsefulnessName_15838 COMMA_SOURCE_FILE ("instruction-grammar.galgas", 392)) ;
  }
  GALGAS_grammarLabelMap var_grammarLabelMap_16162 ;
  GALGAS_bool var_hasTranslateFeature_16204 ;
  const GALGAS_grammarInStringInstructionAST temp_1 = object ;
  GALGAS_bool joker_16168 ; // Joker input parameter
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mGrammarMap ().method_searchKey (temp_1.readProperty_mGrammarComponentName (), var_grammarLabelMap_16162, joker_16168, var_hasTranslateFeature_16204, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 394)) ;
  GALGAS_formalParameterSignature var_labelSignature_16326 ;
  const GALGAS_grammarInStringInstructionAST temp_2 = object ;
  var_grammarLabelMap_16162.method_searchKey (temp_2.readProperty_mLabelName (), var_labelSignature_16326, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 401)) ;
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_16776 ;
  {
  const GALGAS_grammarInStringInstructionAST temp_3 = object ;
  const GALGAS_grammarInStringInstructionAST temp_4 = object ;
  const GALGAS_grammarInStringInstructionAST temp_5 = object ;
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_3.readProperty_mLabelName (), GALGAS_string ("label of the ").add_operation (temp_4.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 411)).add_operation (GALGAS_string (" grammar"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 411)), var_labelSignature_16326, temp_5.readProperty_mActualParameterList (), ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_16776, inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 406)) ;
  }
  GALGAS_semanticExpressionForGeneration var_sourceExpression_17072 ;
  const GALGAS_grammarInStringInstructionAST temp_6 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_6.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-grammar.galgas", 422)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_sourceExpression_17072, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 419)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (kIsNotEqual, var_sourceExpression_17072.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType ())).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_grammarInStringInstructionAST temp_8 = object ;
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mEndOfSourceExpression (), GALGAS_string ("this expression is the source string and its type should be '@string', but it is '@").add_operation (var_sourceExpression_17072.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 431)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 430)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 431)), fixItArray9  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 429)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_nameExpression_17677 ;
  const GALGAS_grammarInStringInstructionAST temp_10 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_10.readProperty_mNameExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-grammar.galgas", 437)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_nameExpression_17677, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 434)) ;
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GALGAS_bool (kIsNotEqual, var_nameExpression_17677.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType ())).boolEnum () ;
    if (kBoolTrue == test_11) {
      const GALGAS_grammarInStringInstructionAST temp_12 = object ;
      TC_Array <C_FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mEndOfNameExpression (), GALGAS_string ("this expression is the name string and its type should be '@string', but it is '@").add_operation (var_sourceExpression_17072.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 446)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 445)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 446)), fixItArray13  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 444)) ;
    }
  }
  const GALGAS_grammarInStringInstructionAST temp_14 = object ;
  GALGAS_string var_syntaxDirectedTranslationResultVarName_18089 = GALGAS_string ("syntaxDirectedTranslationResult_").add_operation (temp_14.readProperty_mGrammarComponentName ().readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 449)).getter_string (SOURCE_FILE ("instruction-grammar.galgas", 449)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 449)) ;
  GALGAS_stringlist var_assignementList_18202 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 450)) ;
  const GALGAS_grammarInStringInstructionAST temp_15 = object ;
  callExtensionMethod_analyzeGrammarInstructionSDT ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_15.readProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult ().ptr (), constinArgument_inAnalysisContext, var_hasTranslateFeature_16204, var_syntaxDirectedTranslationResultVarName_18089, var_assignementList_18202, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 451)) ;
  const GALGAS_grammarInStringInstructionAST temp_16 = object ;
  const GALGAS_grammarInStringInstructionAST temp_17 = object ;
  const GALGAS_grammarInStringInstructionAST temp_18 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_grammarInstructionWithSourceExpressionForGeneration::constructor_new (temp_16.readProperty_mInstructionLocation (), temp_17.readProperty_mGrammarComponentName ().readProperty_string (), temp_18.readProperty_mLabelName ().readProperty_string (), var_sourceExpression_17072, var_nameExpression_17677, var_actualParameterListForGeneration_16776, var_hasTranslateFeature_16204, var_assignementList_18202, var_syntaxDirectedTranslationResultVarName_18089  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 459))  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 459)) ;
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
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("grammar-").add_operation (temp_0.readProperty_mGrammarName ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 496)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 496))  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 496)) ;
  GALGAS_string var_sourceVar_20355 ;
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_1 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mSourceFileExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_20355, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 498)) ;
  GALGAS_stringlist var_parameterCppNameList_20408 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 506)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_20461 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 507)) ;
  GALGAS_stringlist var_inputVariableList_20503 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 508)) ;
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_2 = object ;
  cEnumerator_actualParameterListForGeneration enumerator_20545 (temp_2.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_20545.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_20854 ;
    callExtensionMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_20545.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_20461, var_inputVariableList_20503, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_20854, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 510)) ;
    var_parameterCppNameList_20408.addAssign_operation (var_parameterCppName_20854  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 519)) ;
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (NULL != dynamic_cast <const cPtr_inputActualParameterForGeneration *> (enumerator_20545.current_mActualParameter (HERE).ptr ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        ioArgument_ioGeneratedCode.plusAssign_operation(var_parameterCppName_20854.add_operation (GALGAS_string (".drop () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 521)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 521)) ;
      }
    }
    enumerator_20545.gotoNextObject () ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_grammarInstructionWithSourceFileForGeneration temp_5 = object ;
    test_4 = temp_5.readProperty_mGrammarHasTranslateFeature ().boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_grammarInstructionWithSourceFileForGeneration temp_6 = object ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("C_String ").add_operation (temp_6.readProperty_mSyntaxDirectedTranslationResultVarName (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 525)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 525)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 525)) ;
    }
  }
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_7 = object ;
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_8 = object ;
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_9 = object ;
  GALGAS_string temp_10 ;
  const enumGalgasBool test_11 = temp_9.readProperty_mGrammarHasTranslateFeature ().boolEnum () ;
  if (kBoolTrue == test_11) {
    const GALGAS_grammarInstructionWithSourceFileForGeneration temp_12 = object ;
    temp_10 = temp_12.readProperty_mSyntaxDirectedTranslationResultVarName ().add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 531)) ;
  }else if (kBoolFalse == test_11) {
    temp_10 = GALGAS_string::makeEmptyString () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cGrammar_").add_operation (temp_7.readProperty_mGrammarName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 527)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 527)).add_operation (GALGAS_string ("::_performSourceFileParsing_"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 527)).add_operation (temp_8.readProperty_mLabelName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 528)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 528)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 528)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 530)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 529)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 530)).add_operation (temp_10, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 530)).add_operation (var_sourceVar_20355, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 531)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 527)) ;
  cEnumerator_stringlist enumerator_21642 (var_parameterCppNameList_20408, kENUMERATION_UP) ;
  while (enumerator_21642.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (enumerator_21642.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 534)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 534)) ;
    enumerator_21642.gotoNextObject () ;
  }
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_13 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_13.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 536)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 536)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 536)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 536)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 537)) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 537)) ;
  }
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_14 = object ;
  cEnumerator_stringlist enumerator_21900 (temp_14.readProperty_mAssignementList (), kENUMERATION_UP) ;
  while (enumerator_21900.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_21900.current (HERE).readProperty_mValue ().add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 539)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 539)) ;
    enumerator_21900.gotoNextObject () ;
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
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("grammar-").add_operation (temp_0.readProperty_mGrammarName ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 567)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 567))  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 567)) ;
  GALGAS_string var_sourceVar_23549 ;
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_1 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mSourceStringExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_23549, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 569)) ;
  GALGAS_string var_nameVar_23767 ;
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_2 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mNameStringExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_nameVar_23767, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 577)) ;
  GALGAS_stringlist var_parameterCppNameList_23820 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 585)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_23873 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 586)) ;
  GALGAS_stringlist var_inputVariableList_23915 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 587)) ;
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_3 = object ;
  cEnumerator_actualParameterListForGeneration enumerator_23957 (temp_3.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_23957.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_24273 ;
    callExtensionMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_23957.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_23873, var_inputVariableList_23915, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_24273, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 589)) ;
    var_parameterCppNameList_23820.addAssign_operation (var_parameterCppName_24273  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 598)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (NULL != dynamic_cast <const cPtr_inputActualParameterForGeneration *> (enumerator_23957.current_mActualParameter (HERE).ptr ())).boolEnum () ;
      if (kBoolTrue == test_4) {
        ioArgument_ioGeneratedCode.plusAssign_operation(var_parameterCppName_24273.add_operation (GALGAS_string (".drop () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 600)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 600)) ;
      }
    }
    enumerator_23957.gotoNextObject () ;
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_6 = object ;
    test_5 = temp_6.readProperty_mGrammarHasTranslateFeature ().boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_7 = object ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("C_String ").add_operation (temp_7.readProperty_mSyntaxDirectedTranslationResultVarName (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 604)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 604)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 604)) ;
    }
  }
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_8 = object ;
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_9 = object ;
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_10 = object ;
  GALGAS_string temp_11 ;
  const enumGalgasBool test_12 = temp_10.readProperty_mGrammarHasTranslateFeature ().boolEnum () ;
  if (kBoolTrue == test_12) {
    const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_13 = object ;
    temp_11 = temp_13.readProperty_mSyntaxDirectedTranslationResultVarName ().add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 609)) ;
  }else if (kBoolFalse == test_12) {
    temp_11 = GALGAS_string::makeEmptyString () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cGrammar_").add_operation (temp_8.readProperty_mGrammarName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 606)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 606)).add_operation (GALGAS_string ("::_performSourceStringParsing_"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 606)).add_operation (temp_9.readProperty_mLabelName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 607)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 607)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 607)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 608)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 608)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 608)).add_operation (temp_11, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 608)).add_operation (var_sourceVar_23549, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 609)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 610)).add_operation (var_nameVar_23767, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 611)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 606)) ;
  cEnumerator_stringlist enumerator_25080 (var_parameterCppNameList_23820, kENUMERATION_UP) ;
  while (enumerator_25080.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (enumerator_25080.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 613)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 613)) ;
    enumerator_25080.gotoNextObject () ;
  }
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_14 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_14.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 615)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 615)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 615)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 615)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 616)) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 616)) ;
  }
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_15 = object ;
  cEnumerator_stringlist enumerator_25338 (temp_15.readProperty_mAssignementList (), kENUMERATION_UP) ;
  while (enumerator_25338.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_25338.current (HERE).readProperty_mValue ().add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 618)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 618)) ;
    enumerator_25338.gotoNextObject () ;
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
  GALGAS_unifiedTypeMap_2D_entry var_targetType_9218 ;
  GALGAS_string var_targetVariableCppName_9254 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_9304 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_incDecInstructionAST temp_1 = object ;
    test_0 = temp_1.readProperty_mPrefixedBySelf ().boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GALGAS_unifiedTypeMap_2D_entry var_selfType_9404 ;
        GALGAS_bool var_selfIsMutable_9432 ;
        GALGAS_bool var_mutableProperties_9474 ;
        const bool optionalResult9384 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_9404, var_selfIsMutable_9432, var_mutableProperties_9474) ;
        if (!optionalResult9384) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_selfIsMutable_9432.operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 290)).boolEnum () ;
            if (kBoolTrue == test_3) {
              const GALGAS_incDecInstructionAST temp_4 = object ;
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (temp_4.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray5  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 291)) ;
            }
          }
          GALGAS_propertyMap var_propertyMap_9623 = var_selfType_9404.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 293)) ;
          GALGAS_bool var_isConstant_9717 ;
          const GALGAS_incDecInstructionAST temp_6 = object ;
          GALGAS_bool joker_9700 ; // Joker input parameter
          var_propertyMap_9623.method_searchKey (temp_6.readProperty_mReceiverName (), joker_9700, var_isConstant_9717, var_targetType_9218, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 294)) ;
          var_nameForCheckingFormalParameterUsing_9304 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName () ;
          const GALGAS_incDecInstructionAST temp_7 = object ;
          var_targetVariableCppName_9254 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 296)).add_operation (temp_7.readProperty_mReceiverName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-inc-dec.galgas", 297)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 297)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = var_isConstant_9717.boolEnum () ;
            if (kBoolTrue == test_8) {
              const GALGAS_incDecInstructionAST temp_9 = object ;
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray10  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 299)) ;
            }
          }
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            test_11 = var_mutableProperties_9474.operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 301)).boolEnum () ;
            if (kBoolTrue == test_11) {
              const GALGAS_incDecInstructionAST temp_12 = object ;
              TC_Array <C_FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (temp_12.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("the property cannot be mutated in this constant"), fixItArray13  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 302)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_2) {
        const GALGAS_incDecInstructionAST temp_14 = object ;
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray15  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 305)) ;
        var_targetType_9218.drop () ; // Release error dropped variable
        var_targetVariableCppName_9254.drop () ; // Release error dropped variable
        var_nameForCheckingFormalParameterUsing_9304.drop () ; // Release error dropped variable
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_incDecInstructionAST temp_16 = object ;
    ioArgument_ioVariableMap.setter_searchForReadWriteAccess (temp_16.readProperty_mReceiverName (), var_targetType_9218, var_targetVariableCppName_9254, var_nameForCheckingFormalParameterUsing_9304, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 327)) ;
    }
  }
  const GALGAS_incDecInstructionAST temp_17 = object ;
  cEnumerator_lstringlist enumerator_11556 (temp_17.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_11556.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_11609 = var_targetType_9218.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 336)) ;
    GALGAS_bool var_isPublic_11686 ;
    GALGAS_bool var_isConstant_11702 ;
    var_propertyMap_11609.method_searchKey (enumerator_11556.current_mValue (HERE), var_isPublic_11686, var_isConstant_11702, var_targetType_9218, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 337)) ;
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      test_18 = var_isPublic_11686.operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 338)).boolEnum () ;
      if (kBoolTrue == test_18) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (enumerator_11556.current_mValue (HERE).readProperty_location (), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray19  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 339)) ;
      }
    }
    enumGalgasBool test_20 = kBoolTrue ;
    if (kBoolTrue == test_20) {
      test_20 = var_isConstant_11702.boolEnum () ;
      if (kBoolTrue == test_20) {
        TC_Array <C_FixItDescription> fixItArray21 ;
        inCompiler->emitSemanticError (enumerator_11556.current_mValue (HERE).readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray21  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 342)) ;
      }
    }
    enumerator_11556.gotoNextObject () ;
  }
  enumGalgasBool test_22 = kBoolTrue ;
  if (kBoolTrue == test_22) {
    test_22 = var_targetType_9218.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 346)).getter_incDecOperator (SOURCE_FILE ("instruction-inc-dec.galgas", 346)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 346)).boolEnum () ;
    if (kBoolTrue == test_22) {
      const GALGAS_incDecInstructionAST temp_23 = object ;
      TC_Array <C_FixItDescription> fixItArray24 ;
      inCompiler->emitSemanticError (temp_23.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (var_targetType_9218.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 348)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 348)).add_operation (GALGAS_string ("' type, but this type does not support the '++', '--' operators"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 348)), fixItArray24  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 347)) ;
    }
  }
  const GALGAS_incDecInstructionAST temp_25 = object ;
  const GALGAS_incDecInstructionAST temp_26 = object ;
  const GALGAS_incDecInstructionAST temp_27 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_incDecInstructionForGeneration::constructor_new (temp_25.readProperty_mInstructionLocation (), var_targetVariableCppName_9254, var_targetType_9218, temp_26.readProperty_mStructAttributeList (), temp_27.readProperty_mKind ()  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 351))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 351)) ;
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
  GALGAS_unifiedTypeMap_2D_entry var_targetType_12954 ;
  GALGAS_string var_targetVariableCppName_12990 ;
  {
  const GALGAS_incDecNoOVFInstructionAST temp_0 = object ;
  GALGAS_string joker_13091 ; // Joker input parameter
  ioArgument_ioVariableMap.setter_searchForReadWriteAccess (temp_0.readProperty_mReceiverName (), var_targetType_12954, var_targetVariableCppName_12990, joker_13091, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 372)) ;
  }
  const GALGAS_incDecNoOVFInstructionAST temp_1 = object ;
  cEnumerator_lstringlist enumerator_13107 (temp_1.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_13107.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_13160 = var_targetType_12954.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 374)) ;
    GALGAS_bool var_isPublic_13237 ;
    GALGAS_bool var_isConstant_13253 ;
    var_propertyMap_13160.method_searchKey (enumerator_13107.current_mValue (HERE), var_isPublic_13237, var_isConstant_13253, var_targetType_12954, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 375)) ;
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = var_isPublic_13237.operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 376)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_13107.current_mValue (HERE).readProperty_location (), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray3  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 377)) ;
      }
    }
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = var_isConstant_13253.boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_13107.current_mValue (HERE).readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray5  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 380)) ;
      }
    }
    enumerator_13107.gotoNextObject () ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = var_targetType_12954.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 384)).getter_incDecOperator (SOURCE_FILE ("instruction-inc-dec.galgas", 384)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 384)).boolEnum () ;
    if (kBoolTrue == test_6) {
      const GALGAS_incDecNoOVFInstructionAST temp_7 = object ;
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (var_targetType_12954.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 386)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 386)).add_operation (GALGAS_string ("' type, but this type does not support the '&++', '&--' operators"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 386)), fixItArray8  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 385)) ;
    }
  }
  const GALGAS_incDecNoOVFInstructionAST temp_9 = object ;
  const GALGAS_incDecNoOVFInstructionAST temp_10 = object ;
  const GALGAS_incDecNoOVFInstructionAST temp_11 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_incDecNoOVFInstructionForGeneration::constructor_new (temp_9.readProperty_mInstructionLocation (), var_targetVariableCppName_12990, var_targetType_12954, temp_10.readProperty_mStructAttributeList (), temp_11.readProperty_mKind ()  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 389))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 389)) ;
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
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMap_2D_entry var_selfType_14517 ;
    GALGAS_bool var_selfIsMutable_14545 ;
    GALGAS_bool var_unused_0_14567 ;
    const bool optionalResult14497 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_14517, var_selfIsMutable_14545, var_unused_0_14567) ;
    if (!optionalResult14497) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_selfIsMutable_14545.operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 408)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfIncDecNoOVFInstructionAST temp_2 = object ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 409)) ;
        }
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = var_selfType_14517.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 412)).getter_incDecOperator (SOURCE_FILE ("instruction-inc-dec.galgas", 412)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 412)).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_selfIncDecNoOVFInstructionAST temp_5 = object ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (var_selfType_14517.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 414)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 414)).add_operation (GALGAS_string ("' type, but this type does not support the '&++' and  '&--' operators"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 414)), fixItArray6  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 413)) ;
        }
      }
      const GALGAS_selfIncDecNoOVFInstructionAST temp_7 = object ;
      const GALGAS_selfIncDecNoOVFInstructionAST temp_8 = object ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_incDecNoOVFInstructionForGeneration::constructor_new (temp_7.readProperty_mInstructionLocation (), constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), var_selfType_14517, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-inc-dec.galgas", 421)), temp_8.readProperty_mKind ()  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 417))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 417)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfIncDecNoOVFInstructionAST temp_9 = object ;
    TC_Array <C_FixItDescription> fixItArray10 ;
    inCompiler->emitSemanticError (temp_9.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray10  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 425)) ;
  }
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
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMap_2D_entry var_selfType_16766 ;
    GALGAS_bool var_selfIsMutable_16794 ;
    GALGAS_bool var_unused_0_16816 ;
    const bool optionalResult16746 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_16766, var_selfIsMutable_16794, var_unused_0_16816) ;
    if (!optionalResult16746) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_selfIsMutable_16794.operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 462)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfIncDecInstructionAST temp_2 = object ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 463)) ;
        }
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = var_selfType_16766.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 466)).getter_incDecOperator (SOURCE_FILE ("instruction-inc-dec.galgas", 466)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 466)).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_selfIncDecInstructionAST temp_5 = object ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (var_selfType_16766.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 468)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 468)).add_operation (GALGAS_string ("' type, but this type does not support the '++' and  '--' operators"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 468)), fixItArray6  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 467)) ;
        }
      }
      const GALGAS_selfIncDecInstructionAST temp_7 = object ;
      const GALGAS_selfIncDecInstructionAST temp_8 = object ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_incDecInstructionForGeneration::constructor_new (temp_7.readProperty_mInstructionLocation (), constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), var_selfType_16766, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-inc-dec.galgas", 475)), temp_8.readProperty_mKind ()  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 471))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 471)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfIncDecInstructionAST temp_9 = object ;
    TC_Array <C_FixItDescription> fixItArray10 ;
    inCompiler->emitSemanticError (temp_9.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray10  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 479)) ;
  }
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
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_0.readProperty_mReceiverCppName () COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 540)) ;
  }
  const GALGAS_incDecInstructionForGeneration temp_1 = object ;
  GALGAS_string var_receiverCppName_19959 = temp_1.readProperty_mReceiverCppName () ;
  const GALGAS_incDecInstructionForGeneration temp_2 = object ;
  cEnumerator_lstringlist enumerator_19997 (temp_2.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_19997.hasCurrentObject ()) {
    var_receiverCppName_19959.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_19997.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-inc-dec.galgas", 543)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 543)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 543)) ;
    enumerator_19997.gotoNextObject () ;
  }
  const GALGAS_incDecInstructionForGeneration temp_3 = object ;
  switch (temp_3.readProperty_mKind ().enumValue ()) {
  case GALGAS_incDecKind::kNotBuilt:
    break ;
  case GALGAS_incDecKind::kEnum_increment:
    {
      const GALGAS_incDecInstructionForGeneration temp_4 = object ;
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_19959.add_operation (GALGAS_string (".increment_operation ("), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 548)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 548)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 548)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 548)).add_operation (extensionGetter_commaSourceFile (temp_4.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 549)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 549)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 549)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 548)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 550)) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 550)) ;
      }
    }
    break ;
  case GALGAS_incDecKind::kEnum_decrement:
    {
      const GALGAS_incDecInstructionForGeneration temp_5 = object ;
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_19959.add_operation (GALGAS_string (".decrement_operation ("), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 552)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 552)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 552)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 552)).add_operation (extensionGetter_commaSourceFile (temp_5.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 553)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 553)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 553)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 552)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 554)) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 554)) ;
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
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_0.readProperty_mReceiverCppName () COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 568)) ;
  }
  const GALGAS_incDecNoOVFInstructionForGeneration temp_1 = object ;
  GALGAS_string var_receiverCppName_21195 = temp_1.readProperty_mReceiverCppName () ;
  const GALGAS_incDecNoOVFInstructionForGeneration temp_2 = object ;
  cEnumerator_lstringlist enumerator_21233 (temp_2.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_21233.hasCurrentObject ()) {
    var_receiverCppName_21195.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_21233.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-inc-dec.galgas", 571)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 571)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 571)) ;
    enumerator_21233.gotoNextObject () ;
  }
  const GALGAS_incDecNoOVFInstructionForGeneration temp_3 = object ;
  switch (temp_3.readProperty_mKind ().enumValue ()) {
  case GALGAS_incDecKind::kNotBuilt:
    break ;
  case GALGAS_incDecKind::kEnum_increment:
    {
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_21195.add_operation (GALGAS_string (".increment_operation_no_overflow () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 576)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 576)) ;
    }
    break ;
  case GALGAS_incDecKind::kEnum_decrement:
    {
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_21195.add_operation (GALGAS_string (".decrement_operation_no_overflow () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 578)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 578)) ;
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
  cEnumerator_ifExpressionList enumerator_12578 (temp_0.readProperty_mExpressions (), kENUMERATION_UP) ;
  while (enumerator_12578.hasCurrentObject ()) {
    switch (enumerator_12578.current_mExpression (HERE).enumValue ()) {
    case GALGAS_ifExpressionKind::kNotBuilt:
      break ;
    case GALGAS_ifExpressionKind::kEnum_regularExp:
      {
        const cEnumAssociatedValues_ifExpressionKind_regularExp * extractPtr_12710 = (const cEnumAssociatedValues_ifExpressionKind_regularExp *) (enumerator_12578.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_12650_exp = extractPtr_12710->mAssociatedValue0 ;
        callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) extractedValue_12650_exp.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 355)) ;
      }
      break ;
    case GALGAS_ifExpressionKind::kEnum_letExp:
      {
        const cEnumAssociatedValues_ifExpressionKind_letExp * extractPtr_12878 = (const cEnumAssociatedValues_ifExpressionKind_letExp *) (enumerator_12578.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_12733_exp = extractPtr_12878->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_12753_typeName = extractPtr_12878->mAssociatedValue3 ;
        callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) extractedValue_12733_exp.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 357)) ;
        {
        GALGAS_unifiedTypeMap_2D_entry joker_12876 ; // Joker input parameter
        GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioTypeMap, extractedValue_12753_typeName, joker_12876 COMMA_SOURCE_FILE ("instruction-if.galgas", 358)) ;
        }
      }
      break ;
    case GALGAS_ifExpressionKind::kEnum_optionalMethodCall:
      {
        const cEnumAssociatedValues_ifExpressionKind_optionalMethodCall * extractPtr_13320 = (const cEnumAssociatedValues_ifExpressionKind_optionalMethodCall *) (enumerator_12578.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_12926_receiverExpression = extractPtr_13320->mAssociatedValue0 ;
        const GALGAS_optionalMethodActualArgumentList extractedValue_12939_parameters = extractPtr_13320->mAssociatedValue2 ;
        callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) extractedValue_12926_receiverExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 360)) ;
        cEnumerator_optionalMethodActualArgumentList enumerator_13037 (extractedValue_12939_parameters, kENUMERATION_UP) ;
        while (enumerator_13037.hasCurrentObject ()) {
          switch (enumerator_13037.current_mActualArgument (HERE).enumValue ()) {
          case GALGAS_optionalMethodActualArgument::kNotBuilt:
            break ;
          case GALGAS_optionalMethodActualArgument::kEnum_actualOutput:
            {
              const cEnumAssociatedValues_optionalMethodActualArgument_actualOutput * extractPtr_13191 = (const cEnumAssociatedValues_optionalMethodActualArgument_actualOutput *) (enumerator_13037.current_mActualArgument (HERE).unsafePointer ()) ;
              const GALGAS_semanticExpressionAST extractedValue_13118_expression = extractPtr_13191->mAssociatedValue0 ;
              callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) extractedValue_13118_expression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 364)) ;
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
          enumerator_13037.gotoNextObject () ;
        }
      }
      break ;
    }
    enumerator_12578.gotoNextObject () ;
  }
  const GALGAS_ifInstructionAST temp_1 = object ;
  extensionMethod_enterInstructionListInSemanticContext (temp_1.readProperty_m_5F_then_5F_instructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 372)) ;
  const GALGAS_ifInstructionAST temp_2 = object ;
  extensionMethod_enterInstructionListInSemanticContext (temp_2.readProperty_m_5F_else_5F_instructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 373)) ;
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
  GALGAS_ifTestListForGeneration var_testListForGeneration_14787 = GALGAS_ifTestListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 410)) ;
  const GALGAS_ifInstructionAST temp_0 = object ;
  cEnumerator_ifExpressionList enumerator_14810 (temp_0.readProperty_mExpressions (), kENUMERATION_UP) ;
  while (enumerator_14810.hasCurrentObject ()) {
    switch (enumerator_14810.current_mExpression (HERE).enumValue ()) {
    case GALGAS_ifExpressionKind::kNotBuilt:
      break ;
    case GALGAS_ifExpressionKind::kEnum_regularExp:
      {
        const cEnumAssociatedValues_ifExpressionKind_regularExp * extractPtr_15429 = (const cEnumAssociatedValues_ifExpressionKind_regularExp *) (enumerator_14810.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_14882_exp = extractPtr_15429->mAssociatedValue0 ;
        GALGAS_semanticExpressionForGeneration var_analyzed_5F_if_5F_expression_15109 ;
        callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) extractedValue_14882_exp.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-if.galgas", 417)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_analyzed_5F_if_5F_expression_15109, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 414)) ;
        GALGAS_semanticExpressionForGeneration var_if_5F_expression_15272 ;
        {
        const GALGAS_ifInstructionAST temp_1 = object ;
        routine_checkExpressionIsBoolean (constinArgument_inAnalysisContext, temp_1.readProperty_mEndOf_5F_if_5F_instruction (), var_analyzed_5F_if_5F_expression_15109, var_if_5F_expression_15272, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 422)) ;
        }
        var_testListForGeneration_14787.addAssign_operation (GALGAS_ifTestForGeneration::constructor_regular (var_if_5F_expression_15272  COMMA_SOURCE_FILE ("instruction-if.galgas", 428))  COMMA_SOURCE_FILE ("instruction-if.galgas", 428)) ;
        {
        ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 429)) ;
        }
        {
        ioArgument_ioVariableMap.setter_openBranch (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 430)) ;
        }
      }
      break ;
    case GALGAS_ifExpressionKind::kEnum_letExp:
      {
        const cEnumAssociatedValues_ifExpressionKind_letExp * extractPtr_18895 = (const cEnumAssociatedValues_ifExpressionKind_letExp *) (enumerator_14810.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_15459_constantName = extractPtr_18895->mAssociatedValue0 ;
        const GALGAS_semanticExpressionAST extractedValue_15463_exp = extractPtr_18895->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_15483_typeName = extractPtr_18895->mAssociatedValue3 ;
        GALGAS_semanticExpressionForGeneration var_analyzedExpression_15706 ;
        callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) extractedValue_15463_exp.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-if.galgas", 435)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_analyzedExpression_15706, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 432)) ;
        GALGAS_unifiedTypeMap_2D_entry var_castType_15763 = GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-if.galgas", 441)) ;
        GALGAS_unifiedTypeMap_2D_entry var_testType_15811 = GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-if.galgas", 442)) ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = var_analyzedExpression_15706.readProperty_mResultType ().getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 444)).getter_isClassType (SOURCE_FILE ("instruction-if.galgas", 444)).boolEnum () ;
          if (kBoolTrue == test_2) {
            enumGalgasBool test_3 = kBoolTrue ;
            if (kBoolTrue == test_3) {
              test_3 = GALGAS_bool (kIsEqual, extractedValue_15483_typeName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_3) {
                TC_Array <C_FixItDescription> fixItArray4 ;
                inCompiler->emitSemanticError (extractedValue_15483_typeName.readProperty_location (), GALGAS_string ("on a class object, the 'as' clause is required"), fixItArray4  COMMA_SOURCE_FILE ("instruction-if.galgas", 446)) ;
                var_castType_15763.drop () ; // Release error dropped variable
                var_testType_15811.drop () ; // Release error dropped variable
              }
            }
            if (kBoolFalse == test_3) {
              var_castType_15763 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), extractedValue_15483_typeName, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 448)) ;
              var_testType_15811 = var_castType_15763 ;
              GALGAS_unifiedTypeMap_2D_entry var_t_16346 = var_castType_15763 ;
              GALGAS_bool var_found_16383 = GALGAS_bool (kIsEqual, var_t_16346.objectCompare (var_analyzedExpression_15706.readProperty_mResultType ())) ;
              if (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap ().getter_count (SOURCE_FILE ("instruction-if.galgas", 453)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 453)).isValid ()) {
                uint32_t variant_16436 = constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap ().getter_count (SOURCE_FILE ("instruction-if.galgas", 453)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 453)).uintValue () ;
                bool loop_16436 = true ;
                while (loop_16436) {
                  loop_16436 = var_found_16383.operator_not (SOURCE_FILE ("instruction-if.galgas", 454)).operator_and (var_t_16346.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 454)).getter_isNull (SOURCE_FILE ("instruction-if.galgas", 454)).operator_not (SOURCE_FILE ("instruction-if.galgas", 454)) COMMA_SOURCE_FILE ("instruction-if.galgas", 454)).isValid () ;
                  if (loop_16436) {
                    loop_16436 = var_found_16383.operator_not (SOURCE_FILE ("instruction-if.galgas", 454)).operator_and (var_t_16346.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 454)).getter_isNull (SOURCE_FILE ("instruction-if.galgas", 454)).operator_not (SOURCE_FILE ("instruction-if.galgas", 454)) COMMA_SOURCE_FILE ("instruction-if.galgas", 454)).boolValue () ;
                  }
                  if (loop_16436 && (0 == variant_16436)) {
                    loop_16436 = false ;
                    inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-if.galgas", 453)) ;
                  }
                  if (loop_16436) {
                    variant_16436 -- ;
                    var_t_16346 = var_t_16346.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 455)) ;
                    var_found_16383 = GALGAS_bool (kIsEqual, var_t_16346.objectCompare (var_analyzedExpression_15706.readProperty_mResultType ())) ;
                  }
                }
              }
              enumGalgasBool test_5 = kBoolTrue ;
              if (kBoolTrue == test_5) {
                test_5 = var_found_16383.operator_not (SOURCE_FILE ("instruction-if.galgas", 458)).boolEnum () ;
                if (kBoolTrue == test_5) {
                  TC_Array <C_FixItDescription> fixItArray6 ;
                  inCompiler->emitSemanticError (extractedValue_15483_typeName.readProperty_location (), GALGAS_string ("the '@").add_operation (extractedValue_15483_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 460)).add_operation (GALGAS_string ("' type is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 460)).add_operation (var_analyzedExpression_15706.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 460)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 460)).add_operation (GALGAS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 460)), fixItArray6  COMMA_SOURCE_FILE ("instruction-if.galgas", 459)) ;
                }
              }
            }
          }
        }
        if (kBoolFalse == test_2) {
          enumGalgasBool test_7 = kBoolTrue ;
          if (kBoolTrue == test_7) {
            GALGAS_unifiedTypeMap_2D_entry var_classType_17011 ;
            const bool optionalResult16981 = var_analyzedExpression_15706.readProperty_mResultType ().getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 464)).optional_weakReferenceType (var_classType_17011) ;
            if (!optionalResult16981) {
              test_7 = kBoolFalse ;
            }
            if (kBoolTrue == test_7) {
              enumGalgasBool test_8 = kBoolTrue ;
              if (kBoolTrue == test_8) {
                test_8 = GALGAS_bool (kIsEqual, extractedValue_15483_typeName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_8) {
                  var_castType_15763 = var_classType_17011 ;
                }
              }
              if (kBoolFalse == test_8) {
                var_castType_15763 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), extractedValue_15483_typeName, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 468)) ;
              }
              var_testType_15811 = var_castType_15763 ;
              GALGAS_unifiedTypeMap_2D_entry var_t_17285 = var_castType_15763 ;
              GALGAS_bool var_found_17320 = GALGAS_bool (kIsEqual, var_t_17285.objectCompare (var_analyzedExpression_15706.readProperty_mResultType ())) ;
              enumGalgasBool test_9 = kBoolTrue ;
              if (kBoolTrue == test_9) {
                test_9 = var_found_17320.boolEnum () ;
                if (kBoolTrue == test_9) {
                  var_castType_15763.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 474)).method_weakReferenceType (var_testType_15811, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 474)) ;
                }
              }
              if (kBoolFalse == test_9) {
                enumGalgasBool test_10 = kBoolTrue ;
                if (kBoolTrue == test_10) {
                  test_10 = GALGAS_bool (kIsEqual, var_t_17285.objectCompare (var_classType_17011)).boolEnum () ;
                  if (kBoolTrue == test_10) {
                    var_found_17320 = GALGAS_bool (true) ;
                  }
                }
              }
              if (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap ().getter_count (SOURCE_FILE ("instruction-if.galgas", 478)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 478)).isValid ()) {
                uint32_t variant_17542 = constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap ().getter_count (SOURCE_FILE ("instruction-if.galgas", 478)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 478)).uintValue () ;
                bool loop_17542 = true ;
                while (loop_17542) {
                  loop_17542 = var_found_17320.operator_not (SOURCE_FILE ("instruction-if.galgas", 479)).operator_and (var_t_17285.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 479)).getter_isNull (SOURCE_FILE ("instruction-if.galgas", 479)).operator_not (SOURCE_FILE ("instruction-if.galgas", 479)) COMMA_SOURCE_FILE ("instruction-if.galgas", 479)).isValid () ;
                  if (loop_17542) {
                    loop_17542 = var_found_17320.operator_not (SOURCE_FILE ("instruction-if.galgas", 479)).operator_and (var_t_17285.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 479)).getter_isNull (SOURCE_FILE ("instruction-if.galgas", 479)).operator_not (SOURCE_FILE ("instruction-if.galgas", 479)) COMMA_SOURCE_FILE ("instruction-if.galgas", 479)).boolValue () ;
                  }
                  if (loop_17542 && (0 == variant_17542)) {
                    loop_17542 = false ;
                    inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-if.galgas", 478)) ;
                  }
                  if (loop_17542) {
                    variant_17542 -- ;
                    var_t_17285 = var_t_17285.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 480)) ;
                    enumGalgasBool test_11 = kBoolTrue ;
                    if (kBoolTrue == test_11) {
                      test_11 = GALGAS_bool (kIsEqual, var_t_17285.objectCompare (var_analyzedExpression_15706.readProperty_mResultType ())).boolEnum () ;
                      if (kBoolTrue == test_11) {
                        var_found_17320 = GALGAS_bool (true) ;
                        var_castType_15763.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 483)).method_weakReferenceType (var_testType_15811, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 483)) ;
                      }
                    }
                    if (kBoolFalse == test_11) {
                      enumGalgasBool test_12 = kBoolTrue ;
                      if (kBoolTrue == test_12) {
                        test_12 = GALGAS_bool (kIsEqual, var_t_17285.objectCompare (var_classType_17011)).boolEnum () ;
                        if (kBoolTrue == test_12) {
                          var_found_17320 = GALGAS_bool (true) ;
                        }
                      }
                    }
                  }
                }
              }
              enumGalgasBool test_13 = kBoolTrue ;
              if (kBoolTrue == test_13) {
                test_13 = var_found_17320.operator_not (SOURCE_FILE ("instruction-if.galgas", 488)).boolEnum () ;
                if (kBoolTrue == test_13) {
                  TC_Array <C_FixItDescription> fixItArray14 ;
                  inCompiler->emitSemanticError (extractedValue_15483_typeName.readProperty_location (), GALGAS_string ("the '@").add_operation (var_castType_15763.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 490)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 490)).add_operation (GALGAS_string ("' type is not compatible with the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 490)).add_operation (var_analyzedExpression_15706.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 490)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 490)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 490)), fixItArray14  COMMA_SOURCE_FILE ("instruction-if.galgas", 489)) ;
                }
              }
            }
          }
          if (kBoolFalse == test_7) {
            TC_Array <C_FixItDescription> fixItArray15 ;
            inCompiler->emitSemanticError (var_analyzedExpression_15706.readProperty_mLocation (), GALGAS_string ("expression should be a class instance, or a weak reference: it is an @").add_operation (var_analyzedExpression_15706.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 494)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 493)).add_operation (GALGAS_string (" instance"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 494)), fixItArray15  COMMA_SOURCE_FILE ("instruction-if.galgas", 493)) ;
          }
        }
        {
        ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 496)) ;
        }
        {
        ioArgument_ioVariableMap.setter_openBranch (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 497)) ;
        }
        GALGAS_string var_targetVariableCppName_18447 = GALGAS_string ("var_").add_operation (extractedValue_15459_constantName.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-if.galgas", 498)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 498)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 498)).add_operation (extractedValue_15459_constantName.readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 499)).getter_string (SOURCE_FILE ("instruction-if.galgas", 499)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 499)) ;
        {
        ioArgument_ioVariableMap.setter_insertLocalConstant (extractedValue_15459_constantName, var_castType_15763, var_targetVariableCppName_18447, var_targetVariableCppName_18447, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 500)) ;
        }
        var_testListForGeneration_14787.addAssign_operation (GALGAS_ifTestForGeneration::constructor_letExp (var_targetVariableCppName_18447, var_analyzedExpression_15706, var_castType_15763, var_testType_15811  COMMA_SOURCE_FILE ("instruction-if.galgas", 506))  COMMA_SOURCE_FILE ("instruction-if.galgas", 506)) ;
      }
      break ;
    case GALGAS_ifExpressionKind::kEnum_optionalMethodCall:
      {
        const cEnumAssociatedValues_ifExpressionKind_optionalMethodCall * extractPtr_19292 = (const cEnumAssociatedValues_ifExpressionKind_optionalMethodCall *) (enumerator_14810.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_18943_receiverExpression = extractPtr_19292->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_18962_optionalMethodName = extractPtr_19292->mAssociatedValue1 ;
        const GALGAS_optionalMethodActualArgumentList extractedValue_18973_parameters = extractPtr_19292->mAssociatedValue2 ;
        {
        routine_analyzeOptionalMethodCall (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, extractedValue_18943_receiverExpression, extractedValue_18962_optionalMethodName, extractedValue_18973_parameters, var_testListForGeneration_14787, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 513)) ;
        }
      }
      break ;
    }
    enumerator_14810.gotoNextObject () ;
  }
  GALGAS_semanticInstructionListForGeneration var_then_5F_instructionList_19604 ;
  {
  const GALGAS_ifInstructionAST temp_16 = object ;
  routine_analyzeSemanticInstructionListWithoutBranch (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 530)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 531)), temp_16.readProperty_m_5F_then_5F_instructionList (), ioArgument_ioVariableMap, var_then_5F_instructionList_19604, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 526)) ;
  }
  const GALGAS_ifInstructionAST temp_17 = object ;
  GALGAS_ifExpressionList var_expressions_19626 = temp_17.readProperty_mExpressions () ;
  {
  GALGAS_ifExpressionKind joker_19673 ; // Joker input parameter
  var_expressions_19626.setter_popLast (joker_19673, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 537)) ;
  }
  cEnumerator_ifExpressionList enumerator_19684 (var_expressions_19626, kENUMERATION_UP) ;
  while (enumerator_19684.hasCurrentObject ()) {
    {
    const GALGAS_ifInstructionAST temp_18 = object ;
    ioArgument_ioVariableMap.setter_closeBranch (temp_18.readProperty_mEndOf_5F_then_5F_branch (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 539)) ;
    }
    {
    const GALGAS_ifInstructionAST temp_19 = object ;
    ioArgument_ioVariableMap.setter_closeOverride (temp_19.readProperty_mEndOf_5F_then_5F_branch (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 540)) ;
    }
    enumerator_19684.gotoNextObject () ;
  }
  {
  const GALGAS_ifInstructionAST temp_20 = object ;
  ioArgument_ioVariableMap.setter_closeBranch (temp_20.readProperty_mEndOf_5F_then_5F_branch (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 542)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionList_20203 ;
  {
  const GALGAS_ifInstructionAST temp_21 = object ;
  const GALGAS_ifInstructionAST temp_22 = object ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 548)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 549)), temp_21.readProperty_m_5F_else_5F_instructionList (), temp_22.readProperty_mEndOf_5F_if_5F_instruction (), ioArgument_ioVariableMap, var_else_5F_instructionList_20203, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 544)) ;
  }
  {
  const GALGAS_ifInstructionAST temp_23 = object ;
  ioArgument_ioVariableMap.setter_closeOverride (temp_23.readProperty_mEndOf_5F_if_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 555)) ;
  }
  const GALGAS_ifInstructionAST temp_24 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_ifInstructionForGeneration::constructor_new (temp_24.readProperty_mEndOf_5F_then_5F_branch (), var_testListForGeneration_14787, var_then_5F_instructionList_19604, var_else_5F_instructionList_20203  COMMA_SOURCE_FILE ("instruction-if.galgas", 557))  COMMA_SOURCE_FILE ("instruction-if.galgas", 557)) ;
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
  GALGAS_semanticExpressionForGeneration var_receiverExpression_21498 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) constinArgument_inReceiverExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-if.galgas", 583)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_receiverExpression_21498, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 580)) ;
  {
  ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 588)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openBranch (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 589)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_receiverType_21650 = var_receiverExpression_21498.readProperty_mResultType () ;
  GALGAS_optionalMethodMap var_optionalMethodMap_21726 = var_receiverType_21650.getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 592)) ;
  GALGAS_optionalMethodSignature var_optionalMethodSignature_21845 ;
  const cMapElement_optionalMethodMap * objectArray_21852 = (const cMapElement_optionalMethodMap *) var_optionalMethodMap_21726.readAccessForWithInstruction (constinArgument_inOptionalMethodName.readProperty_string ()) ;
  if (NULL != objectArray_21852) {
      macroValidSharedObject (objectArray_21852, cMapElement_optionalMethodMap) ;
    var_optionalMethodSignature_21845 = objectArray_21852->mProperty_mArgumentTypeList ;
  }else{
    GALGAS_string var_s_21969 = GALGAS_string ("this optional method is not defined; available optional methods:") ;
    cEnumerator_optionalMethodMap enumerator_22054 (var_optionalMethodMap_21726, kENUMERATION_UP) ;
    while (enumerator_22054.hasCurrentObject ()) {
      var_s_21969.plusAssign_operation(GALGAS_string ("\n"
        "  - ").add_operation (enumerator_22054.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 600)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 600)) ;
      enumerator_22054.gotoNextObject () ;
    }
    TC_Array <C_FixItDescription> fixItArray0 ;
    inCompiler->emitSemanticError (constinArgument_inOptionalMethodName.readProperty_location (), var_s_21969, fixItArray0  COMMA_SOURCE_FILE ("instruction-if.galgas", 602)) ;
    var_optionalMethodSignature_21845.drop () ; // Release error dropped variable
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, constinArgument_inActualParameters.getter_length (SOURCE_FILE ("instruction-if.galgas", 605)).objectCompare (var_optionalMethodSignature_21845.getter_length (SOURCE_FILE ("instruction-if.galgas", 605)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inOptionalMethodName.readProperty_location (), GALGAS_string ("calling the '").add_operation (constinArgument_inOptionalMethodName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 607)).add_operation (GALGAS_string ("' optional method of '@"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 607)).add_operation (var_receiverType_21650.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 607)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 607)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 607)).add_operation (var_optionalMethodSignature_21845.getter_length (SOURCE_FILE ("instruction-if.galgas", 608)).getter_string (SOURCE_FILE ("instruction-if.galgas", 607)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 607)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 608)).add_operation (constinArgument_inActualParameters.getter_length (SOURCE_FILE ("instruction-if.galgas", 609)).getter_string (SOURCE_FILE ("instruction-if.galgas", 608)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 608)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 609)), fixItArray2  COMMA_SOURCE_FILE ("instruction-if.galgas", 606)) ;
    }
  }
  if (kBoolFalse == test_1) {
    GALGAS_optionalMethodActualArgumentListForGeneration var_actualParameterList_22677 = GALGAS_optionalMethodActualArgumentListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 611)) ;
    cEnumerator_optionalMethodActualArgumentList enumerator_22722 (constinArgument_inActualParameters, kENUMERATION_UP) ;
    cEnumerator_optionalMethodSignature enumerator_22785 (var_optionalMethodSignature_21845, kENUMERATION_UP) ;
    while (enumerator_22722.hasCurrentObject () && enumerator_22785.hasCurrentObject ()) {
      switch (enumerator_22722.current_mActualArgument (HERE).enumValue ()) {
      case GALGAS_optionalMethodActualArgument::kNotBuilt:
        break ;
      case GALGAS_optionalMethodActualArgument::kEnum_actualOutput:
        {
          const cEnumAssociatedValues_optionalMethodActualArgument_actualOutput * extractPtr_23740 = (const cEnumAssociatedValues_optionalMethodActualArgument_actualOutput *) (enumerator_22722.current_mActualArgument (HERE).unsafePointer ()) ;
          const GALGAS_semanticExpressionAST extractedValue_22881_expression = extractPtr_23740->mAssociatedValue0 ;
          const GALGAS_location extractedValue_22890_location = extractPtr_23740->mAssociatedValue1 ;
          GALGAS_semanticExpressionForGeneration var_exp_23153 ;
          callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) extractedValue_22881_expression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_22785.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_exp_23153, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 616)) ;
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = GALGAS_bool (kIsNotEqual, enumerator_22785.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_22722.current_mSelector (HERE).readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_3) {
              GALGAS_string temp_4 ;
              const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, enumerator_22785.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_5) {
                temp_4 = enumerator_22785.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 625)) ;
              }else if (kBoolFalse == test_5) {
                temp_4 = GALGAS_string::makeEmptyString () ;
              }
              GALGAS_string var_s_23242 = GALGAS_string ("!").add_operation (temp_4, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 625)) ;
              TC_Array <C_FixItDescription> fixItArray6 ;
              appendFixItActions (fixItArray6, kFixItReplace, var_s_23242) ;
              inCompiler->emitSemanticError (enumerator_22722.current_mSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_23242, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 626)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 626)), fixItArray6  COMMA_SOURCE_FILE ("instruction-if.galgas", 626)) ;
            }
          }
          {
          routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_22785.current_mFormalArgumentType (HERE), var_exp_23153.readProperty_mResultType (), extractedValue_22890_location, var_exp_23153, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 630)) ;
          }
          var_actualParameterList_22677.addAssign_operation (GALGAS_optionalMethodActualArgumentForGeneration::constructor_actualOutput (var_exp_23153  COMMA_SOURCE_FILE ("instruction-if.galgas", 631))  COMMA_SOURCE_FILE ("instruction-if.galgas", 631)) ;
        }
        break ;
      case GALGAS_optionalMethodActualArgument::kEnum_actualLetInput:
        {
          const cEnumAssociatedValues_optionalMethodActualArgument_actualLetInput * extractPtr_24915 = (const cEnumAssociatedValues_optionalMethodActualArgument_actualLetInput *) (enumerator_22722.current_mActualArgument (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_23791_actualTypeName = extractPtr_24915->mAssociatedValue0 ;
          const GALGAS_lstring extractedValue_23813_constantName = extractPtr_24915->mAssociatedValue1 ;
          enumGalgasBool test_7 = kBoolTrue ;
          if (kBoolTrue == test_7) {
            GALGAS_bool test_8 = GALGAS_bool (kIsNotEqual, extractedValue_23791_actualTypeName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())) ;
            if (kBoolTrue == test_8.boolEnum ()) {
              test_8 = GALGAS_bool (kIsNotEqual, enumerator_22785.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 633)).objectCompare (extractedValue_23791_actualTypeName.readProperty_string ())) ;
            }
            test_7 = test_8.boolEnum () ;
            if (kBoolTrue == test_7) {
              TC_Array <C_FixItDescription> fixItArray9 ;
              appendFixItActions (fixItArray9, kFixItReplace, GALGAS_string ("@").add_operation (enumerator_22785.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 636)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 636))) ;
              inCompiler->emitSemanticError (extractedValue_23791_actualTypeName.readProperty_location (), GALGAS_string ("the '@").add_operation (enumerator_22785.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 635)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 635)).add_operation (GALGAS_string ("' type name is required here"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 635)), fixItArray9  COMMA_SOURCE_FILE ("instruction-if.galgas", 634)) ;
            }
          }
          GALGAS_string var_targetVariableCppName_24112 = GALGAS_string ("var_").add_operation (extractedValue_23813_constantName.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-if.galgas", 638)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 638)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 638)).add_operation (extractedValue_23813_constantName.readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 639)).getter_string (SOURCE_FILE ("instruction-if.galgas", 639)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 639)) ;
          {
          ioArgument_ioVariableMap.setter_insertLocalConstant (extractedValue_23813_constantName, enumerator_22785.current_mFormalArgumentType (HERE), var_targetVariableCppName_24112, var_targetVariableCppName_24112, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 640)) ;
          }
          var_actualParameterList_22677.addAssign_operation (GALGAS_optionalMethodActualArgumentForGeneration::constructor_actualLetInput (enumerator_22785.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 646)), var_targetVariableCppName_24112  COMMA_SOURCE_FILE ("instruction-if.galgas", 646))  COMMA_SOURCE_FILE ("instruction-if.galgas", 646)) ;
          enumGalgasBool test_10 = kBoolTrue ;
          if (kBoolTrue == test_10) {
            test_10 = GALGAS_bool (kIsNotEqual, enumerator_22785.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_22722.current_mSelector (HERE).readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_10) {
              GALGAS_string temp_11 ;
              const enumGalgasBool test_12 = GALGAS_bool (kIsNotEqual, enumerator_22785.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_12) {
                temp_11 = enumerator_22785.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 648)) ;
              }else if (kBoolFalse == test_12) {
                temp_11 = GALGAS_string::makeEmptyString () ;
              }
              GALGAS_string var_s_24579 = GALGAS_string ("\?").add_operation (temp_11, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 648)) ;
              TC_Array <C_FixItDescription> fixItArray13 ;
              appendFixItActions (fixItArray13, kFixItReplace, var_s_24579) ;
              inCompiler->emitSemanticError (enumerator_22722.current_mSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_24579, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 649)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 649)), fixItArray13  COMMA_SOURCE_FILE ("instruction-if.galgas", 649)) ;
            }
          }
        }
        break ;
      case GALGAS_optionalMethodActualArgument::kEnum_actualVarInput:
        {
          const cEnumAssociatedValues_optionalMethodActualArgument_actualVarInput * extractPtr_26098 = (const cEnumAssociatedValues_optionalMethodActualArgument_actualVarInput *) (enumerator_22722.current_mActualArgument (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_24966_actualTypeName = extractPtr_26098->mAssociatedValue0 ;
          const GALGAS_lstring extractedValue_24988_variableName = extractPtr_26098->mAssociatedValue1 ;
          enumGalgasBool test_14 = kBoolTrue ;
          if (kBoolTrue == test_14) {
            GALGAS_bool test_15 = GALGAS_bool (kIsNotEqual, extractedValue_24966_actualTypeName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())) ;
            if (kBoolTrue == test_15.boolEnum ()) {
              test_15 = GALGAS_bool (kIsNotEqual, enumerator_22785.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 654)).objectCompare (extractedValue_24966_actualTypeName.readProperty_string ())) ;
            }
            test_14 = test_15.boolEnum () ;
            if (kBoolTrue == test_14) {
              TC_Array <C_FixItDescription> fixItArray16 ;
              appendFixItActions (fixItArray16, kFixItReplace, GALGAS_string ("@").add_operation (enumerator_22785.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 657)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 657))) ;
              inCompiler->emitSemanticError (extractedValue_24966_actualTypeName.readProperty_location (), GALGAS_string ("the '@").add_operation (enumerator_22785.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 656)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 656)).add_operation (GALGAS_string ("' type name is required here"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 656)), fixItArray16  COMMA_SOURCE_FILE ("instruction-if.galgas", 655)) ;
            }
          }
          GALGAS_string var_targetVariableCppName_25288 = GALGAS_string ("var_").add_operation (extractedValue_24988_variableName.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-if.galgas", 659)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 659)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 659)).add_operation (extractedValue_24988_variableName.readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 660)).getter_string (SOURCE_FILE ("instruction-if.galgas", 660)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 660)) ;
          {
          ioArgument_ioVariableMap.setter_insertDefinedLocalVariable (extractedValue_24988_variableName, enumerator_22785.current_mFormalArgumentType (HERE), var_targetVariableCppName_25288, var_targetVariableCppName_25288, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 661)) ;
          }
          var_actualParameterList_22677.addAssign_operation (GALGAS_optionalMethodActualArgumentForGeneration::constructor_actualVarInput (enumerator_22785.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 667)), var_targetVariableCppName_25288  COMMA_SOURCE_FILE ("instruction-if.galgas", 667))  COMMA_SOURCE_FILE ("instruction-if.galgas", 667)) ;
          enumGalgasBool test_17 = kBoolTrue ;
          if (kBoolTrue == test_17) {
            test_17 = GALGAS_bool (kIsNotEqual, enumerator_22785.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_22722.current_mSelector (HERE).readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_17) {
              GALGAS_string temp_18 ;
              const enumGalgasBool test_19 = GALGAS_bool (kIsNotEqual, enumerator_22785.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_19) {
                temp_18 = enumerator_22785.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 669)) ;
              }else if (kBoolFalse == test_19) {
                temp_18 = GALGAS_string::makeEmptyString () ;
              }
              GALGAS_string var_s_25762 = GALGAS_string ("\?").add_operation (temp_18, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 669)) ;
              TC_Array <C_FixItDescription> fixItArray20 ;
              appendFixItActions (fixItArray20, kFixItReplace, var_s_25762) ;
              inCompiler->emitSemanticError (enumerator_22722.current_mSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_25762, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 670)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 670)), fixItArray20  COMMA_SOURCE_FILE ("instruction-if.galgas", 670)) ;
            }
          }
        }
        break ;
      case GALGAS_optionalMethodActualArgument::kEnum_actualInputJoker:
        {
          const cEnumAssociatedValues_optionalMethodActualArgument_actualInputJoker * extractPtr_26795 = (const cEnumAssociatedValues_optionalMethodActualArgument_actualInputJoker *) (enumerator_22722.current_mActualArgument (HERE).unsafePointer ()) ;
          const GALGAS_bool extractedValue_26141_checkSelector = extractPtr_26795->mAssociatedValue0 ;
          const GALGAS_location extractedValue_26150_location = extractPtr_26795->mAssociatedValue1 ;
          const GALGAS_uint extractedValue_26154_idx = extractPtr_26795->mAssociatedValue2 ;
          GALGAS_string var_targetVariableCppName_26191 = GALGAS_string ("var_unused_").add_operation (extractedValue_26154_idx.getter_string (SOURCE_FILE ("instruction-if.galgas", 675)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 675)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 675)).add_operation (extractedValue_26150_location.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 675)).getter_string (SOURCE_FILE ("instruction-if.galgas", 675)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 675)) ;
          var_actualParameterList_22677.addAssign_operation (GALGAS_optionalMethodActualArgumentForGeneration::constructor_actualVarInput (enumerator_22785.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 676)), var_targetVariableCppName_26191  COMMA_SOURCE_FILE ("instruction-if.galgas", 676))  COMMA_SOURCE_FILE ("instruction-if.galgas", 676)) ;
          enumGalgasBool test_21 = kBoolTrue ;
          if (kBoolTrue == test_21) {
            GALGAS_bool test_22 = extractedValue_26141_checkSelector ;
            if (kBoolTrue == test_22.boolEnum ()) {
              test_22 = GALGAS_bool (kIsNotEqual, enumerator_22785.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_22722.current_mSelector (HERE).readProperty_string ())) ;
            }
            test_21 = test_22.boolEnum () ;
            if (kBoolTrue == test_21) {
              GALGAS_string temp_23 ;
              const enumGalgasBool test_24 = GALGAS_bool (kIsNotEqual, enumerator_22785.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_24) {
                temp_23 = enumerator_22785.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 678)) ;
              }else if (kBoolFalse == test_24) {
                temp_23 = GALGAS_string::makeEmptyString () ;
              }
              GALGAS_string var_s_26459 = GALGAS_string ("\?").add_operation (temp_23, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 678)) ;
              TC_Array <C_FixItDescription> fixItArray25 ;
              appendFixItActions (fixItArray25, kFixItReplace, var_s_26459) ;
              inCompiler->emitSemanticError (enumerator_22722.current_mSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_26459, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 679)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 679)), fixItArray25  COMMA_SOURCE_FILE ("instruction-if.galgas", 679)) ;
            }
          }
        }
        break ;
      }
      enumerator_22722.gotoNextObject () ;
      enumerator_22785.gotoNextObject () ;
    }
    ioArgument_ioTestListForGeneration.addAssign_operation (GALGAS_ifTestForGeneration::constructor_optionalMethodCall (var_receiverExpression_21498, constinArgument_inOptionalMethodName, var_actualParameterList_22677  COMMA_SOURCE_FILE ("instruction-if.galgas", 685))  COMMA_SOURCE_FILE ("instruction-if.galgas", 685)) ;
  }
}


