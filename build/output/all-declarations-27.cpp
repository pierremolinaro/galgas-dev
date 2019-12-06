#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-declarations-27.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@optionExpressionAST enterExpressionInSemanticContext'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_optionExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                  GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_optionExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_optionExpressionAST.mSlotID,
                                                         extensionMethod_optionExpressionAST_enterExpressionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_optionExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_optionExpressionAST_enterExpressionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Overriding extension method '@optionExpressionAST analyzeSemanticExpression'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_optionExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                           const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                           GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                           GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_optionExpressionAST * object = (const cPtr_optionExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_optionExpressionAST) ;
  GALGAS_lstring var_usefulnessName_55539 = function_optionNameForUsefulEntitiesGraph (object->mProperty_mOptionComponentName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 962)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_55539 COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 963)) ;
  }
  GALGAS_bool var_optionComponentIsPredefined_55841 ;
  GALGAS_commandLineOptionMap var_boolOptionMap_55886 ;
  GALGAS_commandLineOptionMap var_uintOptionMap_55931 ;
  GALGAS_commandLineOptionMap var_stringOptionMap_55978 ;
  GALGAS_commandLineOptionMap var_stringListOptionMap_56029 ;
  constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mOptionComponentMapForSemanticAnalysis (HERE).method_searchKey (object->mProperty_mOptionComponentName, var_optionComponentIsPredefined_55841, var_boolOptionMap_55886, var_uintOptionMap_55931, var_stringOptionMap_55978, var_stringListOptionMap_56029, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 965)) ;
  GALGAS_bool var_found_56047 = var_boolOptionMap_55886.getter_hasKey (object->mProperty_mOptionEntryName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 973)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 973)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_returnedType_56136 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBoolType (HERE) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_found_56047.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 975)).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_found_56047 = var_uintOptionMap_55931.getter_hasKey (object->mProperty_mOptionEntryName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 976)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 976)) ;
      var_returnedType_56136 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mUIntType (HERE) ;
    }
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_found_56047.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 979)).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_found_56047 = var_stringOptionMap_55978.getter_hasKey (object->mProperty_mOptionEntryName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 980)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 980)) ;
      var_returnedType_56136 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringType (HERE) ;
    }
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_found_56047.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 983)).boolEnum () ;
    if (kBoolTrue == test_2) {
      var_found_56047 = var_stringListOptionMap_56029.getter_hasKey (object->mProperty_mOptionEntryName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 984)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 984)) ;
      var_returnedType_56136 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringListType (HERE) ;
    }
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_found_56047.boolEnum () ;
    if (kBoolTrue == test_3) {
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = GALGAS_bool (kIsEqual, object->mProperty_mOptionGetterName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 988)).objectCompare (GALGAS_string ("value"))).boolEnum () ;
        if (kBoolTrue == test_4) {
          outArgument_outExpression = GALGAS_optionValueExpressionForGeneration::constructor_new (var_returnedType_56136, object->mProperty_mOptionComponentName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 991)), var_optionComponentIsPredefined_55841, object->mProperty_mOptionComponentName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 993)), object->mProperty_mOptionEntryName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 994))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 989)) ;
        }
      }
      if (kBoolFalse == test_4) {
        enumGalgasBool test_5 = kBoolTrue ;
        if (kBoolTrue == test_5) {
          test_5 = GALGAS_bool (kIsEqual, object->mProperty_mOptionGetterName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 995)).objectCompare (GALGAS_string ("char"))).boolEnum () ;
          if (kBoolTrue == test_5) {
            outArgument_outExpression = GALGAS_optionCharExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mCharType (HERE), object->mProperty_mOptionComponentName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 998)), var_optionComponentIsPredefined_55841, object->mProperty_mOptionComponentName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1000)), object->mProperty_mOptionEntryName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1001))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 996)) ;
          }
        }
        if (kBoolFalse == test_5) {
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = GALGAS_bool (kIsEqual, object->mProperty_mOptionGetterName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1002)).objectCompare (GALGAS_string ("string"))).boolEnum () ;
            if (kBoolTrue == test_6) {
              outArgument_outExpression = GALGAS_optionStringExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringType (HERE), object->mProperty_mOptionComponentName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1005)), var_optionComponentIsPredefined_55841, object->mProperty_mOptionComponentName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1007)), object->mProperty_mOptionEntryName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1008))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1003)) ;
            }
          }
          if (kBoolFalse == test_6) {
            enumGalgasBool test_7 = kBoolTrue ;
            if (kBoolTrue == test_7) {
              test_7 = GALGAS_bool (kIsEqual, object->mProperty_mOptionGetterName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1009)).objectCompare (GALGAS_string ("comment"))).boolEnum () ;
              if (kBoolTrue == test_7) {
                outArgument_outExpression = GALGAS_optionCommentExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringType (HERE), object->mProperty_mOptionComponentName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1012)), var_optionComponentIsPredefined_55841, object->mProperty_mOptionComponentName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1014)), object->mProperty_mOptionEntryName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1015))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1010)) ;
              }
            }
            if (kBoolFalse == test_7) {
              TC_Array <C_FixItDescription> fixItArray8 ;
              inCompiler->emitSemanticError (object->mProperty_mOptionGetterName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1017)), GALGAS_string ("only the 'value', 'char', 'string' and 'comment' getters are defined for an option"), fixItArray8  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1017)) ;
              outArgument_outExpression.drop () ; // Release error dropped variable
            }
          }
        }
      }
    }
  }
  if (kBoolFalse == test_3) {
    GALGAS_stringlist var_s_58112 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1020)) ;
    cEnumerator_commandLineOptionMap enumerator_58145 (var_boolOptionMap_55886, kENUMERATION_UP) ;
    while (enumerator_58145.hasCurrentObject ()) {
      var_s_58112.addAssign_operation (enumerator_58145.current_lkey (HERE).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1022))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1022)) ;
      enumerator_58145.gotoNextObject () ;
    }
    cEnumerator_commandLineOptionMap enumerator_58201 (var_uintOptionMap_55931, kENUMERATION_UP) ;
    while (enumerator_58201.hasCurrentObject ()) {
      var_s_58112.addAssign_operation (enumerator_58201.current_lkey (HERE).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1025))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1025)) ;
      enumerator_58201.gotoNextObject () ;
    }
    cEnumerator_commandLineOptionMap enumerator_58259 (var_stringOptionMap_55978, kENUMERATION_UP) ;
    while (enumerator_58259.hasCurrentObject ()) {
      var_s_58112.addAssign_operation (enumerator_58259.current_lkey (HERE).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1028))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1028)) ;
      enumerator_58259.gotoNextObject () ;
    }
    TC_Array <C_FixItDescription> fixItArray9 ;
    appendFixItActions (fixItArray9, kFixItReplace, var_s_58112) ;
    inCompiler->emitSemanticError (object->mProperty_mOptionEntryName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1030)), GALGAS_string ("the '").add_operation (object->mProperty_mOptionComponentName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1031)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1031)).add_operation (GALGAS_string ("' option component does not define the '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1031)).add_operation (object->mProperty_mOptionEntryName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1031)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1031)).add_operation (GALGAS_string ("' option"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1031)), fixItArray9  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1030)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_optionExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_optionExpressionAST.mSlotID,
                                                  extensionMethod_optionExpressionAST_analyzeSemanticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_optionExpressionAST_analyzeSemanticExpression (defineExtensionMethod_optionExpressionAST_analyzeSemanticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@orExpressionAST enterExpressionInSemanticContext'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_orExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_orExpressionAST * object = (const cPtr_orExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_orExpressionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1042)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1043)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_orExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_orExpressionAST.mSlotID,
                                                         extensionMethod_orExpressionAST_enterExpressionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_orExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_orExpressionAST_enterExpressionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@orExpressionAST analyzeSemanticExpression'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_orExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                       const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inInferenceType,
                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                       GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_orExpressionAST * object = (const cPtr_orExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_orExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_59536 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_59536, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1056)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_59810 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_59536.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1068)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_59810, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1065)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_59882 = var_leftExpression_59536.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1074)) ;
  {
  routine_checkDiadicOperator (var_leftType_59882, var_rightExpression_59810.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1077)), var_leftType_59882.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1078)).getter_infixOrOperator (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1078)), GALGAS_string ("|"), object->mProperty_mOperatorLocation, var_rightExpression_59810, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1075)) ;
  }
  outArgument_outExpression = GALGAS_orExpressionForGeneration::constructor_new (var_leftType_59882, object->mProperty_mOperatorLocation, var_leftExpression_59536, var_rightExpression_59810  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1083)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_orExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_orExpressionAST.mSlotID,
                                                  extensionMethod_orExpressionAST_analyzeSemanticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_orExpressionAST_analyzeSemanticExpression (defineExtensionMethod_orExpressionAST_analyzeSemanticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Overriding extension method '@orShortExpressionAST enterExpressionInSemanticContext'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_orShortExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_orShortExpressionAST * object = (const cPtr_orShortExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_orShortExpressionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1096)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1097)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_orShortExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_orShortExpressionAST.mSlotID,
                                                         extensionMethod_orShortExpressionAST_enterExpressionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_orShortExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_orShortExpressionAST_enterExpressionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Overriding extension method '@orShortExpressionAST analyzeSemanticExpression'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_orShortExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                            const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                            GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                            const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inInferenceType,
                                                                            const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                            GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                            GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_orShortExpressionAST * object = (const cPtr_orShortExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_orShortExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_61303 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_61303, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1110)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_61577 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_61303.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1122)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_61577, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1119)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_61651 = var_leftExpression_61303.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1128)) ;
  {
  routine_checkDiadicOperator (var_leftType_61651, var_rightExpression_61577.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1131)), var_leftType_61651.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1132)).getter_infixOrOperator (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1132)), GALGAS_string ("|"), object->mProperty_mOperatorLocation, var_rightExpression_61577, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1129)) ;
  }
  outArgument_outExpression = GALGAS_orShortExpressionForGeneration::constructor_new (var_leftType_61651, object->mProperty_mOperatorLocation, var_leftExpression_61303, var_rightExpression_61577  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1138)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_orShortExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_orShortExpressionAST.mSlotID,
                                                  extensionMethod_orShortExpressionAST_analyzeSemanticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_orShortExpressionAST_analyzeSemanticExpression (defineExtensionMethod_orShortExpressionAST_analyzeSemanticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension method '@andExpressionAST enterExpressionInSemanticContext'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_andExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                               GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_andExpressionAST * object = (const cPtr_andExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_andExpressionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1150)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1151)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_andExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_andExpressionAST.mSlotID,
                                                         extensionMethod_andExpressionAST_enterExpressionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_andExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_andExpressionAST_enterExpressionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@andExpressionAST analyzeSemanticExpression'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_andExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                        const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inInferenceType,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_andExpressionAST * object = (const cPtr_andExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_andExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_63091 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_63091, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1164)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_63365 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_63091.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1176)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_63365, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1173)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_63439 = var_leftExpression_63091.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1182)) ;
  {
  routine_checkDiadicOperator (var_leftType_63439, var_rightExpression_63365.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1185)), var_leftType_63439.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1186)).getter_infixAndOperator (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1186)), GALGAS_string ("&"), object->mProperty_mOperatorLocation, var_rightExpression_63365, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1183)) ;
  }
  outArgument_outExpression = GALGAS_andExpressionForGeneration::constructor_new (var_leftType_63439, object->mProperty_mOperatorLocation, var_leftExpression_63091, var_rightExpression_63365  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1192)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_andExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_andExpressionAST.mSlotID,
                                                  extensionMethod_andExpressionAST_analyzeSemanticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_andExpressionAST_analyzeSemanticExpression (defineExtensionMethod_andExpressionAST_analyzeSemanticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Overriding extension method '@andShortExpressionAST enterExpressionInSemanticContext'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_andShortExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                    GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_andShortExpressionAST * object = (const cPtr_andShortExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_andShortExpressionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1204)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1205)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_andShortExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_andShortExpressionAST.mSlotID,
                                                         extensionMethod_andShortExpressionAST_enterExpressionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_andShortExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_andShortExpressionAST_enterExpressionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@andShortExpressionAST analyzeSemanticExpression'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_andShortExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                             const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inInferenceType,
                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                             GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                             GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_andShortExpressionAST * object = (const cPtr_andShortExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_andShortExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_64886 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_64886, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1218)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_65160 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_64886.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1230)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_65160, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1227)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_65234 = var_leftExpression_64886.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1236)) ;
  {
  routine_checkDiadicOperator (var_leftType_65234, var_rightExpression_65160.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1239)), var_leftType_65234.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1240)).getter_infixAndOperator (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1240)), GALGAS_string ("&"), object->mProperty_mOperatorLocation, var_rightExpression_65160, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1237)) ;
  }
  outArgument_outExpression = GALGAS_andShortExpressionForGeneration::constructor_new (var_leftType_65234, object->mProperty_mOperatorLocation, var_leftExpression_64886, var_rightExpression_65160  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1246)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_andShortExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_andShortExpressionAST.mSlotID,
                                                  extensionMethod_andShortExpressionAST_analyzeSemanticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_andShortExpressionAST_analyzeSemanticExpression (defineExtensionMethod_andShortExpressionAST_analyzeSemanticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension method '@xorExpressionAST enterExpressionInSemanticContext'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_xorExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                               GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_xorExpressionAST * object = (const cPtr_xorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_xorExpressionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1258)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1259)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_xorExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_xorExpressionAST.mSlotID,
                                                         extensionMethod_xorExpressionAST_enterExpressionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_xorExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_xorExpressionAST_enterExpressionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@xorExpressionAST analyzeSemanticExpression'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_xorExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                        const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inInferenceType,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_xorExpressionAST * object = (const cPtr_xorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_xorExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_66676 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_66676, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1272)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_66950 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_66676.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1284)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_66950, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1281)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_67024 = var_leftExpression_66676.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1290)) ;
  {
  routine_checkDiadicOperator (var_leftType_67024, var_rightExpression_66950.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1293)), var_leftType_67024.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1294)).getter_infixXorOperator (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1294)), GALGAS_string ("^"), object->mProperty_mOperatorLocation, var_rightExpression_66950, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1291)) ;
  }
  outArgument_outExpression = GALGAS_xorExpressionForGeneration::constructor_new (var_leftType_67024, object->mProperty_mOperatorLocation, var_leftExpression_66676, var_rightExpression_66950  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1300)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_xorExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_xorExpressionAST.mSlotID,
                                                  extensionMethod_xorExpressionAST_analyzeSemanticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_xorExpressionAST_analyzeSemanticExpression (defineExtensionMethod_xorExpressionAST_analyzeSemanticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//              Overriding extension method '@closedSliceExpressionAST enterExpressionInSemanticContext'               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_closedSliceExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_closedSliceExpressionAST * object = (const cPtr_closedSliceExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_closedSliceExpressionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1313)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1314)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_closedSliceExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_closedSliceExpressionAST.mSlotID,
                                                         extensionMethod_closedSliceExpressionAST_enterExpressionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_closedSliceExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_closedSliceExpressionAST_enterExpressionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension method '@closedSliceExpressionAST analyzeSemanticExpression'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_closedSliceExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inInferenceType */,
                                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_closedSliceExpressionAST * object = (const cPtr_closedSliceExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_closedSliceExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_68516 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mUIntType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_68516, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1328)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_68806 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mUIntType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_68806, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1337)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_68880 = var_leftExpression_68516.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1346)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_leftType_68880.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1347)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_leftExpression_68516.getter_mLocation (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1348)), GALGAS_string ("the left expression or '...' operator should an @uint"), fixItArray1  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1348)) ;
    }
  }
  GALGAS_unifiedTypeMap_2D_proxy var_rightType_69085 = var_rightExpression_68806.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1350)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsNotEqual, var_rightType_69085.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1351)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (var_rightExpression_68806.getter_mLocation (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1352)), GALGAS_string ("the right expression or '...' operator should an @uint"), fixItArray3  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1352)) ;
    }
  }
  outArgument_outExpression = GALGAS_closedSliceExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("range"), var_leftExpression_68516.getter_mLocation (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1356))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1356)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1356)), object->mProperty_mOperatorLocation, var_leftExpression_68516, var_rightExpression_68806  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1355)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_closedSliceExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_closedSliceExpressionAST.mSlotID,
                                                  extensionMethod_closedSliceExpressionAST_analyzeSemanticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_closedSliceExpressionAST_analyzeSemanticExpression (defineExtensionMethod_closedSliceExpressionAST_analyzeSemanticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//              Overriding extension method '@openedSliceExpressionAST enterExpressionInSemanticContext'               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_openedSliceExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_openedSliceExpressionAST * object = (const cPtr_openedSliceExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_openedSliceExpressionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1368)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1369)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_openedSliceExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_openedSliceExpressionAST.mSlotID,
                                                         extensionMethod_openedSliceExpressionAST_enterExpressionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_openedSliceExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_openedSliceExpressionAST_enterExpressionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension method '@openedSliceExpressionAST analyzeSemanticExpression'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_openedSliceExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inInferenceType */,
                                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_openedSliceExpressionAST * object = (const cPtr_openedSliceExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_openedSliceExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_70629 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mUIntType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_70629, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1383)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_70919 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mUIntType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_70919, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1392)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_70993 = var_leftExpression_70629.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1401)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_leftType_70993.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1402)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_leftExpression_70629.getter_mLocation (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1403)), GALGAS_string ("the left expression or '...' operator should an @uint"), fixItArray1  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1403)) ;
    }
  }
  GALGAS_unifiedTypeMap_2D_proxy var_rightType_71198 = var_rightExpression_70919.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1405)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsNotEqual, var_rightType_71198.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1406)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (var_rightExpression_70919.getter_mLocation (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1407)), GALGAS_string ("the right expression or '...' operator should an @uint"), fixItArray3  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1407)) ;
    }
  }
  outArgument_outExpression = GALGAS_openedSliceExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("range"), var_leftExpression_70629.getter_mLocation (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1411))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1411)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1411)), object->mProperty_mOperatorLocation, var_leftExpression_70629, var_rightExpression_70919  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1410)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_openedSliceExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_openedSliceExpressionAST.mSlotID,
                                                  extensionMethod_openedSliceExpressionAST_analyzeSemanticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_openedSliceExpressionAST_analyzeSemanticExpression (defineExtensionMethod_openedSliceExpressionAST_analyzeSemanticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//        Overriding extension method '@multiplicationExpressionNoOverflowAST enterExpressionInSemanticContext'        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_multiplicationExpressionNoOverflowAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                                    GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_multiplicationExpressionNoOverflowAST * object = (const cPtr_multiplicationExpressionNoOverflowAST *) inObject ;
  macroValidSharedObject (object, cPtr_multiplicationExpressionNoOverflowAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1423)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1424)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_multiplicationExpressionNoOverflowAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_multiplicationExpressionNoOverflowAST.mSlotID,
                                                         extensionMethod_multiplicationExpressionNoOverflowAST_enterExpressionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_multiplicationExpressionNoOverflowAST_enterExpressionInSemanticContext (defineExtensionMethod_multiplicationExpressionNoOverflowAST_enterExpressionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//           Overriding extension method '@multiplicationExpressionNoOverflowAST analyzeSemanticExpression'            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_multiplicationExpressionNoOverflowAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                             const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                             const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inInferenceType,
                                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                             GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                             GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_multiplicationExpressionNoOverflowAST * object = (const cPtr_multiplicationExpressionNoOverflowAST *) inObject ;
  macroValidSharedObject (object, cPtr_multiplicationExpressionNoOverflowAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_72732 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_72732, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1437)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_73006 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_72732.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1449)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_73006, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1446)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_73080 = var_leftExpression_72732.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1455)) ;
  {
  routine_checkDiadicOperator (var_leftType_73080, var_rightExpression_73006.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1458)), var_leftType_73080.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1459)).getter_infixMulOperatorNoOVF (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1459)), GALGAS_string ("&*"), object->mProperty_mOperatorLocation, var_rightExpression_73006, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1456)) ;
  }
  outArgument_outExpression = GALGAS_multiplicationExpressionNoOverflowForGeneration::constructor_new (var_leftType_73080, object->mProperty_mOperatorLocation, var_leftExpression_72732, var_rightExpression_73006  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1465)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_multiplicationExpressionNoOverflowAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_multiplicationExpressionNoOverflowAST.mSlotID,
                                                  extensionMethod_multiplicationExpressionNoOverflowAST_analyzeSemanticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_multiplicationExpressionNoOverflowAST_analyzeSemanticExpression (defineExtensionMethod_multiplicationExpressionNoOverflowAST_analyzeSemanticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//             Overriding extension method '@multiplicationExpressionAST enterExpressionInSemanticContext'             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_multiplicationExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                          GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_multiplicationExpressionAST * object = (const cPtr_multiplicationExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_multiplicationExpressionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1477)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1478)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_multiplicationExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_multiplicationExpressionAST.mSlotID,
                                                         extensionMethod_multiplicationExpressionAST_enterExpressionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_multiplicationExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_multiplicationExpressionAST_enterExpressionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Overriding extension method '@multiplicationExpressionAST analyzeSemanticExpression'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_multiplicationExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                   const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                   GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                   const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inInferenceType,
                                                                                   const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                   GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                   GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_multiplicationExpressionAST * object = (const cPtr_multiplicationExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_multiplicationExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_74566 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_74566, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1491)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_74840 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_74566.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1503)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_74840, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1500)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_74914 = var_leftExpression_74566.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1509)) ;
  {
  routine_checkDiadicOperator (var_leftType_74914, var_rightExpression_74840.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1512)), var_leftType_74914.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1513)).getter_infixMulOperator (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1513)), GALGAS_string ("*"), object->mProperty_mOperatorLocation, var_rightExpression_74840, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1510)) ;
  }
  outArgument_outExpression = GALGAS_multiplicationExpressionForGeneration::constructor_new (var_leftType_74914, object->mProperty_mOperatorLocation, var_leftExpression_74566, var_rightExpression_74840  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1519)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_multiplicationExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_multiplicationExpressionAST.mSlotID,
                                                  extensionMethod_multiplicationExpressionAST_analyzeSemanticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_multiplicationExpressionAST_analyzeSemanticExpression (defineExtensionMethod_multiplicationExpressionAST_analyzeSemanticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//           Overriding extension method '@divisionExpressionNoOverflowAST enterExpressionInSemanticContext'           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_divisionExpressionNoOverflowAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_divisionExpressionNoOverflowAST * object = (const cPtr_divisionExpressionNoOverflowAST *) inObject ;
  macroValidSharedObject (object, cPtr_divisionExpressionNoOverflowAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1531)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1532)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_divisionExpressionNoOverflowAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_divisionExpressionNoOverflowAST.mSlotID,
                                                         extensionMethod_divisionExpressionNoOverflowAST_enterExpressionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_divisionExpressionNoOverflowAST_enterExpressionInSemanticContext (defineExtensionMethod_divisionExpressionNoOverflowAST_enterExpressionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//              Overriding extension method '@divisionExpressionNoOverflowAST analyzeSemanticExpression'               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_divisionExpressionNoOverflowAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                       const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                       const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inInferenceType,
                                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                       GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_divisionExpressionNoOverflowAST * object = (const cPtr_divisionExpressionNoOverflowAST *) inObject ;
  macroValidSharedObject (object, cPtr_divisionExpressionNoOverflowAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_76392 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_76392, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1545)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_76666 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_76392.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1557)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_76666, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1554)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_76740 = var_leftExpression_76392.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1563)) ;
  {
  routine_checkDiadicOperator (var_leftType_76740, var_rightExpression_76666.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1566)), var_leftType_76740.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1567)).getter_infixDivOperatorNoOVF (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1567)), GALGAS_string ("&/"), object->mProperty_mOperatorLocation, var_rightExpression_76666, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1564)) ;
  }
  outArgument_outExpression = GALGAS_divisionExpressionNoOverflowForGeneration::constructor_new (var_leftType_76740, object->mProperty_mOperatorLocation, var_leftExpression_76392, var_rightExpression_76666  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1573)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_divisionExpressionNoOverflowAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_divisionExpressionNoOverflowAST.mSlotID,
                                                  extensionMethod_divisionExpressionNoOverflowAST_analyzeSemanticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_divisionExpressionNoOverflowAST_analyzeSemanticExpression (defineExtensionMethod_divisionExpressionNoOverflowAST_analyzeSemanticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Overriding extension method '@divisionExpressionAST enterExpressionInSemanticContext'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_divisionExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                    GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_divisionExpressionAST * object = (const cPtr_divisionExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_divisionExpressionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1586)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1587)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_divisionExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_divisionExpressionAST.mSlotID,
                                                         extensionMethod_divisionExpressionAST_enterExpressionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_divisionExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_divisionExpressionAST_enterExpressionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@divisionExpressionAST analyzeSemanticExpression'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_divisionExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                             const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inInferenceType,
                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                             GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                             GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_divisionExpressionAST * object = (const cPtr_divisionExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_divisionExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_78211 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_78211, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1600)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_78485 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_78211.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1612)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_78485, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1609)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_78559 = var_leftExpression_78211.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1618)) ;
  {
  routine_checkDiadicOperator (var_leftType_78559, var_rightExpression_78485.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1621)), var_leftType_78559.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1622)).getter_infixDivOperator (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1622)), GALGAS_string ("/"), object->mProperty_mOperatorLocation, var_rightExpression_78485, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1619)) ;
  }
  outArgument_outExpression = GALGAS_divisionExpressionForGeneration::constructor_new (var_leftType_78559, object->mProperty_mOperatorLocation, var_leftExpression_78211, var_rightExpression_78485  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1628)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_divisionExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_divisionExpressionAST.mSlotID,
                                                  extensionMethod_divisionExpressionAST_analyzeSemanticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_divisionExpressionAST_analyzeSemanticExpression (defineExtensionMethod_divisionExpressionAST_analyzeSemanticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@moduloExpressionAST enterExpressionInSemanticContext'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_moduloExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                  GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_moduloExpressionAST * object = (const cPtr_moduloExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_moduloExpressionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1640)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1641)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_moduloExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_moduloExpressionAST.mSlotID,
                                                         extensionMethod_moduloExpressionAST_enterExpressionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_moduloExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_moduloExpressionAST_enterExpressionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Overriding extension method '@moduloExpressionAST analyzeSemanticExpression'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_moduloExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                           const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inInferenceType,
                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                           GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                           GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_moduloExpressionAST * object = (const cPtr_moduloExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_moduloExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_80007 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_80007, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1654)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_80281 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_80007.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1666)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_80281, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1663)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_80355 = var_leftExpression_80007.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1672)) ;
  {
  routine_checkDiadicOperator (var_leftType_80355, var_rightExpression_80281.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1675)), var_leftType_80355.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1676)).getter_infixModOperator (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1676)), GALGAS_string ("mod"), object->mProperty_mOperatorLocation, var_rightExpression_80281, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1673)) ;
  }
  outArgument_outExpression = GALGAS_moduloExpressionForGeneration::constructor_new (var_leftType_80355, object->mProperty_mOperatorLocation, var_leftExpression_80007, var_rightExpression_80281  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1682)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_moduloExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_moduloExpressionAST.mSlotID,
                                                  extensionMethod_moduloExpressionAST_analyzeSemanticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_moduloExpressionAST_analyzeSemanticExpression (defineExtensionMethod_moduloExpressionAST_analyzeSemanticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//          Overriding extension method '@unaryMinusNoOverflowExpressionAST enterExpressionInSemanticContext'          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_unaryMinusNoOverflowExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                                GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_unaryMinusNoOverflowExpressionAST * object = (const cPtr_unaryMinusNoOverflowExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_unaryMinusNoOverflowExpressionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1694)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_unaryMinusNoOverflowExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_unaryMinusNoOverflowExpressionAST.mSlotID,
                                                         extensionMethod_unaryMinusNoOverflowExpressionAST_enterExpressionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_unaryMinusNoOverflowExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_unaryMinusNoOverflowExpressionAST_enterExpressionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//             Overriding extension method '@unaryMinusNoOverflowExpressionAST analyzeSemanticExpression'              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_unaryMinusNoOverflowExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                         const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                         GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                         const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                         const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                         GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                         GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_unaryMinusNoOverflowExpressionAST * object = (const cPtr_unaryMinusNoOverflowExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_unaryMinusNoOverflowExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_81572 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1711)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_81572, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1708)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_81836 = var_expression_81572.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1717)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_type_81836.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1718)).getter_prefixMinusOperatorNoOVF (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1718)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1718)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("operand type is '@").add_operation (var_type_81836.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1720)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1720)).add_operation (GALGAS_string ("' and does not support the prefix minus operator"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1720)), fixItArray1  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1719)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    outArgument_outExpression = GALGAS_unaryMinusExpressionNoOverflowForGeneration::constructor_new (var_type_81836, object->mProperty_mOperatorLocation, var_expression_81572  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1724)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_unaryMinusNoOverflowExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_unaryMinusNoOverflowExpressionAST.mSlotID,
                                                  extensionMethod_unaryMinusNoOverflowExpressionAST_analyzeSemanticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_unaryMinusNoOverflowExpressionAST_analyzeSemanticExpression (defineExtensionMethod_unaryMinusNoOverflowExpressionAST_analyzeSemanticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension method '@notExpressionAST enterExpressionInSemanticContext'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_notExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                               GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_notExpressionAST * object = (const cPtr_notExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_notExpressionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1736)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_notExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_notExpressionAST.mSlotID,
                                                         extensionMethod_notExpressionAST_enterExpressionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_notExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_notExpressionAST_enterExpressionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@notExpressionAST analyzeSemanticExpression'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_notExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                        const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_notExpressionAST * object = (const cPtr_notExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_notExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_83041 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1753)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_83041, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1750)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_83305 = var_expression_83041.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1759)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (var_expression_83041.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_trueExpressionForGeneration).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outExpression = GALGAS_falseExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBoolType (HERE), object->mProperty_mOperatorLocation  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1761)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (var_expression_83041.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_falseExpressionForGeneration).boolEnum () ;
      if (kBoolTrue == test_1) {
        outArgument_outExpression = GALGAS_trueExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBoolType (HERE), object->mProperty_mOperatorLocation  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1763)) ;
      }
    }
    if (kBoolFalse == test_1) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = var_type_83305.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1764)).getter_prefixNotOperator (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1764)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1764)).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("operand type is '@").add_operation (var_type_83305.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1766)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1766)).add_operation (GALGAS_string ("' and does not support the 'not' operator"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1766)), fixItArray3  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1765)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_2) {
        outArgument_outExpression = GALGAS_notExpressionForGeneration::constructor_new (var_type_83305, object->mProperty_mOperatorLocation, var_expression_83041  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1770)) ;
      }
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_notExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_notExpressionAST.mSlotID,
                                                  extensionMethod_notExpressionAST_analyzeSemanticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_notExpressionAST_analyzeSemanticExpression (defineExtensionMethod_notExpressionAST_analyzeSemanticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//           Overriding extension method '@structFieldAccessExpressionAST enterExpressionInSemanticContext'            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_structFieldAccessExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                             GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                             C_Compiler * /* inCompiler */
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_structFieldAccessExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_structFieldAccessExpressionAST.mSlotID,
                                                         extensionMethod_structFieldAccessExpressionAST_enterExpressionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_structFieldAccessExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_structFieldAccessExpressionAST_enterExpressionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Overriding extension method '@structFieldAccessExpressionAST analyzeSemanticExpression'               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_structFieldAccessExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                      const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                      GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                      const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                      const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                      GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                      GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structFieldAccessExpressionAST * object = (const cPtr_structFieldAccessExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_structFieldAccessExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_85003 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1798)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_85003, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1795)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_85073 = var_expression_85003.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1804)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_type_85073.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1805)).getter_isStructType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1805)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1805)).operator_and (var_type_85073.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1805)).getter_isClassType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1805)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1805)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1805)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mStructFieldName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1806)), GALGAS_string ("the '.' operator requires the receiver to be a struct or a class"), fixItArray1  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1806)) ;
    }
  }
  GALGAS_propertyMap var_propertyMap_85314 = var_type_85073.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1808)) ;
  GALGAS_bool var_isPublic_85393 ;
  var_propertyMap_85314.method_searchKey (object->mProperty_mStructFieldName, var_isPublic_85393, var_type_85073, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1809)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_isPublic_85393.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1810)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mStructFieldName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1811)), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray3  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1811)) ;
    }
  }
  outArgument_outExpression = GALGAS_structFieldAccessExpressionForGeneration::constructor_new (var_type_85073, object->mProperty_mOperatorLocation, var_expression_85003, object->mProperty_mStructFieldName.getter_string (HERE)  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1814)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_structFieldAccessExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_structFieldAccessExpressionAST.mSlotID,
                                                  extensionMethod_structFieldAccessExpressionAST_analyzeSemanticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_structFieldAccessExpressionAST_analyzeSemanticExpression (defineExtensionMethod_structFieldAccessExpressionAST_analyzeSemanticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Overriding extension method '@complementExpressionAST enterExpressionInSemanticContext'               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_complementExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_complementExpressionAST * object = (const cPtr_complementExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_complementExpressionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1827)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_complementExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_complementExpressionAST.mSlotID,
                                                         extensionMethod_complementExpressionAST_enterExpressionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_complementExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_complementExpressionAST_enterExpressionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension method '@complementExpressionAST analyzeSemanticExpression'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_complementExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                               const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                               const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_complementExpressionAST * object = (const cPtr_complementExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_complementExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_86690 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1844)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_86690, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1841)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_86760 = var_expression_86690.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1850)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_literalBigIntExpressionForGeneration var_exp_86800 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_expression_86690.ptr ())) ;
    if (NULL == var_exp_86800.ptr ()) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::constructor_new (var_exp_86800.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1853)), var_exp_86800.getter_mLocation (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1854)), var_exp_86800.getter_mValue (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1855)).operator_tilde (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1855))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1852)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = var_type_86760.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1857)).getter_prefixTildeOperator (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1857)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1857)).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("operand type is '@").add_operation (var_type_86760.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1859)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1859)).add_operation (GALGAS_string ("' and does not support the '~' operator"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1859)), fixItArray2  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1858)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_1) {
      outArgument_outExpression = GALGAS_tildeExpressionForGeneration::constructor_new (var_type_86760, object->mProperty_mOperatorLocation, var_expression_86690  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1863)) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_complementExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_complementExpressionAST.mSlotID,
                                                  extensionMethod_complementExpressionAST_analyzeSemanticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_complementExpressionAST_analyzeSemanticExpression (defineExtensionMethod_complementExpressionAST_analyzeSemanticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//              Overriding extension method '@functionCallExpressionAST enterExpressionInSemanticContext'              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_functionCallExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_functionCallExpressionAST * object = (const cPtr_functionCallExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_functionCallExpressionAST) ;
  cEnumerator_actualOutputExpressionList enumerator_87616 (object->mProperty_mExpressionList, kENUMERATION_UP) ;
  while (enumerator_87616.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) enumerator_87616.current_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1877)) ;
    enumerator_87616.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_functionCallExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_functionCallExpressionAST.mSlotID,
                                                         extensionMethod_functionCallExpressionAST_enterExpressionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_functionCallExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_functionCallExpressionAST_enterExpressionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@functionCallExpressionAST analyzeSemanticExpression'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_functionCallExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                 const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                 const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_functionCallExpressionAST * object = (const cPtr_functionCallExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_functionCallExpressionAST) ;
  GALGAS_lstring var_usefulnessName_88163 = function_functionNameForUsefulEntitiesGraph (object->mProperty_mFunctionName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1891)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_88163 COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1892)) ;
  }
  GALGAS_functionSignature var_functionSignature_88457 ;
  GALGAS_unifiedTypeMap_2D_proxy var_resultType_88499 ;
  GALGAS_bool var_isInternal_88525 ;
  constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mFunctionMap (HERE).method_searchKey (object->mProperty_mFunctionName, var_functionSignature_88457, var_resultType_88499, var_isInternal_88525, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1894)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_isInternal_88525.boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_location var_procDeclarationLocation_88602 = constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mFunctionMap (HERE).getter_locationForKey (object->mProperty_mFunctionName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1902)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsNotEqual, object->mProperty_mFunctionName.getter_location (HERE).getter_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1903)).objectCompare (var_procDeclarationLocation_88602.getter_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1903)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (object->mProperty_mFunctionName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1904)), GALGAS_string ("this proc is internal to '").add_operation (var_procDeclarationLocation_88602.getter_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1904)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1904)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1904)), fixItArray2  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1904)) ;
        }
      }
    }
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (kIsNotEqual, var_functionSignature_88457.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1908)).objectCompare (object->mProperty_mExpressionList.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1908)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (object->mProperty_mFunctionName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1909)), GALGAS_string ("the '").add_operation (object->mProperty_mFunctionName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1910)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1910)).add_operation (GALGAS_string ("' function header declares "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1910)).add_operation (var_functionSignature_88457.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1910)).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1910)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1910)).add_operation (GALGAS_string (" formal parameter(s), but this function call names "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1910)).add_operation (object->mProperty_mExpressionList.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1911)).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1911)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1911)).add_operation (GALGAS_string (" effective argument(s)"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1911)), fixItArray4  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1909)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_3) {
    GALGAS_semanticExpressionListForGeneration var_semanticExpressionListForGeneration_89306 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1915)) ;
    cEnumerator_functionSignature enumerator_89379 (var_functionSignature_88457, kENUMERATION_UP) ;
    cEnumerator_actualOutputExpressionList enumerator_89402 (object->mProperty_mExpressionList, kENUMERATION_UP) ;
    while (enumerator_89379.hasCurrentObject () && enumerator_89402.hasCurrentObject ()) {
      GALGAS_semanticExpressionForGeneration var_expression_89653 ;
      callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_89402.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_89379.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_89653, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1917)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_89379.current_mFormalArgumentType (HERE), var_expression_89653.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1925)), enumerator_89402.current_mEndOfExpressionLocation (HERE), var_expression_89653, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1925)) ;
      }
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = GALGAS_bool (kIsNotEqual, enumerator_89379.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (enumerator_89402.current_mActualSelector (HERE).getter_string (HERE))).boolEnum () ;
        if (kBoolTrue == test_5) {
          GALGAS_string temp_6 ;
          const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, enumerator_89379.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_7) {
            temp_6 = enumerator_89379.current_mFormalSelector (HERE).getter_string (HERE).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1927)) ;
          }else if (kBoolFalse == test_7) {
            temp_6 = GALGAS_string::makeEmptyString () ;
          }
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (enumerator_89402.current_mActualSelector (HERE).getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1927)), GALGAS_string ("the selector should be '!").add_operation (temp_6, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1927)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1927)), fixItArray8  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1927)) ;
        }
      }
      var_semanticExpressionListForGeneration_89306.addAssign_operation (var_expression_89653  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1929)) ;
      enumerator_89379.gotoNextObject () ;
      enumerator_89402.gotoNextObject () ;
    }
    outArgument_outExpression = GALGAS_functionCallExpressionForGeneration::constructor_new (var_resultType_88499, object->mProperty_mFunctionName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1933)), object->mProperty_mFunctionName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1934)), var_semanticExpressionListForGeneration_89306  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1931)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_functionCallExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_functionCallExpressionAST.mSlotID,
                                                  extensionMethod_functionCallExpressionAST_analyzeSemanticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_functionCallExpressionAST_analyzeSemanticExpression (defineExtensionMethod_functionCallExpressionAST_analyzeSemanticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//             Overriding extension method '@literalTypeInExpressionAST enterExpressionInSemanticContext'              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_literalTypeInExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                         GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalTypeInExpressionAST * object = (const cPtr_literalTypeInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalTypeInExpressionAST) ;
  {
  GALGAS_unifiedTypeMap_2D_proxy joker_90575 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioTypeMap, object->mProperty_mLiteralTypeName, joker_90575 COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1944)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_literalTypeInExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_literalTypeInExpressionAST.mSlotID,
                                                         extensionMethod_literalTypeInExpressionAST_enterExpressionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_literalTypeInExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_literalTypeInExpressionAST_enterExpressionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@literalTypeInExpressionAST analyzeSemanticExpression'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_literalTypeInExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                  const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                  const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                  GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                  GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalTypeInExpressionAST * object = (const cPtr_literalTypeInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalTypeInExpressionAST) ;
  GALGAS_lstring var_usefulnessName_91060 = function_typeNameForUsefulEntitiesGraph (object->mProperty_mLiteralTypeName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1957)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_91060 COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1958)) ;
  }
  GALGAS_bool joker_91311_25 ; // Joker input parameter
  GALGAS_bool joker_91311_24 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_91311_23 ; // Joker input parameter
  GALGAS_typeKindEnum joker_91311_22 ; // Joker input parameter
  GALGAS_bool joker_91311_21 ; // Joker input parameter
  GALGAS_typedPropertyList joker_91311_20 ; // Joker input parameter
  GALGAS_propertyMap joker_91311_19 ; // Joker input parameter
  GALGAS_typedPropertyList joker_91311_18 ; // Joker input parameter
  GALGAS_constructorMap joker_91311_17 ; // Joker input parameter
  GALGAS_getterMap joker_91311_16 ; // Joker input parameter
  GALGAS_setterMap joker_91311_15 ; // Joker input parameter
  GALGAS_instanceMethodMap joker_91311_14 ; // Joker input parameter
  GALGAS_classMethodMap joker_91311_13 ; // Joker input parameter
  GALGAS_enumerationDescriptorList joker_91311_12 ; // Joker input parameter
  GALGAS_operators joker_91311_11 ; // Joker input parameter
  GALGAS_functionSignature joker_91311_10 ; // Joker input parameter
  GALGAS_constantIndexMap joker_91311_9 ; // Joker input parameter
  GALGAS_enumConstantList joker_91311_8 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_91311_7 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_91311_6 ; // Joker input parameter
  GALGAS_bool joker_91311_5 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_91311_4 ; // Joker input parameter
  GALGAS_string joker_91311_3 ; // Joker input parameter
  GALGAS_string joker_91311_2 ; // Joker input parameter
  GALGAS_headerKind joker_91311_1 ; // Joker input parameter
  constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE).method_searchKey (object->mProperty_mLiteralTypeName, joker_91311_25, joker_91311_24, joker_91311_23, joker_91311_22, joker_91311_21, joker_91311_20, joker_91311_19, joker_91311_18, joker_91311_17, joker_91311_16, joker_91311_15, joker_91311_14, joker_91311_13, joker_91311_12, joker_91311_11, joker_91311_10, joker_91311_9, joker_91311_8, joker_91311_7, joker_91311_6, joker_91311_5, joker_91311_4, joker_91311_3, joker_91311_2, joker_91311_1, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1960)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_91331 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), object->mProperty_mLiteralTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1962)) ;
  outArgument_outExpression = GALGAS_literalTypeInExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("type"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1964))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1964)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1964)), object->mProperty_mLiteralTypeName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1965)), var_type_91331  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1963)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_literalTypeInExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_literalTypeInExpressionAST.mSlotID,
                                                  extensionMethod_literalTypeInExpressionAST_analyzeSemanticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_literalTypeInExpressionAST_analyzeSemanticExpression (defineExtensionMethod_literalTypeInExpressionAST_analyzeSemanticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//    Overriding extension method '@filewrapperObjectInstanciationInExpressionAST enterExpressionInSemanticContext'    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_filewrapperObjectInstanciationInExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                                            GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                            C_Compiler * /* inCompiler */
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_filewrapperObjectInstanciationInExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_filewrapperObjectInstanciationInExpressionAST.mSlotID,
                                                         extensionMethod_filewrapperObjectInstanciationInExpressionAST_enterExpressionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_filewrapperObjectInstanciationInExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_filewrapperObjectInstanciationInExpressionAST_enterExpressionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//       Overriding extension method '@filewrapperObjectInstanciationInExpressionAST analyzeSemanticExpression'        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_filewrapperObjectInstanciationInExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                                     const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                                     const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                     GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                                     GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperObjectInstanciationInExpressionAST * object = (const cPtr_filewrapperObjectInstanciationInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperObjectInstanciationInExpressionAST) ;
  GALGAS_lstring var_usefulnessName_92408 = function_filewrapperNameForUsefulEntitiesGraph (object->mProperty_mFilewrapperName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1987)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_92408 COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1988)) ;
  }
  GALGAS_lstring var_filewrapperPath_92722 ;
  GALGAS_bool var_isInternal_92756 ;
  GALGAS_lstringlist joker_92728_4 ; // Joker input parameter
  GALGAS_wrapperFileMap joker_92728_3 ; // Joker input parameter
  GALGAS_wrapperDirectoryMap joker_92728_2 ; // Joker input parameter
  GALGAS_filewrapperTemplateMap joker_92728_1 ; // Joker input parameter
  constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mFilewrapperMap (HERE).method_searchKey (object->mProperty_mFilewrapperName, var_filewrapperPath_92722, joker_92728_4, joker_92728_3, joker_92728_2, joker_92728_1, var_isInternal_92756, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1990)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_isInternal_92756.boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_location var_filewrapperDeclarationLocation_92840 = constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mFilewrapperMap (HERE).getter_locationForKey (object->mProperty_mFilewrapperName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1998)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsNotEqual, object->mProperty_mFilewrapperName.getter_location (HERE).getter_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1999)).objectCompare (var_filewrapperDeclarationLocation_92840.getter_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1999)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (object->mProperty_mFilewrapperName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2000)), GALGAS_string ("this filewrapper is internal to '").add_operation (var_filewrapperDeclarationLocation_92840.getter_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2000)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2000)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2000)), fixItArray2  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2000)) ;
        }
      }
    }
  }
  outArgument_outExpression = GALGAS_filewrapperInExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("filewrapper"), object->mProperty_mFilewrapperName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2005))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2005)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2005)), object->mProperty_mFilewrapperName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2006)), object->mProperty_mFilewrapperName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2007)), var_filewrapperPath_92722.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2008))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2004)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_filewrapperObjectInstanciationInExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_filewrapperObjectInstanciationInExpressionAST.mSlotID,
                                                  extensionMethod_filewrapperObjectInstanciationInExpressionAST_analyzeSemanticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_filewrapperObjectInstanciationInExpressionAST_analyzeSemanticExpression (defineExtensionMethod_filewrapperObjectInstanciationInExpressionAST_analyzeSemanticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//         Overriding extension method '@filewrapperTemplateInExpressionAST enterExpressionInSemanticContext'          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_filewrapperTemplateInExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                                 GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperTemplateInExpressionAST * object = (const cPtr_filewrapperTemplateInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperTemplateInExpressionAST) ;
  cEnumerator_actualOutputExpressionList enumerator_93727 (object->mProperty_mExpressions, kENUMERATION_UP) ;
  while (enumerator_93727.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) enumerator_93727.current_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2017)) ;
    enumerator_93727.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_filewrapperTemplateInExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_filewrapperTemplateInExpressionAST.mSlotID,
                                                         extensionMethod_filewrapperTemplateInExpressionAST_enterExpressionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_filewrapperTemplateInExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_filewrapperTemplateInExpressionAST_enterExpressionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//             Overriding extension method '@filewrapperTemplateInExpressionAST analyzeSemanticExpression'             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_filewrapperTemplateInExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                          const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                          GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                          const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                          GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                          GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperTemplateInExpressionAST * object = (const cPtr_filewrapperTemplateInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperTemplateInExpressionAST) ;
  GALGAS_lstring var_usefulnessName_94283 = function_filewrapperTemplateNameForUsefulEntitiesGraph (object->mProperty_mFilewrapperName, object->mProperty_mFilewrapperTemplateName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2031)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_94283 COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2032)) ;
  }
  GALGAS_filewrapperTemplateMap var_filewrapperTemplateMap_94617 ;
  GALGAS_bool var_isInternal_94644 ;
  GALGAS_lstring joker_94558_4 ; // Joker input parameter
  GALGAS_lstringlist joker_94558_3 ; // Joker input parameter
  GALGAS_wrapperFileMap joker_94558_2 ; // Joker input parameter
  GALGAS_wrapperDirectoryMap joker_94558_1 ; // Joker input parameter
  constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mFilewrapperMap (HERE).method_searchKey (object->mProperty_mFilewrapperName, joker_94558_4, joker_94558_3, joker_94558_2, joker_94558_1, var_filewrapperTemplateMap_94617, var_isInternal_94644, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2034)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_isInternal_94644.boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_location var_filewrapperDeclarationLocation_94729 = constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mFilewrapperMap (HERE).getter_locationForKey (object->mProperty_mFilewrapperName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2042)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsNotEqual, object->mProperty_mFilewrapperName.getter_location (HERE).getter_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2043)).objectCompare (var_filewrapperDeclarationLocation_94729.getter_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2043)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (object->mProperty_mFilewrapperName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2044)), GALGAS_string ("this filewrapper is internal to '").add_operation (var_filewrapperDeclarationLocation_94729.getter_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2044)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2044)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2044)), fixItArray2  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2044)) ;
        }
      }
    }
  }
  GALGAS_functionSignature var_templateSignature_95151 ;
  GALGAS_lstring joker_95153 ; // Joker input parameter
  var_filewrapperTemplateMap_94617.method_searchKey (object->mProperty_mFilewrapperTemplateName, var_templateSignature_95151, joker_95153, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2048)) ;
  GALGAS_semanticExpressionListForGeneration var_effectiveParameterList_95241 ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (kIsNotEqual, object->mProperty_mExpressions.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2051)).objectCompare (var_templateSignature_95151.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2051)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (object->mProperty_mFilewrapperTemplateName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2052)), GALGAS_string ("calling the '").add_operation (object->mProperty_mFilewrapperTemplateName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2053)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2053)).add_operation (GALGAS_string ("' template of '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2053)).add_operation (object->mProperty_mFilewrapperName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2053)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2053)).add_operation (GALGAS_string ("' filewrapper requires "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2053)).add_operation (var_templateSignature_95151.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2054)).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2054)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2053)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2054)).add_operation (object->mProperty_mExpressions.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2055)).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2055)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2054)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2055)), fixItArray4  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2052)) ;
      var_effectiveParameterList_95241.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_3) {
    var_effectiveParameterList_95241 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2058)) ;
    cEnumerator_actualOutputExpressionList enumerator_95731 (object->mProperty_mExpressions, kENUMERATION_UP) ;
    cEnumerator_functionSignature enumerator_95756 (var_templateSignature_95151, kENUMERATION_UP) ;
    while (enumerator_95731.hasCurrentObject () && enumerator_95756.hasCurrentObject ()) {
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = GALGAS_bool (kIsNotEqual, enumerator_95756.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (enumerator_95731.current_mActualSelector (HERE).getter_string (HERE))).boolEnum () ;
        if (kBoolTrue == test_5) {
          GALGAS_string temp_6 ;
          const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, enumerator_95756.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_7) {
            temp_6 = GALGAS_string (":") ;
          }else if (kBoolFalse == test_7) {
            temp_6 = GALGAS_string::makeEmptyString () ;
          }
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (enumerator_95731.current_mActualSelector (HERE).getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2061)), GALGAS_string ("the selector should be '!").add_operation (enumerator_95756.current_mFormalSelector (HERE).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2061)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2061)).add_operation (temp_6, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2061)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2061)), fixItArray8  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2061)) ;
        }
      }
      GALGAS_semanticExpressionForGeneration var_exp_96213 ;
      callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_95731.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_95756.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_exp_96213, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2063)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_95756.current_mFormalArgumentType (HERE), var_exp_96213.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2071)), enumerator_95731.current_mEndOfExpressionLocation (HERE), var_exp_96213, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2071)) ;
      }
      var_effectiveParameterList_95241.addAssign_operation (var_exp_96213  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2072)) ;
      enumerator_95731.gotoNextObject () ;
      enumerator_95756.gotoNextObject () ;
    }
  }
  outArgument_outExpression = GALGAS_filewrapperTemplateInExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringType (HERE), object->mProperty_mFilewrapperName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2078)), object->mProperty_mFilewrapperName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2079)), object->mProperty_mFilewrapperTemplateName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2080)), var_effectiveParameterList_95241  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2076)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_filewrapperTemplateInExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_filewrapperTemplateInExpressionAST.mSlotID,
                                                  extensionMethod_filewrapperTemplateInExpressionAST_analyzeSemanticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_filewrapperTemplateInExpressionAST_analyzeSemanticExpression (defineExtensionMethod_filewrapperTemplateInExpressionAST_analyzeSemanticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//             Overriding extension method '@filewrapperInExpressionAST enterExpressionInSemanticContext'              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_filewrapperInExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                         GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_filewrapperInExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_filewrapperInExpressionAST.mSlotID,
                                                         extensionMethod_filewrapperInExpressionAST_enterExpressionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_filewrapperInExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_filewrapperInExpressionAST_enterExpressionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@filewrapperInExpressionAST analyzeSemanticExpression'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_filewrapperInExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                  const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                  const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                  GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                  GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperInExpressionAST * object = (const cPtr_filewrapperInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperInExpressionAST) ;
  GALGAS_lstring var_usefulnessName_97377 = function_filewrapperNameForUsefulEntitiesGraph (object->mProperty_mFilewrapperName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2101)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_97377 COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2102)) ;
  }
  GALGAS_stringlist var_directoryList_97575 ;
  GALGAS_string var_fileName_97594 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, object->mProperty_mFilewrapperPath.getter_string (HERE).getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2106)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mFilewrapperPath.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2107)), GALGAS_string ("path is empty"), fixItArray1  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2107)) ;
      var_directoryList_97575.drop () ; // Release error dropped variable
      var_fileName_97594.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsEqual, object->mProperty_mFilewrapperPath.getter_string (HERE).getter_firstCharacterOrNul (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2108)).objectCompare (GALGAS_char (TO_UNICODE (47)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (object->mProperty_mFilewrapperPath.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2109)), GALGAS_string ("the path should not begin with '/'"), fixItArray3  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2109)) ;
        var_directoryList_97575.drop () ; // Release error dropped variable
        var_fileName_97594.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_2) {
      var_directoryList_97575 = object->mProperty_mFilewrapperPath.getter_string (HERE).getter_componentsSeparatedByString (GALGAS_string ("/") COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2111)) ;
      {
      var_directoryList_97575.setter_popLast (var_fileName_97594, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2112)) ;
      }
    }
  }
  GALGAS_wrapperFileMap var_filewrapperFileMap_98156 ;
  GALGAS_wrapperDirectoryMap var_filewrapperDirectoryMap_98210 ;
  GALGAS_bool var_isInternal_98243 ;
  GALGAS_lstring joker_98104 ; // Joker input parameter
  GALGAS_lstringlist joker_98111 ; // Joker input parameter
  GALGAS_filewrapperTemplateMap joker_98216 ; // Joker input parameter
  constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mFilewrapperMap (HERE).method_searchKey (object->mProperty_mFilewrapperName, joker_98104, joker_98111, var_filewrapperFileMap_98156, var_filewrapperDirectoryMap_98210, joker_98216, var_isInternal_98243, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2115)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = var_isInternal_98243.boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_location var_filewrapperDeclarationLocation_98327 = constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mFilewrapperMap (HERE).getter_locationForKey (object->mProperty_mFilewrapperName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2126)) ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = GALGAS_bool (kIsNotEqual, object->mProperty_mFilewrapperName.getter_location (HERE).getter_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2127)).objectCompare (var_filewrapperDeclarationLocation_98327.getter_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2127)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (object->mProperty_mFilewrapperName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2128)), GALGAS_string ("this filewrapper is internal to '").add_operation (var_filewrapperDeclarationLocation_98327.getter_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2128)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2128)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2128)), fixItArray6  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2128)) ;
        }
      }
    }
  }
  GALGAS_string var_builtPath_98681 = GALGAS_string::makeEmptyString () ;
  if (var_filewrapperDirectoryMap_98210.getter_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2133)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2133)).isValid ()) {
    uint32_t variant_98693 = var_filewrapperDirectoryMap_98210.getter_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2133)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2133)).uintValue () ;
    bool loop_98693 = true ;
    while (loop_98693) {
      loop_98693 = GALGAS_bool (kIsStrictSup, var_directoryList_97575.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2134)).objectCompare (GALGAS_uint ((uint32_t) 0U))).isValid () ;
      if (loop_98693) {
        loop_98693 = GALGAS_bool (kIsStrictSup, var_directoryList_97575.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2134)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolValue () ;
      }
      if (loop_98693 && (0 == variant_98693)) {
        loop_98693 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2133)) ;
      }
      if (loop_98693) {
        variant_98693 -- ;
        GALGAS_string var_directoryName_98795 ;
        {
        var_directoryList_97575.setter_popFirst (var_directoryName_98795, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2136)) ;
        }
        var_builtPath_98681.plusAssign_operation(var_directoryName_98795.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2137)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2137)) ;
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          test_7 = var_filewrapperDirectoryMap_98210.getter_hasKey (var_directoryName_98795 COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2138)).boolEnum () ;
          if (kBoolTrue == test_7) {
            GALGAS_uint joker_99105 ; // Joker input parameter
            var_filewrapperDirectoryMap_98210.method_searchKey (GALGAS_lstring::constructor_new (var_directoryName_98795, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2140))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2140)), var_filewrapperFileMap_98156, var_filewrapperDirectoryMap_98210, joker_99105, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2139)) ;
          }
        }
        if (kBoolFalse == test_7) {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (object->mProperty_mFilewrapperPath.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2146)), GALGAS_string ("the '").add_operation (var_builtPath_98681, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2146)).add_operation (GALGAS_string ("' path does not exists for the '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2146)).add_operation (object->mProperty_mFilewrapperName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2146)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2146)).add_operation (GALGAS_string ("' filewrapper"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2146)), fixItArray8  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2146)) ;
          var_filewrapperFileMap_98156.drop () ; // Release error dropped variable
          var_directoryList_97575 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2147)) ;
        }
      }
    }
  }
  GALGAS_uint var_fileIndex_99365 ;
  GALGAS_bool var_isTextFile_99384 ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = var_filewrapperFileMap_98156.getter_hasKey (var_fileName_97594 COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2152)).boolEnum () ;
    if (kBoolTrue == test_9) {
      GALGAS_string joker_99510 ; // Joker input parameter
      GALGAS_uint joker_99525 ; // Joker input parameter
      var_filewrapperFileMap_98156.method_searchKey (GALGAS_lstring::constructor_new (var_fileName_97594, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2153))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2153)), joker_99510, var_isTextFile_99384, joker_99525, var_fileIndex_99365, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2153)) ;
    }
  }
  if (kBoolFalse == test_9) {
    TC_Array <C_FixItDescription> fixItArray10 ;
    inCompiler->emitSemanticError (object->mProperty_mFilewrapperPath.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2155)), GALGAS_string ("the '").add_operation (var_fileName_97594, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2156)).add_operation (GALGAS_string ("' file does not exist in the '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2156)).add_operation (var_builtPath_98681, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2156)).add_operation (GALGAS_string ("' directory of '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2156)).add_operation (object->mProperty_mFilewrapperName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2156)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2156)).add_operation (GALGAS_string ("' filewrapper"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2156)), fixItArray10  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2155)) ;
    var_fileIndex_99365.drop () ; // Release error dropped variable
    var_isTextFile_99384.drop () ; // Release error dropped variable
  }
  GALGAS_unifiedTypeMap_2D_proxy temp_11 ;
  const enumGalgasBool test_12 = var_isTextFile_99384.boolEnum () ;
  if (kBoolTrue == test_12) {
    temp_11 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringType (HERE) ;
  }else if (kBoolFalse == test_12) {
    temp_11 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("data"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2163))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2163)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2163)) ;
  }
  outArgument_outExpression = GALGAS_filewrapperStaticPathInExpressionForGeneration::constructor_new (temp_11, object->mProperty_mFilewrapperName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2165)), object->mProperty_mFilewrapperName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2166)), var_fileIndex_99365, var_isTextFile_99384  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2160)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_filewrapperInExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_filewrapperInExpressionAST.mSlotID,
                                                  extensionMethod_filewrapperInExpressionAST_analyzeSemanticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_filewrapperInExpressionAST_analyzeSemanticExpression (defineExtensionMethod_filewrapperInExpressionAST_analyzeSemanticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//          Overriding extension method '@lexiqueIntrospectionExpressionAST enterExpressionInSemanticContext'          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_lexiqueIntrospectionExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                                GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_lexiqueIntrospectionExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_lexiqueIntrospectionExpressionAST.mSlotID,
                                                         extensionMethod_lexiqueIntrospectionExpressionAST_enterExpressionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_lexiqueIntrospectionExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_lexiqueIntrospectionExpressionAST_enterExpressionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//             Overriding extension method '@lexiqueIntrospectionExpressionAST analyzeSemanticExpression'              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_lexiqueIntrospectionExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                         const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                         GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                         const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                         const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                         GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                         GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexiqueIntrospectionExpressionAST * object = (const cPtr_lexiqueIntrospectionExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexiqueIntrospectionExpressionAST) ;
  GALGAS_lstring var_usefulnessName_100863 = function_lexiqueNameForUsefulEntitiesGraph (object->mProperty_mLexiqueComponentName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2188)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_100863 COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2189)) ;
  }
  GALGAS_terminalMap joker_101159_3 ; // Joker input parameter
  GALGAS_indexingListAST joker_101159_2 ; // Joker input parameter
  GALGAS_lstring joker_101159_1 ; // Joker input parameter
  constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mLexiqueComponentMapForSemanticAnalysis (HERE).method_searchKey (object->mProperty_mLexiqueComponentName, joker_101159_3, joker_101159_2, joker_101159_1, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2191)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mLexiqueGetterName.getter_string (HERE).objectCompare (GALGAS_string ("symbols"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mLexiqueGetterName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2197)), GALGAS_string ("unknown getter"), fixItArray1  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2197)) ;
    }
  }
  outArgument_outExpression = GALGAS_lexiqueIntrospectionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), GALGAS_string ("stringlist").getter_nowhere (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2201)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2201)), object->mProperty_mLexiqueComponentName.getter_location (HERE), object->mProperty_mLexiqueComponentName.getter_string (HERE), object->mProperty_mLexiqueGetterName.getter_string (HERE)  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2200)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_lexiqueIntrospectionExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_lexiqueIntrospectionExpressionAST.mSlotID,
                                                  extensionMethod_lexiqueIntrospectionExpressionAST_analyzeSemanticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_lexiqueIntrospectionExpressionAST_analyzeSemanticExpression (defineExtensionMethod_lexiqueIntrospectionExpressionAST_analyzeSemanticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@expressionCollectionValue enterInSemanticContext'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_expressionCollectionValue_enterInSemanticContext (const cPtr_abstractCollectionValueElement * inObject,
                                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_expressionCollectionValue * object = (const cPtr_expressionCollectionValue *) inObject ;
  macroValidSharedObject (object, cPtr_expressionCollectionValue) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2216)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_expressionCollectionValue_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_expressionCollectionValue.mSlotID,
                                               extensionMethod_expressionCollectionValue_enterInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_expressionCollectionValue_enterInSemanticContext (defineExtensionMethod_expressionCollectionValue_enterInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@expressionListCollectionValue enterInSemanticContext'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_expressionListCollectionValue_enterInSemanticContext (const cPtr_abstractCollectionValueElement * inObject,
                                                                                  GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_expressionListCollectionValue * object = (const cPtr_expressionListCollectionValue *) inObject ;
  macroValidSharedObject (object, cPtr_expressionListCollectionValue) ;
  extensionMethod_enterInSemanticContext (object->mProperty_mExpressionList, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2222)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_expressionListCollectionValue_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_expressionListCollectionValue.mSlotID,
                                               extensionMethod_expressionListCollectionValue_enterInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_expressionListCollectionValue_enterInSemanticContext (defineExtensionMethod_expressionListCollectionValue_enterInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Overriding extension method '@expressionCollectionValue analyze'                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_expressionCollectionValue_analyze (const cPtr_abstractCollectionValueElement * inObject,
                                                               const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                               const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inElementType,
                                                               GALGAS_variableMap & ioArgument_ioVariableMap,
                                                               GALGAS_collectionValueElementListForGeneration & ioArgument_ioCollectionValueElementListForGeneration,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_expressionCollectionValue * object = (const cPtr_expressionCollectionValue *) inObject ;
  macroValidSharedObject (object, cPtr_expressionCollectionValue) ;
  GALGAS_semanticExpressionForGeneration var_expression_103650 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inElementType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_103650, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2245)) ;
  {
  routine_checkAssignmentTypeWithImplicitGetterCall (constinArgument_inElementType, var_expression_103650.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2254)), object->mProperty_mExpressionLocation, var_expression_103650, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2254)) ;
  }
  ioArgument_ioCollectionValueElementListForGeneration.addAssign_operation (GALGAS_expressionCollectionValueForGeneration::constructor_new (object->mProperty_mExpressionLocation, var_expression_103650  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2256))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2256)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_expressionCollectionValue_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_expressionCollectionValue.mSlotID,
                                extensionMethod_expressionCollectionValue_analyze) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_expressionCollectionValue_analyze (defineExtensionMethod_expressionCollectionValue_analyze, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Overriding extension method '@expressionListCollectionValue analyze'                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_expressionListCollectionValue_analyze (const cPtr_abstractCollectionValueElement * inObject,
                                                                   const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                   GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                   const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                   const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inElementType,
                                                                   GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                   GALGAS_collectionValueElementListForGeneration & ioArgument_ioCollectionValueElementListForGeneration,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_expressionListCollectionValue * object = (const cPtr_expressionListCollectionValue *) inObject ;
  macroValidSharedObject (object, cPtr_expressionListCollectionValue) ;
  GALGAS_functionSignature var_formalParameterTypeList_104474 = constinArgument_inElementType.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2268)) ;
  GALGAS_semanticExpressionListForGeneration var_semanticExpressionListForGeneration_104595 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_formalParameterTypeList_104474.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2270)).objectCompare (object->mProperty_mExpressionList.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2270)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOfExpressionLocation, GALGAS_string ("element of of '@").add_operation (constinArgument_inElementType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2271)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2271)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2271)).add_operation (var_formalParameterTypeList_104474.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2272)).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2271)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2271)).add_operation (GALGAS_string (" parameter(s), while this list has "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2272)).add_operation (object->mProperty_mExpressionList.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2273)).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2272)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2272)).add_operation (GALGAS_string (" element(s)"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2273)), fixItArray1  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2271)) ;
      var_semanticExpressionListForGeneration_104595.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    var_semanticExpressionListForGeneration_104595 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2275)) ;
    cEnumerator_actualOutputExpressionList enumerator_105050 (object->mProperty_mExpressionList, kENUMERATION_UP) ;
    cEnumerator_functionSignature enumerator_105081 (var_formalParameterTypeList_104474, kENUMERATION_UP) ;
    while (enumerator_105050.hasCurrentObject () && enumerator_105081.hasCurrentObject ()) {
      GALGAS_semanticExpressionForGeneration var_exp_105336 ;
      callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_105050.current (HERE).getter_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_105081.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_exp_105336, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2277)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GALGAS_bool (kIsNotEqual, enumerator_105081.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (enumerator_105050.current (HERE).getter_mActualSelector (HERE).getter_string (HERE))).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_string temp_3 ;
          const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, enumerator_105081.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_4) {
            temp_3 = GALGAS_string (":") ;
          }else if (kBoolFalse == test_4) {
            temp_3 = GALGAS_string::makeEmptyString () ;
          }
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (enumerator_105050.current (HERE).getter_mActualSelector (HERE).getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2286)), GALGAS_string ("the selector should be '!").add_operation (enumerator_105081.current_mFormalSelector (HERE).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2287)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2287)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2287)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2287)), fixItArray5  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2286)) ;
        }
      }
      {
      routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_105081.current_mFormalArgumentType (HERE), var_exp_105336.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2289)), object->mProperty_mEndOfExpressionLocation, var_exp_105336, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2289)) ;
      }
      var_semanticExpressionListForGeneration_104595.addAssign_operation (var_exp_105336  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2290)) ;
      enumerator_105050.gotoNextObject () ;
      enumerator_105081.gotoNextObject () ;
    }
    ioArgument_ioCollectionValueElementListForGeneration.addAssign_operation (GALGAS_expressionListCollectionForGeneration::constructor_new (object->mProperty_mEndOfExpressionLocation, var_semanticExpressionListForGeneration_104595  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2292))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2292)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_expressionListCollectionValue_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_expressionListCollectionValue.mSlotID,
                                extensionMethod_expressionListCollectionValue_analyze) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_expressionListCollectionValue_analyze (defineExtensionMethod_expressionListCollectionValue_analyze, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@collectionValueAST enterExpressionInSemanticContext'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_collectionValueAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                 GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_collectionValueAST * object = (const cPtr_collectionValueAST *) inObject ;
  macroValidSharedObject (object, cPtr_collectionValueAST) ;
  cEnumerator_collectionValueElementList enumerator_107442 (object->mProperty_mElementList, kENUMERATION_UP) ;
  while (enumerator_107442.hasCurrentObject ()) {
    callExtensionMethod_enterInSemanticContext ((const cPtr_abstractCollectionValueElement *) enumerator_107442.current_mElement (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2332)) ;
    enumerator_107442.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_collectionValueAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_collectionValueAST.mSlotID,
                                                         extensionMethod_collectionValueAST_enterExpressionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_collectionValueAST_enterExpressionInSemanticContext (defineExtensionMethod_collectionValueAST_enterExpressionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@collectionValueAST analyzeSemanticExpression'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_collectionValueAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                          const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                          GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                          const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inType,
                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                          GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                          GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_collectionValueAST * object = (const cPtr_collectionValueAST *) inObject ;
  macroValidSharedObject (object, cPtr_collectionValueAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType_107986 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, object->mProperty_mTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_targetType_107986 = constinArgument_inType ;
    }
  }
  if (kBoolFalse == test_0) {
    var_targetType_107986 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2351)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsEqual, var_targetType_107986.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2354)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2355)), GALGAS_string ("Cannot infer type"), fixItArray2  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2355)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = var_targetType_107986.getter_mSupportCollectionValue (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2356)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2356)).boolEnum () ;
      if (kBoolTrue == test_3) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2357)), GALGAS_string ("the @").add_operation (var_targetType_107986.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2357)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2357)).add_operation (GALGAS_string (" type does not support collection value"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2357)), fixItArray4  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2357)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_3) {
      GALGAS_lstring var_usefulnessName_108428 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (var_targetType_107986.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2359)), object->mProperty_mEndOfCollectionValue  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2359)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2359)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_108428 COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2360)) ;
      }
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = GALGAS_bool (kIsEqual, object->mProperty_mElementList.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2361)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_5) {
          outArgument_outExpression = GALGAS_defaultConstructorExpressionForGeneration::constructor_new (var_targetType_107986, object->mProperty_mTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2362)) ;
        }
      }
      if (kBoolFalse == test_5) {
        GALGAS_collectionValueElementListForGeneration var_collectionValueElementListForGeneration_108858 = GALGAS_collectionValueElementListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2367)) ;
        cEnumerator_collectionValueElementList enumerator_108892 (object->mProperty_mElementList, kENUMERATION_UP) ;
        while (enumerator_108892.hasCurrentObject ()) {
          callExtensionMethod_analyze ((const cPtr_abstractCollectionValueElement *) enumerator_108892.current_mElement (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_targetType_107986, ioArgument_ioVariableMap, var_collectionValueElementListForGeneration_108858, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2369)) ;
          enumerator_108892.gotoNextObject () ;
        }
        outArgument_outExpression = GALGAS_expressionCollectionForGeneration::constructor_new (var_targetType_107986, object->mProperty_mEndOfCollectionValue, var_collectionValueElementListForGeneration_108858  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2378)) ;
      }
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_collectionValueAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_collectionValueAST.mSlotID,
                                                  extensionMethod_collectionValueAST_analyzeSemanticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_collectionValueAST_analyzeSemanticExpression (defineExtensionMethod_collectionValueAST_analyzeSemanticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension getter '@trueExpressionForGeneration isTrueExpression'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_bool extensionGetter_trueExpressionForGeneration_isTrueExpression (const cPtr_semanticExpressionForGeneration * /* inObject */,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (true) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_trueExpressionForGeneration_isTrueExpression (void) {
  enterExtensionGetter_isTrueExpression (kTypeDescriptor_GALGAS_trueExpressionForGeneration.mSlotID,
                                         extensionGetter_trueExpressionForGeneration_isTrueExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_trueExpressionForGeneration_isTrueExpression (defineExtensionGetter_trueExpressionForGeneration_isTrueExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@selfCopyInExpressionForGeneration generateExpression'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const GALGAS_").add_operation (object->mProperty_mResultType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 45)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 45)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 45)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 45)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 45)).add_operation (object->mProperty_mSelfCppName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 45)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 45)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 45)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (object->mProperty_mSelfCppName COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 46)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_selfCopyInExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_selfCopyInExpressionForGeneration.mSlotID,
                                           extensionMethod_selfCopyInExpressionForGeneration_generateExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_selfCopyInExpressionForGeneration_generateExpression (defineExtensionMethod_selfCopyInExpressionForGeneration_generateExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//             Overriding extension method '@defaultConstructorExpressionForGeneration generateExpression'             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  extensionMethod_addHeaderFileName (object->mProperty_mResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 58)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_").add_operation (object->mProperty_mResultType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 60)).add_operation (GALGAS_string ("::constructor_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 60)).add_operation (object->mProperty_mResultType.getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 62)).getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 62)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 61)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 62)).add_operation (extensionGetter_sourceFile (object->mProperty_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 63)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 63)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 63)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_defaultConstructorExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_defaultConstructorExpressionForGeneration.mSlotID,
                                           extensionMethod_defaultConstructorExpressionForGeneration_generateExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_defaultConstructorExpressionForGeneration_generateExpression (defineExtensionMethod_defaultConstructorExpressionForGeneration_generateExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Overriding extension method '@constructorExpressionForGeneration generateExpression'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  extensionMethod_addHeaderFileName (object->mProperty_mResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 75)) ;
  GALGAS_stringlist var_parameterList_4940 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticExpressionGeneration.galgas", 76)) ;
  cEnumerator_semanticExpressionListForGeneration enumerator_4981 (object->mProperty_mEffectiveParameterList, kENUMERATION_UP) ;
  while (enumerator_4981.hasCurrentObject ()) {
    GALGAS_string var_parameter_5165 ;
    callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_4981.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_5165, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 78)) ;
    var_parameterList_4940.addAssign_operation (var_parameter_5165  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 85)) ;
    enumerator_4981.gotoNextObject () ;
  }
  outArgument_outCppExpression = GALGAS_string ("GALGAS_").add_operation (object->mProperty_mConstructorType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 87)).add_operation (GALGAS_string ("::constructor_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 87)).add_operation (object->mProperty_mConstructorName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 88)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 88)) ;
  cEnumerator_stringlist enumerator_5425 (var_parameterList_4940, kENUMERATION_UP) ;
  while (enumerator_5425.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssign_operation(enumerator_5425.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 91)) ;
    if (enumerator_5425.hasNextObject ()) {
      outArgument_outCppExpression.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 92)) ;
    }
    enumerator_5425.gotoNextObject () ;
  }
  GALGAS_bool var_needsComma_5521 = GALGAS_bool (kIsStrictSup, var_parameterList_4940.getter_length (SOURCE_FILE ("semanticExpressionGeneration.galgas", 94)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = object->mProperty_mHasCompilerArgument.boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_needsComma_5521.boolEnum () ;
        if (kBoolTrue == test_1) {
          outArgument_outCppExpression.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 97)) ;
        }
      }
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 99)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 99)) ;
      }
      outArgument_outCppExpression.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 100)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 100)) ;
      var_needsComma_5521 = GALGAS_bool (true) ;
    }
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_needsComma_5521.boolEnum () ;
    if (kBoolTrue == test_2) {
      outArgument_outCppExpression.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (object->mProperty_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 104)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 104)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 104)) ;
    }
  }
  if (kBoolFalse == test_2) {
    outArgument_outCppExpression.plusAssign_operation(extensionGetter_sourceFile (object->mProperty_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 106)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 106)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 106)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_constructorExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_constructorExpressionForGeneration.mSlotID,
                                           extensionMethod_constructorExpressionForGeneration_generateExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_constructorExpressionForGeneration_generateExpression (defineExtensionMethod_constructorExpressionForGeneration_generateExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Overriding extension method '@optionValueExpressionForGeneration generateExpression'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
    test_0 = object->mProperty_mOptionComponentIsPredefined.operator_not (SOURCE_FILE ("semanticExpressionGeneration.galgas", 122)).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("option-").add_operation (object->mProperty_mOptionComponentName.getter_fileNameRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 123)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 123))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 123)) ;
    }
  }
  outArgument_outCppExpression = GALGAS_string ("GALGAS_").add_operation (object->mProperty_mResultType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 125)).add_operation (GALGAS_string (" (gOption_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 125)).add_operation (object->mProperty_mOptionComponentName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 125)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 125)).add_operation (object->mProperty_mOptionEntryName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 126)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 126)).add_operation (GALGAS_string (".getter_value ())"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 126)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_optionValueExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_optionValueExpressionForGeneration.mSlotID,
                                           extensionMethod_optionValueExpressionForGeneration_generateExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_optionValueExpressionForGeneration_generateExpression (defineExtensionMethod_optionValueExpressionForGeneration_generateExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@optionCharExpressionForGeneration generateExpression'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
    test_0 = object->mProperty_mOptionComponentIsPredefined.operator_not (SOURCE_FILE ("semanticExpressionGeneration.galgas", 137)).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("option-").add_operation (object->mProperty_mOptionComponentName.getter_fileNameRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 138))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 138)) ;
    }
  }
  outArgument_outCppExpression = GALGAS_string ("GALGAS_char (gOption_").add_operation (object->mProperty_mOptionComponentName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 140)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 140)).add_operation (object->mProperty_mOptionEntryName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 141)).add_operation (GALGAS_string (".getter_char ())"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 141)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_optionCharExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_optionCharExpressionForGeneration.mSlotID,
                                           extensionMethod_optionCharExpressionForGeneration_generateExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_optionCharExpressionForGeneration_generateExpression (defineExtensionMethod_optionCharExpressionForGeneration_generateExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Overriding extension method '@optionStringExpressionForGeneration generateExpression'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
    test_0 = object->mProperty_mOptionComponentIsPredefined.operator_not (SOURCE_FILE ("semanticExpressionGeneration.galgas", 152)).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("option-").add_operation (object->mProperty_mOptionComponentName.getter_fileNameRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 153))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 153)) ;
    }
  }
  outArgument_outCppExpression = GALGAS_string ("GALGAS_string (gOption_").add_operation (object->mProperty_mOptionComponentName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 155)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 155)).add_operation (object->mProperty_mOptionEntryName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 156)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 156)).add_operation (GALGAS_string (".getter_string ())"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 156)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_optionStringExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_optionStringExpressionForGeneration.mSlotID,
                                           extensionMethod_optionStringExpressionForGeneration_generateExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_optionStringExpressionForGeneration_generateExpression (defineExtensionMethod_optionStringExpressionForGeneration_generateExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Overriding extension method '@optionCommentExpressionForGeneration generateExpression'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
    test_0 = object->mProperty_mOptionComponentIsPredefined.operator_not (SOURCE_FILE ("semanticExpressionGeneration.galgas", 167)).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("option-").add_operation (object->mProperty_mOptionComponentName.getter_fileNameRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 168))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 168)) ;
    }
  }
  outArgument_outCppExpression = GALGAS_string ("gOption_").add_operation (object->mProperty_mOptionComponentName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 170)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 170)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 170)).add_operation (object->mProperty_mOptionEntryName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 171)).add_operation (GALGAS_string (".getter_comment ()"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 171)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_optionCommentExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_optionCommentExpressionForGeneration.mSlotID,
                                           extensionMethod_optionCommentExpressionForGeneration_generateExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_optionCommentExpressionForGeneration_generateExpression (defineExtensionMethod_optionCommentExpressionForGeneration_generateExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@orExpressionForGeneration generateExpression'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  extensionMethod_addHeaderFileName (object->mProperty_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 182)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 182)) ;
  GALGAS_string var_leftTemporaryOperand_9364 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_9364, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 185)) ;
  GALGAS_string var_rightTemporaryOperand_9567 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_9567, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 188)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand_9364.add_operation (GALGAS_string (".operator_or ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 190)).add_operation (var_rightTemporaryOperand_9567, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 190)).add_operation (extensionGetter_commaSourceFile (object->mProperty_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 191)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 191)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 191)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_orExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_orExpressionForGeneration.mSlotID,
                                           extensionMethod_orExpressionForGeneration_generateExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_orExpressionForGeneration_generateExpression (defineExtensionMethod_orExpressionForGeneration_generateExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension method '@orShortExpressionForGeneration generateExpression'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  extensionMethod_addHeaderFileName (object->mProperty_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 202)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 202)) ;
  GALGAS_string var_leftTemporaryOperand_10514 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_10514, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 204)) ;
  GALGAS_string var_testVar_10557 = GALGAS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 212)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 212)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_bool ").add_operation (var_testVar_10557, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 213)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 213)).add_operation (var_leftTemporaryOperand_10514, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 213)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 213)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 213)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolTrue != ").add_operation (var_testVar_10557, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 214)).add_operation (GALGAS_string (".boolEnum ()) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 214)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 214)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 216)) ;
  }
  GALGAS_string var_rightTemporaryOperand_11034 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_11034, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 217)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_testVar_10557.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 224)).add_operation (var_rightTemporaryOperand_11034, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 224)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 224)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 224)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 225)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 226)) ;
  outArgument_outCppExpression = var_testVar_10557 ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_orShortExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_orShortExpressionForGeneration.mSlotID,
                                           extensionMethod_orShortExpressionForGeneration_generateExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_orShortExpressionForGeneration_generateExpression (defineExtensionMethod_orShortExpressionForGeneration_generateExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Overriding extension method '@xorExpressionForGeneration generateExpression'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  extensionMethod_addHeaderFileName (object->mProperty_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 239)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 239)) ;
  GALGAS_string var_leftTemporaryOperand_11819 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_11819, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 241)) ;
  GALGAS_string var_rightTemporaryOperand_12019 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_12019, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 249)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand_11819.add_operation (GALGAS_string (".operator_xor ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 257)).add_operation (var_rightTemporaryOperand_12019, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 257)).add_operation (extensionGetter_commaSourceFile (object->mProperty_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 258)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 258)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 258)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_xorExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_xorExpressionForGeneration.mSlotID,
                                           extensionMethod_xorExpressionForGeneration_generateExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_xorExpressionForGeneration_generateExpression (defineExtensionMethod_xorExpressionForGeneration_generateExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Overriding extension method '@closedSliceExpressionForGeneration generateExpression'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  extensionMethod_addHeaderFileName (object->mProperty_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 269)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 269)) ;
  GALGAS_string var_leftTemporaryOperand_12812 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_12812, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 271)) ;
  GALGAS_string var_rightTemporaryOperand_13012 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_13012, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 279)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_range (").add_operation (var_leftTemporaryOperand_12812, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 288)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 288)).add_operation (var_rightTemporaryOperand_13012, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 288)).add_operation (GALGAS_string (".substract_operation ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 289)).add_operation (var_leftTemporaryOperand_12812, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 289)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 289)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 289)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 289)).add_operation (extensionGetter_commaSourceFile (object->mProperty_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 289)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 289)).add_operation (GALGAS_string (").add_operation (GALGAS_uint (1), "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 289)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 289)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 289)).add_operation (extensionGetter_commaSourceFile (object->mProperty_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 289)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 289)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 289)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_closedSliceExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_closedSliceExpressionForGeneration.mSlotID,
                                           extensionMethod_closedSliceExpressionForGeneration_generateExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_closedSliceExpressionForGeneration_generateExpression (defineExtensionMethod_closedSliceExpressionForGeneration_generateExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Overriding extension method '@openedSliceExpressionForGeneration generateExpression'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  extensionMethod_addHeaderFileName (object->mProperty_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 301)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 301)) ;
  GALGAS_string var_leftTemporaryOperand_13969 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_13969, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 303)) ;
  GALGAS_string var_rightTemporaryOperand_14169 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_14169, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 311)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 319)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 319)) ;
  }
  outArgument_outCppExpression = GALGAS_string ("GALGAS_range (").add_operation (var_leftTemporaryOperand_13969, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 321)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 321)).add_operation (var_rightTemporaryOperand_14169, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 321)).add_operation (GALGAS_string (".substract_operation ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 322)).add_operation (var_leftTemporaryOperand_13969, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 322)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 322)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 322)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 322)).add_operation (extensionGetter_commaSourceFile (object->mProperty_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 323)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 322)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 323)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_openedSliceExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_openedSliceExpressionForGeneration.mSlotID,
                                           extensionMethod_openedSliceExpressionForGeneration_generateExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_openedSliceExpressionForGeneration_generateExpression (defineExtensionMethod_openedSliceExpressionForGeneration_generateExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Overriding extension method '@andExpressionForGeneration generateExpression'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  extensionMethod_addHeaderFileName (object->mProperty_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 334)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 334)) ;
  GALGAS_string var_leftTemporaryOperand_15102 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_15102, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 336)) ;
  GALGAS_string var_rightTemporaryOperand_15310 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_15310, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 344)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand_15102.add_operation (GALGAS_string (".operator_and ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 352)).add_operation (var_rightTemporaryOperand_15310, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 352)).add_operation (extensionGetter_commaSourceFile (object->mProperty_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 353)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 353)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 353)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_andExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_andExpressionForGeneration.mSlotID,
                                           extensionMethod_andExpressionForGeneration_generateExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_andExpressionForGeneration_generateExpression (defineExtensionMethod_andExpressionForGeneration_generateExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension method '@andShortExpressionForGeneration generateExpression'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  extensionMethod_addHeaderFileName (object->mProperty_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 364)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 364)) ;
  GALGAS_string var_leftTemporaryOperand_16107 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_16107, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 366)) ;
  GALGAS_string var_testVar_16150 = GALGAS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 374)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 374)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 374)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_bool ").add_operation (var_testVar_16150, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 375)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 375)).add_operation (var_leftTemporaryOperand_16107, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 375)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 375)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 375)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolTrue == ").add_operation (var_testVar_16150, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 376)).add_operation (GALGAS_string (".boolEnum ()) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 376)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 376)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 378)) ;
  }
  GALGAS_string var_rightTemporaryOperand_16627 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_16627, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 379)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_testVar_16150.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 386)).add_operation (var_rightTemporaryOperand_16627, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 386)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 386)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 386)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 387)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 388)) ;
  outArgument_outCppExpression = var_testVar_16150 ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_andShortExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_andShortExpressionForGeneration.mSlotID,
                                           extensionMethod_andShortExpressionForGeneration_generateExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_andShortExpressionForGeneration_generateExpression (defineExtensionMethod_andShortExpressionForGeneration_generateExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Overriding extension method '@multiplicationExpressionForGeneration generateExpression'               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_multiplicationExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                      GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                      GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                      GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                      GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                      GALGAS_string & outArgument_outCppExpression,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_multiplicationExpressionForGeneration * object = (const cPtr_multiplicationExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_multiplicationExpressionForGeneration) ;
  extensionMethod_addHeaderFileName (object->mProperty_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 400)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 400)) ;
  GALGAS_string var_leftTemporaryOperand_17279 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_17279, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 403)) ;
  GALGAS_string var_rightTemporaryOperand_17482 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_17482, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 406)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand_17279.add_operation (GALGAS_string (".multiply_operation ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 408)).add_operation (var_rightTemporaryOperand_17482, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 408)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 409)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 409)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 409)).add_operation (extensionGetter_commaSourceFile (object->mProperty_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 409)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 409)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 409)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 410)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 410)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_multiplicationExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_multiplicationExpressionForGeneration.mSlotID,
                                           extensionMethod_multiplicationExpressionForGeneration_generateExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_multiplicationExpressionForGeneration_generateExpression (defineExtensionMethod_multiplicationExpressionForGeneration_generateExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//          Overriding extension method '@multiplicationExpressionNoOverflowForGeneration generateExpression'          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_multiplicationExpressionNoOverflowForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                                GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                                GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                                GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                                GALGAS_string & outArgument_outCppExpression,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_multiplicationExpressionNoOverflowForGeneration * object = (const cPtr_multiplicationExpressionNoOverflowForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_multiplicationExpressionNoOverflowForGeneration) ;
  extensionMethod_addHeaderFileName (object->mProperty_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 421)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 421)) ;
  GALGAS_string var_leftTemporaryOperand_18390 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_18390, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 424)) ;
  GALGAS_string var_rightTemporaryOperand_18593 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_18593, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 427)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand_18390.add_operation (GALGAS_string (".multiply_operation_no_ovf ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 429)).add_operation (var_rightTemporaryOperand_18593, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 429)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 429)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_multiplicationExpressionNoOverflowForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_multiplicationExpressionNoOverflowForGeneration.mSlotID,
                                           extensionMethod_multiplicationExpressionNoOverflowForGeneration_generateExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_multiplicationExpressionNoOverflowForGeneration_generateExpression (defineExtensionMethod_multiplicationExpressionNoOverflowForGeneration_generateExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension method '@divisionExpressionForGeneration generateExpression'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_divisionExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                GALGAS_string & outArgument_outCppExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_divisionExpressionForGeneration * object = (const cPtr_divisionExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_divisionExpressionForGeneration) ;
  extensionMethod_addHeaderFileName (object->mProperty_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 440)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 440)) ;
  GALGAS_string var_leftTemporaryOperand_19353 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_19353, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 443)) ;
  GALGAS_string var_rightTemporaryOperand_19556 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_19556, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 446)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand_19353.add_operation (GALGAS_string (".divide_operation ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 448)).add_operation (var_rightTemporaryOperand_19556, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 448)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 449)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 449)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 449)).add_operation (extensionGetter_commaSourceFile (object->mProperty_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 449)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 449)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 449)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 450)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 450)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_divisionExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_divisionExpressionForGeneration.mSlotID,
                                           extensionMethod_divisionExpressionForGeneration_generateExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_divisionExpressionForGeneration_generateExpression (defineExtensionMethod_divisionExpressionForGeneration_generateExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//             Overriding extension method '@divisionExpressionNoOverflowForGeneration generateExpression'             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_divisionExpressionNoOverflowForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                          GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                          GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                          GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                          GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                          GALGAS_string & outArgument_outCppExpression,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_divisionExpressionNoOverflowForGeneration * object = (const cPtr_divisionExpressionNoOverflowForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_divisionExpressionNoOverflowForGeneration) ;
  extensionMethod_addHeaderFileName (object->mProperty_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 461)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 461)) ;
  GALGAS_string var_leftTemporaryOperand_20456 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_20456, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 464)) ;
  GALGAS_string var_rightTemporaryOperand_20659 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_20659, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 467)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand_20456.add_operation (GALGAS_string (".divide_operation_no_ovf ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 469)).add_operation (var_rightTemporaryOperand_20659, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 469)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 469)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_divisionExpressionNoOverflowForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_divisionExpressionNoOverflowForGeneration.mSlotID,
                                           extensionMethod_divisionExpressionNoOverflowForGeneration_generateExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_divisionExpressionNoOverflowForGeneration_generateExpression (defineExtensionMethod_divisionExpressionNoOverflowForGeneration_generateExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@moduloExpressionForGeneration generateExpression'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_moduloExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                              GALGAS_string & ioArgument_ioGeneratedCode,
                                                                              GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                              GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                              GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                              GALGAS_string & outArgument_outCppExpression,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_moduloExpressionForGeneration * object = (const cPtr_moduloExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_moduloExpressionForGeneration) ;
  extensionMethod_addHeaderFileName (object->mProperty_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 480)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 480)) ;
  GALGAS_string var_leftTemporaryOperand_21415 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_21415, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 483)) ;
  GALGAS_string var_rightTemporaryOperand_21618 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_21618, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 486)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand_21415.add_operation (GALGAS_string (".modulo_operation ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 488)).add_operation (var_rightTemporaryOperand_21618, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 488)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 489)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 489)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 489)).add_operation (extensionGetter_commaSourceFile (object->mProperty_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 489)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 489)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 489)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 490)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 490)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_moduloExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_moduloExpressionForGeneration.mSlotID,
                                           extensionMethod_moduloExpressionForGeneration_generateExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_moduloExpressionForGeneration_generateExpression (defineExtensionMethod_moduloExpressionForGeneration_generateExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//            Overriding extension method '@unaryMinusExpressionNoOverflowForGeneration generateExpression'            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_unaryMinusExpressionNoOverflowForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                            GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                            GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                            GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                            GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                            GALGAS_string & outArgument_outCppExpression,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_unaryMinusExpressionNoOverflowForGeneration * object = (const cPtr_unaryMinusExpressionNoOverflowForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_unaryMinusExpressionNoOverflowForGeneration) ;
  extensionMethod_addHeaderFileName (object->mProperty_mExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 501)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 501)) ;
  GALGAS_string var_operand_22651 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_22651, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 503)) ;
  outArgument_outCppExpression = var_operand_22651.add_operation (GALGAS_string (".operator_unary_minus_no_ovf ()"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 511)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_unaryMinusExpressionNoOverflowForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_unaryMinusExpressionNoOverflowForGeneration.mSlotID,
                                           extensionMethod_unaryMinusExpressionNoOverflowForGeneration_generateExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_unaryMinusExpressionNoOverflowForGeneration_generateExpression (defineExtensionMethod_unaryMinusExpressionNoOverflowForGeneration_generateExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Overriding extension method '@notExpressionForGeneration generateExpression'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  extensionMethod_addHeaderFileName (object->mProperty_mExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 522)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 522)) ;
  GALGAS_string var_operand_23194 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_23194, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 525)) ;
  outArgument_outCppExpression = var_operand_23194.add_operation (GALGAS_string (".operator_not ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 527)).add_operation (extensionGetter_sourceFile (object->mProperty_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 527)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 527)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 527)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_notExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_notExpressionForGeneration.mSlotID,
                                           extensionMethod_notExpressionForGeneration_generateExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_notExpressionForGeneration_generateExpression (defineExtensionMethod_notExpressionForGeneration_generateExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//             Overriding extension method '@structFieldAccessExpressionForGeneration generateExpression'              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_structFieldAccessExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                         GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                         GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                         GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                         GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                         GALGAS_string & outArgument_outCppExpression,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structFieldAccessExpressionForGeneration * object = (const cPtr_structFieldAccessExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_structFieldAccessExpressionForGeneration) ;
  extensionMethod_addHeaderFileName (object->mProperty_mResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 538)) ;
  GALGAS_string var_operand_24000 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_24000, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 540)) ;
  outArgument_outCppExpression = var_operand_24000.add_operation (GALGAS_string (".getter_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 542)).add_operation (object->mProperty_mStructFieldName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 542)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 542)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 542)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_structFieldAccessExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_structFieldAccessExpressionForGeneration.mSlotID,
                                           extensionMethod_structFieldAccessExpressionForGeneration_generateExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_structFieldAccessExpressionForGeneration_generateExpression (defineExtensionMethod_structFieldAccessExpressionForGeneration_generateExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@tildeExpressionForGeneration generateExpression'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  extensionMethod_addHeaderFileName (object->mProperty_mExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 553)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 553)) ;
  GALGAS_string var_operand_24566 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_24566, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 556)) ;
  outArgument_outCppExpression = var_operand_24566.add_operation (GALGAS_string (".operator_tilde ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 558)).add_operation (extensionGetter_sourceFile (object->mProperty_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 558)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 558)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 558)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_tildeExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_tildeExpressionForGeneration.mSlotID,
                                           extensionMethod_tildeExpressionForGeneration_generateExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_tildeExpressionForGeneration_generateExpression (defineExtensionMethod_tildeExpressionForGeneration_generateExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Overriding extension method '@literalTypeInExpressionForGeneration generateExpression'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  extensionMethod_addHeaderFileName (object->mProperty_mLiteralType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 570)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_type (& kTypeDescriptor_GALGAS_").add_operation (object->mProperty_mLiteralType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 572)).getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 572)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 571)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 572)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_literalTypeInExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_literalTypeInExpressionForGeneration.mSlotID,
                                           extensionMethod_literalTypeInExpressionForGeneration_generateExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_literalTypeInExpressionForGeneration_generateExpression (defineExtensionMethod_literalTypeInExpressionForGeneration_generateExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//              Overriding extension method '@extractObjectInExpressionForGeneration generateExpression'               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_extractObjectInExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                       GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                       GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                       GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                       GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                       GALGAS_string & outArgument_outCppExpression,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extractObjectInExpressionForGeneration * object = (const cPtr_extractObjectInExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_extractObjectInExpressionForGeneration) ;
  outArgument_outCppExpression = GALGAS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 583)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 583)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 583)) ;
  GALGAS_string var_receiverExpression_26035 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mReceiverExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverExpression_26035, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 585)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_").add_operation (object->mProperty_mResultType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 593)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 593)).add_operation (GALGAS_string ("::extractObject ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 593)).add_operation (var_receiverExpression_26035, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 594)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 594)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 595)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 595)).add_operation (extensionGetter_commaSourceFile (object->mProperty_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 596)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 595)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 596)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 597)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 597)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_extractObjectInExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_extractObjectInExpressionForGeneration.mSlotID,
                                           extensionMethod_extractObjectInExpressionForGeneration_generateExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_extractObjectInExpressionForGeneration_generateExpression (defineExtensionMethod_extractObjectInExpressionForGeneration_generateExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@getterCallExpressionForGeneration generateExpression'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  extensionMethod_addHeaderFileName (object->mProperty_mResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 612)) ;
  GALGAS_string var_receiverCppName_27083 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mReceiverExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppName_27083, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 614)) ;
  GALGAS_stringlist var_getterArgumentCppNameList_27148 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticExpressionGeneration.galgas", 622)) ;
  cEnumerator_semanticExpressionListForGeneration enumerator_27178 (object->mProperty_mExpressions, kENUMERATION_UP) ;
  while (enumerator_27178.hasCurrentObject ()) {
    GALGAS_string var_argumentCppName_27209 ;
    callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_27178.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_argumentCppName_27209, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 625)) ;
    var_getterArgumentCppNameList_27148.addAssign_operation (var_argumentCppName_27209  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 632)) ;
    enumerator_27178.gotoNextObject () ;
  }
  switch (object->mProperty_mKind.enumValue ()) {
  case GALGAS_methodKind::kNotBuilt:
    break ;
  case GALGAS_methodKind::kEnum_definedAsExtension:
    {
      extensionMethod_addHeaderFileName (extensionGetter_baseType (object->mProperty_mReceiverExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 637)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 637)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 637)) ;
      GALGAS_unifiedTypeMap_2D_proxy var_baseType_27634 = object->mProperty_mReceiverExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 638)) ;
      GALGAS_bool var_searching_27690 = GALGAS_bool (true) ;
      if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionGeneration.galgas", 640)).isValid ()) {
        uint32_t variant_27706 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionGeneration.galgas", 640)).uintValue () ;
        bool loop_27706 = true ;
        while (loop_27706) {
          loop_27706 = var_searching_27690.isValid () ;
          if (loop_27706) {
            loop_27706 = var_searching_27690.boolValue () ;
          }
          if (loop_27706 && (0 == variant_27706)) {
            loop_27706 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionGeneration.galgas", 640)) ;
          }
          if (loop_27706) {
            variant_27706 -- ;
            enumGalgasBool test_0 = kBoolTrue ;
            if (kBoolTrue == test_0) {
              test_0 = var_baseType_27634.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 641)).getter_isNull (SOURCE_FILE ("semanticExpressionGeneration.galgas", 641)).operator_not (SOURCE_FILE ("semanticExpressionGeneration.galgas", 641)).boolEnum () ;
              if (kBoolTrue == test_0) {
                enumGalgasBool test_1 = kBoolTrue ;
                if (kBoolTrue == test_1) {
                  test_1 = var_baseType_27634.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 642)).getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 642)).getter_hasKey (object->mProperty_mGetterName COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 642)).boolEnum () ;
                  if (kBoolTrue == test_1) {
                    var_baseType_27634 = var_baseType_27634.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 643)) ;
                  }
                }
                if (kBoolFalse == test_1) {
                  var_searching_27690 = GALGAS_bool (false) ;
                }
              }
            }
            if (kBoolFalse == test_0) {
              var_searching_27690 = GALGAS_bool (false) ;
            }
          }
        }
      }
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("getter-").add_operation (var_baseType_27634.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 651)).getter_fileNameRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 651)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 651)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 651)).add_operation (object->mProperty_mGetterName.getter_fileNameRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 651)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 651))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 651)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (var_receiverCppName_27083 COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 652)) ;
      }
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = object->mProperty_mReceiverExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 653)).getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 653)).getter_isClassType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 653)).boolEnum () ;
        if (kBoolTrue == test_2) {
          outArgument_outCppExpression = GALGAS_string ("callExtensionGetter_").add_operation (object->mProperty_mGetterName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 654)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 654)).add_operation (GALGAS_string (" ((const cPtr_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 654)).add_operation (object->mProperty_mReceiverExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 655)).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 655)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 655)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 655)).add_operation (var_receiverCppName_27083, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 655)).add_operation (GALGAS_string (".ptr (), "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 655)) ;
        }
      }
      if (kBoolFalse == test_2) {
        extensionMethod_addHeaderFileName (object->mProperty_mReceiverExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 657)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 657)) ;
        outArgument_outCppExpression = GALGAS_string ("extensionGetter_").add_operation (object->mProperty_mGetterName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 658)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 658)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 658)).add_operation (var_receiverCppName_27083, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 658)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 658)) ;
      }
    }
    break ;
  case GALGAS_methodKind::kEnum_definedAsMember:
    {
      outArgument_outCppExpression = var_receiverCppName_27083 ;
      cEnumerator_stringlist enumerator_28791 (object->mProperty_mFieldList, kENUMERATION_UP) ;
      while (enumerator_28791.hasCurrentObject ()) {
        outArgument_outCppExpression.plusAssign_operation(GALGAS_string (".getter_").add_operation (enumerator_28791.current_mValue (HERE).getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 663)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 663)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 663)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 663)) ;
        enumerator_28791.gotoNextObject () ;
      }
      extensionMethod_addHeaderFileName (object->mProperty_mResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 665)) ;
      outArgument_outCppExpression.plusAssign_operation(GALGAS_string (".getter_").add_operation (object->mProperty_mGetterName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 666)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 666)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 666)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 666)) ;
    }
    break ;
  }
  cEnumerator_stringlist enumerator_29068 (var_getterArgumentCppNameList_27148, kENUMERATION_UP) ;
  while (enumerator_29068.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssign_operation(enumerator_29068.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 669)) ;
    if (enumerator_29068.hasNextObject ()) {
      outArgument_outCppExpression.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 670)) ;
    }
    enumerator_29068.gotoNextObject () ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (kIsEqual, var_getterArgumentCppNameList_27148.getter_length (SOURCE_FILE ("semanticExpressionGeneration.galgas", 672)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_3) {
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = object->mProperty_mHasCompilerArgument.boolEnum () ;
        if (kBoolTrue == test_4) {
          {
          ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 674)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 674)) ;
          }
          outArgument_outCppExpression.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 675)).add_operation (GALGAS_string (" COMMA_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 675)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 675)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_3) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = object->mProperty_mHasCompilerArgument.boolEnum () ;
      if (kBoolTrue == test_5) {
        {
        ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 678)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 678)) ;
        }
        outArgument_outCppExpression.plusAssign_operation(GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 679)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 679)).add_operation (GALGAS_string (" COMMA_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 679)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 679)) ;
      }
    }
    if (kBoolFalse == test_5) {
      outArgument_outCppExpression.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 681)) ;
    }
  }
  outArgument_outCppExpression.plusAssign_operation(extensionGetter_sourceFile (object->mProperty_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 683)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 683)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 683)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_getterCallExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_getterCallExpressionForGeneration.mSlotID,
                                           extensionMethod_getterCallExpressionForGeneration_generateExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_getterCallExpressionForGeneration_generateExpression (defineExtensionMethod_getterCallExpressionForGeneration_generateExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Overriding extension method '@functionCallExpressionForGeneration generateExpression'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  extensionMethod_addHeaderFileName (object->mProperty_mResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 695)) ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("func-").add_operation (object->mProperty_mFunctionName.getter_fileNameRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 697)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 697))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 697)) ;
  GALGAS_stringlist var_parameterList_30180 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticExpressionGeneration.galgas", 699)) ;
  cEnumerator_semanticExpressionListForGeneration enumerator_30221 (object->mProperty_mExpressions, kENUMERATION_UP) ;
  while (enumerator_30221.hasCurrentObject ()) {
    GALGAS_string var_parameter_30246 ;
    callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_30221.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_30246, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 702)) ;
    var_parameterList_30180.addAssign_operation (var_parameter_30246  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 703)) ;
    enumerator_30221.gotoNextObject () ;
  }
  outArgument_outCppExpression = GALGAS_string ("function_").add_operation (object->mProperty_mFunctionName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 705)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 705)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 705)) ;
  cEnumerator_stringlist enumerator_30534 (var_parameterList_30180, kENUMERATION_UP) ;
  while (enumerator_30534.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssign_operation(enumerator_30534.current_mValue (HERE).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 707)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 707)) ;
    enumerator_30534.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 709)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 709)) ;
  }
  outArgument_outCppExpression.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 710)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 710)) ;
  outArgument_outCppExpression.plusAssign_operation(extensionGetter_commaSourceFile (object->mProperty_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 711)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 711)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 711)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_functionCallExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_functionCallExpressionForGeneration.mSlotID,
                                           extensionMethod_functionCallExpressionForGeneration_generateExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_functionCallExpressionForGeneration_generateExpression (defineExtensionMethod_functionCallExpressionForGeneration_generateExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Overriding extension method '@filewrapperInExpressionForGeneration generateExpression'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("filewrapper-").add_operation (object->mProperty_mFilewrapperName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 724))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 724)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_filewrapper (gWrapperDirectory_0_").add_operation (object->mProperty_mFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 725)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 725)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 725)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_filewrapperInExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_filewrapperInExpressionForGeneration.mSlotID,
                                           extensionMethod_filewrapperInExpressionForGeneration_generateExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_filewrapperInExpressionForGeneration_generateExpression (defineExtensionMethod_filewrapperInExpressionForGeneration_generateExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//           Overriding extension method '@filewrapperTemplateInExpressionForGeneration generateExpression'            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("filewrapper-").add_operation (object->mProperty_mFilewrapperName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 737))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 737)) ;
  GALGAS_stringlist var_parameterList_31883 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticExpressionGeneration.galgas", 738)) ;
  cEnumerator_semanticExpressionListForGeneration enumerator_31938 (object->mProperty_mActualOutputParameterList, kENUMERATION_UP) ;
  while (enumerator_31938.hasCurrentObject ()) {
    GALGAS_string var_parameter_31963 ;
    callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_31938.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_31963, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 741)) ;
    var_parameterList_31883.addAssign_operation (var_parameter_31963  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 748)) ;
    enumerator_31938.gotoNextObject () ;
  }
  outArgument_outCppExpression = GALGAS_string ("GALGAS_string (filewrapperTemplate_").add_operation (object->mProperty_mFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 750)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 750)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 750)).add_operation (object->mProperty_mFilewrapperTemplateName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 750)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 750)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 750)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 751)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 751)) ;
  cEnumerator_stringlist enumerator_32414 (var_parameterList_31883, kENUMERATION_UP) ;
  while (enumerator_32414.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssign_operation(GALGAS_string (", ").add_operation (enumerator_32414.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 753)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 753)) ;
    enumerator_32414.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 755)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 755)) ;
  }
  outArgument_outCppExpression.plusAssign_operation(extensionGetter_commaSourceFile (object->mProperty_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 756)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 756)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 756)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_filewrapperTemplateInExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_filewrapperTemplateInExpressionForGeneration.mSlotID,
                                           extensionMethod_filewrapperTemplateInExpressionForGeneration_generateExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_filewrapperTemplateInExpressionForGeneration_generateExpression (defineExtensionMethod_filewrapperTemplateInExpressionForGeneration_generateExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//          Overriding extension method '@filewrapperStaticPathInExpressionForGeneration generateExpression'           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("filewrapper-").add_operation (object->mProperty_mFilewrapperName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 768))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 768)) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = object->mProperty_mIsTextFile.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string ("GALGAS_string") ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string ("GALGAS_data") ;
  }
  outArgument_outCppExpression = temp_0 ;
  outArgument_outCppExpression.plusAssign_operation(GALGAS_string (" (gWrapperFileContent_").add_operation (object->mProperty_mFilewrapperFileIndex.getter_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 770)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 770)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 770)).add_operation (object->mProperty_mFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 770)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 770)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 770)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 770)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_filewrapperStaticPathInExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_filewrapperStaticPathInExpressionForGeneration.mSlotID,
                                           extensionMethod_filewrapperStaticPathInExpressionForGeneration_generateExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_filewrapperStaticPathInExpressionForGeneration_generateExpression (defineExtensionMethod_filewrapperStaticPathInExpressionForGeneration_generateExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@lexiqueIntrospectionForGeneration generateExpression'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("lexique-").add_operation (object->mProperty_mLexiqueComponentName.getter_fileNameRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 784)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 784))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 784)) ;
  outArgument_outCppExpression = GALGAS_string ("C_Lexique_").add_operation (object->mProperty_mLexiqueComponentName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 785)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 785)).add_operation (GALGAS_string ("::"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 785)).add_operation (object->mProperty_mLexiqueGetterName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 786)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 785)).add_operation (GALGAS_string ("("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 786)).add_operation (extensionGetter_sourceFile (object->mProperty_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 787)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 787)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 787)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_lexiqueIntrospectionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_lexiqueIntrospectionForGeneration.mSlotID,
                                           extensionMethod_lexiqueIntrospectionForGeneration_generateExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_lexiqueIntrospectionForGeneration_generateExpression (defineExtensionMethod_lexiqueIntrospectionForGeneration_generateExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//         Overriding extension method '@expressionCollectionValueForGeneration generateCollectionElementCode'         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_expressionCollectionValueForGeneration_generateCollectionElementCode (const cPtr_abstractCollectionValueElementForGeneration * inObject,
                                                                                                  const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inTargetType */,
                                                                                                  GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                                  GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                                  GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                                  GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                                  const GALGAS_string constinArgument_inCppTargetVar,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_expressionCollectionValueForGeneration * object = (const cPtr_expressionCollectionValueForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_expressionCollectionValueForGeneration) ;
  GALGAS_string var_sourceVar_35204 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_35204, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 811)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(constinArgument_inCppTargetVar, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 818)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".plusAssign_operation (").add_operation (var_sourceVar_35204, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 819)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 819)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 820)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 820)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 820)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (object->mProperty_mExpressionLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 821)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 821)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 821)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 821)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 822)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 822)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_expressionCollectionValueForGeneration_generateCollectionElementCode (void) {
  enterExtensionMethod_generateCollectionElementCode (kTypeDescriptor_GALGAS_expressionCollectionValueForGeneration.mSlotID,
                                                      extensionMethod_expressionCollectionValueForGeneration_generateCollectionElementCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_expressionCollectionValueForGeneration_generateCollectionElementCode (defineExtensionMethod_expressionCollectionValueForGeneration_generateCollectionElementCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//         Overriding extension method '@expressionListCollectionForGeneration generateCollectionElementCode'          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_expressionListCollectionForGeneration_generateCollectionElementCode (const cPtr_abstractCollectionValueElementForGeneration * inObject,
                                                                                                 const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inTargetType,
                                                                                                 GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                                 GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                                 GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                                 GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                                 const GALGAS_string constinArgument_inCppTargetVar,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_expressionListCollectionForGeneration * object = (const cPtr_expressionListCollectionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_expressionListCollectionForGeneration) ;
  GALGAS_stringlist var_parameterList_35943 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticExpressionGeneration.galgas", 835)) ;
  cEnumerator_semanticExpressionListForGeneration enumerator_35988 (object->mProperty_mExpressionList, kENUMERATION_UP) ;
  while (enumerator_35988.hasCurrentObject ()) {
    GALGAS_string var_parameter_36171 ;
    callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_35988.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_36171, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 837)) ;
    var_parameterList_35943.addAssign_operation (var_parameter_36171  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 844)) ;
    enumerator_35988.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(constinArgument_inCppTargetVar, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 847)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".addAssign_operation ("), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 849)) ;
  cEnumerator_stringlist enumerator_36374 (var_parameterList_35943, kENUMERATION_UP) ;
  while (enumerator_36374.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_36374.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 851)) ;
    if (enumerator_36374.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 852)) ;
    }
    enumerator_36374.gotoNextObject () ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inTargetType.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 854)).getter_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("semanticExpressionGeneration.galgas", 854)).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 855)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 855)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 855)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 856)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 856)) ;
      }
    }
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (object->mProperty_mExpressionLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 858)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 858)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 858)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 858)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_expressionListCollectionForGeneration_generateCollectionElementCode (void) {
  enterExtensionMethod_generateCollectionElementCode (kTypeDescriptor_GALGAS_expressionListCollectionForGeneration.mSlotID,
                                                      extensionMethod_expressionListCollectionForGeneration_generateCollectionElementCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_expressionListCollectionForGeneration_generateCollectionElementCode (defineExtensionMethod_expressionListCollectionForGeneration_generateCollectionElementCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@expressionCollectionForGeneration generateExpression'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  extensionMethod_addHeaderFileName (object->mProperty_mResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 870)) ;
  outArgument_outCppExpression = GALGAS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 872)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 872)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 872)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (object->mProperty_mResultType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 874)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 874)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 874)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 874)).add_operation (GALGAS_string (" = GALGAS_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 874)).add_operation (object->mProperty_mResultType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 875)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 875)).add_operation (GALGAS_string ("::constructor_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 875)).add_operation (object->mProperty_mResultType.getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 875)).getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 875)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 875)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 875)).add_operation (extensionGetter_sourceFile (object->mProperty_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 875)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 875)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 875)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 874)) ;
  cEnumerator_collectionValueElementListForGeneration enumerator_37672 (object->mProperty_mElementList, kENUMERATION_UP) ;
  while (enumerator_37672.hasCurrentObject ()) {
    callExtensionMethod_generateCollectionElementCode ((const cPtr_abstractCollectionValueElementForGeneration *) enumerator_37672.current_mElement (HERE).ptr (), object->mProperty_mResultType, ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 878)) ;
    enumerator_37672.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_expressionCollectionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_expressionCollectionForGeneration.mSlotID,
                                           extensionMethod_expressionCollectionForGeneration_generateExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_expressionCollectionForGeneration_generateExpression (defineExtensionMethod_expressionCollectionForGeneration_generateExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//              Overriding extension method '@assignmentInstructionAST enterInstructionInSemanticContext'              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_assignmentInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assignmentInstructionAST * object = (const cPtr_assignmentInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_assignmentInstructionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mSourceExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 49)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_assignmentInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_assignmentInstructionAST.mSlotID,
                                                          extensionMethod_assignmentInstructionAST_enterInstructionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_assignmentInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_assignmentInstructionAST_enterInstructionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@assignmentInstructionAST analyzeSemanticInstruction'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_assignmentInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                 const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                 GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assignmentInstructionAST * object = (const cPtr_assignmentInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_assignmentInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType_2565 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, object->mProperty_mStructAttributeList.getter_length (SOURCE_FILE ("instruction-assignment.galgas", 65)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      GALGAS_string joker_2698 ; // Joker input parameter
      GALGAS_string joker_2707 ; // Joker input parameter
      ioArgument_ioVariableMap.setter_neutralAccess (object->mProperty_mTargetVariableName, var_targetType_2565, joker_2698, joker_2707, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 66)) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    GALGAS_string joker_2809 ; // Joker input parameter
    GALGAS_string joker_2818 ; // Joker input parameter
    ioArgument_ioVariableMap.setter_neutralAccess (object->mProperty_mTargetVariableName, var_targetType_2565, joker_2809, joker_2818, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 73)) ;
    }
    cEnumerator_lstringlist enumerator_2860 (object->mProperty_mStructAttributeList, kENUMERATION_UP) ;
    while (enumerator_2860.hasCurrentObject ()) {
      GALGAS_propertyMap var_propertyMap_2885 = var_targetType_2565.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 80)) ;
      GALGAS_bool var_isPublic_2964 ;
      var_propertyMap_2885.method_searchKey (enumerator_2860.current_mValue (HERE), var_isPublic_2964, var_targetType_2565, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 81)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_isPublic_2964.operator_not (SOURCE_FILE ("instruction-assignment.galgas", 82)).boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (enumerator_2860.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-assignment.galgas", 83)), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray2  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 83)) ;
        }
      }
      enumerator_2860.gotoNextObject () ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_3358 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mSourceExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_2565, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_3358, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 88)) ;
  {
  routine_checkAssignmentTypeWithImplicitGetterCall (var_targetType_2565, var_expression_3358.getter_mResultType (SOURCE_FILE ("instruction-assignment.galgas", 97)), object->mProperty_mInstructionLocation, var_expression_3358, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 97)) ;
  }
  GALGAS_string var_targetVariableCppName_3579 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_3625 ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (kIsEqual, object->mProperty_mStructAttributeList.getter_length (SOURCE_FILE ("instruction-assignment.galgas", 101)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_3) {
      {
      GALGAS_unifiedTypeMap_2D_proxy joker_3747 ; // Joker input parameter
      ioArgument_ioVariableMap.setter_searchForWriteAccess (object->mProperty_mTargetVariableName, joker_3747, var_targetVariableCppName_3579, var_nameForCheckingFormalParameterUsing_3625, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 102)) ;
      }
    }
  }
  if (kBoolFalse == test_3) {
    {
    GALGAS_unifiedTypeMap_2D_proxy joker_3914 ; // Joker input parameter
    ioArgument_ioVariableMap.setter_searchForReadWriteAccess (object->mProperty_mTargetVariableName, joker_3914, var_targetVariableCppName_3579, var_nameForCheckingFormalParameterUsing_3625, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 109)) ;
    }
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_assignmentInstructionForGeneration::constructor_new (var_targetType_2565, var_targetVariableCppName_3579, var_nameForCheckingFormalParameterUsing_3625, object->mProperty_mStructAttributeList, var_expression_3358  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 117))  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 117)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_assignmentInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_assignmentInstructionAST.mSlotID,
                                                   extensionMethod_assignmentInstructionAST_analyzeSemanticInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_assignmentInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_assignmentInstructionAST_analyzeSemanticInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Overriding extension method '@assignmentInstructionForGeneration generateInstruction'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  GALGAS_string var_sourceVar_5479 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mSourceExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_5479, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 149)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (object->mProperty_mNameForCheckingFormalParameterUsing COMMA_SOURCE_FILE ("instruction-assignment.galgas", 156)) ;
  }
  extensionMethod_addHeaderFileName (object->mProperty_mTargetType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 158)) ;
  GALGAS_string var_receiverCppName_5646 = object->mProperty_mTargetCppName ;
  cEnumerator_lstringlist enumerator_5696 (object->mProperty_mStructAttributeList, kENUMERATION_UP) ;
  while (enumerator_5696.hasCurrentObject ()) {
    var_receiverCppName_5646.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_5696.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-assignment.galgas", 161)).getter_identifierRepresentation (SOURCE_FILE ("instruction-assignment.galgas", 161)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 161)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 161)) ;
    enumerator_5696.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_5646.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 163)).add_operation (var_sourceVar_5479, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 163)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 163)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 163)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (object->mProperty_mTargetCppName COMMA_SOURCE_FILE ("instruction-assignment.galgas", 164)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_assignmentInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_assignmentInstructionForGeneration.mSlotID,
                                            extensionMethod_assignmentInstructionForGeneration_generateInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_assignmentInstructionForGeneration_generateInstruction (defineExtensionMethod_assignmentInstructionForGeneration_generateInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//            Overriding extension method '@structuredCastInstructionAST enterInstructionInSemanticContext'            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_structuredCastInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                            GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structuredCastInstructionAST * object = (const cPtr_structuredCastInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_structuredCastInstructionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mCastExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 125)) ;
  extensionMethod_enterInstructionListInSemanticContext (object->mProperty_mElseInstructionList, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 126)) ;
  cEnumerator_castInstructionBranchListAST enumerator_4497 (object->mProperty_mCastInstructionBranchList, kENUMERATION_UP) ;
  while (enumerator_4497.hasCurrentObject ()) {
    extensionMethod_enterInstructionListInSemanticContext (enumerator_4497.current_mInstructionList (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 128)) ;
    enumerator_4497.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_structuredCastInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_structuredCastInstructionAST.mSlotID,
                                                          extensionMethod_structuredCastInstructionAST_enterInstructionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_structuredCastInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_structuredCastInstructionAST_enterInstructionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Overriding extension method '@structuredCastInstructionAST analyzeSemanticInstruction'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_structuredCastInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                     const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                     GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                     GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structuredCastInstructionAST * object = (const cPtr_structuredCastInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_structuredCastInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_castExpression_5217 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mCastExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-cast.galgas", 147)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_castExpression_5217, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 144)) ;
  {
  ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 153)) ;
  }
  GALGAS_castInstructionBranchListForGeneration var_castBranchList_5559 = GALGAS_castInstructionBranchListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 155)) ;
  cEnumerator_castInstructionBranchListAST enumerator_5642 (object->mProperty_mCastInstructionBranchList, kENUMERATION_UP) ;
  while (enumerator_5642.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_type_5680 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), enumerator_5642.current_mTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 158)) ;
    GALGAS_unifiedTypeMap_2D_proxy var_t_5858 = var_type_5680 ;
    GALGAS_bool var_found_5881 = GALGAS_bool (kIsEqual, var_t_5858.objectCompare (var_castExpression_5217.getter_mResultType (SOURCE_FILE ("instruction-cast.galgas", 161)))) ;
    if (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("instruction-cast.galgas", 162)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 162)).isValid ()) {
      uint32_t variant_5926 = constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("instruction-cast.galgas", 162)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 162)).uintValue () ;
      bool loop_5926 = true ;
      while (loop_5926) {
        loop_5926 = var_found_5881.operator_not (SOURCE_FILE ("instruction-cast.galgas", 163)).operator_and (var_t_5858.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 163)).getter_isNull (SOURCE_FILE ("instruction-cast.galgas", 163)).operator_not (SOURCE_FILE ("instruction-cast.galgas", 163)) COMMA_SOURCE_FILE ("instruction-cast.galgas", 163)).isValid () ;
        if (loop_5926) {
          loop_5926 = var_found_5881.operator_not (SOURCE_FILE ("instruction-cast.galgas", 163)).operator_and (var_t_5858.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 163)).getter_isNull (SOURCE_FILE ("instruction-cast.galgas", 163)).operator_not (SOURCE_FILE ("instruction-cast.galgas", 163)) COMMA_SOURCE_FILE ("instruction-cast.galgas", 163)).boolValue () ;
        }
        if (loop_5926 && (0 == variant_5926)) {
          loop_5926 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-cast.galgas", 162)) ;
        }
        if (loop_5926) {
          variant_5926 -- ;
          var_t_5858 = var_t_5858.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 164)) ;
          var_found_5881 = GALGAS_bool (kIsEqual, var_t_5858.objectCompare (var_castExpression_5217.getter_mResultType (SOURCE_FILE ("instruction-cast.galgas", 165)))) ;
        }
      }
    }
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = var_found_5881.operator_not (SOURCE_FILE ("instruction-cast.galgas", 167)).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_5642.current_mTypeName (HERE).getter_location (SOURCE_FILE ("instruction-cast.galgas", 168)), GALGAS_string ("the '@").add_operation (enumerator_5642.current_mTypeName (HERE).getter_string (SOURCE_FILE ("instruction-cast.galgas", 169)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 169)).add_operation (GALGAS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 169)).add_operation (var_castExpression_5217.getter_mResultType (SOURCE_FILE ("instruction-cast.galgas", 169)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 169)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 169)).add_operation (GALGAS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 169)), fixItArray1  COMMA_SOURCE_FILE ("instruction-cast.galgas", 168)) ;
      }
    }
    GALGAS_string var_localConstantName_6371 ;
    GALGAS_localConstantList var_localConstantList_6397 = GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 173)) ;
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsStrictSup, enumerator_5642.current_mConstantVarName (HERE).getter_string (HERE).getter_length (SOURCE_FILE ("instruction-cast.galgas", 174)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_2) {
        var_localConstantName_6371 = GALGAS_string ("cast_").add_operation (enumerator_5642.current_mConstantVarName (HERE).getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 175)).getter_string (SOURCE_FILE ("instruction-cast.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 175)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 175)).add_operation (enumerator_5642.current_mConstantVarName (HERE).getter_string (SOURCE_FILE ("instruction-cast.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 175)) ;
        var_localConstantList_6397.addAssign_operation (var_type_5680, enumerator_5642.current_mConstantVarName (HERE), GALGAS_bool (true), var_localConstantName_6371  COMMA_SOURCE_FILE ("instruction-cast.galgas", 176)) ;
      }
    }
    if (kBoolFalse == test_2) {
      var_localConstantName_6371 = GALGAS_string::makeEmptyString () ;
    }
    GALGAS_semanticInstructionListForGeneration var_instructionList_6841 ;
    {
    routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_localConstantList_6397, GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 191)), enumerator_5642.current_mInstructionList (HERE), enumerator_5642.current_mEndOfInstructions (HERE), ioArgument_ioVariableMap, var_instructionList_6841, inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 186)) ;
    }
    var_castBranchList_5559.addAssign_operation (enumerator_5642.current_mTypeComparisonKind (HERE), var_type_5680, var_localConstantName_6371, var_instructionList_6841  COMMA_SOURCE_FILE ("instruction-cast.galgas", 197)) ;
    enumerator_5642.gotoNextObject () ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionList_7322 ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 205)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 206)), object->mProperty_mElseInstructionList, object->mProperty_mEndOfCastInstruction, ioArgument_ioVariableMap, var_else_5F_instructionList_7322, inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 201)) ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mProperty_mEndOfCastInstruction, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 213)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_structuredCastInstructionForGeneration::constructor_new (var_castExpression_5217, var_castBranchList_5559, var_else_5F_instructionList_7322  COMMA_SOURCE_FILE ("instruction-cast.galgas", 215))  COMMA_SOURCE_FILE ("instruction-cast.galgas", 215)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_structuredCastInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_structuredCastInstructionAST.mSlotID,
                                                   extensionMethod_structuredCastInstructionAST_analyzeSemanticInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_structuredCastInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_structuredCastInstructionAST_analyzeSemanticInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//              Overriding extension method '@structuredCastInstructionForGeneration generateInstruction'              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  GALGAS_string var_castCppVarName_9479 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_castCppVarName_9479, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 251)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_castCppVarName_9479, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 259)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 259)), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 259)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 260)) ;
  }
  cEnumerator_castInstructionBranchListForGeneration enumerator_9622 (object->mProperty_mCastBranchList, kENUMERATION_UP) ;
  while (enumerator_9622.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_9622.current_mType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 262)) ;
    switch (enumerator_9622.current_mTypeComparisonKind (HERE).enumValue ()) {
    case GALGAS_dynamicTypeComparisonKind::kNotBuilt:
      break ;
    case GALGAS_dynamicTypeComparisonKind::kEnum_equal:
      {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_castCppVarName_9479, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 265)).add_operation (GALGAS_string (".dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 265)).add_operation (enumerator_9622.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 267)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 266)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 267)), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 265)) ;
      }
      break ;
    case GALGAS_dynamicTypeComparisonKind::kEnum_inherited:
      {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (NULL != dynamic_cast <const cPtr_").add_operation (enumerator_9622.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 270)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 269)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 270)).add_operation (var_castCppVarName_9479, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 271)).add_operation (GALGAS_string (".ptr ())) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 271)), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 269)) ;
      }
      break ;
    case GALGAS_dynamicTypeComparisonKind::kEnum_strictlyInherited:
      {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ((").add_operation (var_castCppVarName_9479, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 273)).add_operation (GALGAS_string (".dynamicTypeDescriptor () != & kTypeDescriptor_GALGAS_"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 273)).add_operation (enumerator_9622.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 275)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 274)).add_operation (GALGAS_string (") && (NULL != dynamic_cast <const cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 275)).add_operation (enumerator_9622.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 276)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 275)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 276)).add_operation (var_castCppVarName_9479, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 277)).add_operation (GALGAS_string (".ptr ()))) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 277)), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 273)) ;
      }
      break ;
    }
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsStrictSup, enumerator_9622.current_mCastedVarCppName (HERE).getter_length (SOURCE_FILE ("instruction-cast.galgas", 279)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_0) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  GALGAS_").add_operation (enumerator_9622.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 281)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 281)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 281)).add_operation (enumerator_9622.current_mCastedVarCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 282)).add_operation (GALGAS_string (" ((cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 282)).add_operation (enumerator_9622.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 282)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 282)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 282)).add_operation (var_castCppVarName_9479, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 283)).add_operation (GALGAS_string (".ptr ()) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 283)), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 280)) ;
      }
    }
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_9622.current_mInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 285)) ;
    }
    if (enumerator_9622.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 293)) ;
    }
    enumerator_9622.gotoNextObject () ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsStrictSup, object->mProperty_mElseInstructionList.getter_length (SOURCE_FILE ("instruction-cast.galgas", 296)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 297)) ;
      {
      routine_generateInstructionList (ioArgument_ioInclusionSet, object->mProperty_mElseInstructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 298)) ;
      }
    }
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 308)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 309)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 310)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_structuredCastInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_structuredCastInstructionForGeneration.mSlotID,
                                            extensionMethod_structuredCastInstructionForGeneration_generateInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_structuredCastInstructionForGeneration_generateInstruction (defineExtensionMethod_structuredCastInstructionForGeneration_generateInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//         Overriding extension method '@plusEqualExpressionInstructionAST enterInstructionInSemanticContext'          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_plusEqualExpressionInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                                 GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_plusEqualExpressionInstructionAST * object = (const cPtr_plusEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_plusEqualExpressionInstructionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 129)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_plusEqualExpressionInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_plusEqualExpressionInstructionAST.mSlotID,
                                                          extensionMethod_plusEqualExpressionInstructionAST_enterInstructionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_plusEqualExpressionInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_plusEqualExpressionInstructionAST_enterInstructionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//         Overriding extension method '@minusEqualExpressionInstructionAST enterInstructionInSemanticContext'         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_minusEqualExpressionInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                                  GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_minusEqualExpressionInstructionAST * object = (const cPtr_minusEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_minusEqualExpressionInstructionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 135)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_minusEqualExpressionInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_minusEqualExpressionInstructionAST.mSlotID,
                                                          extensionMethod_minusEqualExpressionInstructionAST_enterInstructionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_minusEqualExpressionInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_minusEqualExpressionInstructionAST_enterInstructionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//          Overriding extension method '@mulEqualExpressionInstructionAST enterInstructionInSemanticContext'          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_mulEqualExpressionInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                                GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mulEqualExpressionInstructionAST * object = (const cPtr_mulEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_mulEqualExpressionInstructionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 141)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_mulEqualExpressionInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_mulEqualExpressionInstructionAST.mSlotID,
                                                          extensionMethod_mulEqualExpressionInstructionAST_enterInstructionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_mulEqualExpressionInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_mulEqualExpressionInstructionAST_enterInstructionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//          Overriding extension method '@divEqualExpressionInstructionAST enterInstructionInSemanticContext'          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_divEqualExpressionInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                                GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_divEqualExpressionInstructionAST * object = (const cPtr_divEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_divEqualExpressionInstructionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 147)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_divEqualExpressionInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_divEqualExpressionInstructionAST.mSlotID,
                                                          extensionMethod_divEqualExpressionInstructionAST_enterInstructionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_divEqualExpressionInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_divEqualExpressionInstructionAST_enterInstructionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//          Overriding extension method '@plusEqualElementsInstructionAST enterInstructionInSemanticContext'           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_plusEqualElementsInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                               GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_plusEqualElementsInstructionAST * object = (const cPtr_plusEqualElementsInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_plusEqualElementsInstructionAST) ;
  extensionMethod_enterInSemanticContext (object->mProperty_mExpressions, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 153)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_plusEqualElementsInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_plusEqualElementsInstructionAST.mSlotID,
                                                          extensionMethod_plusEqualElementsInstructionAST_enterInstructionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_plusEqualElementsInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_plusEqualElementsInstructionAST_enterInstructionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//             Overriding extension method '@plusEqualExpressionInstructionAST analyzeSemanticInstruction'             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_plusEqualExpressionInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                          const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                          GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                          GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                          GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_plusEqualExpressionInstructionAST * object = (const cPtr_plusEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_plusEqualExpressionInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType_6440 ;
  GALGAS_string var_targetVariableCppName_6475 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_6524 ;
  {
  ioArgument_ioVariableMap.setter_searchForReadWriteAccess (object->mProperty_mReceiverName, var_targetType_6440, var_targetVariableCppName_6475, var_nameForCheckingFormalParameterUsing_6524, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 168)) ;
  }
  cEnumerator_lstringlist enumerator_6561 (object->mProperty_mStructAttributeList, kENUMERATION_UP) ;
  while (enumerator_6561.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_6584 = var_targetType_6440.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 175)) ;
    GALGAS_bool var_isPublic_6661 ;
    var_propertyMap_6584.method_searchKey (enumerator_6561.current_mValue (HERE), var_isPublic_6661, var_targetType_6440, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 176)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = var_isPublic_6661.operator_not (SOURCE_FILE ("instruction-concat.galgas", 177)).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_6561.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-concat.galgas", 178)), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray1  COMMA_SOURCE_FILE ("instruction-concat.galgas", 178)) ;
      }
    }
    enumerator_6561.gotoNextObject () ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_targetType_6440.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 182)).getter_plusEqualOperatorWithExpression (SOURCE_FILE ("instruction-concat.galgas", 182)).operator_not (SOURCE_FILE ("instruction-concat.galgas", 182)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("the target object has the '@").add_operation (var_targetType_6440.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 184)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 184)).add_operation (GALGAS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 184)), fixItArray3  COMMA_SOURCE_FILE ("instruction-concat.galgas", 183)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_7329 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_6440, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_7329, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 187)) ;
  {
  routine_checkAssignmentTypeWithImplicitGetterCall (var_targetType_6440, var_expression_7329.getter_mResultType (SOURCE_FILE ("instruction-concat.galgas", 196)), object->mProperty_mInstructionLocation, var_expression_7329, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 196)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (object->mProperty_mInstructionLocation, var_targetType_6440, var_targetVariableCppName_6475, var_nameForCheckingFormalParameterUsing_6524, object->mProperty_mStructAttributeList, var_expression_7329, GALGAS_string ("plusAssign_operation")  COMMA_SOURCE_FILE ("instruction-concat.galgas", 198))  COMMA_SOURCE_FILE ("instruction-concat.galgas", 198)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_plusEqualExpressionInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_plusEqualExpressionInstructionAST.mSlotID,
                                                   extensionMethod_plusEqualExpressionInstructionAST_analyzeSemanticInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_plusEqualExpressionInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_plusEqualExpressionInstructionAST_analyzeSemanticInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//            Overriding extension method '@minusEqualExpressionInstructionAST analyzeSemanticInstruction'             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_minusEqualExpressionInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                           const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                           GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                           GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_minusEqualExpressionInstructionAST * object = (const cPtr_minusEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_minusEqualExpressionInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType_8361 ;
  GALGAS_string var_targetVariableCppName_8396 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_8445 ;
  {
  ioArgument_ioVariableMap.setter_searchForReadWriteAccess (object->mProperty_mReceiverName, var_targetType_8361, var_targetVariableCppName_8396, var_nameForCheckingFormalParameterUsing_8445, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 219)) ;
  }
  cEnumerator_lstringlist enumerator_8482 (object->mProperty_mStructAttributeList, kENUMERATION_UP) ;
  while (enumerator_8482.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_8505 = var_targetType_8361.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 226)) ;
    GALGAS_bool var_isPublic_8582 ;
    var_propertyMap_8505.method_searchKey (enumerator_8482.current_mValue (HERE), var_isPublic_8582, var_targetType_8361, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 227)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = var_isPublic_8582.operator_not (SOURCE_FILE ("instruction-concat.galgas", 228)).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_8482.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-concat.galgas", 229)), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray1  COMMA_SOURCE_FILE ("instruction-concat.galgas", 229)) ;
      }
    }
    enumerator_8482.gotoNextObject () ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_targetType_8361.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 233)).getter_minusEqualOperatorWithExpression (SOURCE_FILE ("instruction-concat.galgas", 233)).operator_not (SOURCE_FILE ("instruction-concat.galgas", 233)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("the target object has the '@").add_operation (var_targetType_8361.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 235)).add_operation (GALGAS_string ("' type, but this type does not support the '-=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 235)), fixItArray3  COMMA_SOURCE_FILE ("instruction-concat.galgas", 234)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_9251 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_8361, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_9251, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 238)) ;
  {
  routine_checkAssignmentTypeWithImplicitGetterCall (var_targetType_8361, var_expression_9251.getter_mResultType (SOURCE_FILE ("instruction-concat.galgas", 247)), object->mProperty_mInstructionLocation, var_expression_9251, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 247)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (object->mProperty_mInstructionLocation, var_targetType_8361, var_targetVariableCppName_8396, var_nameForCheckingFormalParameterUsing_8445, object->mProperty_mStructAttributeList, var_expression_9251, GALGAS_string ("minusAssign_operation")  COMMA_SOURCE_FILE ("instruction-concat.galgas", 249))  COMMA_SOURCE_FILE ("instruction-concat.galgas", 249)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_minusEqualExpressionInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_minusEqualExpressionInstructionAST.mSlotID,
                                                   extensionMethod_minusEqualExpressionInstructionAST_analyzeSemanticInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_minusEqualExpressionInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_minusEqualExpressionInstructionAST_analyzeSemanticInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//             Overriding extension method '@mulEqualExpressionInstructionAST analyzeSemanticInstruction'              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_mulEqualExpressionInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                         const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                         GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                         const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                         GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                         GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mulEqualExpressionInstructionAST * object = (const cPtr_mulEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_mulEqualExpressionInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType_10282 ;
  GALGAS_string var_targetVariableCppName_10317 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_10366 ;
  {
  ioArgument_ioVariableMap.setter_searchForReadWriteAccess (object->mProperty_mReceiverName, var_targetType_10282, var_targetVariableCppName_10317, var_nameForCheckingFormalParameterUsing_10366, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 270)) ;
  }
  cEnumerator_lstringlist enumerator_10403 (object->mProperty_mStructAttributeList, kENUMERATION_UP) ;
  while (enumerator_10403.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_10426 = var_targetType_10282.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 277)) ;
    GALGAS_bool var_isPublic_10503 ;
    var_propertyMap_10426.method_searchKey (enumerator_10403.current_mValue (HERE), var_isPublic_10503, var_targetType_10282, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 278)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = var_isPublic_10503.operator_not (SOURCE_FILE ("instruction-concat.galgas", 279)).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_10403.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-concat.galgas", 280)), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray1  COMMA_SOURCE_FILE ("instruction-concat.galgas", 280)) ;
      }
    }
    enumerator_10403.gotoNextObject () ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_targetType_10282.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 284)).getter_mulEqualOperatorWithExpression (SOURCE_FILE ("instruction-concat.galgas", 284)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("the target object has the '@").add_operation (var_targetType_10282.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 286)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 286)).add_operation (GALGAS_string ("' type, but this type does not support the '*=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 286)), fixItArray3  COMMA_SOURCE_FILE ("instruction-concat.galgas", 285)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_11166 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_10282, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_11166, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 289)) ;
  {
  routine_checkAssignmentTypeWithImplicitGetterCall (var_targetType_10282, var_expression_11166.getter_mResultType (SOURCE_FILE ("instruction-concat.galgas", 298)), object->mProperty_mInstructionLocation, var_expression_11166, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 298)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (object->mProperty_mInstructionLocation, var_targetType_10282, var_targetVariableCppName_10317, var_nameForCheckingFormalParameterUsing_10366, object->mProperty_mStructAttributeList, var_expression_11166, GALGAS_string ("mulAssign_operation")  COMMA_SOURCE_FILE ("instruction-concat.galgas", 300))  COMMA_SOURCE_FILE ("instruction-concat.galgas", 300)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_mulEqualExpressionInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_mulEqualExpressionInstructionAST.mSlotID,
                                                   extensionMethod_mulEqualExpressionInstructionAST_analyzeSemanticInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_mulEqualExpressionInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_mulEqualExpressionInstructionAST_analyzeSemanticInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//             Overriding extension method '@divEqualExpressionInstructionAST analyzeSemanticInstruction'              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_divEqualExpressionInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                         const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                         GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                         const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                         GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                         GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_divEqualExpressionInstructionAST * object = (const cPtr_divEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_divEqualExpressionInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType_12195 ;
  GALGAS_string var_targetVariableCppName_12230 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_12279 ;
  {
  ioArgument_ioVariableMap.setter_searchForReadWriteAccess (object->mProperty_mReceiverName, var_targetType_12195, var_targetVariableCppName_12230, var_nameForCheckingFormalParameterUsing_12279, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 321)) ;
  }
  cEnumerator_lstringlist enumerator_12316 (object->mProperty_mStructAttributeList, kENUMERATION_UP) ;
  while (enumerator_12316.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_12339 = var_targetType_12195.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 328)) ;
    GALGAS_bool var_isPublic_12416 ;
    var_propertyMap_12339.method_searchKey (enumerator_12316.current_mValue (HERE), var_isPublic_12416, var_targetType_12195, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 329)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = var_isPublic_12416.operator_not (SOURCE_FILE ("instruction-concat.galgas", 330)).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_12316.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-concat.galgas", 331)), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray1  COMMA_SOURCE_FILE ("instruction-concat.galgas", 331)) ;
      }
    }
    enumerator_12316.gotoNextObject () ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_targetType_12195.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 335)).getter_divEqualOperatorWithExpression (SOURCE_FILE ("instruction-concat.galgas", 335)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("the target object has the '@").add_operation (var_targetType_12195.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 337)).add_operation (GALGAS_string ("' type, but this type does not support the '/=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 337)), fixItArray3  COMMA_SOURCE_FILE ("instruction-concat.galgas", 336)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_13079 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_12195, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_13079, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 340)) ;
  {
  routine_checkAssignmentTypeWithImplicitGetterCall (var_targetType_12195, var_expression_13079.getter_mResultType (SOURCE_FILE ("instruction-concat.galgas", 349)), object->mProperty_mInstructionLocation, var_expression_13079, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 349)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (object->mProperty_mInstructionLocation, var_targetType_12195, var_targetVariableCppName_12230, var_nameForCheckingFormalParameterUsing_12279, object->mProperty_mStructAttributeList, var_expression_13079, GALGAS_string ("divAssign_operation")  COMMA_SOURCE_FILE ("instruction-concat.galgas", 351))  COMMA_SOURCE_FILE ("instruction-concat.galgas", 351)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_divEqualExpressionInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_divEqualExpressionInstructionAST.mSlotID,
                                                   extensionMethod_divEqualExpressionInstructionAST_analyzeSemanticInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_divEqualExpressionInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_divEqualExpressionInstructionAST_analyzeSemanticInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//              Overriding extension method '@plusEqualElementsInstructionAST analyzeSemanticInstruction'              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_plusEqualElementsInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                        const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                        GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                        GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_plusEqualElementsInstructionAST * object = (const cPtr_plusEqualElementsInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_plusEqualElementsInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType_14089 ;
  GALGAS_string var_targetVariableCppName_14120 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_14165 ;
  {
  ioArgument_ioVariableMap.setter_searchForReadWriteAccess (object->mProperty_mReceiverName, var_targetType_14089, var_targetVariableCppName_14120, var_nameForCheckingFormalParameterUsing_14165, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 371)) ;
  }
  cEnumerator_lstringlist enumerator_14202 (object->mProperty_mStructAttributeList, kENUMERATION_UP) ;
  while (enumerator_14202.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_14225 = var_targetType_14089.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 378)) ;
    GALGAS_bool var_isPublic_14302 ;
    var_propertyMap_14225.method_searchKey (enumerator_14202.current_mValue (HERE), var_isPublic_14302, var_targetType_14089, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 379)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = var_isPublic_14302.operator_not (SOURCE_FILE ("instruction-concat.galgas", 380)).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_14202.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-concat.galgas", 381)), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray1  COMMA_SOURCE_FILE ("instruction-concat.galgas", 381)) ;
      }
    }
    enumerator_14202.gotoNextObject () ;
  }
  GALGAS_functionSignature var_addAssignOperatorArguments_14521 = var_targetType_14089.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 385)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsEqual, var_addAssignOperatorArguments_14521.getter_length (SOURCE_FILE ("instruction-concat.galgas", 386)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("the target object has the '@").add_operation (var_targetType_14089.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 388)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 388)).add_operation (GALGAS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 388)), fixItArray3  COMMA_SOURCE_FILE ("instruction-concat.galgas", 387)) ;
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsNotEqual, object->mProperty_mExpressions.getter_length (SOURCE_FILE ("instruction-concat.galgas", 390)).objectCompare (var_addAssignOperatorArguments_14521.getter_length (SOURCE_FILE ("instruction-concat.galgas", 390)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("calling the '+=' operator on an '@").add_operation (var_targetType_14089.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 392)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 392)).add_operation (GALGAS_string ("' object requires "), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 392)).add_operation (var_addAssignOperatorArguments_14521.getter_length (SOURCE_FILE ("instruction-concat.galgas", 393)).getter_string (SOURCE_FILE ("instruction-concat.galgas", 393)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 392)).add_operation (GALGAS_string (" parameter(s), while this invocation has "), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 393)).add_operation (object->mProperty_mExpressions.getter_length (SOURCE_FILE ("instruction-concat.galgas", 394)).getter_string (SOURCE_FILE ("instruction-concat.galgas", 394)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 393)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 394)), fixItArray5  COMMA_SOURCE_FILE ("instruction-concat.galgas", 391)) ;
      }
    }
    if (kBoolFalse == test_4) {
      GALGAS_semanticExpressionListForGeneration var_effectiveParameterList_15251 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-concat.galgas", 396)) ;
      cEnumerator_actualOutputExpressionList enumerator_15283 (object->mProperty_mExpressions, kENUMERATION_UP) ;
      cEnumerator_functionSignature enumerator_15317 (var_addAssignOperatorArguments_14521, kENUMERATION_UP) ;
      while (enumerator_15283.hasCurrentObject () && enumerator_15317.hasCurrentObject ()) {
        GALGAS_semanticExpressionForGeneration var_expression_15568 ;
        callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_15283.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_15317.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_15568, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 398)) ;
        enumGalgasBool test_6 = kBoolTrue ;
        if (kBoolTrue == test_6) {
          test_6 = GALGAS_bool (kIsNotEqual, enumerator_15317.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (enumerator_15283.current_mActualSelector (HERE).getter_string (HERE))).boolEnum () ;
          if (kBoolTrue == test_6) {
            GALGAS_string temp_7 ;
            const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, enumerator_15317.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_8) {
              temp_7 = GALGAS_string (":") ;
            }else if (kBoolFalse == test_8) {
              temp_7 = GALGAS_string::makeEmptyString () ;
            }
            TC_Array <C_FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (enumerator_15283.current_mActualSelector (HERE).getter_location (SOURCE_FILE ("instruction-concat.galgas", 407)), GALGAS_string ("the selector should be '!").add_operation (enumerator_15317.current_mFormalSelector (HERE).getter_string (SOURCE_FILE ("instruction-concat.galgas", 408)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 408)).add_operation (temp_7, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 408)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 408)), fixItArray9  COMMA_SOURCE_FILE ("instruction-concat.galgas", 407)) ;
          }
        }
        {
        routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_15317.current_mFormalArgumentType (HERE), var_expression_15568.getter_mResultType (SOURCE_FILE ("instruction-concat.galgas", 410)), enumerator_15283.current_mEndOfExpressionLocation (HERE), var_expression_15568, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 410)) ;
        }
        var_effectiveParameterList_15251.addAssign_operation (var_expression_15568  COMMA_SOURCE_FILE ("instruction-concat.galgas", 411)) ;
        enumerator_15283.gotoNextObject () ;
        enumerator_15317.gotoNextObject () ;
      }
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_plusEqualnstructionForGeneration::constructor_new (var_targetVariableCppName_14120, var_targetType_14089, var_nameForCheckingFormalParameterUsing_14165, object->mProperty_mInstructionLocation, object->mProperty_mStructAttributeList, var_effectiveParameterList_15251  COMMA_SOURCE_FILE ("instruction-concat.galgas", 414))  COMMA_SOURCE_FILE ("instruction-concat.galgas", 414)) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_plusEqualElementsInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_plusEqualElementsInstructionAST.mSlotID,
                                                   extensionMethod_plusEqualElementsInstructionAST_analyzeSemanticInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_plusEqualElementsInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_plusEqualElementsInstructionAST_analyzeSemanticInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@plusEqualnstructionForGeneration generateInstruction'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  extensionMethod_addHeaderFileName (object->mProperty_mTargetType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 446)) ;
  GALGAS_stringlist var_parameterList_17328 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-concat.galgas", 447)) ;
  cEnumerator_semanticExpressionListForGeneration enumerator_17372 (object->mProperty_mExpressionList, kENUMERATION_UP) ;
  while (enumerator_17372.hasCurrentObject ()) {
    GALGAS_string var_parameter_17555 ;
    callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_17372.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_17555, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 449)) ;
    var_parameterList_17328.addAssign_operation (var_parameter_17555  COMMA_SOURCE_FILE ("instruction-concat.galgas", 456)) ;
    enumerator_17372.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (object->mProperty_mNameForCheckingFormalParameterUsing COMMA_SOURCE_FILE ("instruction-concat.galgas", 459)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(object->mProperty_mReceiverCppName, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 460)) ;
  cEnumerator_lstringlist enumerator_17767 (object->mProperty_mStructAttributeList, kENUMERATION_UP) ;
  while (enumerator_17767.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_17767.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-concat.galgas", 462)).getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 462)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 462)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 462)) ;
    enumerator_17767.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".addAssign_operation ("), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 465)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (object->mProperty_mReceiverCppName COMMA_SOURCE_FILE ("instruction-concat.galgas", 466)) ;
  }
  cEnumerator_stringlist enumerator_18026 (var_parameterList_17328, kENUMERATION_UP) ;
  while (enumerator_18026.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_18026.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 468)) ;
    if (enumerator_18026.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 469)) ;
    }
    enumerator_18026.gotoNextObject () ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = object->mProperty_mTargetType.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 471)).getter_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("instruction-concat.galgas", 471)).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 472)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 472)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 472)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 473)) COMMA_SOURCE_FILE ("instruction-concat.galgas", 473)) ;
      }
    }
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (object->mProperty_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 475)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 475)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 475)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 475)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_plusEqualnstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_plusEqualnstructionForGeneration.mSlotID,
                                            extensionMethod_plusEqualnstructionForGeneration_generateInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_plusEqualnstructionForGeneration_generateInstruction (defineExtensionMethod_plusEqualnstructionForGeneration_generateInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@opEqualInstructionForGeneration generateInstruction'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  extensionMethod_addHeaderFileName (object->mProperty_mTargetType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 498)) ;
  GALGAS_string var_sourceVar_19476 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mSourceExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_19476, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 499)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (object->mProperty_mNameForCheckingFormalParameterUsing COMMA_SOURCE_FILE ("instruction-concat.galgas", 506)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(object->mProperty_mTargetVariableCppName, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 507)) ;
  cEnumerator_lstringlist enumerator_19638 (object->mProperty_mStructAttributeList, kENUMERATION_UP) ;
  while (enumerator_19638.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_19638.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-concat.galgas", 509)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 509)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 509)) ;
    enumerator_19638.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".").add_operation (object->mProperty_mGeneratedMethod, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 511)).add_operation (GALGAS_string ("("), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 511)).add_operation (var_sourceVar_19476, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 511)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 511)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 512)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 512)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 512)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (object->mProperty_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 513)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 513)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 513)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 513)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 514)) COMMA_SOURCE_FILE ("instruction-concat.galgas", 514)) ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (object->mProperty_mTargetVariableCppName COMMA_SOURCE_FILE ("instruction-concat.galgas", 515)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_opEqualInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_opEqualInstructionForGeneration.mSlotID,
                                            extensionMethod_opEqualInstructionForGeneration_generateInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_opEqualInstructionForGeneration_generateInstruction (defineExtensionMethod_opEqualInstructionForGeneration_generateInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@dropInstructionAST enterInstructionInSemanticContext'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_dropInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * /* inObject */,
                                                                                  GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_dropInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_dropInstructionAST.mSlotID,
                                                          extensionMethod_dropInstructionAST_enterInstructionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_dropInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_dropInstructionAST_enterInstructionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Overriding extension method '@dropInstructionAST analyzeSemanticInstruction'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_dropInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                           const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                           GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                           const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                           GALGAS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                           GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_dropInstructionAST * object = (const cPtr_dropInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_dropInstructionAST) ;
  cEnumerator_lstringlist enumerator_2203 (object->mProperty_mDropList, kENUMERATION_UP) ;
  while (enumerator_2203.hasCurrentObject ()) {
    {
    GALGAS_unifiedTypeMap_2D_proxy joker_2257_3 ; // Joker input parameter
    GALGAS_string joker_2257_2 ; // Joker input parameter
    GALGAS_string joker_2257_1 ; // Joker input parameter
    ioArgument_ioVariableMap.setter_searchForDropAccess (enumerator_2203.current_mValue (HERE), joker_2257_3, joker_2257_2, joker_2257_1, inCompiler COMMA_SOURCE_FILE ("instruction-drop.galgas", 54)) ;
    }
    enumerator_2203.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_dropInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_dropInstructionAST.mSlotID,
                                                   extensionMethod_dropInstructionAST_analyzeSemanticInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_dropInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_dropInstructionAST_analyzeSemanticInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Overriding extension method '@errorInstructionAST enterInstructionInSemanticContext'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_errorInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_errorInstructionAST * object = (const cPtr_errorInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_errorInstructionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mLocationExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 109)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mMessageExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 110)) ;
  extensionMethod_enterFixItListInSemanticContext (object->mProperty_mFixitListAST, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 111)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_errorInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_errorInstructionAST.mSlotID,
                                                          extensionMethod_errorInstructionAST_enterInstructionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_errorInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_errorInstructionAST_enterInstructionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Routine 'analyzeErrorOrWarningInstruction'                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_analyzeErrorOrWarningInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                               const GALGAS_semanticExpressionAST constinArgument_inLocationExpression,
                                               const GALGAS_semanticExpressionAST constinArgument_inMessageExpression,
                                               const GALGAS_fixitListAST constinArgument_inFixitListAST,
                                               const GALGAS_location constinArgument_inErrorLocation,
                                               const GALGAS_string constinArgument_inErrorOrWarningString,
                                               GALGAS_variableMap & ioArgument_ioVariableMap,
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
      GALGAS_getterMap var_getterMap_6591 = outArgument_outLocationExpression.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 174)).getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 174)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_getterMap_6591.getter_hasKey (GALGAS_string ("location") COMMA_SOURCE_FILE ("instruction-error.galgas", 175)).boolEnum () ;
        if (kBoolTrue == test_1) {
          GALGAS_methodKind var_kind_6772 ;
          GALGAS_functionSignature var_argumentTypeList_6821 ;
          GALGAS_bool var_hasCompilerArgument_6871 ;
          GALGAS_unifiedTypeMap_2D_proxy var_returnedType_6919 ;
          GALGAS_location joker_6831 ; // Joker input parameter
          GALGAS_methodQualifier joker_6929_2 ; // Joker input parameter
          GALGAS_string joker_6929_1 ; // Joker input parameter
          var_getterMap_6591.method_searchKey (GALGAS_string ("location").getter_nowhere (SOURCE_FILE ("instruction-error.galgas", 177)), var_kind_6772, var_argumentTypeList_6821, joker_6831, var_hasCompilerArgument_6871, var_returnedType_6919, joker_6929_2, joker_6929_1, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 176)) ;
          enumGalgasBool test_2 = kBoolTrue ;
          if (kBoolTrue == test_2) {
            test_2 = GALGAS_bool (kIsNotEqual, var_argumentTypeList_6821.getter_length (SOURCE_FILE ("instruction-error.galgas", 185)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
            if (kBoolTrue == test_2) {
              TC_Array <C_FixItDescription> fixItArray3 ;
              inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the ").add_operation (constinArgument_inErrorOrWarningString, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 187)).add_operation (GALGAS_string (" location expression type is '@"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 187)).add_operation (outArgument_outLocationExpression.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 187)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 187)).add_operation (GALGAS_string ("' and defines a 'location' getter with arguments; it should be either of the '@location' type,"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 187)).add_operation (GALGAS_string (" either defines a 'location' getter without argument that returns an '@location' object"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 188)), fixItArray3  COMMA_SOURCE_FILE ("instruction-error.galgas", 186)) ;
            }
          }
          if (kBoolFalse == test_2) {
            enumGalgasBool test_4 = kBoolTrue ;
            if (kBoolTrue == test_4) {
              test_4 = GALGAS_bool (kIsNotEqual, var_returnedType_6919.objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLocationType (HERE))).boolEnum () ;
              if (kBoolTrue == test_4) {
                TC_Array <C_FixItDescription> fixItArray5 ;
                inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the ").add_operation (constinArgument_inErrorOrWarningString, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 192)).add_operation (GALGAS_string (" location expression type is '@"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 192)).add_operation (outArgument_outLocationExpression.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 192)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 192)).add_operation (GALGAS_string ("' and defines a 'location' getter that returns an '@"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 192)).add_operation (var_returnedType_6919.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 193)).add_operation (GALGAS_string ("' object; it should be either of the '@location' type, either defines a 'location' getter without"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 193)).add_operation (GALGAS_string (" argument that returns an '@location' object"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 194)), fixItArray5  COMMA_SOURCE_FILE ("instruction-error.galgas", 191)) ;
              }
            }
            if (kBoolFalse == test_4) {
              GALGAS_getterCallExpressionForGeneration var_conversionExpression_7872 = GALGAS_getterCallExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLocationType (HERE), constinArgument_inErrorLocation, var_kind_6772, outArgument_outLocationExpression, GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-error.galgas", 202)), constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLocationType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 203)), GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-error.galgas", 204)), var_hasCompilerArgument_6871  COMMA_SOURCE_FILE ("instruction-error.galgas", 197)) ;
              outArgument_outLocationExpression = var_conversionExpression_7872 ;
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
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) constinArgument_inMessageExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-error.galgas", 220)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, outArgument_outMessageExpression, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 217)) ;
  outArgument_outFixitListForGeneration = GALGAS_fixitListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-error.galgas", 226)) ;
  cEnumerator_fixitListAST enumerator_8940 (constinArgument_inFixitListAST, kENUMERATION_UP) ;
  while (enumerator_8940.hasCurrentObject ()) {
    switch (enumerator_8940.current_mElement (HERE).enumValue ()) {
    case GALGAS_fixitElementAST::kNotBuilt:
      break ;
    case GALGAS_fixitElementAST::kEnum_fixItRemove:
      {
        outArgument_outFixitListForGeneration.addAssign_operation (GALGAS_fixitElementForGeneration::constructor_fixItRemove (SOURCE_FILE ("instruction-error.galgas", 230))  COMMA_SOURCE_FILE ("instruction-error.galgas", 230)) ;
      }
      break ;
    case GALGAS_fixitElementAST::kEnum_fixItReplace:
      {
        const cEnumAssociatedValues_fixitElementAST_fixItReplace * extractPtr_9937 = (const cEnumAssociatedValues_fixitElementAST_fixItReplace *) (enumerator_8940.current_mElement (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_exp = extractPtr_9937->mAssociatedValue0 ;
        const GALGAS_location extractedValue_errorLocation = extractPtr_9937->mAssociatedValue1 ;
        GALGAS_semanticExpressionForGeneration var_expression_9321 ;
        callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) extractedValue_exp.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringListType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_9321, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 232)) ;
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          GALGAS_bool test_8 = GALGAS_bool (kIsNotEqual, var_expression_9321.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 240)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringListType (HERE))) ;
          if (kBoolTrue == test_8.boolEnum ()) {
            test_8 = GALGAS_bool (kIsNotEqual, var_expression_9321.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 241)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLStringListType (HERE))) ;
          }
          GALGAS_bool test_9 = test_8 ;
          if (kBoolTrue == test_9.boolEnum ()) {
            test_9 = GALGAS_bool (kIsNotEqual, var_expression_9321.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 242)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringSetType (HERE))) ;
          }
          GALGAS_bool test_10 = test_9 ;
          if (kBoolTrue == test_10.boolEnum ()) {
            test_10 = GALGAS_bool (kIsNotEqual, var_expression_9321.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 243)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringType (HERE))) ;
          }
          test_7 = test_10.boolEnum () ;
          if (kBoolTrue == test_7) {
            TC_Array <C_FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (extractedValue_errorLocation, GALGAS_string ("expression type is @").add_operation (var_expression_9321.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 244)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 244)).add_operation (GALGAS_string (", it should be an @string, @stringset, @stringlist or @lstringlist"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 244)), fixItArray11  COMMA_SOURCE_FILE ("instruction-error.galgas", 244)) ;
          }
        }
        outArgument_outFixitListForGeneration.addAssign_operation (GALGAS_fixitElementForGeneration::constructor_fixItReplace (var_expression_9321  COMMA_SOURCE_FILE ("instruction-error.galgas", 247))  COMMA_SOURCE_FILE ("instruction-error.galgas", 247)) ;
      }
      break ;
    case GALGAS_fixitElementAST::kEnum_fixItInsertBefore:
      {
        const cEnumAssociatedValues_fixitElementAST_fixItInsertBefore * extractPtr_10849 = (const cEnumAssociatedValues_fixitElementAST_fixItInsertBefore *) (enumerator_8940.current_mElement (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_exp = extractPtr_10849->mAssociatedValue0 ;
        const GALGAS_location extractedValue_errorLocation = extractPtr_10849->mAssociatedValue1 ;
        GALGAS_semanticExpressionForGeneration var_expression_10228 ;
        callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) extractedValue_exp.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringListType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_10228, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 249)) ;
        enumGalgasBool test_12 = kBoolTrue ;
        if (kBoolTrue == test_12) {
          GALGAS_bool test_13 = GALGAS_bool (kIsNotEqual, var_expression_10228.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 257)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringListType (HERE))) ;
          if (kBoolTrue == test_13.boolEnum ()) {
            test_13 = GALGAS_bool (kIsNotEqual, var_expression_10228.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 258)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLStringListType (HERE))) ;
          }
          GALGAS_bool test_14 = test_13 ;
          if (kBoolTrue == test_14.boolEnum ()) {
            test_14 = GALGAS_bool (kIsNotEqual, var_expression_10228.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 259)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringSetType (HERE))) ;
          }
          GALGAS_bool test_15 = test_14 ;
          if (kBoolTrue == test_15.boolEnum ()) {
            test_15 = GALGAS_bool (kIsNotEqual, var_expression_10228.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 260)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringType (HERE))) ;
          }
          test_12 = test_15.boolEnum () ;
          if (kBoolTrue == test_12) {
            TC_Array <C_FixItDescription> fixItArray16 ;
            inCompiler->emitSemanticError (extractedValue_errorLocation, GALGAS_string ("expression type is @").add_operation (var_expression_10228.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 261)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 261)), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 261)).add_operation (GALGAS_string (", it should be an @string, @stringset, @stringlist or @lstringlist"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 261)), fixItArray16  COMMA_SOURCE_FILE ("instruction-error.galgas", 261)) ;
          }
        }
        outArgument_outFixitListForGeneration.addAssign_operation (GALGAS_fixitElementForGeneration::constructor_fixItInsertBefore (var_expression_10228  COMMA_SOURCE_FILE ("instruction-error.galgas", 264))  COMMA_SOURCE_FILE ("instruction-error.galgas", 264)) ;
      }
      break ;
    case GALGAS_fixitElementAST::kEnum_fixItInsertAfter:
      {
        const cEnumAssociatedValues_fixitElementAST_fixItInsertAfter * extractPtr_11759 = (const cEnumAssociatedValues_fixitElementAST_fixItInsertAfter *) (enumerator_8940.current_mElement (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_exp = extractPtr_11759->mAssociatedValue0 ;
        const GALGAS_location extractedValue_errorLocation = extractPtr_11759->mAssociatedValue1 ;
        GALGAS_semanticExpressionForGeneration var_expression_11139 ;
        callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) extractedValue_exp.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringListType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_11139, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 266)) ;
        enumGalgasBool test_17 = kBoolTrue ;
        if (kBoolTrue == test_17) {
          GALGAS_bool test_18 = GALGAS_bool (kIsNotEqual, var_expression_11139.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 274)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringListType (HERE))) ;
          if (kBoolTrue == test_18.boolEnum ()) {
            test_18 = GALGAS_bool (kIsNotEqual, var_expression_11139.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 275)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLStringListType (HERE))) ;
          }
          GALGAS_bool test_19 = test_18 ;
          if (kBoolTrue == test_19.boolEnum ()) {
            test_19 = GALGAS_bool (kIsNotEqual, var_expression_11139.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 276)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringSetType (HERE))) ;
          }
          GALGAS_bool test_20 = test_19 ;
          if (kBoolTrue == test_20.boolEnum ()) {
            test_20 = GALGAS_bool (kIsNotEqual, var_expression_11139.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 277)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringType (HERE))) ;
          }
          test_17 = test_20.boolEnum () ;
          if (kBoolTrue == test_17) {
            TC_Array <C_FixItDescription> fixItArray21 ;
            inCompiler->emitSemanticError (extractedValue_errorLocation, GALGAS_string ("expression type is @").add_operation (var_expression_11139.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 278)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 278)), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 278)).add_operation (GALGAS_string (", it should be an @string, @stringset, @stringlist or @lstringlist"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 278)), fixItArray21  COMMA_SOURCE_FILE ("instruction-error.galgas", 278)) ;
          }
        }
        outArgument_outFixitListForGeneration.addAssign_operation (GALGAS_fixitElementForGeneration::constructor_fixItInsertAfter (var_expression_11139  COMMA_SOURCE_FILE ("instruction-error.galgas", 281))  COMMA_SOURCE_FILE ("instruction-error.galgas", 281)) ;
      }
      break ;
    }
    enumerator_8940.gotoNextObject () ;
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


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Overriding extension method '@errorInstructionAST analyzeSemanticInstruction'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_errorInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                            const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                            GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                            const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                            GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                            GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_errorInstructionAST * object = (const cPtr_errorInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_errorInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_locationExpression_12819 ;
  GALGAS_semanticExpressionForGeneration var_messageExpression_12846 ;
  GALGAS_fixitListForGeneration var_fixitListForGeneration_12878 ;
  {
  routine_analyzeErrorOrWarningInstruction (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, object->mProperty_mLocationExpression, object->mProperty_mMessageExpression, object->mProperty_mFixitListAST, object->mProperty_mInstructionLocation, GALGAS_string ("error"), ioArgument_ioVariableMap, var_locationExpression_12819, var_messageExpression_12846, var_fixitListForGeneration_12878, inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 302)) ;
  }
  GALGAS_stringlist var_builtVariableCppNameList_12943 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-error.galgas", 317)) ;
  cEnumerator_lstringlist enumerator_12991 (object->mProperty_mBuiltVariableList, kENUMERATION_UP) ;
  while (enumerator_12991.hasCurrentObject ()) {
    GALGAS_string var_varCppName_13063 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy joker_13046 ; // Joker input parameter
    GALGAS_string joker_13065 ; // Joker input parameter
    ioArgument_ioVariableMap.setter_searchForWriteAccess (enumerator_12991.current_mValue (HERE), joker_13046, var_varCppName_13063, joker_13065, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 319)) ;
    }
    var_builtVariableCppNameList_12943.addAssign_operation (var_varCppName_13063  COMMA_SOURCE_FILE ("instruction-error.galgas", 320)) ;
    enumerator_12991.gotoNextObject () ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_errorInstructionForGeneration::constructor_new (object->mProperty_mInstructionLocation, var_locationExpression_12819, var_messageExpression_12846, var_builtVariableCppNameList_12943, var_fixitListForGeneration_12878  COMMA_SOURCE_FILE ("instruction-error.galgas", 323))  COMMA_SOURCE_FILE ("instruction-error.galgas", 323)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_errorInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_errorInstructionAST.mSlotID,
                                                   extensionMethod_errorInstructionAST_analyzeSemanticInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_errorInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_errorInstructionAST_analyzeSemanticInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension method '@errorInstructionForGeneration generateInstruction'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  GALGAS_string var_receiverCppVarName_16437 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mReceiverExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppVarName_16437, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 402)) ;
  GALGAS_string var_messageCppVarName_16639 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mErrorExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_messageCppVarName_16639, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 410)) ;
  GALGAS_string var_fixItArrayCppName_16887 ;
  extensionMethod_generateFixIt (object->mProperty_mFixitListForGeneration, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, var_fixItArrayCppName_16887, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 418)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 427)) COMMA_SOURCE_FILE ("instruction-error.galgas", 427)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 428)).add_operation (GALGAS_string ("->emitSemanticError ("), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 428)).add_operation (var_receiverCppVarName_16437, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 428)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 429)).add_operation (var_messageCppVarName_16639, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 429)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 430)).add_operation (var_fixItArrayCppName_16887, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 430)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 431)).add_operation (extensionGetter_commaSourceFile (object->mProperty_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 432)), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 431)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 432)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 428)) ;
  cEnumerator_stringlist enumerator_17269 (object->mProperty_mBuiltVariableCppNameList, kENUMERATION_UP) ;
  while (enumerator_17269.hasCurrentObject ()) {
    {
    ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (enumerator_17269.current_mValue (HERE) COMMA_SOURCE_FILE ("instruction-error.galgas", 435)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_17269.current_mValue (HERE).add_operation (GALGAS_string (".drop () ; // Release error dropped variable\n"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 436)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 436)) ;
    enumerator_17269.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_errorInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_errorInstructionForGeneration.mSlotID,
                                            extensionMethod_errorInstructionForGeneration_generateInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_errorInstructionForGeneration_generateInstruction (defineExtensionMethod_errorInstructionForGeneration_generateInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@forInstructionAST enterInstructionInSemanticContext'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_forInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                 GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forInstructionAST * object = (const cPtr_forInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_forInstructionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mWhileExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 282)) ;
  extensionMethod_enterInstructionListInSemanticContext (object->mProperty_mBeforeInstructionList, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 283)) ;
  extensionMethod_enterInstructionListInSemanticContext (object->mProperty_mBetweenInstructionList, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 284)) ;
  extensionMethod_enterInstructionListInSemanticContext (object->mProperty_mDoInstructionList, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 285)) ;
  extensionMethod_enterInstructionListInSemanticContext (object->mProperty_mAfterInstructionList, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 286)) ;
  cEnumerator_forInstructionEnumeratedObjectListAST enumerator_9766 (object->mProperty_mEnumeratedObjectList, kENUMERATION_UP) ;
  while (enumerator_9766.hasCurrentObject ()) {
    callExtensionMethod_enterInSemanticContext ((const cPtr_abstractEnumeratedCollectionAST *) enumerator_9766.current_mEnumeratedCollection (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 288)) ;
    enumerator_9766.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_forInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_forInstructionAST.mSlotID,
                                                          extensionMethod_forInstructionAST_enterInstructionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_forInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_forInstructionAST_enterInstructionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//            Overriding extension method '@enumeratedCollectionImplicitVarInExpAST enterInSemanticContext'            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_enumeratedCollectionImplicitVarInExpAST_enterInSemanticContext (const cPtr_abstractEnumeratedCollectionAST * inObject,
                                                                                            GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumeratedCollectionImplicitVarInExpAST * object = (const cPtr_enumeratedCollectionImplicitVarInExpAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumeratedCollectionImplicitVarInExpAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mEnumeratedExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 299)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_enumeratedCollectionImplicitVarInExpAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_enumeratedCollectionImplicitVarInExpAST.mSlotID,
                                               extensionMethod_enumeratedCollectionImplicitVarInExpAST_enterInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_enumeratedCollectionImplicitVarInExpAST_enterInSemanticContext (defineExtensionMethod_enumeratedCollectionImplicitVarInExpAST_enterInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//              Overriding extension method '@enumeratedCollectionCstListInExpAST enterInSemanticContext'              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_enumeratedCollectionCstListInExpAST_enterInSemanticContext (const cPtr_abstractEnumeratedCollectionAST * inObject,
                                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumeratedCollectionCstListInExpAST * object = (const cPtr_enumeratedCollectionCstListInExpAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumeratedCollectionCstListInExpAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mEnumeratedExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 305)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_enumeratedCollectionCstListInExpAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_enumeratedCollectionCstListInExpAST.mSlotID,
                                               extensionMethod_enumeratedCollectionCstListInExpAST_enterInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_enumeratedCollectionCstListInExpAST_enterInSemanticContext (defineExtensionMethod_enumeratedCollectionCstListInExpAST_enterInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Overriding extension method '@enumeratedCollectionVarInExpAST enterInSemanticContext'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_enumeratedCollectionVarInExpAST_enterInSemanticContext (const cPtr_abstractEnumeratedCollectionAST * inObject,
                                                                                    GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumeratedCollectionVarInExpAST * object = (const cPtr_enumeratedCollectionVarInExpAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumeratedCollectionVarInExpAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mEnumeratedExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 311)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_enumeratedCollectionVarInExpAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_enumeratedCollectionVarInExpAST.mSlotID,
                                               extensionMethod_enumeratedCollectionVarInExpAST_enterInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_enumeratedCollectionVarInExpAST_enterInSemanticContext (defineExtensionMethod_enumeratedCollectionVarInExpAST_enterInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//              Overriding extension method '@enumeratedCollectionImplicitVarInExpAST analyzeEnumeration'              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_enumeratedCollectionImplicitVarInExpAST_analyzeEnumeration (const cPtr_abstractEnumeratedCollectionAST * inObject,
                                                                                        const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                        GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                        GALGAS_localInitializedVariableList & ioArgument_ioLocalConstantListForDoBranch,
                                                                                        GALGAS_string & outArgument_outEnumeratorCppName,
                                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outEnumerationExpression,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumeratedCollectionImplicitVarInExpAST * object = (const cPtr_enumeratedCollectionImplicitVarInExpAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumeratedCollectionImplicitVarInExpAST) ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mEnumeratedExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-for.galgas", 341)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, outArgument_outEnumerationExpression, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 338)) ;
  outArgument_outEnumeratorCppName = GALGAS_string ("enumerator_").add_operation (object->mProperty_mEndOfEnumerationExpression.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 347)).getter_string (SOURCE_FILE ("instruction-for.galgas", 347)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 347)) ;
  GALGAS_enumerationDescriptorList var_enumerationDescriptorList_12512 = outArgument_outEnumerationExpression.getter_mResultType (SOURCE_FILE ("instruction-for.galgas", 348)).getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 348)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, var_enumerationDescriptorList_12512.getter_length (SOURCE_FILE ("instruction-for.galgas", 349)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOfEnumerationExpression, GALGAS_string ("an '@").add_operation (outArgument_outEnumerationExpression.getter_mResultType (SOURCE_FILE ("instruction-for.galgas", 350)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 350)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 350)).add_operation (GALGAS_string ("' object cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 350)), fixItArray1  COMMA_SOURCE_FILE ("instruction-for.galgas", 350)) ;
    }
  }
  cEnumerator_enumerationDescriptorList enumerator_12833 (var_enumerationDescriptorList_12512, kENUMERATION_UP) ;
  while (enumerator_12833.hasCurrentObject ()) {
    ioArgument_ioLocalConstantListForDoBranch.addAssign_operation (enumerator_12833.current_mEnumeratedType (HERE), GALGAS_lstring::constructor_new (object->mProperty_mPrefix.getter_string (HERE).add_operation (enumerator_12833.current_mEnumerationName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 356)), object->mProperty_mEndOfEnumerationExpression  COMMA_SOURCE_FILE ("instruction-for.galgas", 356)), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 357)).add_operation (enumerator_12833.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-for.galgas", 357)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 357)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 357))  COMMA_SOURCE_FILE ("instruction-for.galgas", 354)) ;
    enumerator_12833.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_enumeratedCollectionImplicitVarInExpAST_analyzeEnumeration (void) {
  enterExtensionMethod_analyzeEnumeration (kTypeDescriptor_GALGAS_enumeratedCollectionImplicitVarInExpAST.mSlotID,
                                           extensionMethod_enumeratedCollectionImplicitVarInExpAST_analyzeEnumeration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_enumeratedCollectionImplicitVarInExpAST_analyzeEnumeration (defineExtensionMethod_enumeratedCollectionImplicitVarInExpAST_analyzeEnumeration, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Overriding extension method '@enumeratedCollectionCstListInExpAST analyzeEnumeration'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_enumeratedCollectionCstListInExpAST_analyzeEnumeration (const cPtr_abstractEnumeratedCollectionAST * inObject,
                                                                                    const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                    GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                    const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                    GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                    GALGAS_localInitializedVariableList & ioArgument_ioLocalConstantListForDoBranch,
                                                                                    GALGAS_string & outArgument_outEnumeratorCppName,
                                                                                    GALGAS_semanticExpressionForGeneration & outArgument_outEnumerationExpression,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumeratedCollectionCstListInExpAST * object = (const cPtr_enumeratedCollectionCstListInExpAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumeratedCollectionCstListInExpAST) ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mEnumeratedExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-for.galgas", 375)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, outArgument_outEnumerationExpression, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 372)) ;
  outArgument_outEnumeratorCppName = GALGAS_string ("enumerator_").add_operation (object->mProperty_mEndOfEnumerationExpression.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 381)).getter_string (SOURCE_FILE ("instruction-for.galgas", 381)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 381)) ;
  GALGAS_enumerationDescriptorList var_enumerationDescriptorList_13984 = outArgument_outEnumerationExpression.getter_mResultType (SOURCE_FILE ("instruction-for.galgas", 382)).getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 382)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, var_enumerationDescriptorList_13984.getter_length (SOURCE_FILE ("instruction-for.galgas", 383)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOfEnumerationExpression, GALGAS_string ("an '@").add_operation (outArgument_outEnumerationExpression.getter_mResultType (SOURCE_FILE ("instruction-for.galgas", 384)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 384)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 384)).add_operation (GALGAS_string ("' object cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 384)), fixItArray1  COMMA_SOURCE_FILE ("instruction-for.galgas", 384)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsEqual, object->mProperty_mElementList.getter_length (SOURCE_FILE ("instruction-for.galgas", 387)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (object->mProperty_mEndsWithEllipsis.operator_not (SOURCE_FILE ("instruction-for.galgas", 387)) COMMA_SOURCE_FILE ("instruction-for.galgas", 387)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_enumerationDescriptorList var_currentTypedAttributeList_14352 = outArgument_outEnumerationExpression.getter_mResultType (SOURCE_FILE ("instruction-for.galgas", 388)).getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 388)) ;
        cEnumerator_enumerationDescriptorList enumerator_14460 (var_currentTypedAttributeList_14352, kENUMERATION_UP) ;
        while (enumerator_14460.hasCurrentObject ()) {
          {
          ioArgument_ioVariableMap.setter_insertUsedLocalConstant (GALGAS_lstring::constructor_new (enumerator_14460.current_mEnumerationName (HERE), object->mProperty_mEndOfEnumerationExpression  COMMA_SOURCE_FILE ("instruction-for.galgas", 391)), enumerator_14460.current_mEnumeratedType (HERE), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 393)).add_operation (enumerator_14460.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-for.galgas", 393)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 393)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 393)), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 394)).add_operation (enumerator_14460.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-for.galgas", 394)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 394)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 394)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 390)) ;
          }
          enumerator_14460.gotoNextObject () ;
        }
      }
    }
    if (kBoolFalse == test_2) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = object->mProperty_mEndsWithEllipsis.operator_not (SOURCE_FILE ("instruction-for.galgas", 397)).operator_and (GALGAS_bool (kIsNotEqual, object->mProperty_mElementList.getter_length (SOURCE_FILE ("instruction-for.galgas", 397)).objectCompare (var_enumerationDescriptorList_13984.getter_length (SOURCE_FILE ("instruction-for.galgas", 397)))) COMMA_SOURCE_FILE ("instruction-for.galgas", 397)).boolEnum () ;
        if (kBoolTrue == test_3) {
          GALGAS_string temp_4 ;
          const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, var_enumerationDescriptorList_13984.getter_length (SOURCE_FILE ("instruction-for.galgas", 401)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
          if (kBoolTrue == test_5) {
            temp_4 = GALGAS_string ("s") ;
          }else if (kBoolFalse == test_5) {
            temp_4 = GALGAS_string::makeEmptyString () ;
          }
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (object->mProperty_mEndOfEnumerationExpression, GALGAS_string ("the '@").add_operation (outArgument_outEnumerationExpression.getter_mResultType (SOURCE_FILE ("instruction-for.galgas", 399)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 399)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 399)).add_operation (GALGAS_string ("' type requires "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 399)).add_operation (var_enumerationDescriptorList_13984.getter_length (SOURCE_FILE ("instruction-for.galgas", 400)).getter_string (SOURCE_FILE ("instruction-for.galgas", 400)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 399)).add_operation (GALGAS_string (" argument"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 400)).add_operation (temp_4, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 400)).add_operation (GALGAS_string (" for enumeration: this list provides "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 401)).add_operation (object->mProperty_mElementList.getter_length (SOURCE_FILE ("instruction-for.galgas", 403)).getter_string (SOURCE_FILE ("instruction-for.galgas", 403)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 402)), fixItArray6  COMMA_SOURCE_FILE ("instruction-for.galgas", 398)) ;
        }
      }
      if (kBoolFalse == test_3) {
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          test_7 = object->mProperty_mEndsWithEllipsis.operator_and (GALGAS_bool (kIsStrictSup, object->mProperty_mElementList.getter_length (SOURCE_FILE ("instruction-for.galgas", 404)).objectCompare (var_enumerationDescriptorList_13984.getter_length (SOURCE_FILE ("instruction-for.galgas", 404)))) COMMA_SOURCE_FILE ("instruction-for.galgas", 404)).boolEnum () ;
          if (kBoolTrue == test_7) {
            GALGAS_string temp_8 ;
            const enumGalgasBool test_9 = GALGAS_bool (kIsStrictSup, var_enumerationDescriptorList_13984.getter_length (SOURCE_FILE ("instruction-for.galgas", 408)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
            if (kBoolTrue == test_9) {
              temp_8 = GALGAS_string ("s") ;
            }else if (kBoolFalse == test_9) {
              temp_8 = GALGAS_string::makeEmptyString () ;
            }
            TC_Array <C_FixItDescription> fixItArray10 ;
            inCompiler->emitSemanticError (object->mProperty_mEndOfEnumerationExpression, GALGAS_string ("the '@").add_operation (outArgument_outEnumerationExpression.getter_mResultType (SOURCE_FILE ("instruction-for.galgas", 406)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 406)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 406)).add_operation (GALGAS_string ("' type requires "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 406)).add_operation (var_enumerationDescriptorList_13984.getter_length (SOURCE_FILE ("instruction-for.galgas", 407)).getter_string (SOURCE_FILE ("instruction-for.galgas", 407)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 406)).add_operation (GALGAS_string (" argument"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 407)).add_operation (temp_8, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 407)).add_operation (GALGAS_string (" or less for enumeration: this list provides "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 408)).add_operation (object->mProperty_mElementList.getter_length (SOURCE_FILE ("instruction-for.galgas", 410)).getter_string (SOURCE_FILE ("instruction-for.galgas", 410)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 409)), fixItArray10  COMMA_SOURCE_FILE ("instruction-for.galgas", 405)) ;
          }
        }
        if (kBoolFalse == test_7) {
          cEnumerator_forInstructionEnumeratedObjectElementListAST enumerator_15780 (object->mProperty_mElementList, kENUMERATION_UP) ;
          cEnumerator_enumerationDescriptorList enumerator_15813 (var_enumerationDescriptorList_13984, kENUMERATION_UP) ;
          while (enumerator_15780.hasCurrentObject () && enumerator_15813.hasCurrentObject ()) {
            enumGalgasBool test_11 = kBoolTrue ;
            if (kBoolTrue == test_11) {
              test_11 = GALGAS_bool (kIsNotEqual, enumerator_15780.current_mOptionalConstantName (HERE).getter_string (SOURCE_FILE ("instruction-for.galgas", 413)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_11) {
                enumGalgasBool test_12 = kBoolTrue ;
                if (kBoolTrue == test_12) {
                  test_12 = GALGAS_bool (kIsNotEqual, enumerator_15780.current_mOptionalTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                  if (kBoolTrue == test_12) {
                    GALGAS_unifiedTypeMap_2D_proxy var_foundType_15968 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), enumerator_15780.current_mOptionalTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 415)) ;
                    enumGalgasBool test_13 = kBoolTrue ;
                    if (kBoolTrue == test_13) {
                      test_13 = GALGAS_bool (kIsNotEqual, var_foundType_15968.objectCompare (enumerator_15813.current_mEnumeratedType (HERE))).boolEnum () ;
                      if (kBoolTrue == test_13) {
                        TC_Array <C_FixItDescription> fixItArray14 ;
                        inCompiler->emitSemanticError (enumerator_15780.current_mOptionalTypeName (HERE).getter_location (SOURCE_FILE ("instruction-for.galgas", 420)), GALGAS_string ("incorrect '@").add_operation (var_foundType_15968.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 420)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 420)).add_operation (GALGAS_string ("' type: '@"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 420)).add_operation (enumerator_15813.current_mEnumeratedType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 420)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 420)).add_operation (GALGAS_string ("' type required here"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 420)), fixItArray14  COMMA_SOURCE_FILE ("instruction-for.galgas", 420)) ;
                      }
                    }
                  }
                }
                ioArgument_ioLocalConstantListForDoBranch.addAssign_operation (enumerator_15813.current_mEnumeratedType (HERE), enumerator_15780.current_mOptionalConstantName (HERE), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 423)).add_operation (enumerator_15813.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-for.galgas", 423)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 423)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 423))  COMMA_SOURCE_FILE ("instruction-for.galgas", 423)) ;
              }
            }
            enumerator_15780.gotoNextObject () ;
            enumerator_15813.gotoNextObject () ;
          }
        }
      }
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_enumeratedCollectionCstListInExpAST_analyzeEnumeration (void) {
  enterExtensionMethod_analyzeEnumeration (kTypeDescriptor_GALGAS_enumeratedCollectionCstListInExpAST.mSlotID,
                                           extensionMethod_enumeratedCollectionCstListInExpAST_analyzeEnumeration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_enumeratedCollectionCstListInExpAST_analyzeEnumeration (defineExtensionMethod_enumeratedCollectionCstListInExpAST_analyzeEnumeration, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension method '@enumeratedCollectionVarInExpAST analyzeEnumeration'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_enumeratedCollectionVarInExpAST_analyzeEnumeration (const cPtr_abstractEnumeratedCollectionAST * inObject,
                                                                                const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                GALGAS_localInitializedVariableList & ioArgument_ioLocalConstantListForDoBranch,
                                                                                GALGAS_string & outArgument_outEnumeratorCppName,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outEnumerationExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumeratedCollectionVarInExpAST * object = (const cPtr_enumeratedCollectionVarInExpAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumeratedCollectionVarInExpAST) ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mEnumeratedExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-for.galgas", 444)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, outArgument_outEnumerationExpression, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 441)) ;
  outArgument_outEnumeratorCppName = GALGAS_string ("enumerator_").add_operation (object->mProperty_mEndOfEnumerationExpression.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 450)).getter_string (SOURCE_FILE ("instruction-for.galgas", 450)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 450)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_enumeratedElementType_17427 = outArgument_outEnumerationExpression.getter_mResultType (SOURCE_FILE ("instruction-for.galgas", 451)).getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 451)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_enumeratedElementType_17427.getter_isNull (SOURCE_FILE ("instruction-for.galgas", 452)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOfEnumerationExpression, GALGAS_string ("an '@").add_operation (outArgument_outEnumerationExpression.getter_mResultType (SOURCE_FILE ("instruction-for.galgas", 453)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 453)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 453)).add_operation (GALGAS_string ("' object cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 453)), fixItArray1  COMMA_SOURCE_FILE ("instruction-for.galgas", 453)) ;
    }
  }
  if (kBoolFalse == test_0) {
    ioArgument_ioLocalConstantListForDoBranch.addAssign_operation (var_enumeratedElementType_17427, object->mProperty_mEnumerationVariable, outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 455))  COMMA_SOURCE_FILE ("instruction-for.galgas", 455)) ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsNotEqual, object->mProperty_mEnumerationOptionalTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_unifiedTypeMap_2D_proxy var_explicitType_17905 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), object->mProperty_mEnumerationOptionalTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 459)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsNotEqual, var_enumeratedElementType_17427.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 463)).objectCompare (var_explicitType_17905.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 463)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (object->mProperty_mEnumerationOptionalTypeName.getter_location (SOURCE_FILE ("instruction-for.galgas", 464)), GALGAS_string ("the '@").add_operation (var_enumeratedElementType_17427.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 464)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 464)).add_operation (GALGAS_string ("' type is expected here"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 464)), fixItArray4  COMMA_SOURCE_FILE ("instruction-for.galgas", 464)) ;
        }
      }
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_enumeratedCollectionVarInExpAST_analyzeEnumeration (void) {
  enterExtensionMethod_analyzeEnumeration (kTypeDescriptor_GALGAS_enumeratedCollectionVarInExpAST.mSlotID,
                                           extensionMethod_enumeratedCollectionVarInExpAST_analyzeEnumeration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_enumeratedCollectionVarInExpAST_analyzeEnumeration (defineExtensionMethod_enumeratedCollectionVarInExpAST_analyzeEnumeration, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@forInstructionAST analyzeSemanticInstruction'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_forInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                          const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                          GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                          GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                          GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forInstructionAST * object = (const cPtr_forInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_forInstructionAST) ;
  {
  ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 480)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openBranch (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 481)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 483)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_before_5F_instructionList_18909 ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 489)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 490)), object->mProperty_mBeforeInstructionList, object->mProperty_mEndOf_5F_before_5F_branch, ioArgument_ioVariableMap, var_before_5F_instructionList_18909, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 485)) ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mProperty_mEndOf_5F_before_5F_branch, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 496)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 498)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_between_5F_instructionList_19403 ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 504)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 505)), object->mProperty_mBetweenInstructionList, object->mProperty_mEndOf_5F_between_5F_branch, ioArgument_ioVariableMap, var_between_5F_instructionList_19403, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 500)) ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mProperty_mEndOf_5F_between_5F_branch, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 511)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 513)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_after_5F_instructionList_20175 ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 518)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 519)), object->mProperty_mAfterInstructionList, object->mProperty_mEndOf_5F_after_5F_branch, ioArgument_ioVariableMap, var_after_5F_instructionList_20175, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 514)) ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mProperty_mEndOf_5F_after_5F_branch, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 525)) ;
  }
  GALGAS_localInitializedVariableList var_localConstantListForDoBranch_20327 = GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 527)) ;
  GALGAS_forInstructionEnumeratedObjectListForGeneration var_enumerationList_20399 = GALGAS_forInstructionEnumeratedObjectListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 528)) ;
  cEnumerator_forInstructionEnumeratedObjectListAST enumerator_20438 (object->mProperty_mEnumeratedObjectList, kENUMERATION_UP) ;
  while (enumerator_20438.hasCurrentObject ()) {
    GALGAS_string var_enumeratorCppName_20674 ;
    GALGAS_semanticExpressionForGeneration var_enumerationExpression_20740 ;
    callExtensionMethod_analyzeEnumeration ((const cPtr_abstractEnumeratedCollectionAST *) enumerator_20438.current_mEnumeratedCollection (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_localConstantListForDoBranch_20327, var_enumeratorCppName_20674, var_enumerationExpression_20740, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 530)) ;
    GALGAS_string temp_0 ;
    const enumGalgasBool test_1 = enumerator_20438.current_mAscending (HERE).boolEnum () ;
    if (kBoolTrue == test_1) {
      temp_0 = GALGAS_string ("UP") ;
    }else if (kBoolFalse == test_1) {
      temp_0 = GALGAS_string ("DOWN") ;
    }
    var_enumerationList_20399.addAssign_operation (temp_0, var_enumerationExpression_20740, var_enumeratorCppName_20674  COMMA_SOURCE_FILE ("instruction-for.galgas", 540)) ;
    enumerator_20438.gotoNextObject () ;
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 546)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openBranch (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 547)) ;
  }
  cEnumerator_localInitializedVariableList enumerator_21064 (var_localConstantListForDoBranch_20327, kENUMERATION_UP) ;
  while (enumerator_21064.hasCurrentObject ()) {
    {
    ioArgument_ioVariableMap.setter_insertUsedLocalConstant (enumerator_21064.current (HERE).getter_mName (HERE), enumerator_21064.current (HERE).getter_mType (HERE), enumerator_21064.current (HERE).getter_mCppName (HERE), enumerator_21064.current (HERE).getter_mCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 550)) ;
    }
    enumerator_21064.gotoNextObject () ;
  }
  GALGAS_semanticExpressionForGeneration var_uncheckedWhileExpression_21487 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mWhileExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-for.galgas", 561)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_uncheckedWhileExpression_21487, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 558)) ;
  GALGAS_semanticExpressionForGeneration var_whileExpression_21660 ;
  {
  routine_checkExpressionIsBoolean (constinArgument_inAnalysisContext, object->mProperty_mEndOf_5F_while_5F_expression, var_uncheckedWhileExpression_21487, var_whileExpression_21660, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 566)) ;
  }
  {
  ioArgument_ioVariableMap.setter_closeBranch (object->mProperty_mEndOf_5F_while_5F_expression, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 573)) ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mProperty_mEndOf_5F_while_5F_expression, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 574)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 576)) ;
  }
  GALGAS_string var_indexCppName_21873 = GALGAS_string::makeEmptyString () ;
  GALGAS_localConstantList var_indexDeclaration_21916 = GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 578)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsNotEqual, object->mProperty_mIndexVariableName.getter_string (SOURCE_FILE ("instruction-for.galgas", 579)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      var_indexCppName_21873 = GALGAS_string ("index_").add_operation (object->mProperty_mInstructionLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 580)).getter_string (SOURCE_FILE ("instruction-for.galgas", 580)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 580)) ;
      var_indexDeclaration_21916.addAssign_operation (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mUIntType (HERE), object->mProperty_mIndexVariableName, GALGAS_bool (false), var_indexCppName_21873  COMMA_SOURCE_FILE ("instruction-for.galgas", 581)) ;
    }
  }
  GALGAS_semanticInstructionListForGeneration var_do_5F_instructionList_22267 ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_indexDeclaration_21916, var_localConstantListForDoBranch_20327, object->mProperty_mDoInstructionList, object->mProperty_mEndOf_5F_do_5F_branch, ioArgument_ioVariableMap, var_do_5F_instructionList_22267, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 589)) ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mProperty_mEndOf_5F_foreach_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 601)) ;
  }
  {
  ioArgument_ioVariableMap.setter_closeBranch (object->mProperty_mEndOf_5F_foreach_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 603)) ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mProperty_mEndOf_5F_foreach_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 604)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_forInstructionForGeneration::constructor_new (object->mProperty_mInstructionLocation, var_enumerationList_20399, var_indexCppName_21873, var_whileExpression_21660, var_before_5F_instructionList_18909, var_between_5F_instructionList_19403, var_do_5F_instructionList_22267, var_after_5F_instructionList_20175  COMMA_SOURCE_FILE ("instruction-for.galgas", 606))  COMMA_SOURCE_FILE ("instruction-for.galgas", 606)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_forInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_forInstructionAST.mSlotID,
                                                   extensionMethod_forInstructionAST_analyzeSemanticInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_forInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_forInstructionAST_analyzeSemanticInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@forInstructionForGeneration generateInstruction'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  GALGAS_stringlist var_enumerationVarCppNameList_24744 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 652)) ;
  cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_24783 (object->mProperty_mEnumeratedObjectList, kENUMERATION_UP) ;
  while (enumerator_24783.hasCurrentObject ()) {
    GALGAS_string var_enumerationVar_24813 ;
    callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_24783.current_mEnumeratedExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_enumerationVar_24813, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 655)) ;
    var_enumerationVarCppNameList_24744.addAssign_operation (var_enumerationVar_24813  COMMA_SOURCE_FILE ("instruction-for.galgas", 662)) ;
    enumerator_24783.gotoNextObject () ;
  }
  cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_25091 (object->mProperty_mEnumeratedObjectList, kENUMERATION_UP) ;
  cEnumerator_stringlist enumerator_25124 (var_enumerationVarCppNameList_24744, kENUMERATION_UP) ;
  while (enumerator_25091.hasCurrentObject () && enumerator_25124.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cEnumerator_").add_operation (enumerator_25091.current_mEnumeratedExpression (HERE).getter_mResultType (SOURCE_FILE ("instruction-for.galgas", 665)).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 665)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 665)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 665)).add_operation (enumerator_25091.current_mEnumeratorCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 666)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 666)).add_operation (enumerator_25124.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 666)).add_operation (GALGAS_string (", kENUMERATION_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 666)).add_operation (enumerator_25091.current_mEnumerationOrder (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 667)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 667)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 665)) ;
    enumerator_25091.gotoNextObject () ;
    enumerator_25124.gotoNextObject () ;
  }
  GALGAS_bool var_whileExpressionIsAllwaysTrue_25408 = callExtensionGetter_isTrueExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mWhileExpression.ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 670)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictSup, object->mProperty_mBeforeInstructionList.getter_length (SOURCE_FILE ("instruction-for.galgas", 672)).add_operation (object->mProperty_mAfterInstructionList.getter_length (SOURCE_FILE ("instruction-for.galgas", 672)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 672)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_or (var_whileExpressionIsAllwaysTrue_25408.operator_not (SOURCE_FILE ("instruction-for.galgas", 672)) COMMA_SOURCE_FILE ("instruction-for.galgas", 672)).boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsNotEqual, object->mProperty_mIndexVariableCppName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_1) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_uint ").add_operation (object->mProperty_mIndexVariableCppName, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 675)).add_operation (GALGAS_string (" ((uint32_t) 0) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 675)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 675)) ;
        }
      }
      GALGAS_string var_boolVarCppName_25818 = GALGAS_string ("bool_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-for.galgas", 677)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 677)) ;
      ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 677)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = var_whileExpressionIsAllwaysTrue_25408.boolEnum () ;
        if (kBoolTrue == test_2) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const bool ").add_operation (var_boolVarCppName_25818, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 679)).add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 679)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 679)) ;
        }
      }
      if (kBoolFalse == test_2) {
        GALGAS_string var_whileVar_26037 ;
        callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mWhileExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_whileVar_26037, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 682)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("bool ").add_operation (var_boolVarCppName_25818, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 683)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 683)).add_operation (var_whileVar_26037, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 683)).add_operation (GALGAS_string (".isValidAndTrue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 683)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 683)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 685)) ;
      cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_26352 (object->mProperty_mEnumeratedObjectList, kENUMERATION_UP) ;
      while (enumerator_26352.hasCurrentObject ()) {
        ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_26352.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject () && "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 687)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 687)) ;
        enumerator_26352.gotoNextObject () ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(var_boolVarCppName_25818.add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 689)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 689)) ;
      {
      routine_generateInstructionList (ioArgument_ioInclusionSet, object->mProperty_mBeforeInstructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 690)) ;
      }
      {
      ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 698)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("while ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 699)) ;
      cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_26825 (object->mProperty_mEnumeratedObjectList, kENUMERATION_UP) ;
      while (enumerator_26825.hasCurrentObject ()) {
        ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_26825.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject () && "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 701)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 701)) ;
        enumerator_26825.gotoNextObject () ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(var_boolVarCppName_25818.add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 703)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 703)) ;
      {
      routine_generateInstructionList (ioArgument_ioInclusionSet, object->mProperty_mDoInstructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 705)) ;
      }
      cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_27276 (object->mProperty_mEnumeratedObjectList, kENUMERATION_UP) ;
      while (enumerator_27276.hasCurrentObject ()) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (enumerator_27276.current_mEnumeratorCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 715)).add_operation (GALGAS_string (".gotoNextObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 715)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 715)) ;
        enumerator_27276.gotoNextObject () ;
      }
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsNotEqual, object->mProperty_mIndexVariableCppName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_3) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (object->mProperty_mIndexVariableCppName, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 718)).add_operation (GALGAS_string (".increment () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 718)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 718)) ;
        }
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = var_whileExpressionIsAllwaysTrue_25408.operator_not (SOURCE_FILE ("instruction-for.galgas", 721)).boolEnum () ;
        if (kBoolTrue == test_4) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 722)) ;
          cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_27640 (object->mProperty_mEnumeratedObjectList, kENUMERATION_UP) ;
          while (enumerator_27640.hasCurrentObject ()) {
            ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_27640.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject ()"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 724)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 724)) ;
            if (enumerator_27640.hasNextObject ()) {
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" && "), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 725)) ;
            }
            enumerator_27640.gotoNextObject () ;
          }
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 727)) ;
          GALGAS_string var_whileVar_27819 ;
          callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mWhileExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_whileVar_27819, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 729)) ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("    ").add_operation (var_boolVarCppName_25818, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 736)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 736)).add_operation (var_whileVar_27819, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 736)).add_operation (GALGAS_string (".isValidAndTrue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 736)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 736)) ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  }\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 737)) ;
        }
      }
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = GALGAS_bool (kIsStrictSup, object->mProperty_mBetweenInstructionList.getter_length (SOURCE_FILE ("instruction-for.galgas", 740)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_5) {
          {
          ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 741)) ;
          }
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 742)) ;
          cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_28348 (object->mProperty_mEnumeratedObjectList, kENUMERATION_UP) ;
          while (enumerator_28348.hasCurrentObject ()) {
            ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_28348.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject () && "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 744)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 744)) ;
            enumerator_28348.gotoNextObject () ;
          }
          ioArgument_ioGeneratedCode.plusAssign_operation(var_boolVarCppName_25818.add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 746)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 746)) ;
          {
          routine_generateInstructionList (ioArgument_ioInclusionSet, object->mProperty_mBetweenInstructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 747)) ;
          }
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 755)) ;
          {
          ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 756)) ;
          }
        }
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 759)) ;
      {
      ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 761)) ;
      }
      {
      routine_generateInstructionList (ioArgument_ioInclusionSet, object->mProperty_mAfterInstructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 762)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 770)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = GALGAS_bool (kIsNotEqual, object->mProperty_mIndexVariableCppName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_6) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_uint ").add_operation (object->mProperty_mIndexVariableCppName, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 773)).add_operation (GALGAS_string (" ((uint32_t) 0) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 773)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 773)) ;
      }
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("while ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 775)) ;
    cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_29498 (object->mProperty_mEnumeratedObjectList, kENUMERATION_UP) ;
    while (enumerator_29498.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_29498.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject ()"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 777)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 777)) ;
      if (enumerator_29498.hasNextObject ()) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" && "), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 778)) ;
      }
      enumerator_29498.gotoNextObject () ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 780)) ;
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, object->mProperty_mDoInstructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 782)) ;
    }
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = GALGAS_bool (kIsStrictSup, object->mProperty_mBetweenInstructionList.getter_length (SOURCE_FILE ("instruction-for.galgas", 791)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_7) {
        {
        ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 792)) ;
        }
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 793)) ;
        cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_30109 (object->mProperty_mEnumeratedObjectList, kENUMERATION_UP) ;
        while (enumerator_30109.hasCurrentObject ()) {
          ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_30109.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasNextObject ()"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 795)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 795)) ;
          if (enumerator_30109.hasNextObject ()) {
            ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" && "), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 796)) ;
          }
          enumerator_30109.gotoNextObject () ;
        }
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 798)) ;
        {
        routine_generateInstructionList (ioArgument_ioInclusionSet, object->mProperty_mBetweenInstructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 799)) ;
        }
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 807)) ;
        {
        ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 808)) ;
        }
      }
    }
    cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_30665 (object->mProperty_mEnumeratedObjectList, kENUMERATION_UP) ;
    while (enumerator_30665.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (enumerator_30665.current_mEnumeratorCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 812)).add_operation (GALGAS_string (".gotoNextObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 812)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 812)) ;
      enumerator_30665.gotoNextObject () ;
    }
    enumGalgasBool test_8 = kBoolTrue ;
    if (kBoolTrue == test_8) {
      test_8 = GALGAS_bool (kIsNotEqual, object->mProperty_mIndexVariableCppName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_8) {
        {
        ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 815)) COMMA_SOURCE_FILE ("instruction-for.galgas", 815)) ;
        }
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (object->mProperty_mIndexVariableCppName, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 816)).add_operation (GALGAS_string (".increment_operation ("), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 816)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 816)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 816)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 816)).add_operation (extensionGetter_commaSourceFile (object->mProperty_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 817)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 817)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 817)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 816)) ;
      }
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 819)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_forInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_forInstructionForGeneration.mSlotID,
                                            extensionMethod_forInstructionForGeneration_generateInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_forInstructionForGeneration_generateInstruction (defineExtensionMethod_forInstructionForGeneration_generateInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//            Overriding extension method '@grammarInFileInstructionAST enterInstructionInSemanticContext'             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_grammarInFileInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                           GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInFileInstructionAST * object = (const cPtr_grammarInFileInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInFileInstructionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mSourceExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 183)) ;
  cEnumerator_actualParameterListAST enumerator_7496 (object->mProperty_mActualParameterList, kENUMERATION_UP) ;
  while (enumerator_7496.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((const cPtr_actualParameterAST *) enumerator_7496.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 185)) ;
    enumerator_7496.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_grammarInFileInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_grammarInFileInstructionAST.mSlotID,
                                                          extensionMethod_grammarInFileInstructionAST_enterInstructionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_grammarInFileInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_grammarInFileInstructionAST_enterInstructionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//           Overriding extension method '@grammarInStringInstructionAST enterInstructionInSemanticContext'            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_grammarInStringInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                             GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInStringInstructionAST * object = (const cPtr_grammarInStringInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInStringInstructionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mSourceExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 194)) ;
  cEnumerator_actualParameterListAST enumerator_7926 (object->mProperty_mActualParameterList, kENUMERATION_UP) ;
  while (enumerator_7926.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((const cPtr_actualParameterAST *) enumerator_7926.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 196)) ;
    enumerator_7926.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_grammarInStringInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_grammarInStringInstructionAST.mSlotID,
                                                          extensionMethod_grammarInStringInstructionAST_enterInstructionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_grammarInStringInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_grammarInStringInstructionAST_enterInstructionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Overriding extension method '@grammarInFileInstructionAST analyzeSemanticInstruction'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_grammarInFileInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                    const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                    GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                    const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                    GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                    GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInFileInstructionAST * object = (const cPtr_grammarInFileInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInFileInstructionAST) ;
  GALGAS_lstring var_usefulnessName_8600 = function_grammarNameForUsefulEntitiesGraph (object->mProperty_mGrammarComponentName, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 211)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_8600 COMMA_SOURCE_FILE ("instruction-grammar.galgas", 212)) ;
  }
  GALGAS_grammarLabelMap var_grammarLabelMap_8907 ;
  GALGAS_bool var_hasTranslateFeature_8949 ;
  GALGAS_bool joker_8913 ; // Joker input parameter
  constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mGrammarMap (HERE).method_searchKey (object->mProperty_mGrammarComponentName, var_grammarLabelMap_8907, joker_8913, var_hasTranslateFeature_8949, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 214)) ;
  GALGAS_formalParameterSignature var_labelSignature_9066 ;
  var_grammarLabelMap_8907.method_searchKey (object->mProperty_mLabelName, var_labelSignature_9066, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 221)) ;
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_9465 ;
  {
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, object->mProperty_mLabelName, GALGAS_string ("label of the ").add_operation (object->mProperty_mGrammarComponentName.getter_string (SOURCE_FILE ("instruction-grammar.galgas", 231)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 231)).add_operation (GALGAS_string (" grammar"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 231)), var_labelSignature_9066, object->mProperty_mActualParameterList, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_9465, inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 226)) ;
  }
  GALGAS_semanticExpressionForGeneration var_sourceExpression_9741 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mSourceExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-grammar.galgas", 242)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_sourceExpression_9741, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 239)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_sourceExpression_9741.getter_mResultType (SOURCE_FILE ("instruction-grammar.galgas", 248)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLStringType (HERE))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOfSourceExpression, GALGAS_string ("this expression is the source file path and its type should be '@lstring', but it is '@").add_operation (var_sourceExpression_9741.getter_mResultType (SOURCE_FILE ("instruction-grammar.galgas", 251)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 250)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 251)), fixItArray1  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 249)) ;
    }
  }
  GALGAS_string var_syntaxDirectedTranslationResultVarName_10209 = GALGAS_string ("syntaxDirectedTranslationResult_").add_operation (object->mProperty_mGrammarComponentName.getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 254)).getter_string (SOURCE_FILE ("instruction-grammar.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 254)) ;
  GALGAS_stringlist var_assignementList_10317 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 255)) ;
  callExtensionMethod_analyzeGrammarInstructionSDT ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) object->mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult.ptr (), constinArgument_inAnalysisContext, var_hasTranslateFeature_8949, var_syntaxDirectedTranslationResultVarName_10209, var_assignementList_10317, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 256)) ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_grammarInstructionWithSourceFileForGeneration::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mGrammarComponentName.getter_string (SOURCE_FILE ("instruction-grammar.galgas", 266)), object->mProperty_mLabelName.getter_string (SOURCE_FILE ("instruction-grammar.galgas", 267)), var_sourceExpression_9741, var_actualParameterListForGeneration_9465, var_hasTranslateFeature_8949, var_assignementList_10317, var_syntaxDirectedTranslationResultVarName_10209  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 264))  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 264)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_grammarInFileInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_grammarInFileInstructionAST.mSlotID,
                                                   extensionMethod_grammarInFileInstructionAST_analyzeSemanticInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_grammarInFileInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_grammarInFileInstructionAST_analyzeSemanticInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Overriding extension method '@grammarInStringInstructionAST analyzeSemanticInstruction'               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_grammarInStringInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                      const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                      GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                      const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                      GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                      GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInStringInstructionAST * object = (const cPtr_grammarInStringInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInStringInstructionAST) ;
  GALGAS_lstring var_grammarUsefulnessName_11387 = function_grammarNameForUsefulEntitiesGraph (object->mProperty_mGrammarComponentName, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 285)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_grammarUsefulnessName_11387 COMMA_SOURCE_FILE ("instruction-grammar.galgas", 286)) ;
  }
  GALGAS_grammarLabelMap var_grammarLabelMap_11701 ;
  GALGAS_bool var_hasTranslateFeature_11743 ;
  GALGAS_bool joker_11707 ; // Joker input parameter
  constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mGrammarMap (HERE).method_searchKey (object->mProperty_mGrammarComponentName, var_grammarLabelMap_11701, joker_11707, var_hasTranslateFeature_11743, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 288)) ;
  GALGAS_formalParameterSignature var_labelSignature_11860 ;
  var_grammarLabelMap_11701.method_searchKey (object->mProperty_mLabelName, var_labelSignature_11860, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 295)) ;
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_12259 ;
  {
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, object->mProperty_mLabelName, GALGAS_string ("label of the ").add_operation (object->mProperty_mGrammarComponentName.getter_string (SOURCE_FILE ("instruction-grammar.galgas", 305)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 305)).add_operation (GALGAS_string (" grammar"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 305)), var_labelSignature_11860, object->mProperty_mActualParameterList, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_12259, inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 300)) ;
  }
  GALGAS_semanticExpressionForGeneration var_sourceExpression_12535 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mSourceExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-grammar.galgas", 316)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_sourceExpression_12535, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 313)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_sourceExpression_12535.getter_mResultType (SOURCE_FILE ("instruction-grammar.galgas", 322)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringType (HERE))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOfSourceExpression, GALGAS_string ("this expression is the source string and its type should be '@string', but it is '@").add_operation (var_sourceExpression_12535.getter_mResultType (SOURCE_FILE ("instruction-grammar.galgas", 325)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 325)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 324)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 325)), fixItArray1  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 323)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_nameExpression_13119 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mNameExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-grammar.galgas", 331)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_nameExpression_13119, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 328)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsNotEqual, var_nameExpression_13119.getter_mResultType (SOURCE_FILE ("instruction-grammar.galgas", 337)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringType (HERE))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOfNameExpression, GALGAS_string ("this expression is the name string and its type should be '@string', but it is '@").add_operation (var_sourceExpression_12535.getter_mResultType (SOURCE_FILE ("instruction-grammar.galgas", 340)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 340)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 339)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 340)), fixItArray3  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 338)) ;
    }
  }
  GALGAS_string var_syntaxDirectedTranslationResultVarName_13530 = GALGAS_string ("syntaxDirectedTranslationResult_").add_operation (object->mProperty_mGrammarComponentName.getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 343)).getter_string (SOURCE_FILE ("instruction-grammar.galgas", 343)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 343)) ;
  GALGAS_stringlist var_assignementList_13638 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 344)) ;
  callExtensionMethod_analyzeGrammarInstructionSDT ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) object->mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult.ptr (), constinArgument_inAnalysisContext, var_hasTranslateFeature_11743, var_syntaxDirectedTranslationResultVarName_13530, var_assignementList_13638, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 345)) ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_grammarInstructionWithSourceExpressionForGeneration::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mGrammarComponentName.getter_string (SOURCE_FILE ("instruction-grammar.galgas", 355)), object->mProperty_mLabelName.getter_string (SOURCE_FILE ("instruction-grammar.galgas", 356)), var_sourceExpression_12535, var_nameExpression_13119, var_actualParameterListForGeneration_12259, var_hasTranslateFeature_11743, var_assignementList_13638, var_syntaxDirectedTranslationResultVarName_13530  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 353))  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 353)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_grammarInStringInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_grammarInStringInstructionAST.mSlotID,
                                                   extensionMethod_grammarInStringInstructionAST_analyzeSemanticInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_grammarInStringInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_grammarInStringInstructionAST_analyzeSemanticInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//          Overriding extension method '@grammarInstructionWithSourceFileForGeneration generateInstruction'           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("grammar-").add_operation (object->mProperty_mGrammarName.getter_fileNameRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 390)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 390))  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 390)) ;
  GALGAS_string var_sourceVar_15666 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mSourceFileExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_15666, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 392)) ;
  GALGAS_stringlist var_parameterCppNameList_15719 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 400)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_15772 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 401)) ;
  GALGAS_stringlist var_inputVariableList_15814 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 402)) ;
  cEnumerator_actualParameterListForGeneration enumerator_15865 (object->mProperty_mActualParameterList, kENUMERATION_UP) ;
  while (enumerator_15865.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_16144 ;
    callExtensionMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_15865.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_15772, var_inputVariableList_15814, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_16144, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 404)) ;
    var_parameterCppNameList_15719.addAssign_operation (var_parameterCppName_16144  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 413)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (NULL != dynamic_cast <const cPtr_inputActualParameterForGeneration *> (enumerator_15865.current_mActualParameter (HERE).ptr ())).boolEnum () ;
      if (kBoolTrue == test_0) {
        ioArgument_ioGeneratedCode.plusAssign_operation(var_parameterCppName_16144.add_operation (GALGAS_string (".drop () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 415)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 415)) ;
      }
    }
    enumerator_15865.gotoNextObject () ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = object->mProperty_mGrammarHasTranslateFeature.boolEnum () ;
    if (kBoolTrue == test_1) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("C_String ").add_operation (object->mProperty_mSyntaxDirectedTranslationResultVarName, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 419)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 419)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 419)) ;
    }
  }
  GALGAS_string temp_2 ;
  const enumGalgasBool test_3 = object->mProperty_mGrammarHasTranslateFeature.boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = object->mProperty_mSyntaxDirectedTranslationResultVarName.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 425)) ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_string::makeEmptyString () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cGrammar_").add_operation (object->mProperty_mGrammarName.getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 421)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 421)).add_operation (GALGAS_string ("::_performSourceFileParsing_"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 421)).add_operation (object->mProperty_mLabelName.getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 422)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 422)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 422)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 424)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 423)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 424)).add_operation (temp_2, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 424)).add_operation (var_sourceVar_15666, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 425)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 421)) ;
  cEnumerator_stringlist enumerator_16921 (var_parameterCppNameList_15719, kENUMERATION_UP) ;
  while (enumerator_16921.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (enumerator_16921.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 428)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 428)) ;
    enumerator_16921.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (object->mProperty_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 430)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 430)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 430)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 430)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 431)) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 431)) ;
  }
  cEnumerator_stringlist enumerator_17144 (object->mProperty_mAssignementList, kENUMERATION_UP) ;
  while (enumerator_17144.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_17144.current (HERE).getter_mValue (HERE).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 433)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 433)) ;
    enumerator_17144.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_grammarInstructionWithSourceFileForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_grammarInstructionWithSourceFileForGeneration.mSlotID,
                                            extensionMethod_grammarInstructionWithSourceFileForGeneration_generateInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_grammarInstructionWithSourceFileForGeneration_generateInstruction (defineExtensionMethod_grammarInstructionWithSourceFileForGeneration_generateInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//       Overriding extension method '@grammarInstructionWithSourceExpressionForGeneration generateInstruction'        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("grammar-").add_operation (object->mProperty_mGrammarName.getter_fileNameRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 461)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 461))  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 461)) ;
  GALGAS_string var_sourceVar_18672 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mSourceStringExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_18672, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 463)) ;
  GALGAS_string var_nameVar_18885 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mNameStringExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_nameVar_18885, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 471)) ;
  GALGAS_stringlist var_parameterCppNameList_18938 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 479)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_18991 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 480)) ;
  GALGAS_stringlist var_inputVariableList_19033 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 481)) ;
  cEnumerator_actualParameterListForGeneration enumerator_19084 (object->mProperty_mActualParameterList, kENUMERATION_UP) ;
  while (enumerator_19084.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_19370 ;
    callExtensionMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_19084.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_18991, var_inputVariableList_19033, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_19370, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 483)) ;
    var_parameterCppNameList_18938.addAssign_operation (var_parameterCppName_19370  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 492)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (NULL != dynamic_cast <const cPtr_inputActualParameterForGeneration *> (enumerator_19084.current_mActualParameter (HERE).ptr ())).boolEnum () ;
      if (kBoolTrue == test_0) {
        ioArgument_ioGeneratedCode.plusAssign_operation(var_parameterCppName_19370.add_operation (GALGAS_string (".drop () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 494)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 494)) ;
      }
    }
    enumerator_19084.gotoNextObject () ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = object->mProperty_mGrammarHasTranslateFeature.boolEnum () ;
    if (kBoolTrue == test_1) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("C_String ").add_operation (object->mProperty_mSyntaxDirectedTranslationResultVarName, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 498)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 498)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 498)) ;
    }
  }
  GALGAS_string temp_2 ;
  const enumGalgasBool test_3 = object->mProperty_mGrammarHasTranslateFeature.boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = object->mProperty_mSyntaxDirectedTranslationResultVarName.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 503)) ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_string::makeEmptyString () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cGrammar_").add_operation (object->mProperty_mGrammarName.getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 500)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 500)).add_operation (GALGAS_string ("::_performSourceStringParsing_"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 500)).add_operation (object->mProperty_mLabelName.getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 501)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 501)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 501)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 502)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 502)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 502)).add_operation (temp_2, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 502)).add_operation (var_sourceVar_18672, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 503)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 504)).add_operation (var_nameVar_18885, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 505)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 500)) ;
  cEnumerator_stringlist enumerator_20166 (var_parameterCppNameList_18938, kENUMERATION_UP) ;
  while (enumerator_20166.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (enumerator_20166.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 507)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 507)) ;
    enumerator_20166.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (object->mProperty_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 509)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 509)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 509)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 509)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 510)) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 510)) ;
  }
  cEnumerator_stringlist enumerator_20389 (object->mProperty_mAssignementList, kENUMERATION_UP) ;
  while (enumerator_20389.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_20389.current (HERE).getter_mValue (HERE).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 512)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 512)) ;
    enumerator_20389.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_grammarInstructionWithSourceExpressionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_grammarInstructionWithSourceExpressionForGeneration.mSlotID,
                                            extensionMethod_grammarInstructionWithSourceExpressionForGeneration_generateInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_grammarInstructionWithSourceExpressionForGeneration_generateInstruction (defineExtensionMethod_grammarInstructionWithSourceExpressionForGeneration_generateInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Overriding extension method '@incDecInstructionAST enterInstructionInSemanticContext'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_incDecInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * /* inObject */,
                                                                                    GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_incDecInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_incDecInstructionAST.mSlotID,
                                                          extensionMethod_incDecInstructionAST_enterInstructionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_incDecInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_incDecInstructionAST_enterInstructionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//             Overriding extension method '@incDecNoOVFInstructionAST enterInstructionInSemanticContext'              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_incDecNoOVFInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * /* inObject */,
                                                                                         GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_incDecNoOVFInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_incDecNoOVFInstructionAST.mSlotID,
                                                          extensionMethod_incDecNoOVFInstructionAST_enterInstructionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_incDecNoOVFInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_incDecNoOVFInstructionAST_enterInstructionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//              Overriding extension method '@selfIncDecInstructionAST enterInstructionInSemanticContext'              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_selfIncDecInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * /* inObject */,
                                                                                        GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_selfIncDecInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_selfIncDecInstructionAST.mSlotID,
                                                          extensionMethod_selfIncDecInstructionAST_enterInstructionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_selfIncDecInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_selfIncDecInstructionAST_enterInstructionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//           Overriding extension method '@selfIncDecNoOVFInstructionAST enterInstructionInSemanticContext'            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_selfIncDecNoOVFInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * /* inObject */,
                                                                                             GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                             C_Compiler * /* inCompiler */
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_selfIncDecNoOVFInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_selfIncDecNoOVFInstructionAST.mSlotID,
                                                          extensionMethod_selfIncDecNoOVFInstructionAST_enterInstructionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_selfIncDecNoOVFInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_selfIncDecNoOVFInstructionAST_enterInstructionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@incDecInstructionAST analyzeSemanticInstruction'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_incDecInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                             const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                             GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                             const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                             GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                             GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_incDecInstructionAST * object = (const cPtr_incDecInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_incDecInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType_5360 ;
  GALGAS_string var_targetVariableCppName_5392 ;
  {
  GALGAS_string joker_5488 ; // Joker input parameter
  ioArgument_ioVariableMap.setter_searchForReadWriteAccess (object->mProperty_mReceiverName, var_targetType_5360, var_targetVariableCppName_5392, joker_5488, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 163)) ;
  }
  cEnumerator_lstringlist enumerator_5523 (object->mProperty_mStructAttributeList, kENUMERATION_UP) ;
  while (enumerator_5523.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_5546 = var_targetType_5360.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 165)) ;
    GALGAS_bool var_isPublic_5623 ;
    var_propertyMap_5546.method_searchKey (enumerator_5523.current_mValue (HERE), var_isPublic_5623, var_targetType_5360, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 166)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = var_isPublic_5623.operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 167)).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_5523.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-inc-dec.galgas", 168)), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray1  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 168)) ;
      }
    }
    enumerator_5523.gotoNextObject () ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_targetType_5360.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 172)).getter_incDecOperator (SOURCE_FILE ("instruction-inc-dec.galgas", 172)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 172)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("the target object has the '@").add_operation (var_targetType_5360.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 174)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 174)).add_operation (GALGAS_string ("' type, but this type does not support the '++', '--' operators"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 174)), fixItArray3  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 173)) ;
    }
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_incDecInstructionForGeneration::constructor_new (object->mProperty_mInstructionLocation, var_targetVariableCppName_5392, var_targetType_5360, object->mProperty_mStructAttributeList, object->mProperty_mKind  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 177))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 177)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_incDecInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_incDecInstructionAST.mSlotID,
                                                   extensionMethod_incDecInstructionAST_analyzeSemanticInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_incDecInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_incDecInstructionAST_analyzeSemanticInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@incDecNoOVFInstructionAST analyzeSemanticInstruction'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_incDecNoOVFInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                  const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                  GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                  const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                  GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                  GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_incDecNoOVFInstructionAST * object = (const cPtr_incDecNoOVFInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_incDecNoOVFInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType_6755 ;
  GALGAS_string var_targetVariableCppName_6787 ;
  {
  GALGAS_string joker_6883 ; // Joker input parameter
  ioArgument_ioVariableMap.setter_searchForReadWriteAccess (object->mProperty_mReceiverName, var_targetType_6755, var_targetVariableCppName_6787, joker_6883, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 198)) ;
  }
  cEnumerator_lstringlist enumerator_6918 (object->mProperty_mStructAttributeList, kENUMERATION_UP) ;
  while (enumerator_6918.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_6941 = var_targetType_6755.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 200)) ;
    GALGAS_bool var_isPublic_7018 ;
    var_propertyMap_6941.method_searchKey (enumerator_6918.current_mValue (HERE), var_isPublic_7018, var_targetType_6755, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 201)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = var_isPublic_7018.operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 202)).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_6918.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-inc-dec.galgas", 203)), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray1  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 203)) ;
      }
    }
    enumerator_6918.gotoNextObject () ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_targetType_6755.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 207)).getter_incDecOperator (SOURCE_FILE ("instruction-inc-dec.galgas", 207)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 207)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("the target object has the '@").add_operation (var_targetType_6755.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 209)).add_operation (GALGAS_string ("' type, but this type does not support the '&++', '&--' operators"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 209)), fixItArray3  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 208)) ;
    }
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_incDecNoOVFInstructionForGeneration::constructor_new (object->mProperty_mInstructionLocation, var_targetVariableCppName_6787, var_targetType_6755, object->mProperty_mStructAttributeList, object->mProperty_mKind  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 212))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 212)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_incDecNoOVFInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_incDecNoOVFInstructionAST.mSlotID,
                                                   extensionMethod_incDecNoOVFInstructionAST_analyzeSemanticInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_incDecNoOVFInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_incDecNoOVFInstructionAST_analyzeSemanticInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Overriding extension method '@selfIncDecNoOVFInstructionAST analyzeSemanticInstruction'               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_selfIncDecNoOVFInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                      const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                      GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                      const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                      GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                      GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfIncDecNoOVFInstructionAST * object = (const cPtr_selfIncDecNoOVFInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfIncDecNoOVFInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy_8181 ;
  GALGAS_string var_selfObjectCppName_8209 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inAnalysisContext.getter_mSelfTypeProxy (HERE).getter_isNull (SOURCE_FILE ("instruction-inc-dec.galgas", 233)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("'self' can be used only in extension setters"), fixItArray1  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 234)) ;
      var_selfObjectCppName_8209.drop () ; // Release error dropped variable
      var_selfTypeProxy_8181.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    var_selfObjectCppName_8209 = constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE) ;
    var_selfTypeProxy_8181 = constinArgument_inAnalysisContext.getter_mSelfTypeProxy (HERE) ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_selfTypeProxy_8181.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 240)).getter_incDecOperator (SOURCE_FILE ("instruction-inc-dec.galgas", 240)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 240)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("the target object has the '@").add_operation (var_selfTypeProxy_8181.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 242)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 242)).add_operation (GALGAS_string ("' type, but this type does not support the '&++' and  '&--' operators"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 242)), fixItArray3  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 241)) ;
    }
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_incDecNoOVFInstructionForGeneration::constructor_new (object->mProperty_mInstructionLocation, var_selfObjectCppName_8209, var_selfTypeProxy_8181, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-inc-dec.galgas", 249)), object->mProperty_mKind  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 245))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 245)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_selfIncDecNoOVFInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_selfIncDecNoOVFInstructionAST.mSlotID,
                                                   extensionMethod_selfIncDecNoOVFInstructionAST_analyzeSemanticInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_selfIncDecNoOVFInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_selfIncDecNoOVFInstructionAST_analyzeSemanticInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@selfIncDecInstructionAST analyzeSemanticInstruction'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_selfIncDecInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                 const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                 GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                 GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfIncDecInstructionAST * object = (const cPtr_selfIncDecInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfIncDecInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy_9540 ;
  GALGAS_string var_selfObjectCppName_9568 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inAnalysisContext.getter_mSelfTypeProxy (HERE).getter_isNull (SOURCE_FILE ("instruction-inc-dec.galgas", 266)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("'self' can be used only in extension setters"), fixItArray1  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 267)) ;
      var_selfObjectCppName_9568.drop () ; // Release error dropped variable
      var_selfTypeProxy_9540.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    var_selfObjectCppName_9568 = constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE) ;
    var_selfTypeProxy_9540 = constinArgument_inAnalysisContext.getter_mSelfTypeProxy (HERE) ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_selfTypeProxy_9540.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 273)).getter_incDecOperator (SOURCE_FILE ("instruction-inc-dec.galgas", 273)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 273)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("the target object has the '@").add_operation (var_selfTypeProxy_9540.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 275)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 275)).add_operation (GALGAS_string ("' type, but this type does not support the '++' and  '--' operators"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 275)), fixItArray3  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 274)) ;
    }
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_incDecInstructionForGeneration::constructor_new (object->mProperty_mInstructionLocation, var_selfObjectCppName_9568, var_selfTypeProxy_9540, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-inc-dec.galgas", 282)), object->mProperty_mKind  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 278))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 278)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_selfIncDecInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_selfIncDecInstructionAST.mSlotID,
                                                   extensionMethod_selfIncDecInstructionAST_analyzeSemanticInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_selfIncDecInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_selfIncDecInstructionAST_analyzeSemanticInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension method '@incDecInstructionForGeneration generateInstruction'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (object->mProperty_mReceiverCppName COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 319)) ;
  }
  GALGAS_string var_receiverCppName_11711 = object->mProperty_mReceiverCppName ;
  cEnumerator_lstringlist enumerator_11763 (object->mProperty_mStructAttributeList, kENUMERATION_UP) ;
  while (enumerator_11763.hasCurrentObject ()) {
    var_receiverCppName_11711.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_11763.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-inc-dec.galgas", 322)).getter_identifierRepresentation (SOURCE_FILE ("instruction-inc-dec.galgas", 322)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 322)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 322)) ;
    enumerator_11763.gotoNextObject () ;
  }
  switch (object->mProperty_mKind.enumValue ()) {
  case GALGAS_incDecKind::kNotBuilt:
    break ;
  case GALGAS_incDecKind::kEnum_increment:
    {
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_11711.add_operation (GALGAS_string (".increment_operation ("), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 327)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 327)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 327)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 327)).add_operation (extensionGetter_commaSourceFile (object->mProperty_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 328)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 328)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 328)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 327)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 329)) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 329)) ;
      }
    }
    break ;
  case GALGAS_incDecKind::kEnum_decrement:
    {
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_11711.add_operation (GALGAS_string (".decrement_operation ("), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 331)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 331)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 331)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 331)).add_operation (extensionGetter_commaSourceFile (object->mProperty_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 332)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 332)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 332)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 331)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 333)) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 333)) ;
      }
    }
    break ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_incDecInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_incDecInstructionForGeneration.mSlotID,
                                            extensionMethod_incDecInstructionForGeneration_generateInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_incDecInstructionForGeneration_generateInstruction (defineExtensionMethod_incDecInstructionForGeneration_generateInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Overriding extension method '@incDecNoOVFInstructionForGeneration generateInstruction'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (object->mProperty_mReceiverCppName COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 347)) ;
  }
  GALGAS_string var_receiverCppName_12909 = object->mProperty_mReceiverCppName ;
  cEnumerator_lstringlist enumerator_12961 (object->mProperty_mStructAttributeList, kENUMERATION_UP) ;
  while (enumerator_12961.hasCurrentObject ()) {
    var_receiverCppName_12909.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_12961.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-inc-dec.galgas", 350)).getter_identifierRepresentation (SOURCE_FILE ("instruction-inc-dec.galgas", 350)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 350)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 350)) ;
    enumerator_12961.gotoNextObject () ;
  }
  switch (object->mProperty_mKind.enumValue ()) {
  case GALGAS_incDecKind::kNotBuilt:
    break ;
  case GALGAS_incDecKind::kEnum_increment:
    {
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_12909.add_operation (GALGAS_string (".increment_operation_no_overflow () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 355)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 355)) ;
    }
    break ;
  case GALGAS_incDecKind::kEnum_decrement:
    {
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_12909.add_operation (GALGAS_string (".decrement_operation_no_overflow () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 357)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 357)) ;
    }
    break ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_incDecNoOVFInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_incDecNoOVFInstructionForGeneration.mSlotID,
                                            extensionMethod_incDecNoOVFInstructionForGeneration_generateInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_incDecNoOVFInstructionForGeneration_generateInstruction (defineExtensionMethod_incDecNoOVFInstructionForGeneration_generateInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension method '@ifInstructionAST enterInstructionInSemanticContext'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_ifInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifInstructionAST * object = (const cPtr_ifInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ifInstructionAST) ;
  cEnumerator_ifExpressionList enumerator_4195 (object->mProperty_mExpressions, kENUMERATION_UP) ;
  while (enumerator_4195.hasCurrentObject ()) {
    switch (enumerator_4195.current_mExpression (HERE).enumValue ()) {
    case GALGAS_ifExpressionKind::kNotBuilt:
      break ;
    case GALGAS_ifExpressionKind::kEnum_regularExp:
      {
        const cEnumAssociatedValues_ifExpressionKind_regularExp * extractPtr_4305 = (const cEnumAssociatedValues_ifExpressionKind_regularExp *) (enumerator_4195.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_exp = extractPtr_4305->mAssociatedValue0 ;
        callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) extractedValue_exp.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 121)) ;
      }
      break ;
    case GALGAS_ifExpressionKind::kEnum_letExp:
      {
        const cEnumAssociatedValues_ifExpressionKind_letExp * extractPtr_4473 = (const cEnumAssociatedValues_ifExpressionKind_letExp *) (enumerator_4195.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_exp = extractPtr_4473->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_typeName = extractPtr_4473->mAssociatedValue3 ;
        callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) extractedValue_exp.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 123)) ;
        {
        GALGAS_unifiedTypeMap_2D_proxy joker_4471 ; // Joker input parameter
        GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioTypeMap, extractedValue_typeName, joker_4471 COMMA_SOURCE_FILE ("instruction-if.galgas", 124)) ;
        }
      }
      break ;
    }
    enumerator_4195.gotoNextObject () ;
  }
  extensionMethod_enterInstructionListInSemanticContext (object->mProperty_m_5F_then_5F_instructionList, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 127)) ;
  extensionMethod_enterInstructionListInSemanticContext (object->mProperty_m_5F_else_5F_instructionList, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 128)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_ifInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_ifInstructionAST.mSlotID,
                                                          extensionMethod_ifInstructionAST_enterInstructionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_ifInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_ifInstructionAST_enterInstructionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@ifInstructionAST analyzeSemanticInstruction'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_ifInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                         const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                         GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                         const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                         GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                         GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifInstructionAST * object = (const cPtr_ifInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ifInstructionAST) ;
  GALGAS_ifTestListForGeneration var_testListForGeneration_5922 = GALGAS_ifTestListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 165)) ;
  cEnumerator_ifExpressionList enumerator_5962 (object->mProperty_mExpressions, kENUMERATION_UP) ;
  while (enumerator_5962.hasCurrentObject ()) {
    switch (enumerator_5962.current_mExpression (HERE).enumValue ()) {
    case GALGAS_ifExpressionKind::kNotBuilt:
      break ;
    case GALGAS_ifExpressionKind::kEnum_regularExp:
      {
        const cEnumAssociatedValues_ifExpressionKind_regularExp * extractPtr_6539 = (const cEnumAssociatedValues_ifExpressionKind_regularExp *) (enumerator_5962.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_exp = extractPtr_6539->mAssociatedValue0 ;
        GALGAS_semanticExpressionForGeneration var_analyzed_5F_if_5F_expression_6224 ;
        callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) extractedValue_exp.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-if.galgas", 172)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_analyzed_5F_if_5F_expression_6224, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 169)) ;
        GALGAS_semanticExpressionForGeneration var_if_5F_expression_6382 ;
        {
        routine_checkExpressionIsBoolean (constinArgument_inAnalysisContext, object->mProperty_mEndOf_5F_if_5F_instruction, var_analyzed_5F_if_5F_expression_6224, var_if_5F_expression_6382, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 177)) ;
        }
        var_testListForGeneration_5922.addAssign_operation (GALGAS_ifTestForGeneration::constructor_regular (var_if_5F_expression_6382  COMMA_SOURCE_FILE ("instruction-if.galgas", 183))  COMMA_SOURCE_FILE ("instruction-if.galgas", 183)) ;
        {
        ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 184)) ;
        }
        {
        ioArgument_ioVariableMap.setter_openBranch (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 185)) ;
        }
      }
      break ;
    case GALGAS_ifExpressionKind::kEnum_letExp:
      {
        const cEnumAssociatedValues_ifExpressionKind_letExp * extractPtr_8352 = (const cEnumAssociatedValues_ifExpressionKind_letExp *) (enumerator_5962.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_constantName = extractPtr_8352->mAssociatedValue0 ;
        const GALGAS_semanticExpressionAST extractedValue_exp = extractPtr_8352->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_typeName = extractPtr_8352->mAssociatedValue3 ;
        GALGAS_semanticExpressionForGeneration var_analyzedExpression_6801 ;
        callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) extractedValue_exp.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-if.galgas", 190)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_analyzedExpression_6801, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 187)) ;
        GALGAS_unifiedTypeMap_2D_proxy var_castType_6858 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), extractedValue_typeName, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 196)) ;
        enumGalgasBool test_0 = kBoolTrue ;
        if (kBoolTrue == test_0) {
          test_0 = var_analyzedExpression_6801.getter_mResultType (SOURCE_FILE ("instruction-if.galgas", 198)).getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 198)).getter_isClassType (SOURCE_FILE ("instruction-if.galgas", 198)).boolEnum () ;
          if (kBoolTrue == test_0) {
            GALGAS_unifiedTypeMap_2D_proxy var_t_7152 = var_castType_6858 ;
            GALGAS_bool var_found_7183 = GALGAS_bool (kIsEqual, var_t_7152.objectCompare (var_analyzedExpression_6801.getter_mResultType (SOURCE_FILE ("instruction-if.galgas", 201)))) ;
            if (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("instruction-if.galgas", 202)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 202)).isValid ()) {
              uint32_t variant_7236 = constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("instruction-if.galgas", 202)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 202)).uintValue () ;
              bool loop_7236 = true ;
              while (loop_7236) {
                loop_7236 = var_found_7183.operator_not (SOURCE_FILE ("instruction-if.galgas", 203)).operator_and (var_t_7152.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 203)).getter_isNull (SOURCE_FILE ("instruction-if.galgas", 203)).operator_not (SOURCE_FILE ("instruction-if.galgas", 203)) COMMA_SOURCE_FILE ("instruction-if.galgas", 203)).isValid () ;
                if (loop_7236) {
                  loop_7236 = var_found_7183.operator_not (SOURCE_FILE ("instruction-if.galgas", 203)).operator_and (var_t_7152.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 203)).getter_isNull (SOURCE_FILE ("instruction-if.galgas", 203)).operator_not (SOURCE_FILE ("instruction-if.galgas", 203)) COMMA_SOURCE_FILE ("instruction-if.galgas", 203)).boolValue () ;
                }
                if (loop_7236 && (0 == variant_7236)) {
                  loop_7236 = false ;
                  inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-if.galgas", 202)) ;
                }
                if (loop_7236) {
                  variant_7236 -- ;
                  var_t_7152 = var_t_7152.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 204)) ;
                  var_found_7183 = GALGAS_bool (kIsEqual, var_t_7152.objectCompare (var_analyzedExpression_6801.getter_mResultType (SOURCE_FILE ("instruction-if.galgas", 205)))) ;
                }
              }
            }
            enumGalgasBool test_1 = kBoolTrue ;
            if (kBoolTrue == test_1) {
              test_1 = var_found_7183.operator_not (SOURCE_FILE ("instruction-if.galgas", 207)).boolEnum () ;
              if (kBoolTrue == test_1) {
                TC_Array <C_FixItDescription> fixItArray2 ;
                inCompiler->emitSemanticError (extractedValue_typeName.getter_location (SOURCE_FILE ("instruction-if.galgas", 208)), GALGAS_string ("the '@").add_operation (extractedValue_typeName.getter_string (SOURCE_FILE ("instruction-if.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 209)).add_operation (GALGAS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 209)).add_operation (var_analyzedExpression_6801.getter_mResultType (SOURCE_FILE ("instruction-if.galgas", 209)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 209)).add_operation (GALGAS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 209)), fixItArray2  COMMA_SOURCE_FILE ("instruction-if.galgas", 208)) ;
              }
            }
          }
        }
        if (kBoolFalse == test_0) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (var_analyzedExpression_6801.getter_mLocation (SOURCE_FILE ("instruction-if.galgas", 213)), GALGAS_string ("expression should be a class instance: it is an @").add_operation (var_analyzedExpression_6801.getter_mResultType (SOURCE_FILE ("instruction-if.galgas", 214)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 213)).add_operation (GALGAS_string (" instance"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 214)), fixItArray3  COMMA_SOURCE_FILE ("instruction-if.galgas", 213)) ;
        }
        {
        ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 216)) ;
        }
        {
        ioArgument_ioVariableMap.setter_openBranch (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 217)) ;
        }
        GALGAS_string var_targetVariableCppName_7970 = GALGAS_string ("var_").add_operation (extractedValue_constantName.getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-if.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 218)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 218)).add_operation (extractedValue_constantName.getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 219)).getter_string (SOURCE_FILE ("instruction-if.galgas", 219)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 219)) ;
        {
        ioArgument_ioVariableMap.setter_insertLocalConstant (extractedValue_constantName, var_castType_6858, var_targetVariableCppName_7970, var_targetVariableCppName_7970, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 220)) ;
        }
        var_testListForGeneration_5922.addAssign_operation (GALGAS_ifTestForGeneration::constructor_letExp (var_targetVariableCppName_7970, var_analyzedExpression_6801, var_castType_6858  COMMA_SOURCE_FILE ("instruction-if.galgas", 226))  COMMA_SOURCE_FILE ("instruction-if.galgas", 226)) ;
      }
      break ;
    }
    enumerator_5962.gotoNextObject () ;
  }
  GALGAS_semanticInstructionListForGeneration var_then_5F_instructionList_8673 ;
  {
  routine_analyzeSemanticInstructionListWithoutBranch (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 234)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 235)), object->mProperty_m_5F_then_5F_instructionList, ioArgument_ioVariableMap, var_then_5F_instructionList_8673, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 230)) ;
  }
  GALGAS_ifExpressionList var_expressions_8695 = object->mProperty_mExpressions ;
  {
  GALGAS_ifExpressionKind joker_8737 ; // Joker input parameter
  var_expressions_8695.setter_popLast (joker_8737, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 241)) ;
  }
  cEnumerator_ifExpressionList enumerator_8773 (var_expressions_8695, kENUMERATION_UP) ;
  while (enumerator_8773.hasCurrentObject ()) {
    {
    ioArgument_ioVariableMap.setter_closeBranch (object->mProperty_mEndOf_5F_then_5F_branch, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 243)) ;
    }
    {
    ioArgument_ioVariableMap.setter_closeOverride (object->mProperty_mEndOf_5F_then_5F_branch, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 244)) ;
    }
    enumerator_8773.gotoNextObject () ;
  }
  {
  ioArgument_ioVariableMap.setter_closeBranch (object->mProperty_mEndOf_5F_then_5F_branch, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 246)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionList_9265 ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 252)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 253)), object->mProperty_m_5F_else_5F_instructionList, object->mProperty_mEndOf_5F_if_5F_instruction, ioArgument_ioVariableMap, var_else_5F_instructionList_9265, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 248)) ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mProperty_mEndOf_5F_if_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 259)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_ifInstructionForGeneration::constructor_new (object->mProperty_mEndOf_5F_then_5F_branch, var_testListForGeneration_5922, var_then_5F_instructionList_8673, var_else_5F_instructionList_9265  COMMA_SOURCE_FILE ("instruction-if.galgas", 261))  COMMA_SOURCE_FILE ("instruction-if.galgas", 261)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_ifInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_ifInstructionAST.mSlotID,
                                                   extensionMethod_ifInstructionAST_analyzeSemanticInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_ifInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_ifInstructionAST_analyzeSemanticInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Overriding extension method '@ifInstructionForGeneration generateInstruction'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  GALGAS_string var_testVar_11475 = GALGAS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-if.galgas", 319)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 319)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 320)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("enumGalgasBool ").add_operation (var_testVar_11475, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 321)).add_operation (GALGAS_string (" = kBoolTrue ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 321)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 321)) ;
  cEnumerator_ifTestListForGeneration enumerator_11656 (object->mProperty_mExpressions, kENUMERATION_UP) ;
  while (enumerator_11656.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolTrue == ").add_operation (var_testVar_11475, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 323)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 323)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 323)) ;
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 324)) ;
    }
    switch (enumerator_11656.current_mExpression (HERE).enumValue ()) {
    case GALGAS_ifTestForGeneration::kNotBuilt:
      break ;
    case GALGAS_ifTestForGeneration::kEnum_regular:
      {
        const cEnumAssociatedValues_ifTestForGeneration_regular * extractPtr_12071 = (const cEnumAssociatedValues_ifTestForGeneration_regular *) (enumerator_11656.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionForGeneration extractedValue_exp = extractPtr_12071->mAssociatedValue0 ;
        GALGAS_string var_cppVarName_11988 ;
        callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) extractedValue_exp.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_cppVarName_11988, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 327)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(var_testVar_11475.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 334)).add_operation (var_cppVarName_11988, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 334)).add_operation (GALGAS_string (".boolEnum () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 334)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 334)) ;
      }
      break ;
    case GALGAS_ifTestForGeneration::kEnum_letExp:
      {
        const cEnumAssociatedValues_ifTestForGeneration_letExp * extractPtr_12687 = (const cEnumAssociatedValues_ifTestForGeneration_letExp *) (enumerator_11656.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_string extractedValue_targetVarCppName = extractPtr_12687->mAssociatedValue0 ;
        const GALGAS_semanticExpressionForGeneration extractedValue_exp = extractPtr_12687->mAssociatedValue1 ;
        const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_12687->mAssociatedValue2 ;
        GALGAS_string var_typeName_12136 = extractedValue_type.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 336)) ;
        GALGAS_string var_cppVarName_12347 ;
        callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) extractedValue_exp.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_cppVarName_12347, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 337)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (var_typeName_12136, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 344)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 344)).add_operation (extractedValue_targetVarCppName, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 344)).add_operation (GALGAS_string (" (dynamic_cast <const cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 344)).add_operation (var_typeName_12136, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 345)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 345)).add_operation (var_cppVarName_12347, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 345)).add_operation (GALGAS_string (".ptr ())) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 345)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 344)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (NULL == ").add_operation (extractedValue_targetVarCppName, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 346)).add_operation (GALGAS_string (".ptr ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 346)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 346)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_testVar_11475, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 347)).add_operation (GALGAS_string (" = kBoolFalse ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 347)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 347)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 348)) ;
      }
      break ;
    }
    enumerator_11656.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolTrue == ").add_operation (var_testVar_11475, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 352)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 352)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 352)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mProperty_m_5F_then_5F_instructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 353)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 361)) ;
  cEnumerator_ifTestListForGeneration enumerator_13045 (object->mProperty_mExpressions, kENUMERATION_UP) ;
  while (enumerator_13045.hasCurrentObject ()) {
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 363)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 364)) ;
    enumerator_13045.gotoNextObject () ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictSup, object->mProperty_m_5F_else_5F_instructionList.getter_length (SOURCE_FILE ("instruction-if.galgas", 367)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolFalse == ").add_operation (var_testVar_11475, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 368)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 368)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 368)) ;
      {
      routine_generateInstructionList (ioArgument_ioInclusionSet, object->mProperty_m_5F_else_5F_instructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 369)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 377)) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_ifInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_ifInstructionForGeneration.mSlotID,
                                            extensionMethod_ifInstructionForGeneration_generateInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_ifInstructionForGeneration_generateInstruction (defineExtensionMethod_ifInstructionForGeneration_generateInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//        Overriding extension method '@undefinedLocalConstantDeclarationAST enterInstructionInSemanticContext'        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_undefinedLocalConstantDeclarationAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * /* inObject */,
                                                                                                    GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                    C_Compiler * /* inCompiler */
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_undefinedLocalConstantDeclarationAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationAST.mSlotID,
                                                          extensionMethod_undefinedLocalConstantDeclarationAST_enterInstructionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_undefinedLocalConstantDeclarationAST_enterInstructionInSemanticContext (defineExtensionMethod_undefinedLocalConstantDeclarationAST_enterInstructionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//     Overriding extension method '@localConstantDeclarationWithAssignmentAST enterInstructionInSemanticContext'      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_localConstantDeclarationWithAssignmentAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                                         GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_localConstantDeclarationWithAssignmentAST * object = (const cPtr_localConstantDeclarationWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_localConstantDeclarationWithAssignmentAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mSourceExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 93)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_localConstantDeclarationWithAssignmentAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_localConstantDeclarationWithAssignmentAST.mSlotID,
                                                          extensionMethod_localConstantDeclarationWithAssignmentAST_enterInstructionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_localConstantDeclarationWithAssignmentAST_enterInstructionInSemanticContext (defineExtensionMethod_localConstantDeclarationWithAssignmentAST_enterInstructionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//Overriding extension method '@localVariableOrConstantDeclarationWithAssignmentAST enterInstructionInSemanticContext' *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_localVariableOrConstantDeclarationWithAssignmentAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                                   C_Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_localVariableOrConstantDeclarationWithAssignmentAST * object = (const cPtr_localVariableOrConstantDeclarationWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_localVariableOrConstantDeclarationWithAssignmentAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mOptionalTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      GALGAS_unifiedTypeMap_2D_proxy joker_3870 ; // Joker input parameter
      GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioTypeMap, object->mProperty_mOptionalTypeName, joker_3870 COMMA_SOURCE_FILE ("instruction-let.galgas", 102)) ;
      }
    }
  }
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mSourceExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 104)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_localVariableOrConstantDeclarationWithAssignmentAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithAssignmentAST.mSlotID,
                                                          extensionMethod_localVariableOrConstantDeclarationWithAssignmentAST_enterInstructionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_localVariableOrConstantDeclarationWithAssignmentAST_enterInstructionInSemanticContext (defineExtensionMethod_localVariableOrConstantDeclarationWithAssignmentAST_enterInstructionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//           Overriding extension method '@undefinedLocalConstantDeclarationAST analyzeSemanticInstruction'            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_undefinedLocalConstantDeclarationAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                             const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                             GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                             GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                             GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_undefinedLocalConstantDeclarationAST * object = (const cPtr_undefinedLocalConstantDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_undefinedLocalConstantDeclarationAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType_4556 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), object->mProperty_mConstantTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 118)) ;
  GALGAS_string var_targetVariableCppName_4684 = GALGAS_string ("var_").add_operation (object->mProperty_mConstantName.getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-let.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 119)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 119)).add_operation (object->mProperty_mConstantName.getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 119)).getter_string (SOURCE_FILE ("instruction-let.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 119)) ;
  {
  ioArgument_ioVariableMap.setter_insertUndefinedLocalConstant (object->mProperty_mConstantName, var_targetType_4556, var_targetVariableCppName_4684, var_targetVariableCppName_4684, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 120)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_undefinedLocalConstantDeclarationForGeneration::constructor_new (var_targetType_4556, var_targetVariableCppName_4684  COMMA_SOURCE_FILE ("instruction-let.galgas", 127))  COMMA_SOURCE_FILE ("instruction-let.galgas", 127)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_undefinedLocalConstantDeclarationAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationAST.mSlotID,
                                                   extensionMethod_undefinedLocalConstantDeclarationAST_analyzeSemanticInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_undefinedLocalConstantDeclarationAST_analyzeSemanticInstruction (defineExtensionMethod_undefinedLocalConstantDeclarationAST_analyzeSemanticInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//         Overriding extension method '@localConstantDeclarationWithAssignmentAST analyzeSemanticInstruction'         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_localConstantDeclarationWithAssignmentAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                                  const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                  GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                                  GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_localConstantDeclarationWithAssignmentAST * object = (const cPtr_localConstantDeclarationWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_localConstantDeclarationWithAssignmentAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_5807 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mSourceExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-let.galgas", 145)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_5807, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 142)) ;
  GALGAS_string var_targetVariableCppName_5866 = GALGAS_string ("var_").add_operation (object->mProperty_mVariableName.getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-let.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 151)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 151)).add_operation (object->mProperty_mVariableName.getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 151)).getter_string (SOURCE_FILE ("instruction-let.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 151)) ;
  {
  ioArgument_ioVariableMap.setter_insertLocalConstant (object->mProperty_mVariableName, var_expression_5807.getter_mResultType (SOURCE_FILE ("instruction-let.galgas", 152)), var_targetVariableCppName_5866, var_targetVariableCppName_5866, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 152)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::constructor_new (var_expression_5807.getter_mResultType (SOURCE_FILE ("instruction-let.galgas", 155)), GALGAS_bool (true), var_targetVariableCppName_5866, var_expression_5807  COMMA_SOURCE_FILE ("instruction-let.galgas", 154))  COMMA_SOURCE_FILE ("instruction-let.galgas", 154)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_localConstantDeclarationWithAssignmentAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_localConstantDeclarationWithAssignmentAST.mSlotID,
                                                   extensionMethod_localConstantDeclarationWithAssignmentAST_analyzeSemanticInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_localConstantDeclarationWithAssignmentAST_analyzeSemanticInstruction (defineExtensionMethod_localConstantDeclarationWithAssignmentAST_analyzeSemanticInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//    Overriding extension method '@localVariableOrConstantDeclarationWithAssignmentAST analyzeSemanticInstruction'    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_localVariableOrConstantDeclarationWithAssignmentAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                                            const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                                            GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                                            const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                            GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                                            GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_localVariableOrConstantDeclarationWithAssignmentAST * object = (const cPtr_localVariableOrConstantDeclarationWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_localVariableOrConstantDeclarationWithAssignmentAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType_6792 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), object->mProperty_mOptionalTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 170)) ;
  GALGAS_semanticExpressionForGeneration var_expression_7140 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mSourceExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_6792, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_7140, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 172)) ;
  GALGAS_string var_targetVariableCppName_7199 = GALGAS_string ("var_").add_operation (object->mProperty_mVariableName.getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-let.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 181)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 181)).add_operation (object->mProperty_mVariableName.getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 181)).getter_string (SOURCE_FILE ("instruction-let.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 181)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = object->mProperty_mIsConstant.boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      ioArgument_ioVariableMap.setter_insertLocalConstant (object->mProperty_mVariableName, var_targetType_6792, var_targetVariableCppName_7199, var_targetVariableCppName_7199, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 183)) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    ioArgument_ioVariableMap.setter_insertDefinedLocalVariable (object->mProperty_mVariableName, var_targetType_6792, var_targetVariableCppName_7199, var_targetVariableCppName_7199, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 185)) ;
    }
  }
  {
  routine_checkAssignmentTypeWithImplicitGetterCall (var_targetType_6792, var_expression_7140.getter_mResultType (SOURCE_FILE ("instruction-let.galgas", 188)), object->mProperty_mInstructionLocation, var_expression_7140, inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 188)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::constructor_new (var_targetType_6792, object->mProperty_mIsConstant, var_targetVariableCppName_7199, var_expression_7140  COMMA_SOURCE_FILE ("instruction-let.galgas", 190))  COMMA_SOURCE_FILE ("instruction-let.galgas", 190)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_localVariableOrConstantDeclarationWithAssignmentAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithAssignmentAST.mSlotID,
                                                   extensionMethod_localVariableOrConstantDeclarationWithAssignmentAST_analyzeSemanticInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_localVariableOrConstantDeclarationWithAssignmentAST_analyzeSemanticInstruction (defineExtensionMethod_localVariableOrConstantDeclarationWithAssignmentAST_analyzeSemanticInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//          Overriding extension method '@undefinedLocalConstantDeclarationForGeneration generateInstruction'          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  extensionMethod_addHeaderFileName (object->mProperty_mTargetType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 225)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (object->mProperty_mTargetType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 226)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 226)).add_operation (object->mProperty_mCppVariableName, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 226)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 226)), inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 226)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_undefinedLocalConstantDeclarationForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationForGeneration.mSlotID,
                                            extensionMethod_undefinedLocalConstantDeclarationForGeneration_generateInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_undefinedLocalConstantDeclarationForGeneration_generateInstruction (defineExtensionMethod_undefinedLocalConstantDeclarationForGeneration_generateInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//Overriding extension method '@localVariableOrConstantDeclarationWithSourceExpressionForGeneration generateInstruction'*
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  extensionMethod_addHeaderFileName (object->mProperty_mTargetType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 238)) ;
  GALGAS_string var_sourceVar_9975 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mSourceExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_9975, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 239)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (object->mProperty_mTargetType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 246)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 246)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 246)).add_operation (object->mProperty_mCppVariableName, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 246)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 246)).add_operation (var_sourceVar_9975, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 246)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 246)), inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 246)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration.mSlotID,
                                            extensionMethod_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_generateInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_generateInstruction (defineExtensionMethod_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_generateInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@logInstructionAST enterInstructionInSemanticContext'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_logInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                 GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_logInstructionAST * object = (const cPtr_logInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_logInstructionAST) ;
  cEnumerator_logListAST enumerator_2083 (object->mProperty_mLogList, kENUMERATION_UP) ;
  while (enumerator_2083.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) enumerator_2083.current_mLogExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 60)) ;
    enumerator_2083.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_logInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_logInstructionAST.mSlotID,
                                                          extensionMethod_logInstructionAST_enterInstructionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_logInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_logInstructionAST_enterInstructionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@logInstructionAST analyzeSemanticInstruction'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_logInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                          const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                          GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                          GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                          GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_logInstructionAST * object = (const cPtr_logInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_logInstructionAST) ;
  cEnumerator_logListAST enumerator_2741 (object->mProperty_mLogList, kENUMERATION_UP) ;
  while (enumerator_2741.hasCurrentObject ()) {
    GALGAS_semanticExpressionForGeneration var_expression_2825 ;
    callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_2741.current_mLogExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-log.galgas", 80)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_2825, inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 77)) ;
    ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_logInstructionForGeneration::constructor_new (enumerator_2741.current_mLogMessage (HERE), var_expression_2825  COMMA_SOURCE_FILE ("instruction-log.galgas", 86))  COMMA_SOURCE_FILE ("instruction-log.galgas", 86)) ;
    enumerator_2741.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_logInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_logInstructionAST.mSlotID,
                                                   extensionMethod_logInstructionAST_analyzeSemanticInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_logInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_logInstructionAST_analyzeSemanticInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@logInstructionForGeneration generateInstruction'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  GALGAS_string var_logVar_4132 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mLogExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_logVar_4132, inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 109)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_logVar_4132.add_operation (GALGAS_string (".log ("), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 110)).add_operation (object->mProperty_mLogMessage.getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("instruction-log.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 110)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 110)).add_operation (extensionGetter_commaSourceFile (object->mProperty_mLogMessage.getter_location (SOURCE_FILE ("instruction-log.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 111)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 111)), inCompiler  COMMA_SOURCE_FILE ("instruction-log.galgas", 110)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_logInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_logInstructionForGeneration.mSlotID,
                                            extensionMethod_logInstructionForGeneration_generateInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_logInstructionForGeneration_generateInstruction (defineExtensionMethod_logInstructionForGeneration_generateInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@loopInstructionAST enterInstructionInSemanticContext'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_loopInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                  GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_loopInstructionAST * object = (const cPtr_loopInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_loopInstructionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mVariantExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 78)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mLoopExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 79)) ;
  extensionMethod_enterInstructionListInSemanticContext (object->mProperty_mFirstInstructions, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 80)) ;
  extensionMethod_enterInstructionListInSemanticContext (object->mProperty_mSecondInstructions, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 81)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_loopInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_loopInstructionAST.mSlotID,
                                                          extensionMethod_loopInstructionAST_enterInstructionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_loopInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_loopInstructionAST_enterInstructionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Overriding extension method '@loopInstructionAST analyzeSemanticInstruction'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_loopInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                           const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                           GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                           GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_loopInstructionAST * object = (const cPtr_loopInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_loopInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_variantExpression_3789 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mVariantExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-loop.galgas", 99)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_variantExpression_3789, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 96)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_variantExpression_3789.getter_mResultType (SOURCE_FILE ("instruction-loop.galgas", 105)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mUIntType (HERE))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOfVariantExpression, GALGAS_string ("the variant expression type should be '@").add_operation (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mUIntType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 107)).add_operation (GALGAS_string ("', but it has '@"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 107)).add_operation (var_variantExpression_3789.getter_mResultType (SOURCE_FILE ("instruction-loop.galgas", 107)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 107)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 107)), fixItArray1  COMMA_SOURCE_FILE ("instruction-loop.galgas", 106)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_loopExpression_4420 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mLoopExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-loop.galgas", 114)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_loopExpression_4420, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 111)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsNotEqual, var_loopExpression_4420.getter_mResultType (SOURCE_FILE ("instruction-loop.galgas", 120)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBoolType (HERE))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOfLoopExpression, GALGAS_string ("the loop expression type should be '@").add_operation (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBoolType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 122)).add_operation (GALGAS_string ("', but it has '@"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 122)).add_operation (var_loopExpression_4420.getter_mResultType (SOURCE_FILE ("instruction-loop.galgas", 122)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 122)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 122)), fixItArray3  COMMA_SOURCE_FILE ("instruction-loop.galgas", 121)) ;
    }
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 125)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_first_5F_instructionList_5140 ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-loop.galgas", 132)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-loop.galgas", 133)), object->mProperty_mFirstInstructions, object->mProperty_mEndOfFirstInstructions, ioArgument_ioVariableMap, var_first_5F_instructionList_5140, inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 128)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_second_5F_instructionList_5525 ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-loop.galgas", 145)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-loop.galgas", 146)), object->mProperty_mSecondInstructions, object->mProperty_mEndOfSecondInstructions, ioArgument_ioVariableMap, var_second_5F_instructionList_5525, inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 141)) ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mProperty_mEndOfLoopInstruction, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 153)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_loopInstructionForGeneration::constructor_new (object->mProperty_mInstructionLocation, var_variantExpression_3789, var_first_5F_instructionList_5140, var_loopExpression_4420, var_second_5F_instructionList_5525  COMMA_SOURCE_FILE ("instruction-loop.galgas", 155))  COMMA_SOURCE_FILE ("instruction-loop.galgas", 155)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_loopInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_loopInstructionAST.mSlotID,
                                                   extensionMethod_loopInstructionAST_analyzeSemanticInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_loopInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_loopInstructionAST_analyzeSemanticInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@loopInstructionForGeneration generateInstruction'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  GALGAS_string var_variantCppVarName_7311 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mVariantExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_variantCppVarName_7311, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 185)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_variantCppVarName_7311, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 192)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 192)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 192)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 193)) ;
  }
  GALGAS_string var_variantVar_7449 = GALGAS_string ("variant_").add_operation (object->mProperty_mInstructionLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 194)).getter_string (SOURCE_FILE ("instruction-loop.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 194)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("uint32_t ").add_operation (var_variantVar_7449, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 195)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 195)).add_operation (var_variantCppVarName_7311, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 195)).add_operation (GALGAS_string (".uintValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 195)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 195)) ;
  GALGAS_string var_loopVar_7628 = GALGAS_string ("loop_").add_operation (object->mProperty_mInstructionLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 196)).getter_string (SOURCE_FILE ("instruction-loop.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 196)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("bool ").add_operation (var_loopVar_7628, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 197)).add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 197)).add_operation (GALGAS_string ("while ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 197)).add_operation (var_loopVar_7628, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 198)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 198)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 197)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 199)) ;
  }
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mProperty_mFirstInstructions, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 200)) ;
  }
  GALGAS_string var_loopExpressionVar_8069 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mLoopExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_loopExpressionVar_8069, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 209)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_loopVar_7628.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 210)).add_operation (var_loopExpressionVar_8069, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 210)).add_operation (GALGAS_string (".isValid () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 210)).add_operation (GALGAS_string ("if ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 210)).add_operation (var_loopVar_7628, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 211)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 211)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 211)).add_operation (var_loopVar_7628, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 212)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 212)).add_operation (var_loopExpressionVar_8069, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 212)).add_operation (GALGAS_string (".boolValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 212)).add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 212)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 210)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 214)) COMMA_SOURCE_FILE ("instruction-loop.galgas", 214)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_loopVar_7628, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 215)).add_operation (GALGAS_string (" && (0 == "), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 215)).add_operation (var_variantVar_7449, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 215)).add_operation (GALGAS_string (")) {\n"
    "  "), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 215)).add_operation (var_loopVar_7628, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 216)).add_operation (GALGAS_string (" = false ;\n"
    "  "), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 216)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 217)), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 217)).add_operation (GALGAS_string ("->loopRunTimeVariantError ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 217)).add_operation (extensionGetter_sourceFile (object->mProperty_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 217)), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 217)).add_operation (GALGAS_string (") ;\n"
    "}\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 217)).add_operation (GALGAS_string ("if ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 218)).add_operation (var_loopVar_7628, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 219)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 219)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 215)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_variantVar_7449, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 220)).add_operation (GALGAS_string (" -- ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 220)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 220)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mProperty_mSecondInstructions, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 221)) ;
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_loopInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_loopInstructionForGeneration.mSlotID,
                                            extensionMethod_loopInstructionForGeneration_generateInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_loopInstructionForGeneration_generateInstruction (defineExtensionMethod_loopInstructionForGeneration_generateInstruction, NULL) ;

