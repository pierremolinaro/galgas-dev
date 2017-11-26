#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-17.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@templateConstructorAST templateExpressionAnalysis'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateConstructorAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                               const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                               const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateConstructorAST * object = (const cPtr_templateConstructorAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateConstructorAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_constructorType_9263 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 172)) ;
  GALGAS_constructorMap var_constructorMap_9432 = var_constructorType_9263.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 174)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_returnedType_9528 ;
  GALGAS_bool var_hasCompilerArgument_9556 ;
  GALGAS_functionSignature var_constructorFormalArgumentTypeList_9611 ;
  const cMapElement_constructorMap * objectArray_9618 = (const cMapElement_constructorMap *) var_constructorMap_9432.readAccessForWithInstruction (object->mProperty_mConstructorName.getter_string (SOURCE_FILE ("templateAnalysis.galgas", 179))) ;
  if (NULL != objectArray_9618) {
      macroValidSharedObject (objectArray_9618, cMapElement_constructorMap) ;
    var_constructorFormalArgumentTypeList_9611 = objectArray_9618->mProperty_mArgumentTypeList ;
    var_hasCompilerArgument_9556 = objectArray_9618->mProperty_mHasCompilerArgument ;
    var_returnedType_9528 = objectArray_9618->mProperty_mReturnedType ;
  }else{
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_constructorMap_9432.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 184)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mConstructorName.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 185)), GALGAS_string ("the '@").add_operation (object->mProperty_mTypeName.getter_string (SOURCE_FILE ("templateAnalysis.galgas", 186)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 186)).add_operation (GALGAS_string ("' type does not define any constructor"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 186)), fixItArray1  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 185)) ;
      var_constructorFormalArgumentTypeList_9611.drop () ; // Release error dropped variable
      var_hasCompilerArgument_9556.drop () ; // Release error dropped variable
      var_returnedType_9528.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_0) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      appendFixItActions (fixItArray2, kFixItReplace, var_constructorMap_9432.getter_keyList (SOURCE_FILE ("templateAnalysis.galgas", 192))) ;
      inCompiler->emitSemanticError (object->mProperty_mConstructorName.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 189)), GALGAS_string ("the '@").add_operation (object->mProperty_mTypeName.getter_string (SOURCE_FILE ("templateAnalysis.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 190)).add_operation (GALGAS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 190)).add_operation (object->mProperty_mConstructorName.getter_string (SOURCE_FILE ("templateAnalysis.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 190)).add_operation (GALGAS_string ("' constructor"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 190)), fixItArray2  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 189)) ;
      var_constructorFormalArgumentTypeList_9611.drop () ; // Release error dropped variable
      var_hasCompilerArgument_9556.drop () ; // Release error dropped variable
      var_returnedType_9528.drop () ; // Release error dropped variable
    }
  }
  GALGAS_semanticExpressionListForGeneration var_constructorEffectiveParameterList_10401 ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, object->mProperty_mExpressionList.getter_length (SOURCE_FILE ("templateAnalysis.galgas", 197)).objectCompare (var_constructorFormalArgumentTypeList_9611.getter_length (SOURCE_FILE ("templateAnalysis.galgas", 197)))).boolEnum () ;
  if (kBoolTrue == test_3) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (object->mProperty_mConstructorName.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 198)), GALGAS_string ("calling the '").add_operation (object->mProperty_mConstructorName.getter_string (SOURCE_FILE ("templateAnalysis.galgas", 199)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 199)).add_operation (GALGAS_string ("' constructor of '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 199)).add_operation (var_constructorType_9263.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 199)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 199)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 199)).add_operation (var_constructorFormalArgumentTypeList_9611.getter_length (SOURCE_FILE ("templateAnalysis.galgas", 200)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 199)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 200)).add_operation (object->mProperty_mExpressionList.getter_length (SOURCE_FILE ("templateAnalysis.galgas", 201)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 201)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 200)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 201)), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 198)) ;
    var_constructorEffectiveParameterList_10401.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_3) {
    var_constructorEffectiveParameterList_10401 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 204)) ;
    cEnumerator_templateExpressionListAST enumerator_10935 (object->mProperty_mExpressionList, kENUMERATION_UP) ;
    cEnumerator_functionSignature enumerator_10976 (var_constructorFormalArgumentTypeList_9611, kENUMERATION_UP) ;
    while (enumerator_10935.hasCurrentObject () && enumerator_10976.hasCurrentObject ()) {
      const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, enumerator_10976.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (enumerator_10935.current_mActualSelector (HERE).getter_string (HERE))).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_string temp_6 ;
        const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, enumerator_10976.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_7) {
          temp_6 = GALGAS_string (":") ;
        }else if (kBoolFalse == test_7) {
          temp_6 = GALGAS_string::makeEmptyString () ;
        }
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (enumerator_10935.current_mActualSelector (HERE).getter_location (SOURCE_FILE ("templateAnalysis.galgas", 207)), GALGAS_string ("the selector should be '!").add_operation (enumerator_10976.current_mFormalSelector (HERE).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 208)).add_operation (temp_6, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 208)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 208)), fixItArray8  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 207)) ;
      }
      GALGAS_semanticExpressionForGeneration var_exp_11390 ;
      callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) enumerator_10935.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_exp_11390, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 210)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_10976.current_mFormalArgumentType (HERE), var_exp_11390.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 216)), enumerator_10935.current_mEndOfExpressionLocation (HERE), var_exp_11390, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 216)) ;
      }
      var_constructorEffectiveParameterList_10401.addAssign_operation (var_exp_11390  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 217)) ;
      enumerator_10935.gotoNextObject () ;
      enumerator_10976.gotoNextObject () ;
    }
  }
  outArgument_outExpression = GALGAS_constructorExpressionForGeneration::constructor_new (var_returnedType_9528, object->mProperty_mConstructorName.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 223)), var_constructorType_9263, object->mProperty_mConstructorName.getter_string (SOURCE_FILE ("templateAnalysis.galgas", 225)), var_constructorEffectiveParameterList_10401, var_hasCompilerArgument_9556  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 221)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateConstructorAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateConstructorAST.mSlotID,
                                                   extensionMethod_templateConstructorAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateConstructorAST_templateExpressionAnalysis (defineExtensionMethod_templateConstructorAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@templateFileWrapperTemplateCallAST templateExpressionAnalysis'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateFileWrapperTemplateCallAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                           const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                           GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                           const GALGAS_templateAnalysisContext /* constinArgument_inAnalysisContext */,
                                                                                           GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateFileWrapperTemplateCallAST * object = (const cPtr_templateFileWrapperTemplateCallAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateFileWrapperTemplateCallAST) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_mFileWrapperName.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 240)), GALGAS_string ("unhandled @templateFileWrapperTemplateCallAST templateExpressionAnalysis"), fixItArray0  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 240)) ;
  outArgument_outExpression.drop () ; // Release error dropped variable
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateFileWrapperTemplateCallAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateFileWrapperTemplateCallAST.mSlotID,
                                                   extensionMethod_templateFileWrapperTemplateCallAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateFileWrapperTemplateCallAST_templateExpressionAnalysis (defineExtensionMethod_templateFileWrapperTemplateCallAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@templateAndOperationAST templateExpressionAnalysis'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateAndOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateAndOperationAST * object = (const cPtr_templateAndOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateAndOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_13439 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_13439, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 254)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_13660 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_13660, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 261)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_13735 = var_leftExpression_13439.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 268)) ;
  {
  routine_checkDiadicOperator (var_leftType_13735, var_rightExpression_13660.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 271)), var_leftType_13735.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 272)).getter_infixAndOperator (SOURCE_FILE ("templateAnalysis.galgas", 272)), GALGAS_string ("&"), object->mProperty_mOperatorLocation, var_rightExpression_13660, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 269)) ;
  }
  outArgument_outExpression = GALGAS_andExpressionForGeneration::constructor_new (var_leftType_13735, object->mProperty_mOperatorLocation, var_leftExpression_13439, var_rightExpression_13660  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 278)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateAndOperationAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateAndOperationAST.mSlotID,
                                                   extensionMethod_templateAndOperationAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateAndOperationAST_templateExpressionAnalysis (defineExtensionMethod_templateAndOperationAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@templateOrOperationAST templateExpressionAnalysis'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateOrOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                               const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                               const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateOrOperationAST * object = (const cPtr_templateOrOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateOrOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_14717 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_14717, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 294)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_14938 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_14938, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 301)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_15013 = var_leftExpression_14717.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 308)) ;
  {
  routine_checkDiadicOperator (var_leftType_15013, var_rightExpression_14938.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 311)), var_leftType_15013.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 312)).getter_infixOrOperator (SOURCE_FILE ("templateAnalysis.galgas", 312)), GALGAS_string ("|"), object->mProperty_mOperatorLocation, var_rightExpression_14938, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 309)) ;
  }
  outArgument_outExpression = GALGAS_orExpressionForGeneration::constructor_new (var_leftType_15013, object->mProperty_mOperatorLocation, var_leftExpression_14717, var_rightExpression_14938  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 318)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateOrOperationAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateOrOperationAST.mSlotID,
                                                   extensionMethod_templateOrOperationAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateOrOperationAST_templateExpressionAnalysis (defineExtensionMethod_templateOrOperationAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@templateXorOperationAST templateExpressionAnalysis'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateXorOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateXorOperationAST * object = (const cPtr_templateXorOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateXorOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_15994 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_15994, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 334)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_16215 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_16215, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 341)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_16290 = var_leftExpression_15994.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 348)) ;
  {
  routine_checkDiadicOperator (var_leftType_16290, var_rightExpression_16215.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 351)), var_leftType_16290.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 352)).getter_infixXorOperator (SOURCE_FILE ("templateAnalysis.galgas", 352)), GALGAS_string ("^"), object->mProperty_mOperatorLocation, var_rightExpression_16215, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 349)) ;
  }
  outArgument_outExpression = GALGAS_xorExpressionForGeneration::constructor_new (var_leftType_16290, object->mProperty_mOperatorLocation, var_leftExpression_15994, var_rightExpression_16215  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 358)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateXorOperationAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateXorOperationAST.mSlotID,
                                                   extensionMethod_templateXorOperationAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateXorOperationAST_templateExpressionAnalysis (defineExtensionMethod_templateXorOperationAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@templateTrueBoolAST templateExpressionAnalysis'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateTrueBoolAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                            const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                            GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                            const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                            GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateTrueBoolAST * object = (const cPtr_templateTrueBoolAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateTrueBoolAST) ;
  outArgument_outExpression = GALGAS_trueExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBoolType (HERE), object->mProperty_mLocation  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 373)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateTrueBoolAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateTrueBoolAST.mSlotID,
                                                   extensionMethod_templateTrueBoolAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateTrueBoolAST_templateExpressionAnalysis (defineExtensionMethod_templateTrueBoolAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@templateFalseBoolAST templateExpressionAnalysis'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateFalseBoolAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                             const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                             GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                             const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                             GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateFalseBoolAST * object = (const cPtr_templateFalseBoolAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateFalseBoolAST) ;
  outArgument_outExpression = GALGAS_falseExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBoolType (HERE), object->mProperty_mLocation  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 384)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateFalseBoolAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateFalseBoolAST.mSlotID,
                                                   extensionMethod_templateFalseBoolAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateFalseBoolAST_templateExpressionAnalysis (defineExtensionMethod_templateFalseBoolAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@templateLiteralStringExpressionAST templateExpressionAnalysis'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateLiteralStringExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                           const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                           GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                           const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                           GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateLiteralStringExpressionAST * object = (const cPtr_templateLiteralStringExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateLiteralStringExpressionAST) ;
  GALGAS_string var_s_18110 = GALGAS_string::makeEmptyString () ;
  cEnumerator_stringlist enumerator_18146 (object->mProperty_mLiteralStringList, kENUMERATION_UP) ;
  while (enumerator_18146.hasCurrentObject ()) {
    var_s_18110.plusAssign_operation(enumerator_18146.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 397)) ;
    enumerator_18146.gotoNextObject () ;
  }
  outArgument_outExpression = GALGAS_literalStringExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringType (HERE), object->mProperty_mLocation, var_s_18110  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 399)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateLiteralStringExpressionAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateLiteralStringExpressionAST.mSlotID,
                                                   extensionMethod_templateLiteralStringExpressionAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateLiteralStringExpressionAST_templateExpressionAnalysis (defineExtensionMethod_templateLiteralStringExpressionAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@templateLiteralUIntExpressionAST templateExpressionAnalysis'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateLiteralUIntExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                         const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                         GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                         const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                         GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateLiteralUIntExpressionAST * object = (const cPtr_templateLiteralUIntExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateLiteralUIntExpressionAST) ;
  outArgument_outExpression = GALGAS_literalUIntExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mUIntType (HERE), object->mProperty_mLiteralInt.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 412)), object->mProperty_mLiteralInt.getter_uint (SOURCE_FILE ("templateAnalysis.galgas", 413))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 410)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateLiteralUIntExpressionAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateLiteralUIntExpressionAST.mSlotID,
                                                   extensionMethod_templateLiteralUIntExpressionAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateLiteralUIntExpressionAST_templateExpressionAnalysis (defineExtensionMethod_templateLiteralUIntExpressionAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@templateLiteralSIntExpressionAST templateExpressionAnalysis'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateLiteralSIntExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                         const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                         GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                         const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                         GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateLiteralSIntExpressionAST * object = (const cPtr_templateLiteralSIntExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateLiteralSIntExpressionAST) ;
  outArgument_outExpression = GALGAS_literalSIntExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mSIntType (HERE), object->mProperty_mLiteralInt.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 426)), object->mProperty_mLiteralInt.getter_sint (SOURCE_FILE ("templateAnalysis.galgas", 427))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 424)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateLiteralSIntExpressionAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateLiteralSIntExpressionAST.mSlotID,
                                                   extensionMethod_templateLiteralSIntExpressionAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateLiteralSIntExpressionAST_templateExpressionAnalysis (defineExtensionMethod_templateLiteralSIntExpressionAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@templateLiteralUInt64ExpressionAST templateExpressionAnalysis'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateLiteralUInt_36__34_ExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                                 const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                                 GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                                 const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                                 C_Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateLiteralUInt_36__34_ExpressionAST * object = (const cPtr_templateLiteralUInt_36__34_ExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateLiteralUInt_36__34_ExpressionAST) ;
  outArgument_outExpression = GALGAS_literalUInt_36__34_ExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mUInt_36__34_Type (HERE), object->mProperty_mLiteralInt.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 440)), object->mProperty_mLiteralInt.getter_uint_36__34_ (SOURCE_FILE ("templateAnalysis.galgas", 441))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 438)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateLiteralUInt_36__34_ExpressionAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateLiteralUInt_36__34_ExpressionAST.mSlotID,
                                                   extensionMethod_templateLiteralUInt_36__34_ExpressionAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateLiteralUInt_36__34_ExpressionAST_templateExpressionAnalysis (defineExtensionMethod_templateLiteralUInt_36__34_ExpressionAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@templateLiteralSInt64ExpressionAST templateExpressionAnalysis'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateLiteralSInt_36__34_ExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                                 const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                                 GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                                 const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                                 C_Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateLiteralSInt_36__34_ExpressionAST * object = (const cPtr_templateLiteralSInt_36__34_ExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateLiteralSInt_36__34_ExpressionAST) ;
  outArgument_outExpression = GALGAS_literalSInt_36__34_ExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mSInt_36__34_Type (HERE), object->mProperty_mLiteralInt.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 454)), object->mProperty_mLiteralInt.getter_sint_36__34_ (SOURCE_FILE ("templateAnalysis.galgas", 455))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 452)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateLiteralSInt_36__34_ExpressionAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateLiteralSInt_36__34_ExpressionAST.mSlotID,
                                                   extensionMethod_templateLiteralSInt_36__34_ExpressionAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateLiteralSInt_36__34_ExpressionAST_templateExpressionAnalysis (defineExtensionMethod_templateLiteralSInt_36__34_ExpressionAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@templateLiteralCharExpressionAST templateExpressionAnalysis'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateLiteralCharExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                         const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                         GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                         const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                         GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateLiteralCharExpressionAST * object = (const cPtr_templateLiteralCharExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateLiteralCharExpressionAST) ;
  outArgument_outExpression = GALGAS_literalCharExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mCharType (HERE), object->mProperty_mLiteralChar.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 468)), object->mProperty_mLiteralChar.getter_char (SOURCE_FILE ("templateAnalysis.galgas", 469))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 466)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateLiteralCharExpressionAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateLiteralCharExpressionAST.mSlotID,
                                                   extensionMethod_templateLiteralCharExpressionAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateLiteralCharExpressionAST_templateExpressionAnalysis (defineExtensionMethod_templateLiteralCharExpressionAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@templateLiteralDoubleExpressionAST templateExpressionAnalysis'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateLiteralDoubleExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                           const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                           GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                           const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                           GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                           C_Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateLiteralDoubleExpressionAST * object = (const cPtr_templateLiteralDoubleExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateLiteralDoubleExpressionAST) ;
  outArgument_outExpression = GALGAS_literalDoubleExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mDoubleType (HERE), object->mProperty_mLiteralDouble.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 482)), object->mProperty_mLiteralDouble.getter_double (SOURCE_FILE ("templateAnalysis.galgas", 483))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 479)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateLiteralDoubleExpressionAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateLiteralDoubleExpressionAST.mSlotID,
                                                   extensionMethod_templateLiteralDoubleExpressionAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateLiteralDoubleExpressionAST_templateExpressionAnalysis (defineExtensionMethod_templateLiteralDoubleExpressionAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@templateNotOperatorAST templateExpressionAnalysis'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateNotOperatorAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                               const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                               const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateNotOperatorAST * object = (const cPtr_templateNotOperatorAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateNotOperatorAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_22228 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_expression_22228, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 496)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_22442 = var_expression_22228.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 503)) ;
  const enumGalgasBool test_0 = var_type_22442.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 504)).getter_prefixNotOperator (SOURCE_FILE ("templateAnalysis.galgas", 504)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 504)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("operand type is '@").add_operation (var_type_22442.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 506)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 506)).add_operation (GALGAS_string ("' and does not support the 'not' operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 506)), fixItArray1  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 505)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    outArgument_outExpression = GALGAS_notExpressionForGeneration::constructor_new (var_type_22442, object->mProperty_mOperatorLocation, var_expression_22228  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 510)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateNotOperatorAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateNotOperatorAST.mSlotID,
                                                   extensionMethod_templateNotOperatorAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateNotOperatorAST_templateExpressionAnalysis (defineExtensionMethod_templateNotOperatorAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@templateLogicalNegateAST templateExpressionAnalysis'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateLogicalNegateAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                 const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                 const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateLogicalNegateAST * object = (const cPtr_templateLogicalNegateAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateLogicalNegateAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_23274 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_expression_23274, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 527)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_23487 = var_expression_23274.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 534)) ;
  const enumGalgasBool test_0 = var_type_23487.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 535)).getter_prefixTildeOperator (SOURCE_FILE ("templateAnalysis.galgas", 535)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 535)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("operand type is '@").add_operation (var_type_23487.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 537)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 537)).add_operation (GALGAS_string ("' and does not support the '~' operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 537)), fixItArray1  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 536)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    outArgument_outExpression = GALGAS_tildeExpressionForGeneration::constructor_new (var_type_23487, object->mProperty_mOperatorLocation, var_expression_23274  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 541)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateLogicalNegateAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateLogicalNegateAST.mSlotID,
                                                   extensionMethod_templateLogicalNegateAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateLogicalNegateAST_templateExpressionAnalysis (defineExtensionMethod_templateLogicalNegateAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@templateOptionAccessAST templateExpressionAnalysis'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateOptionAccessAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateOptionAccessAST * object = (const cPtr_templateOptionAccessAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateOptionAccessAST) ;
  GALGAS_lstring var_usefulnessName_24270 = function_optionNameForUsefulEntitiesGraph (object->mProperty_mOptionComponentName, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 556)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_24270 COMMA_SOURCE_FILE ("templateAnalysis.galgas", 557)) ;
  }
  GALGAS_bool var_optionComponentIsPredefined_24567 ;
  GALGAS_commandLineOptionMap var_boolOptionMap_24612 ;
  GALGAS_commandLineOptionMap var_uintOptionMap_24657 ;
  GALGAS_commandLineOptionMap var_stringOptionMap_24704 ;
  GALGAS_commandLineOptionMap var_stringListOptionMap_24755 ;
  constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mOptionComponentMapForSemanticAnalysis (HERE).method_searchKey (object->mProperty_mOptionComponentName, var_optionComponentIsPredefined_24567, var_boolOptionMap_24612, var_uintOptionMap_24657, var_stringOptionMap_24704, var_stringListOptionMap_24755, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 558)) ;
  GALGAS_bool var_found_24771 = var_boolOptionMap_24612.getter_hasKey (object->mProperty_mOptionName.getter_string (HERE) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 566)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_returnedType_24853 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBoolType (HERE) ;
  const enumGalgasBool test_0 = var_found_24771.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 568)).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_found_24771 = var_uintOptionMap_24657.getter_hasKey (object->mProperty_mOptionName.getter_string (HERE) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 569)) ;
    var_returnedType_24853 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mUIntType (HERE) ;
  }
  const enumGalgasBool test_1 = var_found_24771.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 572)).boolEnum () ;
  if (kBoolTrue == test_1) {
    var_found_24771 = var_stringOptionMap_24704.getter_hasKey (object->mProperty_mOptionName.getter_string (HERE) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 573)) ;
    var_returnedType_24853 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringType (HERE) ;
  }
  const enumGalgasBool test_2 = var_found_24771.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 576)).boolEnum () ;
  if (kBoolTrue == test_2) {
    var_found_24771 = var_stringListOptionMap_24755.getter_hasKey (object->mProperty_mOptionName.getter_string (HERE) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 577)) ;
    var_returnedType_24853 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringListType (HERE) ;
  }
  const enumGalgasBool test_3 = var_found_24771.boolEnum () ;
  if (kBoolTrue == test_3) {
    const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, object->mProperty_mGetterName.getter_string (SOURCE_FILE ("templateAnalysis.galgas", 581)).objectCompare (GALGAS_string ("value"))).boolEnum () ;
    if (kBoolTrue == test_4) {
      outArgument_outExpression = GALGAS_optionValueExpressionForGeneration::constructor_new (var_returnedType_24853, object->mProperty_mOptionComponentName.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 584)), var_optionComponentIsPredefined_24567, object->mProperty_mOptionComponentName.getter_string (SOURCE_FILE ("templateAnalysis.galgas", 586)), object->mProperty_mOptionName.getter_string (HERE)  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 582)) ;
    }else if (kBoolFalse == test_4) {
      const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, object->mProperty_mGetterName.getter_string (SOURCE_FILE ("templateAnalysis.galgas", 589)).objectCompare (GALGAS_string ("char"))).boolEnum () ;
      if (kBoolTrue == test_5) {
        outArgument_outExpression = GALGAS_optionCharExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mCharType (HERE), object->mProperty_mOptionComponentName.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 592)), var_optionComponentIsPredefined_24567, object->mProperty_mOptionComponentName.getter_string (SOURCE_FILE ("templateAnalysis.galgas", 594)), object->mProperty_mOptionName.getter_string (HERE)  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 590)) ;
      }else if (kBoolFalse == test_5) {
        const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, object->mProperty_mGetterName.getter_string (SOURCE_FILE ("templateAnalysis.galgas", 597)).objectCompare (GALGAS_string ("string"))).boolEnum () ;
        if (kBoolTrue == test_6) {
          outArgument_outExpression = GALGAS_optionStringExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringType (HERE), object->mProperty_mOptionComponentName.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 600)), var_optionComponentIsPredefined_24567, object->mProperty_mOptionComponentName.getter_string (SOURCE_FILE ("templateAnalysis.galgas", 602)), object->mProperty_mOptionName.getter_string (HERE)  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 598)) ;
        }else if (kBoolFalse == test_6) {
          const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, object->mProperty_mGetterName.getter_string (SOURCE_FILE ("templateAnalysis.galgas", 605)).objectCompare (GALGAS_string ("comment"))).boolEnum () ;
          if (kBoolTrue == test_7) {
            outArgument_outExpression = GALGAS_optionCommentExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringType (HERE), object->mProperty_mOptionComponentName.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 608)), var_optionComponentIsPredefined_24567, object->mProperty_mOptionComponentName.getter_string (SOURCE_FILE ("templateAnalysis.galgas", 610)), object->mProperty_mOptionName.getter_string (HERE)  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 606)) ;
          }else if (kBoolFalse == test_7) {
            TC_Array <C_FixItDescription> fixItArray8 ;
            inCompiler->emitSemanticError (object->mProperty_mGetterName.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 614)), GALGAS_string ("only the 'value', 'char', 'string' and 'comment' getters are defined for an option"), fixItArray8  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 614)) ;
            outArgument_outExpression.drop () ; // Release error dropped variable
          }
        }
      }
    }
  }else if (kBoolFalse == test_3) {
    GALGAS_stringset var_s_26777 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("templateAnalysis.galgas", 617)) ;
    cEnumerator_commandLineOptionMap enumerator_26810 (var_boolOptionMap_24612, kENUMERATION_UP) ;
    while (enumerator_26810.hasCurrentObject ()) {
      var_s_26777.addAssign_operation (enumerator_26810.current_lkey (HERE).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 619))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 619)) ;
      enumerator_26810.gotoNextObject () ;
    }
    cEnumerator_commandLineOptionMap enumerator_26866 (var_uintOptionMap_24657, kENUMERATION_UP) ;
    while (enumerator_26866.hasCurrentObject ()) {
      var_s_26777.addAssign_operation (enumerator_26866.current_lkey (HERE).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 622))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 622)) ;
      enumerator_26866.gotoNextObject () ;
    }
    cEnumerator_commandLineOptionMap enumerator_26924 (var_stringOptionMap_24704, kENUMERATION_UP) ;
    while (enumerator_26924.hasCurrentObject ()) {
      var_s_26777.addAssign_operation (enumerator_26924.current_lkey (HERE).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 625))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 625)) ;
      enumerator_26924.gotoNextObject () ;
    }
    TC_Array <C_FixItDescription> fixItArray9 ;
    appendFixItActions (fixItArray9, kFixItReplace, var_s_26777) ;
    inCompiler->emitSemanticError (object->mProperty_mOptionName.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 627)), GALGAS_string ("the '").add_operation (object->mProperty_mOptionComponentName.getter_string (SOURCE_FILE ("templateAnalysis.galgas", 628)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 628)).add_operation (GALGAS_string ("' option component does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 628)).add_operation (object->mProperty_mOptionName.getter_string (SOURCE_FILE ("templateAnalysis.galgas", 628)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 628)).add_operation (GALGAS_string ("' option"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 628)), fixItArray9  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 627)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateOptionAccessAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateOptionAccessAST.mSlotID,
                                                   extensionMethod_templateOptionAccessAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateOptionAccessAST_templateExpressionAnalysis (defineExtensionMethod_templateOptionAccessAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@templateFunctionCallAST templateExpressionAnalysis'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateFunctionCallAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateFunctionCallAST * object = (const cPtr_templateFunctionCallAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateFunctionCallAST) ;
  GALGAS_lstring var_usefulnessName_27783 = function_functionNameForUsefulEntitiesGraph (object->mProperty_mFunctionName, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 644)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_27783 COMMA_SOURCE_FILE ("templateAnalysis.galgas", 645)) ;
  }
  GALGAS_functionSignature var_functionSignature_28077 ;
  GALGAS_unifiedTypeMap_2D_proxy var_resultType_28119 ;
  GALGAS_bool var_isInternal_28145 ;
  constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mFunctionMap (HERE).method_searchKey (object->mProperty_mFunctionName, var_functionSignature_28077, var_resultType_28119, var_isInternal_28145, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 647)) ;
  const enumGalgasBool test_0 = var_isInternal_28145.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location var_procDeclarationLocation_28222 = constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mFunctionMap (HERE).getter_locationForKey (object->mProperty_mFunctionName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 655)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, object->mProperty_mFunctionName.getter_location (HERE).getter_file (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 656)).objectCompare (var_procDeclarationLocation_28222.getter_file (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 656)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mProperty_mFunctionName.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 657)), GALGAS_string ("this proc is internal to '").add_operation (var_procDeclarationLocation_28222.getter_file (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 657)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 657)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 657)), fixItArray2  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 657)) ;
    }
  }
  const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_functionSignature_28077.getter_length (SOURCE_FILE ("templateAnalysis.galgas", 661)).objectCompare (object->mProperty_mExpressionList.getter_length (SOURCE_FILE ("templateAnalysis.galgas", 661)))).boolEnum () ;
  if (kBoolTrue == test_3) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (object->mProperty_mFunctionName.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 662)), GALGAS_string ("the '").add_operation (object->mProperty_mFunctionName.getter_string (SOURCE_FILE ("templateAnalysis.galgas", 663)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 663)).add_operation (GALGAS_string ("' function header declares "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 663)).add_operation (var_functionSignature_28077.getter_length (SOURCE_FILE ("templateAnalysis.galgas", 663)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 663)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 663)).add_operation (GALGAS_string (" formal parameter(s), but this function call names "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 663)).add_operation (object->mProperty_mExpressionList.getter_length (SOURCE_FILE ("templateAnalysis.galgas", 664)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 664)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 664)).add_operation (GALGAS_string (" effective argument(s)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 664)), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 662)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_3) {
    GALGAS_semanticExpressionListForGeneration var_semanticExpressionListForGeneration_28926 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 668)) ;
    cEnumerator_functionSignature enumerator_28999 (var_functionSignature_28077, kENUMERATION_UP) ;
    cEnumerator_templateExpressionListAST enumerator_29022 (object->mProperty_mExpressionList, kENUMERATION_UP) ;
    while (enumerator_28999.hasCurrentObject () && enumerator_29022.hasCurrentObject ()) {
      GALGAS_semanticExpressionForGeneration var_expression_29221 ;
      callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) enumerator_29022.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_expression_29221, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 670)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_28999.current_mFormalArgumentType (HERE), var_expression_29221.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 676)), enumerator_29022.current_mEndOfExpressionLocation (HERE), var_expression_29221, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 676)) ;
      }
      var_semanticExpressionListForGeneration_28926.addAssign_operation (var_expression_29221  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 677)) ;
      const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, enumerator_28999.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (enumerator_29022.current_mActualSelector (HERE).getter_string (HERE))).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_string temp_6 ;
        const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, enumerator_28999.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_7) {
          temp_6 = enumerator_28999.current_mFormalSelector (HERE).getter_string (HERE).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 679)) ;
        }else if (kBoolFalse == test_7) {
          temp_6 = GALGAS_string::makeEmptyString () ;
        }
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (enumerator_29022.current_mActualSelector (HERE).getter_location (SOURCE_FILE ("templateAnalysis.galgas", 679)), GALGAS_string ("the selector should be '!").add_operation (temp_6, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 679)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 679)), fixItArray8  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 679)) ;
      }
      enumerator_28999.gotoNextObject () ;
      enumerator_29022.gotoNextObject () ;
    }
    outArgument_outExpression = GALGAS_functionCallExpressionForGeneration::constructor_new (var_resultType_28119, object->mProperty_mFunctionName.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 684)), object->mProperty_mFunctionName.getter_string (SOURCE_FILE ("templateAnalysis.galgas", 685)), var_semanticExpressionListForGeneration_28926  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 682)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateFunctionCallAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateFunctionCallAST.mSlotID,
                                                   extensionMethod_templateFunctionCallAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateFunctionCallAST_templateExpressionAnalysis (defineExtensionMethod_templateFunctionCallAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@templateExtensionTemplateCallAST templateExpressionAnalysis'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateExtensionTemplateCallAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                         const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                         GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                         const GALGAS_templateAnalysisContext /* constinArgument_inAnalysisContext */,
                                                                                         GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateExtensionTemplateCallAST * object = (const cPtr_templateExtensionTemplateCallAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateExtensionTemplateCallAST) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_mTemplateName.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 700)), GALGAS_string ("INTERNAL ERROR: @templateExtensionTemplateCallAST templateExpressionAnalysis not implemented yet"), fixItArray0  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 700)) ;
  outArgument_outExpression.drop () ; // Release error dropped variable
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateExtensionTemplateCallAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateExtensionTemplateCallAST.mSlotID,
                                                   extensionMethod_templateExtensionTemplateCallAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateExtensionTemplateCallAST_templateExpressionAnalysis (defineExtensionMethod_templateExtensionTemplateCallAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@templateVarInExpressionAST templateExpressionAnalysis'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateVarInExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                   const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                   GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                   const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                   GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateVarInExpressionAST * object = (const cPtr_templateVarInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateVarInExpressionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_31317 ;
  GALGAS_string var_sourceVariableCppName_31349 ;
  constinArgument_inAnalysisContext.getter_mTemplateVariableMap (HERE).method_searchKey (object->mProperty_mVarName, var_type_31317, var_sourceVariableCppName_31349, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 717)) ;
  outArgument_outExpression = GALGAS_varInExpressionForGeneration::constructor_new (var_type_31317, object->mProperty_mVarName.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 720)), var_sourceVariableCppName_31349, var_sourceVariableCppName_31349  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 718)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateVarInExpressionAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateVarInExpressionAST.mSlotID,
                                                   extensionMethod_templateVarInExpressionAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateVarInExpressionAST_templateExpressionAnalysis (defineExtensionMethod_templateVarInExpressionAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@templateAddOperationAST templateExpressionAnalysis'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateAddOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateAddOperationAST * object = (const cPtr_templateAddOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateAddOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_32432 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_32432, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 736)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_32653 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_32653, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 743)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_32728 = var_leftExpression_32432.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 750)) ;
  {
  routine_checkDiadicOperator (var_leftType_32728, var_rightExpression_32653.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 753)), var_leftType_32728.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 754)).getter_infixAddOperator (SOURCE_FILE ("templateAnalysis.galgas", 754)), GALGAS_string ("+"), object->mProperty_mOperatorLocation, var_rightExpression_32653, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 751)) ;
  }
  outArgument_outExpression = GALGAS_addExpressionForGeneration::constructor_new (var_leftType_32728, object->mProperty_mOperatorLocation, var_leftExpression_32432, var_rightExpression_32653  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 760)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateAddOperationAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateAddOperationAST.mSlotID,
                                                   extensionMethod_templateAddOperationAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateAddOperationAST_templateExpressionAnalysis (defineExtensionMethod_templateAddOperationAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@templateSubOperationAST templateExpressionAnalysis'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateSubOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateSubOperationAST * object = (const cPtr_templateSubOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateSubOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_33952 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_33952, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 778)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_34173 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_34173, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 785)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_34248 = var_leftExpression_33952.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 792)) ;
  {
  routine_checkDiadicOperator (var_leftType_34248, var_rightExpression_34173.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 795)), var_leftType_34248.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 796)).getter_infixSubOperator (SOURCE_FILE ("templateAnalysis.galgas", 796)), GALGAS_string ("-"), object->mProperty_mOperatorLocation, var_rightExpression_34173, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 793)) ;
  }
  outArgument_outExpression = GALGAS_subExpressionForGeneration::constructor_new (var_leftType_34248, object->mProperty_mOperatorLocation, var_leftExpression_33952, var_rightExpression_34173  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 802)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateSubOperationAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateSubOperationAST.mSlotID,
                                                   extensionMethod_templateSubOperationAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateSubOperationAST_templateExpressionAnalysis (defineExtensionMethod_templateSubOperationAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@templateMultiplyOperationAST templateExpressionAnalysis'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateMultiplyOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                     const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                     const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                     GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateMultiplyOperationAST * object = (const cPtr_templateMultiplyOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateMultiplyOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_35477 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_35477, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 820)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_35698 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_35698, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 827)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_35773 = var_leftExpression_35477.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 834)) ;
  {
  routine_checkDiadicOperator (var_leftType_35773, var_rightExpression_35698.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 837)), var_leftType_35773.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 838)).getter_infixMulOperator (SOURCE_FILE ("templateAnalysis.galgas", 838)), GALGAS_string ("*"), object->mProperty_mOperatorLocation, var_rightExpression_35698, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 835)) ;
  }
  outArgument_outExpression = GALGAS_multiplicationExpressionForGeneration::constructor_new (var_leftType_35773, object->mProperty_mOperatorLocation, var_leftExpression_35477, var_rightExpression_35698  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 844)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateMultiplyOperationAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateMultiplyOperationAST.mSlotID,
                                                   extensionMethod_templateMultiplyOperationAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateMultiplyOperationAST_templateExpressionAnalysis (defineExtensionMethod_templateMultiplyOperationAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@templateDivideOperationAST templateExpressionAnalysis'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateDivideOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                   const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                   GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                   const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                   GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateDivideOperationAST * object = (const cPtr_templateDivideOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateDivideOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_37011 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_37011, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 862)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_37232 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_37232, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 869)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_37307 = var_leftExpression_37011.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 876)) ;
  {
  routine_checkDiadicOperator (var_leftType_37307, var_rightExpression_37232.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 879)), var_leftType_37307.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 880)).getter_infixDivOperator (SOURCE_FILE ("templateAnalysis.galgas", 880)), GALGAS_string ("/"), object->mProperty_mOperatorLocation, var_rightExpression_37232, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 877)) ;
  }
  outArgument_outExpression = GALGAS_divisionExpressionForGeneration::constructor_new (var_leftType_37307, object->mProperty_mOperatorLocation, var_leftExpression_37011, var_rightExpression_37232  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 886)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateDivideOperationAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateDivideOperationAST.mSlotID,
                                                   extensionMethod_templateDivideOperationAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateDivideOperationAST_templateExpressionAnalysis (defineExtensionMethod_templateDivideOperationAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@templateModuloOperationAST templateExpressionAnalysis'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateModuloOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                   const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                   GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                   const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                   GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateModuloOperationAST * object = (const cPtr_templateModuloOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateModuloOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_38539 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_38539, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 904)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_38760 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_38760, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 911)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_38835 = var_leftExpression_38539.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 918)) ;
  {
  routine_checkDiadicOperator (var_leftType_38835, var_rightExpression_38760.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 921)), var_leftType_38835.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 922)).getter_infixModOperator (SOURCE_FILE ("templateAnalysis.galgas", 922)), GALGAS_string ("mod"), object->mProperty_mOperatorLocation, var_rightExpression_38760, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 919)) ;
  }
  outArgument_outExpression = GALGAS_moduloExpressionForGeneration::constructor_new (var_leftType_38835, object->mProperty_mOperatorLocation, var_leftExpression_38539, var_rightExpression_38760  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 928)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateModuloOperationAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateModuloOperationAST.mSlotID,
                                                   extensionMethod_templateModuloOperationAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateModuloOperationAST_templateExpressionAnalysis (defineExtensionMethod_templateModuloOperationAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@templateUnaryMinusOperationAST templateExpressionAnalysis'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateUnaryMinusOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                       const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                       const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateUnaryMinusOperationAST * object = (const cPtr_templateUnaryMinusOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateUnaryMinusOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_39924 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_expression_39924, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 947)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_40137 = var_expression_39924.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 954)) ;
  const enumGalgasBool test_0 = var_type_40137.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 955)).getter_prefixMinusOperator (SOURCE_FILE ("templateAnalysis.galgas", 955)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 955)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("operand type is '@").add_operation (var_type_40137.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 957)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 957)).add_operation (GALGAS_string ("' and does not support the prefix minus operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 957)), fixItArray1  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 956)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    outArgument_outExpression = GALGAS_unaryMinusExpressionForGeneration::constructor_new (var_type_40137, object->mProperty_mOperatorLocation, var_expression_39924  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 961)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateUnaryMinusOperationAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateUnaryMinusOperationAST.mSlotID,
                                                   extensionMethod_templateUnaryMinusOperationAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateUnaryMinusOperationAST_templateExpressionAnalysis (defineExtensionMethod_templateUnaryMinusOperationAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@structFieldAccessTemplateExpressionAST templateExpressionAnalysis'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_structFieldAccessTemplateExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                               const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                               const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structFieldAccessTemplateExpressionAST * object = (const cPtr_structFieldAccessTemplateExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_structFieldAccessTemplateExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_41375 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_expression_41375, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 979)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_41445 = var_expression_41375.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 986)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_type_41445.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 987)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("templateAnalysis.galgas", 987)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mStructFieldName.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 988)), GALGAS_string ("the '.' operator requires the receiver to be a struct"), fixItArray1  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 988)) ;
  }
  GALGAS_propertyMap var_attributeMap_41640 = var_type_41445.getter_mAttributeMap (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 990)) ;
  var_attributeMap_41640.method_searchKey (object->mProperty_mStructFieldName, var_type_41445, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 991)) ;
  outArgument_outExpression = GALGAS_structFieldAccessExpressionForGeneration::constructor_new (var_type_41445, object->mProperty_mOperatorLocation, var_expression_41375, object->mProperty_mStructFieldName.getter_string (HERE)  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 996)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_structFieldAccessTemplateExpressionAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_structFieldAccessTemplateExpressionAST.mSlotID,
                                                   extensionMethod_structFieldAccessTemplateExpressionAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structFieldAccessTemplateExpressionAST_templateExpressionAnalysis (defineExtensionMethod_structFieldAccessTemplateExpressionAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@templateEqualTestAST templateExpressionAnalysis'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateEqualTestAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                             const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                             GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateEqualTestAST * object = (const cPtr_templateEqualTestAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateEqualTestAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_42912 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_42912, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1014)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_43137 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_43137, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1021)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_43212 = var_leftExpression_42912.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1028)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_rightType_43281 = var_rightExpression_43137.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1029)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_leftType_43212.getter_lkey (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1030)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 1030)).objectCompare (var_rightType_43281.getter_lkey (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1030)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 1030)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType_43212.getter_lkey (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1032)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 1032)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1032)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1032)).add_operation (var_rightType_43281.getter_lkey (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1032)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 1032)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1032)).add_operation (GALGAS_string ("': '==' operator requires the types are the same"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1032)), fixItArray1  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1031)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    outArgument_outExpression = GALGAS_equalExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBoolType (HERE), object->mProperty_mOperatorLocation, var_leftExpression_42912, var_rightExpression_43137  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1036)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateEqualTestAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateEqualTestAST.mSlotID,
                                                   extensionMethod_templateEqualTestAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateEqualTestAST_templateExpressionAnalysis (defineExtensionMethod_templateEqualTestAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@templateNonEqualTestAST templateExpressionAnalysis'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateNonEqualTestAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateNonEqualTestAST * object = (const cPtr_templateNonEqualTestAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateNonEqualTestAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_44402 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_44402, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1053)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_44627 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_44627, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1060)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_44702 = var_leftExpression_44402.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1067)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_rightType_44771 = var_rightExpression_44627.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1068)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_leftType_44702.getter_lkey (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1069)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 1069)).objectCompare (var_rightType_44771.getter_lkey (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1069)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 1069)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType_44702.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1071)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1071)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1071)).add_operation (var_rightType_44771.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1071)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1071)).add_operation (GALGAS_string ("': '!=' operator requires the types are the same"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1071)), fixItArray1  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1070)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    outArgument_outExpression = GALGAS_notEqualExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBoolType (HERE), object->mProperty_mOperatorLocation, var_leftExpression_44402, var_rightExpression_44627  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1075)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateNonEqualTestAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateNonEqualTestAST.mSlotID,
                                                   extensionMethod_templateNonEqualTestAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateNonEqualTestAST_templateExpressionAnalysis (defineExtensionMethod_templateNonEqualTestAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@templateStrictInfTestAST templateExpressionAnalysis'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateStrictInfTestAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                 const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                 const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateStrictInfTestAST * object = (const cPtr_templateStrictInfTestAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateStrictInfTestAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_45894 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_45894, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1092)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_46119 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_46119, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1099)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_46194 = var_leftExpression_45894.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1106)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_rightType_46263 = var_rightExpression_46119.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1107)) ;
  const enumGalgasBool test_0 = var_leftType_46194.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1108)).getter_isComparable (SOURCE_FILE ("templateAnalysis.galgas", 1108)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 1108)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType_46194.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1110)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1110)).add_operation (GALGAS_string ("' and does not support the '<' operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1110)), fixItArray1  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1109)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_leftType_46194.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1112)).objectCompare (var_rightType_46263.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1112)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType_46194.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1114)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1114)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1114)).add_operation (var_rightType_46263.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1114)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1114)).add_operation (GALGAS_string ("': '<' operator requires the types are the same"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1114)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1113)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      outArgument_outExpression = GALGAS_strictLowerExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBoolType (HERE), object->mProperty_mOperatorLocation, var_leftExpression_45894, var_rightExpression_46119  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1118)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateStrictInfTestAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateStrictInfTestAST.mSlotID,
                                                   extensionMethod_templateStrictInfTestAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateStrictInfTestAST_templateExpressionAnalysis (defineExtensionMethod_templateStrictInfTestAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@templateInfOrEqualTestAST templateExpressionAnalysis'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateInfOrEqualTestAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                  const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                  const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                  GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInfOrEqualTestAST * object = (const cPtr_templateInfOrEqualTestAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateInfOrEqualTestAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_47574 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_47574, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1135)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_47799 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_47799, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1142)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_47874 = var_leftExpression_47574.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1149)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_rightType_47943 = var_rightExpression_47799.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1150)) ;
  const enumGalgasBool test_0 = var_leftType_47874.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1151)).getter_isComparable (SOURCE_FILE ("templateAnalysis.galgas", 1151)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 1151)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType_47874.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1153)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1153)).add_operation (GALGAS_string ("' and does not support the '<=' operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1153)), fixItArray1  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1152)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_leftType_47874.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1155)).objectCompare (var_rightType_47943.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1155)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType_47874.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1157)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1157)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1157)).add_operation (var_rightType_47943.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1157)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1157)).add_operation (GALGAS_string ("': '<=' operator requires the types are the same"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1157)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1156)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      outArgument_outExpression = GALGAS_lowerOrEqualExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBoolType (HERE), object->mProperty_mOperatorLocation, var_leftExpression_47574, var_rightExpression_47799  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1161)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateInfOrEqualTestAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateInfOrEqualTestAST.mSlotID,
                                                   extensionMethod_templateInfOrEqualTestAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateInfOrEqualTestAST_templateExpressionAnalysis (defineExtensionMethod_templateInfOrEqualTestAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@templateStrictSupTestAST templateExpressionAnalysis'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateStrictSupTestAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                 const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                 const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateStrictSupTestAST * object = (const cPtr_templateStrictSupTestAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateStrictSupTestAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_49256 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_49256, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1178)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_49481 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_49481, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1185)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_49556 = var_leftExpression_49256.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1192)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_rightType_49625 = var_rightExpression_49481.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1193)) ;
  const enumGalgasBool test_0 = var_leftType_49556.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1194)).getter_isComparable (SOURCE_FILE ("templateAnalysis.galgas", 1194)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 1194)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType_49556.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1196)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1196)).add_operation (GALGAS_string ("' and does not support the '>' operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1196)), fixItArray1  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1195)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_leftType_49556.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1198)).objectCompare (var_rightType_49625.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1198)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType_49556.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1200)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1200)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1200)).add_operation (var_rightType_49625.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1200)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1200)).add_operation (GALGAS_string ("': '>' operator requires the types are the same"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1200)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1199)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      outArgument_outExpression = GALGAS_strictGreaterExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBoolType (HERE), object->mProperty_mOperatorLocation, var_leftExpression_49256, var_rightExpression_49481  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1204)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateStrictSupTestAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateStrictSupTestAST.mSlotID,
                                                   extensionMethod_templateStrictSupTestAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateStrictSupTestAST_templateExpressionAnalysis (defineExtensionMethod_templateStrictSupTestAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@templateSupOrEqualTestAST templateExpressionAnalysis'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateSupOrEqualTestAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                  const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                  const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                  GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateSupOrEqualTestAST * object = (const cPtr_templateSupOrEqualTestAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateSupOrEqualTestAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_50938 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_50938, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1221)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_51163 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_51163, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1228)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_51238 = var_leftExpression_50938.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1235)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_rightType_51307 = var_rightExpression_51163.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1236)) ;
  const enumGalgasBool test_0 = var_leftType_51238.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1237)).getter_isComparable (SOURCE_FILE ("templateAnalysis.galgas", 1237)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 1237)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType_51238.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1239)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1239)).add_operation (GALGAS_string ("' and does not support the '>=' operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1239)), fixItArray1  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1238)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_leftType_51238.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1241)).objectCompare (var_rightType_51307.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1241)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType_51238.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1243)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1243)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1243)).add_operation (var_rightType_51307.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1243)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1243)).add_operation (GALGAS_string ("': '>=' operator requires the types are the same"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1243)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1242)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      outArgument_outExpression = GALGAS_greaterOrEqualExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBoolType (HERE), object->mProperty_mOperatorLocation, var_leftExpression_50938, var_rightExpression_51163  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1247)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateSupOrEqualTestAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateSupOrEqualTestAST.mSlotID,
                                                   extensionMethod_templateSupOrEqualTestAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateSupOrEqualTestAST_templateExpressionAnalysis (defineExtensionMethod_templateSupOrEqualTestAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@templateLeftShiftOperationAST templateExpressionAnalysis'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateLeftShiftOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                      const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                      GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                      const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                      GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateLeftShiftOperationAST * object = (const cPtr_templateLeftShiftOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateLeftShiftOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_52627 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_52627, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1264)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_52852 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_52852, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1271)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_52927 = var_leftExpression_52627.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1278)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_rightType_52996 = var_rightExpression_52852.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1279)) ;
  const enumGalgasBool test_0 = var_leftType_52927.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1280)).getter_infixShiftOperator (SOURCE_FILE ("templateAnalysis.galgas", 1280)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 1280)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType_52927.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1282)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1282)).add_operation (GALGAS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1282)), fixItArray1  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1281)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_rightType_52996.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1284)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("for a shift operator, right operand type should be '@uint': it is '@").add_operation (var_rightType_52996.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1286)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1286)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1286)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1285)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      outArgument_outExpression = GALGAS_leftShiftExpressionForGeneration::constructor_new (var_leftType_52927, object->mProperty_mOperatorLocation, var_leftExpression_52627, var_rightExpression_52852  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1290)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateLeftShiftOperationAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateLeftShiftOperationAST.mSlotID,
                                                   extensionMethod_templateLeftShiftOperationAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateLeftShiftOperationAST_templateExpressionAnalysis (defineExtensionMethod_templateLeftShiftOperationAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@templateRightShiftOperationAST templateExpressionAnalysis'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateRightShiftOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                       const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                       const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateRightShiftOperationAST * object = (const cPtr_templateRightShiftOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateRightShiftOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_54222 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_54222, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1307)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_54447 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_54447, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1314)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_54522 = var_leftExpression_54222.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1321)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_rightType_54591 = var_rightExpression_54447.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1322)) ;
  const enumGalgasBool test_0 = var_leftType_54522.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1323)).getter_infixShiftOperator (SOURCE_FILE ("templateAnalysis.galgas", 1323)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 1323)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType_54522.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1325)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1325)).add_operation (GALGAS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1325)), fixItArray1  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1324)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_rightType_54591.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1327)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("for a shift operator, right operand type should be '@uint': it is '@").add_operation (var_rightType_54591.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1329)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1329)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1329)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1328)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      outArgument_outExpression = GALGAS_rightShiftExpressionForGeneration::constructor_new (var_leftType_54522, object->mProperty_mOperatorLocation, var_leftExpression_54222, var_rightExpression_54447  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1333)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateRightShiftOperationAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateRightShiftOperationAST.mSlotID,
                                                   extensionMethod_templateRightShiftOperationAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateRightShiftOperationAST_templateExpressionAnalysis (defineExtensionMethod_templateRightShiftOperationAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'templateInstructionListAnalysis'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_templateInstructionListAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                              GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                              const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                              const GALGAS_templateInstructionListAST constinArgument_inInstructionList,
                                              GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_templateInstructionListAST enumerator_56532 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_56532.hasCurrentObject ()) {
    callExtensionMethod_templateInstructionAnalysis ((const cPtr_templateInstructionAST *) enumerator_56532.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioInstructionList, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1363)) ;
    enumerator_56532.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@templateInstructionStringAST templateInstructionAnalysis'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateInstructionStringAST_templateInstructionAnalysis (const cPtr_templateInstructionAST * inObject,
                                                                                      const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                      GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                      const GALGAS_templateAnalysisContext /* constinArgument_inAnalysisContext */,
                                                                                      GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInstructionStringAST * object = (const cPtr_templateInstructionStringAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateInstructionStringAST) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionStringForGeneration::constructor_new (object->mProperty_mTemplateString  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1380))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1380)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateInstructionStringAST_templateInstructionAnalysis (void) {
  enterExtensionMethod_templateInstructionAnalysis (kTypeDescriptor_GALGAS_templateInstructionStringAST.mSlotID,
                                                    extensionMethod_templateInstructionStringAST_templateInstructionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateInstructionStringAST_templateInstructionAnalysis (defineExtensionMethod_templateInstructionStringAST_templateInstructionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@templateInstructionExpressionAST templateInstructionAnalysis'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateInstructionExpressionAST_templateInstructionAnalysis (const cPtr_templateInstructionAST * inObject,
                                                                                          const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                          GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                          const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                          GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInstructionExpressionAST * object = (const cPtr_templateInstructionExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateInstructionExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_57674 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_expression_57674, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1392)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_expression_57674.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1398)).getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1398)).objectCompare (GALGAS_string ("string"))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mLocation, GALGAS_string ("expression type should be '@string' (it is '@").add_operation (var_expression_57674.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1399)).getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1399)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1399)).add_operation (GALGAS_string ("')"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1399)), fixItArray1  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1399)) ;
  }
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionExpressionForGeneration::constructor_new (var_expression_57674  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1401))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1401)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateInstructionExpressionAST_templateInstructionAnalysis (void) {
  enterExtensionMethod_templateInstructionAnalysis (kTypeDescriptor_GALGAS_templateInstructionExpressionAST.mSlotID,
                                                    extensionMethod_templateInstructionExpressionAST_templateInstructionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateInstructionExpressionAST_templateInstructionAnalysis (defineExtensionMethod_templateInstructionExpressionAST_templateInstructionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@templateBlockInstructionAST templateInstructionAnalysis'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateBlockInstructionAST_templateInstructionAnalysis (const cPtr_templateInstructionAST * inObject,
                                                                                     const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                     const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                     GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateBlockInstructionAST * object = (const cPtr_templateBlockInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateBlockInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_58522 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_expression_58522, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1413)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_expression_58522.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1419)).getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1419)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mLocation, GALGAS_string ("expression type should be '@uint' (it is '@").add_operation (var_expression_58522.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1420)).getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1420)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1420)).add_operation (GALGAS_string ("')"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1420)), fixItArray1  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1420)) ;
  }
  GALGAS_templateInstructionListForGeneration var_blockInstructionList_58859 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1422)) ;
  {
  routine_templateInstructionListAnalysis (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, object->mProperty_mBlockInstructionList, var_blockInstructionList_58859, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1423)) ;
  }
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateBlockInstructionForGeneration::constructor_new (var_expression_58522, object->mProperty_mLocation, var_blockInstructionList_58859  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1430))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1430)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateBlockInstructionAST_templateInstructionAnalysis (void) {
  enterExtensionMethod_templateInstructionAnalysis (kTypeDescriptor_GALGAS_templateBlockInstructionAST.mSlotID,
                                                    extensionMethod_templateBlockInstructionAST_templateInstructionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateBlockInstructionAST_templateInstructionAnalysis (defineExtensionMethod_templateBlockInstructionAST_templateInstructionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding extension method '@templateInstructionGetColumnLocationAST templateInstructionAnalysis'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateInstructionGetColumnLocationAST_templateInstructionAnalysis (const cPtr_templateInstructionAST * /* inObject */,
                                                                                                 const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                                 GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                                 const GALGAS_templateAnalysisContext /* constinArgument_inAnalysisContext */,
                                                                                                 GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                                 C_Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionGetColumnLocationForGeneration::constructor_new (SOURCE_FILE ("templateAnalysis.galgas", 1441))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1441)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateInstructionGetColumnLocationAST_templateInstructionAnalysis (void) {
  enterExtensionMethod_templateInstructionAnalysis (kTypeDescriptor_GALGAS_templateInstructionGetColumnLocationAST.mSlotID,
                                                    extensionMethod_templateInstructionGetColumnLocationAST_templateInstructionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateInstructionGetColumnLocationAST_templateInstructionAnalysis (defineExtensionMethod_templateInstructionGetColumnLocationAST_templateInstructionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding extension method '@templateInstructionGotoColumnLocationAST templateInstructionAnalysis'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateInstructionGotoColumnLocationAST_templateInstructionAnalysis (const cPtr_templateInstructionAST * /* inObject */,
                                                                                                  const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                                  GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                                  const GALGAS_templateAnalysisContext /* constinArgument_inAnalysisContext */,
                                                                                                  GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                                  C_Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionGotoColumnLocationForGeneration::constructor_new (SOURCE_FILE ("templateAnalysis.galgas", 1452))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1452)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateInstructionGotoColumnLocationAST_templateInstructionAnalysis (void) {
  enterExtensionMethod_templateInstructionAnalysis (kTypeDescriptor_GALGAS_templateInstructionGotoColumnLocationAST.mSlotID,
                                                    extensionMethod_templateInstructionGotoColumnLocationAST_templateInstructionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateInstructionGotoColumnLocationAST_templateInstructionAnalysis (defineExtensionMethod_templateInstructionGotoColumnLocationAST_templateInstructionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@templateInstructionForeachAST templateInstructionAnalysis'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateInstructionForeachAST_templateInstructionAnalysis (const cPtr_templateInstructionAST * inObject,
                                                                                       const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                       const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                       GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInstructionForeachAST * object = (const cPtr_templateInstructionForeachAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateInstructionForeachAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_60698 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_expression_60698, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1465)) ;
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_60936 = var_expression_60698.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1472)).getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1472)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_enumerationDescriptor_60936.getter_length (SOURCE_FILE ("templateAnalysis.galgas", 1473)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (var_expression_60698.getter_mLocation (SOURCE_FILE ("templateAnalysis.galgas", 1474)), GALGAS_string ("expression of '@").add_operation (var_expression_60698.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1474)).getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1474)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1474)).add_operation (GALGAS_string ("' cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1474)), fixItArray1  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1474)) ;
  }
  GALGAS_templateInstructionListForGeneration var_beforeInstructionList_61244 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1477)) ;
  {
  routine_templateInstructionListAnalysis (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, object->mProperty_mBeforeInstructionList, var_beforeInstructionList_61244, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1478)) ;
  }
  GALGAS_string var_enumeratorCppName_61520 = GALGAS_string ("enumerator_").add_operation (object->mProperty_mIndexIdentifier.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 1486)).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1486)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 1486)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1486)) ;
  GALGAS_templateVariableMap var_doVariableMap_61628 = constinArgument_inAnalysisContext.getter_mTemplateVariableMap (HERE) ;
  GALGAS_string var_cppIndexVarName_61699 = GALGAS_string ("index_").add_operation (object->mProperty_mIndexIdentifier.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 1488)).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1488)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 1488)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1488)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1488)).add_operation (object->mProperty_mIndexIdentifier.getter_string (SOURCE_FILE ("templateAnalysis.galgas", 1488)).getter_identifierRepresentation (SOURCE_FILE ("templateAnalysis.galgas", 1488)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1488)) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, object->mProperty_mIndexIdentifier.getter_string (SOURCE_FILE ("templateAnalysis.galgas", 1489)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_2) {
    {
    var_doVariableMap_61628.setter_insertKey (object->mProperty_mIndexIdentifier, constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mUIntType (HERE), var_cppIndexVarName_61699, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1490)) ;
    }
  }
  cEnumerator_enumerationDescriptorList enumerator_62021 (var_enumerationDescriptor_60936, kENUMERATION_UP) ;
  while (enumerator_62021.hasCurrentObject ()) {
    {
    var_doVariableMap_61628.setter_insertKey (GALGAS_lstring::constructor_new (object->mProperty_mPrefix.add_operation (enumerator_62021.current_mEnumerationName (HERE), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1494)), var_expression_60698.getter_mLocation (SOURCE_FILE ("templateAnalysis.galgas", 1494))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1494)), enumerator_62021.current_mEnumeratedType (HERE), var_enumeratorCppName_61520.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1496)).add_operation (enumerator_62021.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("templateAnalysis.galgas", 1496)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1496)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1496)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1493)) ;
    }
    enumerator_62021.gotoNextObject () ;
  }
  GALGAS_templateAnalysisContext var_doAnalysisContext_62284 = GALGAS_templateAnalysisContext::constructor_new (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE), constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE), var_doVariableMap_61628  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1499)) ;
  GALGAS_templateInstructionListForGeneration var_doInstructionList_62441 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1503)) ;
  {
  routine_templateInstructionListAnalysis (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_doAnalysisContext_62284, object->mProperty_mDoInstructionList, var_doInstructionList_62441, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1504)) ;
  }
  GALGAS_templateInstructionListForGeneration var_betweenInstructionList_62711 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1512)) ;
  {
  routine_templateInstructionListAnalysis (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, object->mProperty_mBetweenInstructionList, var_betweenInstructionList_62711, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1513)) ;
  }
  GALGAS_templateInstructionListForGeneration var_afterInstructionList_62987 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1521)) ;
  {
  routine_templateInstructionListAnalysis (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, object->mProperty_mAfterInstructionList, var_afterInstructionList_62987, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1522)) ;
  }
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionForeachForGeneration::constructor_new (object->mProperty_mIsAscending, var_expression_60698, var_enumeratorCppName_61520, var_beforeInstructionList_61244, var_doInstructionList_62441, var_cppIndexVarName_61699, var_betweenInstructionList_62711, var_afterInstructionList_62987  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1530))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1530)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateInstructionForeachAST_templateInstructionAnalysis (void) {
  enterExtensionMethod_templateInstructionAnalysis (kTypeDescriptor_GALGAS_templateInstructionForeachAST.mSlotID,
                                                    extensionMethod_templateInstructionForeachAST_templateInstructionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateInstructionForeachAST_templateInstructionAnalysis (defineExtensionMethod_templateInstructionForeachAST_templateInstructionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@templateInstructionIfAST templateInstructionAnalysis'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateInstructionIfAST_templateInstructionAnalysis (const cPtr_templateInstructionAST * inObject,
                                                                                  const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                  const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                  GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInstructionIfAST * object = (const cPtr_templateInstructionIfAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateInstructionIfAST) ;
  GALGAS_templateInstructionIfBranchListForGeneration var_templateInstructionIfBranchList_63907 = GALGAS_templateInstructionIfBranchListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1550)) ;
  cEnumerator_templateInstructionIfBranchListAST enumerator_64002 (object->mProperty_mTemplateInstructionIfBranchList, kENUMERATION_UP) ;
  while (enumerator_64002.hasCurrentObject ()) {
    GALGAS_semanticExpressionForGeneration var_expression_64053 ;
    callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) enumerator_64002.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_expression_64053, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1553)) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_expression_64053.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1559)).getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1559)).objectCompare (GALGAS_string ("bool"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_expression_64053.getter_mLocation (SOURCE_FILE ("templateAnalysis.galgas", 1560)), GALGAS_string ("'if' expression type should be '@bool' (it is '@").add_operation (var_expression_64053.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1560)).getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1560)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1560)).add_operation (GALGAS_string ("')"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1560)), fixItArray1  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1560)) ;
    }
    GALGAS_templateInstructionListForGeneration var_instructionList_64421 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1562)) ;
    {
    routine_templateInstructionListAnalysis (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, enumerator_64002.current_mInstructionList (HERE), var_instructionList_64421, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1563)) ;
    }
    var_templateInstructionIfBranchList_63907.addAssign_operation (var_expression_64053, var_instructionList_64421  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1570)) ;
    enumerator_64002.gotoNextObject () ;
  }
  GALGAS_templateInstructionListForGeneration var_elseInstructionList_64751 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1573)) ;
  {
  routine_templateInstructionListAnalysis (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, object->mProperty_mElseInstructionList, var_elseInstructionList_64751, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1574)) ;
  }
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionIfForGeneration::constructor_new (var_templateInstructionIfBranchList_63907, var_elseInstructionList_64751  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1582))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1582)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateInstructionIfAST_templateInstructionAnalysis (void) {
  enterExtensionMethod_templateInstructionAnalysis (kTypeDescriptor_GALGAS_templateInstructionIfAST.mSlotID,
                                                    extensionMethod_templateInstructionIfAST_templateInstructionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateInstructionIfAST_templateInstructionAnalysis (defineExtensionMethod_templateInstructionIfAST_templateInstructionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@templateInstructionSwitchAST templateInstructionAnalysis'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateInstructionSwitchAST_templateInstructionAnalysis (const cPtr_templateInstructionAST * inObject,
                                                                                      const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                      GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                      const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                      GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInstructionSwitchAST * object = (const cPtr_templateInstructionSwitchAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateInstructionSwitchAST) ;
  GALGAS_semanticExpressionForGeneration var_switchExpression_65564 ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mProperty_mSwitchExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_switchExpression_65564, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1597)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_switchExpression_65564.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1603)).getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1603)).objectCompare (GALGAS_typeKindEnum::constructor_enumType (SOURCE_FILE ("templateAnalysis.galgas", 1603)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (var_switchExpression_65564.getter_mLocation (SOURCE_FILE ("templateAnalysis.galgas", 1604)), GALGAS_string ("'switch' expression type should be an enumeration (it is a ").add_operation (extensionGetter_kind (var_switchExpression_65564.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1605)).getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1605)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1605)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1604)).add_operation (GALGAS_string (" type)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1605)), fixItArray1  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1604)) ;
  }
  GALGAS_constantIndexMap var_enumConstantMap_66013 = var_switchExpression_65564.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1607)).getter_mEnumConstantMap (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1607)) ;
  GALGAS_templateInstructionSwitchBranchListForGeneration var_templateInstructionSwitchBranchList_66112 = GALGAS_templateInstructionSwitchBranchListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1609)) ;
  GALGAS_stringset var_namedConstantSet_66189 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("templateAnalysis.galgas", 1610)) ;
  cEnumerator_templateInstructionSwitchBranchListAST enumerator_66253 (object->mProperty_mTemplateInstructionSwitchBranchList, kENUMERATION_UP) ;
  while (enumerator_66253.hasCurrentObject ()) {
    cEnumerator_lstringlist enumerator_66284 (enumerator_66253.current_mConstantList (HERE), kENUMERATION_UP) ;
    while (enumerator_66284.hasCurrentObject ()) {
      const enumGalgasBool test_2 = var_enumConstantMap_66013.getter_hasKey (enumerator_66284.current_mValue (HERE).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 1613)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1613)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 1613)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_66284.current_mValue (HERE).getter_location (SOURCE_FILE ("templateAnalysis.galgas", 1614)), GALGAS_string ("the '").add_operation (enumerator_66284.current_mValue (HERE).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 1614)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1614)).add_operation (GALGAS_string ("' is not a contant of '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1614)).add_operation (var_switchExpression_65564.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1614)).getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1614)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1614)).add_operation (GALGAS_string ("' enumeration type"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1614)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1614)) ;
      }
      const enumGalgasBool test_4 = var_namedConstantSet_66189.getter_hasKey (enumerator_66284.current_mValue (HERE).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 1616)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1616)).boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_66284.current_mValue (HERE).getter_location (SOURCE_FILE ("templateAnalysis.galgas", 1617)), GALGAS_string ("the '").add_operation (enumerator_66284.current_mValue (HERE).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 1617)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1617)).add_operation (GALGAS_string ("' constant is already named in the switch instruction"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1617)), fixItArray5  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1617)) ;
      }
      var_namedConstantSet_66189.addAssign_operation (enumerator_66284.current_mValue (HERE).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 1619))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1619)) ;
      enumerator_66284.gotoNextObject () ;
    }
    GALGAS_templateInstructionListForGeneration var_instructionList_66728 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1621)) ;
    {
    routine_templateInstructionListAnalysis (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, enumerator_66253.current_mInstructionList (HERE), var_instructionList_66728, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1622)) ;
    }
    var_templateInstructionSwitchBranchList_66112.addAssign_operation (enumerator_66253.current_mConstantList (HERE), var_instructionList_66728  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1629)) ;
    enumerator_66253.gotoNextObject () ;
  }
  GALGAS_stringset var_missingConstants_67099 = var_enumConstantMap_66013.getter_keySet (SOURCE_FILE ("templateAnalysis.galgas", 1632)).substract_operation (var_namedConstantSet_66189, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1632)) ;
  const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, var_missingConstants_67099.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 1633)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_6) {
    GALGAS_string var_m_67198 = GALGAS_string ("all constants should be named in a switch instruction; the following constants are missing:") ;
    cEnumerator_stringset enumerator_67325 (var_missingConstants_67099, kENUMERATION_UP) ;
    while (enumerator_67325.hasCurrentObject ()) {
      var_m_67198.plusAssign_operation(GALGAS_string ("\n"
        "  - '").add_operation (enumerator_67325.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1636)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1636)), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1636)) ;
      enumerator_67325.gotoNextObject () ;
    }
    TC_Array <C_FixItDescription> fixItArray7 ;
    inCompiler->emitSemanticError (object->mProperty_mSwitchExpressionEndLocation, var_m_67198, fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1638)) ;
  }
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionSwitchForGeneration::constructor_new (var_switchExpression_65564, var_templateInstructionSwitchBranchList_66112  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1641))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1641)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateInstructionSwitchAST_templateInstructionAnalysis (void) {
  enterExtensionMethod_templateInstructionAnalysis (kTypeDescriptor_GALGAS_templateInstructionSwitchAST.mSlotID,
                                                    extensionMethod_templateInstructionSwitchAST_templateInstructionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateInstructionSwitchAST_templateInstructionAnalysis (defineExtensionMethod_templateInstructionSwitchAST_templateInstructionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Routine 'templateCodeGenerationForListInstruction'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_templateCodeGenerationForListInstruction (const GALGAS_templateInstructionListForGeneration constinArgument_inInstructionList,
                                                       GALGAS_string & ioArgument_ioGeneratedCode,
                                                       GALGAS_stringset & ioArgument_ioInclusionSet,
                                                       GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                       GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                       GALGAS_bool & ioArgument_ioUseColumnMarker,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_templateInstructionListForGeneration enumerator_2620 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_2620.hasCurrentObject ()) {
    callExtensionMethod_templateCodeGeneration ((const cPtr_templateInstructionForGeneration *) enumerator_2620.current_mInstruction (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 36)) ;
    enumerator_2620.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@templateInstructionStringForGeneration templateCodeGeneration'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateInstructionStringForGeneration_templateCodeGeneration (const cPtr_templateInstructionForGeneration * inObject,
                                                                                           GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                           GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                           GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                           GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                           GALGAS_bool & /* ioArgument_ioUseColumnMarker */,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInstructionStringForGeneration * object = (const cPtr_templateInstructionStringForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_templateInstructionStringForGeneration) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("result << ").add_operation (object->mProperty_mTemplateString.getter_utf_38_Representation (SOURCE_FILE ("templateCodeGeneration.galgas", 54)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 54)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 54)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 54)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateInstructionStringForGeneration_templateCodeGeneration (void) {
  enterExtensionMethod_templateCodeGeneration (kTypeDescriptor_GALGAS_templateInstructionStringForGeneration.mSlotID,
                                               extensionMethod_templateInstructionStringForGeneration_templateCodeGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateInstructionStringForGeneration_templateCodeGeneration (defineExtensionMethod_templateInstructionStringForGeneration_templateCodeGeneration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@templateInstructionExpressionForGeneration templateCodeGeneration'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateInstructionExpressionForGeneration_templateCodeGeneration (const cPtr_templateInstructionForGeneration * inObject,
                                                                                               GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                               GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                               GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                               GALGAS_bool & /* ioArgument_ioUseColumnMarker */,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInstructionExpressionForGeneration * object = (const cPtr_templateInstructionExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_templateInstructionExpressionForGeneration) ;
  GALGAS_string var_cppName_3711 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_cppName_3711, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 67)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("result << ").add_operation (var_cppName_3711, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 68)).add_operation (GALGAS_string (".stringValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 68)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 68)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateInstructionExpressionForGeneration_templateCodeGeneration (void) {
  enterExtensionMethod_templateCodeGeneration (kTypeDescriptor_GALGAS_templateInstructionExpressionForGeneration.mSlotID,
                                               extensionMethod_templateInstructionExpressionForGeneration_templateCodeGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateInstructionExpressionForGeneration_templateCodeGeneration (defineExtensionMethod_templateInstructionExpressionForGeneration_templateCodeGeneration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@templateBlockInstructionForGeneration templateCodeGeneration'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateBlockInstructionForGeneration_templateCodeGeneration (const cPtr_templateInstructionForGeneration * inObject,
                                                                                          GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                          GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                          GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                          GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                          GALGAS_bool & ioArgument_ioUseColumnMarker,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateBlockInstructionForGeneration * object = (const cPtr_templateBlockInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_templateBlockInstructionForGeneration) ;
  GALGAS_string var_indendationVarCppName_4330 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_indendationVarCppName_4330, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 81)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_indendationVarCppName_4330, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 82)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 82)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 82)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  result.incIndentation ((int32_t) ").add_operation (var_indendationVarCppName_4330, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 83)).add_operation (GALGAS_string (".uintValue ()) ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 83)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 83)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 84)) ;
  {
  routine_templateCodeGenerationForListInstruction (object->mProperty_mBlockInstructionList, ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 85)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_indendationVarCppName_4330, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 93)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 93)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 93)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  result.incIndentation (- ((int32_t) ").add_operation (var_indendationVarCppName_4330, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 94)).add_operation (GALGAS_string (".uintValue ())) ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 94)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 94)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 95)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateBlockInstructionForGeneration_templateCodeGeneration (void) {
  enterExtensionMethod_templateCodeGeneration (kTypeDescriptor_GALGAS_templateBlockInstructionForGeneration.mSlotID,
                                               extensionMethod_templateBlockInstructionForGeneration_templateCodeGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateBlockInstructionForGeneration_templateCodeGeneration (defineExtensionMethod_templateBlockInstructionForGeneration_templateCodeGeneration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//       Overriding extension method '@templateInstructionGetColumnLocationForGeneration templateCodeGeneration'       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateInstructionGetColumnLocationForGeneration_templateCodeGeneration (const cPtr_templateInstructionForGeneration * /* inObject */,
                                                                                                      GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                                      GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                                      GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                                      GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                                      GALGAS_bool & ioArgument_ioUseColumnMarker,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUseColumnMarker = GALGAS_bool (true) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("columnMarker = result.currentColumn () ;\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 107)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateInstructionGetColumnLocationForGeneration_templateCodeGeneration (void) {
  enterExtensionMethod_templateCodeGeneration (kTypeDescriptor_GALGAS_templateInstructionGetColumnLocationForGeneration.mSlotID,
                                               extensionMethod_templateInstructionGetColumnLocationForGeneration_templateCodeGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateInstructionGetColumnLocationForGeneration_templateCodeGeneration (defineExtensionMethod_templateInstructionGetColumnLocationForGeneration_templateCodeGeneration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//      Overriding extension method '@templateInstructionGotoColumnLocationForGeneration templateCodeGeneration'       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateInstructionGotoColumnLocationForGeneration_templateCodeGeneration (const cPtr_templateInstructionForGeneration * /* inObject */,
                                                                                                       GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                                       GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                                       GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                                       GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                                       GALGAS_bool & ioArgument_ioUseColumnMarker,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUseColumnMarker = GALGAS_bool (true) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("result.appendSpacesUntilColumn (columnMarker) ;\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 119)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateInstructionGotoColumnLocationForGeneration_templateCodeGeneration (void) {
  enterExtensionMethod_templateCodeGeneration (kTypeDescriptor_GALGAS_templateInstructionGotoColumnLocationForGeneration.mSlotID,
                                               extensionMethod_templateInstructionGotoColumnLocationForGeneration_templateCodeGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateInstructionGotoColumnLocationForGeneration_templateCodeGeneration (defineExtensionMethod_templateInstructionGotoColumnLocationForGeneration_templateCodeGeneration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@templateInstructionForeachForGeneration templateCodeGeneration'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateInstructionForeachForGeneration_templateCodeGeneration (const cPtr_templateInstructionForGeneration * inObject,
                                                                                            GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                            GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                            GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                            GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                            GALGAS_bool & ioArgument_ioUseColumnMarker,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInstructionForeachForGeneration * object = (const cPtr_templateInstructionForeachForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_templateInstructionForeachForGeneration) ;
  GALGAS_string var_foreachVarCppName_6501 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_foreachVarCppName_6501, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 132)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, object->mProperty_mIndexCppName.getter_length (SOURCE_FILE ("templateCodeGeneration.galgas", 134)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_uint ").add_operation (object->mProperty_mIndexCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 135)).add_operation (GALGAS_string (" (0) ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 135)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 135)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_foreachVarCppName_6501, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 138)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 138)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 138)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 139)) ;
  }
  GALGAS_string temp_1 ;
  const enumGalgasBool test_2 = object->mProperty_mIsAscending.boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_string ("kENUMERATION_UP") ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_string ("kENUMERATION_DOWN") ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cEnumerator_").add_operation (object->mProperty_mExpression.getter_mResultType (SOURCE_FILE ("templateCodeGeneration.galgas", 140)).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 140)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 140)).add_operation (object->mProperty_mEnumeratorCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 140)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 140)).add_operation (var_foreachVarCppName_6501, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 140)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 140)).add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 140)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 141)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 140)) ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsStrictSup, object->mProperty_mBeforeInstructionList.getter_length (SOURCE_FILE ("templateCodeGeneration.galgas", 143)).add_operation (object->mProperty_mAfterInstructionList.getter_length (SOURCE_FILE ("templateCodeGeneration.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 143)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_3) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const bool nonEmpty_").add_operation (object->mProperty_mEnumeratorCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 144)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 144)).add_operation (object->mProperty_mEnumeratorCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 144)).add_operation (GALGAS_string (".hasCurrentObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 144)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 144)) ;
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, object->mProperty_mBeforeInstructionList.getter_length (SOURCE_FILE ("templateCodeGeneration.galgas", 146)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_4) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (nonEmpty_").add_operation (object->mProperty_mEnumeratorCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 147)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 147)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 147)) ;
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 148)) ;
    }
    {
    routine_templateCodeGenerationForListInstruction (object->mProperty_mBeforeInstructionList, ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 149)) ;
    }
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 157)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 158)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("while (").add_operation (object->mProperty_mEnumeratorCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 160)).add_operation (GALGAS_string (".hasCurrentObject ()) {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 160)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 160)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 161)) ;
  }
  {
  routine_templateCodeGenerationForListInstruction (object->mProperty_mDoInstructionList, ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 163)) ;
  }
  const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, object->mProperty_mBetweenInstructionList.getter_length (SOURCE_FILE ("templateCodeGeneration.galgas", 172)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_5) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (object->mProperty_mEnumeratorCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 173)).add_operation (GALGAS_string (".hasNextObject ()) {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 173)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 173)) ;
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 174)) ;
    }
    {
    routine_templateCodeGenerationForListInstruction (object->mProperty_mBetweenInstructionList, ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 175)) ;
    }
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 183)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 184)) ;
  }
  const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, object->mProperty_mIndexCppName.getter_length (SOURCE_FILE ("templateCodeGeneration.galgas", 187)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_6) {
    ioArgument_ioGeneratedCode.plusAssign_operation(object->mProperty_mIndexCppName.add_operation (GALGAS_string (".increment () ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 188)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 188)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(object->mProperty_mEnumeratorCppName.add_operation (GALGAS_string (".gotoNextObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 191)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 191)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 192)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 193)) ;
  const enumGalgasBool test_7 = GALGAS_bool (kIsStrictSup, object->mProperty_mAfterInstructionList.getter_length (SOURCE_FILE ("templateCodeGeneration.galgas", 195)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_7) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (nonEmpty_").add_operation (object->mProperty_mEnumeratorCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 196)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 196)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 196)) ;
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 197)) ;
    }
    {
    routine_templateCodeGenerationForListInstruction (object->mProperty_mAfterInstructionList, ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 198)) ;
    }
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 206)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 207)) ;
  }
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 210)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 211)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateInstructionForeachForGeneration_templateCodeGeneration (void) {
  enterExtensionMethod_templateCodeGeneration (kTypeDescriptor_GALGAS_templateInstructionForeachForGeneration.mSlotID,
                                               extensionMethod_templateInstructionForeachForGeneration_templateCodeGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateInstructionForeachForGeneration_templateCodeGeneration (defineExtensionMethod_templateInstructionForeachForGeneration_templateCodeGeneration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@templateInstructionIfForGeneration templateCodeGeneration'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateInstructionIfForGeneration_templateCodeGeneration (const cPtr_templateInstructionForGeneration * inObject,
                                                                                       GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                       GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                       GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                       GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                       GALGAS_bool & ioArgument_ioUseColumnMarker,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInstructionIfForGeneration * object = (const cPtr_templateInstructionIfForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_templateInstructionIfForGeneration) ;
  cEnumerator_templateInstructionIfBranchListForGeneration enumerator_9835 (object->mProperty_mTemplateInstructionIfBranchList, kENUMERATION_UP) ;
  while (enumerator_9835.hasCurrentObject ()) {
    GALGAS_string var_ifVarCppName_9884 ;
    callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_9835.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_ifVarCppName_9884, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 225)) ;
    GALGAS_string var_testVar_10050 = GALGAS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("templateCodeGeneration.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 226)) ;
    ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 226)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const enumGalgasBool ").add_operation (var_testVar_10050, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 227)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 227)).add_operation (var_ifVarCppName_9884, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 227)).add_operation (GALGAS_string (".boolEnum () ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 227)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 227)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolTrue == ").add_operation (var_testVar_10050, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 228)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 228)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 228)) ;
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 229)) ;
    }
    {
    routine_templateCodeGenerationForListInstruction (enumerator_9835.current_mInstructionList (HERE), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 230)) ;
    }
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 238)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else if (kBoolFalse == ").add_operation (var_testVar_10050, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 239)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 239)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 239)) ;
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 240)) ;
    }
    enumerator_9835.gotoNextObject () ;
  }
  {
  routine_templateCodeGenerationForListInstruction (object->mProperty_mElseInstructionList, ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 243)) ;
  }
  cEnumerator_templateInstructionIfBranchListForGeneration enumerator_10982 (object->mProperty_mTemplateInstructionIfBranchList, kENUMERATION_UP) ;
  while (enumerator_10982.hasCurrentObject ()) {
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 252)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 253)) ;
    enumerator_10982.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateInstructionIfForGeneration_templateCodeGeneration (void) {
  enterExtensionMethod_templateCodeGeneration (kTypeDescriptor_GALGAS_templateInstructionIfForGeneration.mSlotID,
                                               extensionMethod_templateInstructionIfForGeneration_templateCodeGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateInstructionIfForGeneration_templateCodeGeneration (defineExtensionMethod_templateInstructionIfForGeneration_templateCodeGeneration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@templateInstructionSwitchForGeneration templateCodeGeneration'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_templateInstructionSwitchForGeneration_templateCodeGeneration (const cPtr_templateInstructionForGeneration * inObject,
                                                                                           GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                           GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                           GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                           GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                           GALGAS_bool & ioArgument_ioUseColumnMarker,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInstructionSwitchForGeneration * object = (const cPtr_templateInstructionSwitchForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_templateInstructionSwitchForGeneration) ;
  GALGAS_string var_switchVarCppName_11474 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mSwitchExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_switchVarCppName_11474, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 267)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("switch (").add_operation (var_switchVarCppName_11474, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 269)).add_operation (GALGAS_string (".enumValue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 269)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 269)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case GALGAS_").add_operation (object->mProperty_mSwitchExpression.getter_mResultType (SOURCE_FILE ("templateCodeGeneration.galgas", 270)).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 270)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 270)).add_operation (GALGAS_string ("::kNotBuilt :\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 270)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 270)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 271)) ;
  cEnumerator_templateInstructionSwitchBranchListForGeneration enumerator_11909 (object->mProperty_mTemplateInstructionSwitchBranchList, kENUMERATION_UP) ;
  while (enumerator_11909.hasCurrentObject ()) {
    cEnumerator_lstringlist enumerator_11940 (enumerator_11909.current_mConstantList (HERE), kENUMERATION_UP) ;
    while (enumerator_11940.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case GALGAS_").add_operation (object->mProperty_mSwitchExpression.getter_mResultType (SOURCE_FILE ("templateCodeGeneration.galgas", 275)).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 275)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 275)).add_operation (GALGAS_string ("::kEnum_"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 275)).add_operation (enumerator_11940.current_mValue (HERE).getter_string (SOURCE_FILE ("templateCodeGeneration.galgas", 275)).getter_identifierRepresentation (SOURCE_FILE ("templateCodeGeneration.galgas", 275)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 275)).add_operation (GALGAS_string (" :\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 275)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 275)) ;
      enumerator_11940.gotoNextObject () ;
    }
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 277)) ;
    }
    const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, enumerator_11909.current_mInstructionList (HERE).getter_length (SOURCE_FILE ("templateCodeGeneration.galgas", 278)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 279)) ;
      {
      ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 280)) ;
      }
      {
      routine_templateCodeGenerationForListInstruction (enumerator_11909.current_mInstructionList (HERE), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 281)) ;
      }
      {
      ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 289)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 290)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("break ;\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 292)) ;
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 293)) ;
    }
    enumerator_11909.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 296)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_templateInstructionSwitchForGeneration_templateCodeGeneration (void) {
  enterExtensionMethod_templateCodeGeneration (kTypeDescriptor_GALGAS_templateInstructionSwitchForGeneration.mSlotID,
                                               extensionMethod_templateInstructionSwitchForGeneration_templateCodeGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateInstructionSwitchForGeneration_templateCodeGeneration (defineExtensionMethod_templateInstructionSwitchForGeneration_templateCodeGeneration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Once function 'buildLexicalTypeMap'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_lexicalTypeMap onceFunction_buildLexicalTypeMap (C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalTypeMap result_outLexicalTypeMap ; // Returned variable
  result_outLexicalTypeMap = GALGAS_lexicalTypeMap::constructor_emptyMap (SOURCE_FILE ("lexiqueTypesForAST.galgas", 488)) ;
  {
  result_outLexicalTypeMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("string"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 489))  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 489)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("lexiqueTypesForAST.galgas", 489)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 489)) ;
  }
  {
  result_outLexicalTypeMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("char"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 490))  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 490)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("lexiqueTypesForAST.galgas", 490)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 490)) ;
  }
  {
  result_outLexicalTypeMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("uint"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 491))  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 491)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("lexiqueTypesForAST.galgas", 491)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 491)) ;
  }
  {
  result_outLexicalTypeMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("uint64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 492))  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 492)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("lexiqueTypesForAST.galgas", 492)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 492)) ;
  }
  {
  result_outLexicalTypeMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("sint"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 493))  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 493)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint (SOURCE_FILE ("lexiqueTypesForAST.galgas", 493)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 493)) ;
  }
  {
  result_outLexicalTypeMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("sint64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 494))  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 494)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint_36__34_ (SOURCE_FILE ("lexiqueTypesForAST.galgas", 494)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 494)) ;
  }
  {
  result_outLexicalTypeMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("double"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 495))  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 495)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_double (SOURCE_FILE ("lexiqueTypesForAST.galgas", 495)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 495)) ;
  }
  {
  result_outLexicalTypeMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("bigint"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 496))  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 496)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_bigint (SOURCE_FILE ("lexiqueTypesForAST.galgas", 496)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 496)) ;
  }
//---
  return result_outLexicalTypeMap ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_buildLexicalTypeMap = false ;
static GALGAS_lexicalTypeMap gOnceFunctionResult_buildLexicalTypeMap ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeMap function_buildLexicalTypeMap (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_buildLexicalTypeMap) {
    gOnceFunctionResult_buildLexicalTypeMap = onceFunction_buildLexicalTypeMap (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_buildLexicalTypeMap = true ;
  }
  return gOnceFunctionResult_buildLexicalTypeMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_buildLexicalTypeMap (void) {
  gOnceFunctionResult_buildLexicalTypeMap.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_buildLexicalTypeMap (NULL,
                                                                 releaseOnceFunctionResult_buildLexicalTypeMap) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_buildLexicalTypeMap [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_buildLexicalTypeMap (C_Compiler * inCompiler,
                                                                    const cObjectArray & /* inEffectiveParameterArray */,
                                                                    const GALGAS_location & /* inErrorLocation */
                                                                    COMMA_LOCATION_ARGS) {
  return function_buildLexicalTypeMap (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_buildLexicalTypeMap ("buildLexicalTypeMap",
                                                                     functionWithGenericHeader_buildLexicalTypeMap,
                                                                     & kTypeDescriptor_GALGAS_lexicalTypeMap,
                                                                     0,
                                                                     functionArgs_buildLexicalTypeMap) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'buildLexicalAttributeMap'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildLexicalAttributeMap (const GALGAS_lexicalTypeMap constinArgument_inLexicalTypeMap,
                                       const GALGAS_lexicalAttributeListAST constinArgument_inLexicalAttributeList,
                                       GALGAS_lexicalAttributeMap & ioArgument_ioLexicalAttributeMap,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_lexicalAttributeListAST enumerator_21165 (constinArgument_inLexicalAttributeList, kENUMERATION_UP) ;
  while (enumerator_21165.hasCurrentObject ()) {
    const enumGalgasBool test_0 = constinArgument_inLexicalTypeMap.getter_hasKey (enumerator_21165.current_mTypeName (HERE).getter_string (SOURCE_FILE ("lexiqueTypesForAST.galgas", 516)) COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 516)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_lexicalTypeEnum var_lexicalType_21305 ;
      constinArgument_inLexicalTypeMap.method_searchKey (enumerator_21165.current_mTypeName (HERE), var_lexicalType_21305, inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 517)) ;
      {
      ioArgument_ioLexicalAttributeMap.setter_insertKey (enumerator_21165.current_mName (HERE), var_lexicalType_21305, inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 518)) ;
      }
    }else if (kBoolFalse == test_0) {
      GALGAS_string var_m_21393 = GALGAS_string::makeEmptyString () ;
      var_m_21393.plusAssign_operation(GALGAS_string ("the @").add_operation (enumerator_21165.current_mTypeName (HERE).getter_string (SOURCE_FILE ("lexiqueTypesForAST.galgas", 521)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 521)).add_operation (GALGAS_string (" type is not a valid lexical attribute type; are allowed:"), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 521)), inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 521)) ;
      GALGAS_bool var_firstLoop_21513 = GALGAS_bool (true) ;
      cEnumerator_lexicalTypeMap enumerator_21553 (constinArgument_inLexicalTypeMap, kENUMERATION_UP) ;
      while (enumerator_21553.hasCurrentObject ()) {
        var_m_21393.plusAssign_operation(GALGAS_string (" @").add_operation (enumerator_21553.current_lkey (HERE).getter_string (SOURCE_FILE ("lexiqueTypesForAST.galgas", 524)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 524)), inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 524)) ;
        if (enumerator_21553.hasNextObject ()) {
          var_m_21393.plusAssign_operation(GALGAS_string (","), inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 526)) ;
        }
        enumerator_21553.gotoNextObject () ;
      }
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (enumerator_21165.current_mTypeName (HERE).getter_location (SOURCE_FILE ("lexiqueTypesForAST.galgas", 528)), var_m_21393, fixItArray1  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 528)) ;
    }
    enumerator_21165.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Routine 'lexicalUnicodeTestFunctionAnalysis'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_lexicalUnicodeTestFunctionAnalysis (const GALGAS_lexicalFunctionListAST constinArgument_inLexicalFunctionListAST,
                                                 GALGAS_stringset & outArgument_outUnicodeTestFunctions,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outUnicodeTestFunctions.drop () ; // Release 'out' argument
  cEnumerator_lexicalFunctionListAST enumerator_6428 (constinArgument_inLexicalFunctionListAST, kENUMERATION_UP) ;
  while (enumerator_6428.hasCurrentObject ()) {
    callExtensionMethod_checkUnicodeConstants ((const cPtr_lexicalFunctionExpressionAST *) enumerator_6428.current (HERE).getter_mLexicalExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 124)) ;
    enumerator_6428.gotoNextObject () ;
  }
  GALGAS_stringset temp_0 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 139)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeLetter")  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 131)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeMark")  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 132)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeNumber")  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 133)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeDecimalDigit")  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 134)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeASCIIHexDigit")  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 135)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeSeparator")  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 136)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeCommand")  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 137)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodePunctuation")  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 138)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeSymbol")  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 139)) ;
  outArgument_outUnicodeTestFunctions = temp_0 ;
  GALGAS_bool var_progress_6877 = GALGAS_bool (true) ;
  GALGAS_lexicalFunctionListAST var_lexicalFunctionListAST_6913 = constinArgument_inLexicalFunctionListAST ;
  if (constinArgument_inLexicalFunctionListAST.getter_length (SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 143)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 143)).isValid ()) {
    uint32_t variant_6947 = constinArgument_inLexicalFunctionListAST.getter_length (SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 143)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 143)).uintValue () ;
    bool loop_6947 = true ;
    while (loop_6947) {
      loop_6947 = var_progress_6877.isValid () ;
      if (loop_6947) {
        loop_6947 = var_progress_6877.boolValue () ;
      }
      if (loop_6947 && (0 == variant_6947)) {
        loop_6947 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 143)) ;
      }
      if (loop_6947) {
        variant_6947 -- ;
        var_progress_6877 = GALGAS_bool (false) ;
        GALGAS_lexicalFunctionListAST var_temporaryLexicalFunctionListAST_7066 = var_lexicalFunctionListAST_6913 ;
        var_lexicalFunctionListAST_6913 = GALGAS_lexicalFunctionListAST::constructor_emptyList (SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 146)) ;
        cEnumerator_lexicalFunctionListAST enumerator_7182 (var_temporaryLexicalFunctionListAST_7066, kENUMERATION_UP) ;
        while (enumerator_7182.hasCurrentObject ()) {
          const enumGalgasBool test_1 = outArgument_outUnicodeTestFunctions.getter_hasKey (enumerator_7182.current (HERE).getter_mFunctionName (HERE).getter_string (SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 148)) COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 148)).boolEnum () ;
          if (kBoolTrue == test_1) {
            TC_Array <C_FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (enumerator_7182.current (HERE).getter_mFunctionName (HERE).getter_location (SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 149)), GALGAS_string ("Unicode test function already defined"), fixItArray2  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 149)) ;
          }else if (kBoolFalse == test_1) {
            const enumGalgasBool test_3 = callExtensionGetter_callsDefinedUnicodeTestFunctions ((const cPtr_lexicalFunctionExpressionAST *) enumerator_7182.current (HERE).getter_mLexicalExpression (HERE).ptr (), outArgument_outUnicodeTestFunctions, inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 150)).boolEnum () ;
            if (kBoolTrue == test_3) {
              outArgument_outUnicodeTestFunctions.addAssign_operation (enumerator_7182.current (HERE).getter_mFunctionName (HERE).getter_string (SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 151))  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 151)) ;
              var_progress_6877 = GALGAS_bool (true) ;
            }else if (kBoolFalse == test_3) {
              var_temporaryLexicalFunctionListAST_7066.addAssign_operation (enumerator_7182.current (HERE).getter_mFunctionName (HERE), enumerator_7182.current (HERE).getter_mLexicalExpression (HERE)  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 154)) ;
            }
          }
          enumerator_7182.gotoNextObject () ;
        }
      }
    }
  }
  cEnumerator_lexicalFunctionListAST enumerator_7744 (var_lexicalFunctionListAST_6913, kENUMERATION_UP) ;
  while (enumerator_7744.hasCurrentObject ()) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (enumerator_7744.current (HERE).getter_mFunctionName (HERE).getter_location (SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 159)), GALGAS_string ("Circular definition of this lexical Unicode test function"), fixItArray4  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 159)) ;
    enumerator_7744.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@lexicalFunctionOrExpressionAST checkUnicodeConstants'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexicalFunctionOrExpressionAST_checkUnicodeConstants (const cPtr_lexicalFunctionExpressionAST * inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalFunctionOrExpressionAST * object = (const cPtr_lexicalFunctionOrExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalFunctionOrExpressionAST) ;
  callExtensionMethod_checkUnicodeConstants ((const cPtr_lexicalFunctionExpressionAST *) object->mProperty_mLeftOperand.ptr (), inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 172)) ;
  callExtensionMethod_checkUnicodeConstants ((const cPtr_lexicalFunctionExpressionAST *) object->mProperty_mRightOperand.ptr (), inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 173)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexicalFunctionOrExpressionAST_checkUnicodeConstants (void) {
  enterExtensionMethod_checkUnicodeConstants (kTypeDescriptor_GALGAS_lexicalFunctionOrExpressionAST.mSlotID,
                                              extensionMethod_lexicalFunctionOrExpressionAST_checkUnicodeConstants) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalFunctionOrExpressionAST_checkUnicodeConstants (defineExtensionMethod_lexicalFunctionOrExpressionAST_checkUnicodeConstants, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@lexicalFunctionCallAST checkUnicodeConstants'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexicalFunctionCallAST_checkUnicodeConstants (const cPtr_lexicalFunctionExpressionAST * /* inObject */,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexicalFunctionCallAST_checkUnicodeConstants (void) {
  enterExtensionMethod_checkUnicodeConstants (kTypeDescriptor_GALGAS_lexicalFunctionCallAST.mSlotID,
                                              extensionMethod_lexicalFunctionCallAST_checkUnicodeConstants) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalFunctionCallAST_checkUnicodeConstants (defineExtensionMethod_lexicalFunctionCallAST_checkUnicodeConstants, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@lexicalFunctionCharacterMatchAST checkUnicodeConstants'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexicalFunctionCharacterMatchAST_checkUnicodeConstants (const cPtr_lexicalFunctionExpressionAST * /* inObject */,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexicalFunctionCharacterMatchAST_checkUnicodeConstants (void) {
  enterExtensionMethod_checkUnicodeConstants (kTypeDescriptor_GALGAS_lexicalFunctionCharacterMatchAST.mSlotID,
                                              extensionMethod_lexicalFunctionCharacterMatchAST_checkUnicodeConstants) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalFunctionCharacterMatchAST_checkUnicodeConstants (defineExtensionMethod_lexicalFunctionCharacterMatchAST_checkUnicodeConstants, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@lexicalFunctionCharacterIntervalMatchAST checkUnicodeConstants'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexicalFunctionCharacterIntervalMatchAST_checkUnicodeConstants (const cPtr_lexicalFunctionExpressionAST * inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalFunctionCharacterIntervalMatchAST * object = (const cPtr_lexicalFunctionCharacterIntervalMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalFunctionCharacterIntervalMatchAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, object->mProperty_mUpperBound.getter_char (HERE).getter_uint (SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 189)).objectCompare (object->mProperty_mLowerBound.getter_char (HERE).getter_uint (SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 189)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mUpperBound.getter_location (SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 190)), GALGAS_string ("Upper bound code point should be greater or equal to lower bound code point"), fixItArray1  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 190)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexicalFunctionCharacterIntervalMatchAST_checkUnicodeConstants (void) {
  enterExtensionMethod_checkUnicodeConstants (kTypeDescriptor_GALGAS_lexicalFunctionCharacterIntervalMatchAST.mSlotID,
                                              extensionMethod_lexicalFunctionCharacterIntervalMatchAST_checkUnicodeConstants) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalFunctionCharacterIntervalMatchAST_checkUnicodeConstants (defineExtensionMethod_lexicalFunctionCharacterIntervalMatchAST_checkUnicodeConstants, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension getter '@lexicalFunctionOrExpressionAST callsDefinedUnicodeTestFunctions'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_lexicalFunctionOrExpressionAST_callsDefinedUnicodeTestFunctions (const cPtr_lexicalFunctionExpressionAST * inObject,
                                                                                                    const GALGAS_stringset constinArgument_inDefinedUnicodeFunctionSet,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const cPtr_lexicalFunctionOrExpressionAST * object = (const cPtr_lexicalFunctionOrExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalFunctionOrExpressionAST) ;
  result_result = callExtensionGetter_callsDefinedUnicodeTestFunctions ((const cPtr_lexicalFunctionExpressionAST *) object->mProperty_mLeftOperand.ptr (), constinArgument_inDefinedUnicodeFunctionSet, inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 205)).operator_and (callExtensionGetter_callsDefinedUnicodeTestFunctions ((const cPtr_lexicalFunctionExpressionAST *) object->mProperty_mRightOperand.ptr (), constinArgument_inDefinedUnicodeFunctionSet, inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 206)) COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 205)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalFunctionOrExpressionAST_callsDefinedUnicodeTestFunctions (void) {
  enterExtensionGetter_callsDefinedUnicodeTestFunctions (kTypeDescriptor_GALGAS_lexicalFunctionOrExpressionAST.mSlotID,
                                                         extensionGetter_lexicalFunctionOrExpressionAST_callsDefinedUnicodeTestFunctions) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalFunctionOrExpressionAST_callsDefinedUnicodeTestFunctions (defineExtensionGetter_lexicalFunctionOrExpressionAST_callsDefinedUnicodeTestFunctions, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension getter '@lexicalFunctionCallAST callsDefinedUnicodeTestFunctions'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_lexicalFunctionCallAST_callsDefinedUnicodeTestFunctions (const cPtr_lexicalFunctionExpressionAST * inObject,
                                                                                            const GALGAS_stringset constinArgument_inDefinedUnicodeFunctionSet,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const cPtr_lexicalFunctionCallAST * object = (const cPtr_lexicalFunctionCallAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalFunctionCallAST) ;
  result_result = constinArgument_inDefinedUnicodeFunctionSet.getter_hasKey (object->mProperty_mCalledFunctionName.getter_string (SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 214)) COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 214)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalFunctionCallAST_callsDefinedUnicodeTestFunctions (void) {
  enterExtensionGetter_callsDefinedUnicodeTestFunctions (kTypeDescriptor_GALGAS_lexicalFunctionCallAST.mSlotID,
                                                         extensionGetter_lexicalFunctionCallAST_callsDefinedUnicodeTestFunctions) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalFunctionCallAST_callsDefinedUnicodeTestFunctions (defineExtensionGetter_lexicalFunctionCallAST_callsDefinedUnicodeTestFunctions, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension getter '@lexicalFunctionCharacterMatchAST callsDefinedUnicodeTestFunctions'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_lexicalFunctionCharacterMatchAST_callsDefinedUnicodeTestFunctions (const cPtr_lexicalFunctionExpressionAST * /* inObject */,
                                                                                                      const GALGAS_stringset /* constinArgument_inDefinedUnicodeFunctionSet */,
                                                                                                      C_Compiler * /* inCompiler */
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (true) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalFunctionCharacterMatchAST_callsDefinedUnicodeTestFunctions (void) {
  enterExtensionGetter_callsDefinedUnicodeTestFunctions (kTypeDescriptor_GALGAS_lexicalFunctionCharacterMatchAST.mSlotID,
                                                         extensionGetter_lexicalFunctionCharacterMatchAST_callsDefinedUnicodeTestFunctions) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalFunctionCharacterMatchAST_callsDefinedUnicodeTestFunctions (defineExtensionGetter_lexicalFunctionCharacterMatchAST_callsDefinedUnicodeTestFunctions, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//      Overriding extension getter '@lexicalFunctionCharacterIntervalMatchAST callsDefinedUnicodeTestFunctions'       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_lexicalFunctionCharacterIntervalMatchAST_callsDefinedUnicodeTestFunctions (const cPtr_lexicalFunctionExpressionAST * /* inObject */,
                                                                                                              const GALGAS_stringset /* constinArgument_inDefinedUnicodeFunctionSet */,
                                                                                                              C_Compiler * /* inCompiler */
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (true) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalFunctionCharacterIntervalMatchAST_callsDefinedUnicodeTestFunctions (void) {
  enterExtensionGetter_callsDefinedUnicodeTestFunctions (kTypeDescriptor_GALGAS_lexicalFunctionCharacterIntervalMatchAST.mSlotID,
                                                         extensionGetter_lexicalFunctionCharacterIntervalMatchAST_callsDefinedUnicodeTestFunctions) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalFunctionCharacterIntervalMatchAST_callsDefinedUnicodeTestFunctions (defineExtensionGetter_lexicalFunctionCharacterIntervalMatchAST_callsDefinedUnicodeTestFunctions, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension getter '@lexicalFunctionOrExpressionAST generateForUnicodeTestFunctions'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalFunctionOrExpressionAST_generateForUnicodeTestFunctions (const cPtr_lexicalFunctionExpressionAST * inObject,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_lexicalFunctionOrExpressionAST * object = (const cPtr_lexicalFunctionOrExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalFunctionOrExpressionAST) ;
  result_result = callExtensionGetter_generateForUnicodeTestFunctions ((const cPtr_lexicalFunctionExpressionAST *) object->mProperty_mLeftOperand.ptr (), inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 242)) ;
  result_result.plusAssign_operation(GALGAS_string (" ||\n"
    "         "), inCompiler  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 243)) ;
  result_result.plusAssign_operation(callExtensionGetter_generateForUnicodeTestFunctions ((const cPtr_lexicalFunctionExpressionAST *) object->mProperty_mRightOperand.ptr (), inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 244)), inCompiler  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 244)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalFunctionOrExpressionAST_generateForUnicodeTestFunctions (void) {
  enterExtensionGetter_generateForUnicodeTestFunctions (kTypeDescriptor_GALGAS_lexicalFunctionOrExpressionAST.mSlotID,
                                                        extensionGetter_lexicalFunctionOrExpressionAST_generateForUnicodeTestFunctions) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalFunctionOrExpressionAST_generateForUnicodeTestFunctions (defineExtensionGetter_lexicalFunctionOrExpressionAST_generateForUnicodeTestFunctions, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension getter '@lexicalFunctionCallAST generateForUnicodeTestFunctions'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalFunctionCallAST_generateForUnicodeTestFunctions (const cPtr_lexicalFunctionExpressionAST * inObject,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_lexicalFunctionCallAST * object = (const cPtr_lexicalFunctionCallAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalFunctionCallAST) ;
  result_result = object->mProperty_mCalledFunctionName.getter_string (HERE).add_operation (GALGAS_string (" (inUnicodeCharacter)"), inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 250)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalFunctionCallAST_generateForUnicodeTestFunctions (void) {
  enterExtensionGetter_generateForUnicodeTestFunctions (kTypeDescriptor_GALGAS_lexicalFunctionCallAST.mSlotID,
                                                        extensionGetter_lexicalFunctionCallAST_generateForUnicodeTestFunctions) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalFunctionCallAST_generateForUnicodeTestFunctions (defineExtensionGetter_lexicalFunctionCallAST_generateForUnicodeTestFunctions, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension getter '@lexicalFunctionCharacterMatchAST generateForUnicodeTestFunctions'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalFunctionCharacterMatchAST_generateForUnicodeTestFunctions (const cPtr_lexicalFunctionExpressionAST * inObject,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_lexicalFunctionCharacterMatchAST * object = (const cPtr_lexicalFunctionCharacterMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalFunctionCharacterMatchAST) ;
  result_result = GALGAS_string ("(").add_operation (object->mProperty_mCharacter.getter_char (HERE).getter_uint (SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 256)).getter_hexString (SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 256)).add_operation (GALGAS_string (" == UNICODE_VALUE (inUnicodeCharacter))"), inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 256)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalFunctionCharacterMatchAST_generateForUnicodeTestFunctions (void) {
  enterExtensionGetter_generateForUnicodeTestFunctions (kTypeDescriptor_GALGAS_lexicalFunctionCharacterMatchAST.mSlotID,
                                                        extensionGetter_lexicalFunctionCharacterMatchAST_generateForUnicodeTestFunctions) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalFunctionCharacterMatchAST_generateForUnicodeTestFunctions (defineExtensionGetter_lexicalFunctionCharacterMatchAST_generateForUnicodeTestFunctions, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//       Overriding extension getter '@lexicalFunctionCharacterIntervalMatchAST generateForUnicodeTestFunctions'       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalFunctionCharacterIntervalMatchAST_generateForUnicodeTestFunctions (const cPtr_lexicalFunctionExpressionAST * inObject,
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_lexicalFunctionCharacterIntervalMatchAST * object = (const cPtr_lexicalFunctionCharacterIntervalMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalFunctionCharacterIntervalMatchAST) ;
  result_result = GALGAS_string ("((").add_operation (object->mProperty_mLowerBound.getter_char (HERE).getter_uint (SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 262)).getter_hexString (SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 262)), inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 262)).add_operation (GALGAS_string (" <= UNICODE_VALUE (inUnicodeCharacter)) && (UNICODE_VALUE (inUnicodeCharacter) <= "), inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 262)).add_operation (object->mProperty_mUpperBound.getter_char (HERE).getter_uint (SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 264)).getter_hexString (SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 263)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 264)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalFunctionCharacterIntervalMatchAST_generateForUnicodeTestFunctions (void) {
  enterExtensionGetter_generateForUnicodeTestFunctions (kTypeDescriptor_GALGAS_lexicalFunctionCharacterIntervalMatchAST.mSlotID,
                                                        extensionGetter_lexicalFunctionCharacterIntervalMatchAST_generateForUnicodeTestFunctions) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalFunctionCharacterIntervalMatchAST_generateForUnicodeTestFunctions (defineExtensionGetter_lexicalFunctionCharacterIntervalMatchAST_generateForUnicodeTestFunctions, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'buildLexicalRoutineMap'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildLexicalRoutineMap (GALGAS_lexicalRoutineMap & outArgument_outLexicalRoutineMap,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outLexicalRoutineMap.drop () ; // Release 'out' argument
  outArgument_outLexicalRoutineMap = GALGAS_lexicalRoutineMap::constructor_emptyMap (SOURCE_FILE ("predefinedLexicalActions.galgas", 36)) ;
  GALGAS_lexicalRoutineFormalArgumentList var_lexicalRoutineFormalArgumentList_2962 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 38)) ;
  GALGAS_stringlist var_errorMessageList_2998 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 39)) ;
  var_lexicalRoutineFormalArgumentList_2962.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 40)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 40)), GALGAS_string ("ioASCIICharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 40)) ;
  var_lexicalRoutineFormalArgumentList_2962.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 41)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 41)), GALGAS_string ("inHexDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 41)) ;
  var_errorMessageList_2998.addAssign_operation (GALGAS_string ("inErrorCodeGreaterThan255")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 42)) ;
  var_errorMessageList_2998.addAssign_operation (GALGAS_string ("inErrorNotHexDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 43)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterHexDigitIntoASCIIcharacter"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 45))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 45)), var_lexicalRoutineFormalArgumentList_2962, var_errorMessageList_2998, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 44)) ;
  }
  var_lexicalRoutineFormalArgumentList_2962 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 51)) ;
  var_errorMessageList_2998 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 52)) ;
  var_lexicalRoutineFormalArgumentList_2962.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 53)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 53)), GALGAS_string ("ioASCIICharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 53)) ;
  var_lexicalRoutineFormalArgumentList_2962.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 54)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 54)), GALGAS_string ("inDecimalDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 54)) ;
  var_errorMessageList_2998.addAssign_operation (GALGAS_string ("inErrorCodeGreaterThan255")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 55)) ;
  var_errorMessageList_2998.addAssign_operation (GALGAS_string ("inErrorNotDecimalDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 56)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterDigitIntoASCIIcharacter"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 58))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 58)), var_lexicalRoutineFormalArgumentList_2962, var_errorMessageList_2998, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 57)) ;
  }
  var_lexicalRoutineFormalArgumentList_2962 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 64)) ;
  var_lexicalRoutineFormalArgumentList_2962.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 65)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 65)), GALGAS_string ("ioString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 65)) ;
  var_lexicalRoutineFormalArgumentList_2962.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 66)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 66)), GALGAS_string ("inCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 66)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterCharacterIntoString"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 68))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 68)), var_lexicalRoutineFormalArgumentList_2962, GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 70)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 67)) ;
  }
  {
  GALGAS_lexicalRoutineFormalArgumentList temp_0 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 76)) ;
  temp_0.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 76)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 76)), GALGAS_string ("ioString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 76)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("resetString"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 75))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 75)), temp_0, GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 77)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 74)) ;
  }
  var_lexicalRoutineFormalArgumentList_2962 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 81)) ;
  var_errorMessageList_2998 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 82)) ;
  var_lexicalRoutineFormalArgumentList_2962.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 83)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 83)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 83)) ;
  var_lexicalRoutineFormalArgumentList_2962.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 84)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_double (SOURCE_FILE ("predefinedLexicalActions.galgas", 84)), GALGAS_string ("ioDouble")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 84)) ;
  var_errorMessageList_2998.addAssign_operation (GALGAS_string ("inConversionError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 85)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertStringToDouble"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 87))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 87)), var_lexicalRoutineFormalArgumentList_2962, var_errorMessageList_2998, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 86)) ;
  }
  var_lexicalRoutineFormalArgumentList_2962 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 93)) ;
  var_errorMessageList_2998 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 94)) ;
  var_lexicalRoutineFormalArgumentList_2962.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 95)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 95)), GALGAS_string ("ioCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 95)) ;
  var_lexicalRoutineFormalArgumentList_2962.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 96)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 96)), GALGAS_string ("inCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 96)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterCharacterIntoCharacter"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 98))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 98)), var_lexicalRoutineFormalArgumentList_2962, var_errorMessageList_2998, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 97)) ;
  }
  var_lexicalRoutineFormalArgumentList_2962 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 104)) ;
  var_errorMessageList_2998 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 105)) ;
  var_lexicalRoutineFormalArgumentList_2962.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 106)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint (SOURCE_FILE ("predefinedLexicalActions.galgas", 106)), GALGAS_string ("ioNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 106)) ;
  var_errorMessageList_2998.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 107)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("negateSInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 109))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 109)), var_lexicalRoutineFormalArgumentList_2962, var_errorMessageList_2998, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 108)) ;
  }
  var_lexicalRoutineFormalArgumentList_2962 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 115)) ;
  var_errorMessageList_2998 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 116)) ;
  var_lexicalRoutineFormalArgumentList_2962.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 117)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 117)), GALGAS_string ("ioNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 117)) ;
  var_errorMessageList_2998.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 118)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("negateSInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 120))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 120)), var_lexicalRoutineFormalArgumentList_2962, var_errorMessageList_2998, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 119)) ;
  }
  var_lexicalRoutineFormalArgumentList_2962 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 126)) ;
  var_errorMessageList_2998 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 127)) ;
  var_lexicalRoutineFormalArgumentList_2962.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 128)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 128)), GALGAS_string ("inUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 128)) ;
  var_lexicalRoutineFormalArgumentList_2962.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 129)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint (SOURCE_FILE ("predefinedLexicalActions.galgas", 129)), GALGAS_string ("ioSignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 129)) ;
  var_errorMessageList_2998.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 130)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertUIntToSInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 132))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 132)), var_lexicalRoutineFormalArgumentList_2962, var_errorMessageList_2998, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 131)) ;
  }
  var_lexicalRoutineFormalArgumentList_2962 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 138)) ;
  var_errorMessageList_2998 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 139)) ;
  var_lexicalRoutineFormalArgumentList_2962.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 140)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 140)), GALGAS_string ("inUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 140)) ;
  var_lexicalRoutineFormalArgumentList_2962.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 141)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 141)), GALGAS_string ("ioSignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 141)) ;
  var_errorMessageList_2998.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 142)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertUInt64ToSInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 144))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 144)), var_lexicalRoutineFormalArgumentList_2962, var_errorMessageList_2998, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 143)) ;
  }
  var_lexicalRoutineFormalArgumentList_2962 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 150)) ;
  var_errorMessageList_2998 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 151)) ;
  var_lexicalRoutineFormalArgumentList_2962.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 152)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 152)), GALGAS_string ("inDecimalDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 152)) ;
  var_lexicalRoutineFormalArgumentList_2962.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 153)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 153)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 153)) ;
  var_errorMessageList_2998.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 154)) ;
  var_errorMessageList_2998.addAssign_operation (GALGAS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 155)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterDigitIntoUInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 157))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 157)), var_lexicalRoutineFormalArgumentList_2962, var_errorMessageList_2998, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 156)) ;
  }
  var_lexicalRoutineFormalArgumentList_2962 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 163)) ;
  var_errorMessageList_2998 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 164)) ;
  var_lexicalRoutineFormalArgumentList_2962.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 165)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 165)), GALGAS_string ("inDecimalDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 165)) ;
  var_lexicalRoutineFormalArgumentList_2962.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 166)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 166)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 166)) ;
  var_errorMessageList_2998.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 167)) ;
  var_errorMessageList_2998.addAssign_operation (GALGAS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 168)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterDigitIntoUInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 170))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 170)), var_lexicalRoutineFormalArgumentList_2962, var_errorMessageList_2998, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 169)) ;
  }
  var_lexicalRoutineFormalArgumentList_2962 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 176)) ;
  var_lexicalRoutineFormalArgumentList_2962.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 177)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 177)), GALGAS_string ("inDecimalDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 177)) ;
  var_lexicalRoutineFormalArgumentList_2962.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 178)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas", 178)), GALGAS_string ("ioBigInt")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 178)) ;
  {
  GALGAS_stringlist temp_1 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 182)) ;
  temp_1.addAssign_operation (GALGAS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 182)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterDecimalDigitIntoBigInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 180))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 180)), var_lexicalRoutineFormalArgumentList_2962, temp_1, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 179)) ;
  }
  var_lexicalRoutineFormalArgumentList_2962 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 186)) ;
  var_lexicalRoutineFormalArgumentList_2962.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 187)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 187)), GALGAS_string ("inBinaryDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 187)) ;
  var_lexicalRoutineFormalArgumentList_2962.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 188)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas", 188)), GALGAS_string ("ioBigInt")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 188)) ;
  {
  GALGAS_stringlist temp_2 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 192)) ;
  temp_2.addAssign_operation (GALGAS_string ("inCharacterIsNotBinaryDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 192)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterBinaryDigitIntoBigInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 190))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 190)), var_lexicalRoutineFormalArgumentList_2962, temp_2, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 189)) ;
  }
  var_lexicalRoutineFormalArgumentList_2962 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 196)) ;
  var_lexicalRoutineFormalArgumentList_2962.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 197)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 197)), GALGAS_string ("inHexDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 197)) ;
  var_lexicalRoutineFormalArgumentList_2962.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 198)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas", 198)), GALGAS_string ("ioBigInt")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 198)) ;
  {
  GALGAS_stringlist temp_3 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 202)) ;
  temp_3.addAssign_operation (GALGAS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 202)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterHexDigitIntoBigInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 200))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 200)), var_lexicalRoutineFormalArgumentList_2962, temp_3, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 199)) ;
  }
  var_lexicalRoutineFormalArgumentList_2962 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 206)) ;
  var_lexicalRoutineFormalArgumentList_2962.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 207)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 207)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 207)) ;
  var_lexicalRoutineFormalArgumentList_2962.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 208)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas", 208)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 208)) ;
  {
  GALGAS_stringlist temp_4 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 212)) ;
  temp_4.addAssign_operation (GALGAS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 212)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertDecimalStringIntoBigInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 210))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 210)), var_lexicalRoutineFormalArgumentList_2962, temp_4, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 209)) ;
  }
  var_lexicalRoutineFormalArgumentList_2962 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 216)) ;
  var_lexicalRoutineFormalArgumentList_2962.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 217)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas", 217)), GALGAS_string ("ioBigInt")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 217)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("negateBigInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 219))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 219)), var_lexicalRoutineFormalArgumentList_2962, GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 221)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 218)) ;
  }
  var_lexicalRoutineFormalArgumentList_2962 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 225)) ;
  var_lexicalRoutineFormalArgumentList_2962.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 226)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 226)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 226)) ;
  var_lexicalRoutineFormalArgumentList_2962.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 227)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas", 227)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 227)) ;
  {
  GALGAS_stringlist temp_5 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 231)) ;
  temp_5.addAssign_operation (GALGAS_string ("inCharacterIsNotBinaryDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 231)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertBinaryStringIntoBigInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 229))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 229)), var_lexicalRoutineFormalArgumentList_2962, temp_5, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 228)) ;
  }
  var_lexicalRoutineFormalArgumentList_2962 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 235)) ;
  var_lexicalRoutineFormalArgumentList_2962.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 236)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 236)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 236)) ;
  var_lexicalRoutineFormalArgumentList_2962.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 237)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas", 237)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 237)) ;
  {
  GALGAS_stringlist temp_6 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 241)) ;
  temp_6.addAssign_operation (GALGAS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 241)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertHexStringIntoBigInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 239))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 239)), var_lexicalRoutineFormalArgumentList_2962, temp_6, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 238)) ;
  }
  var_lexicalRoutineFormalArgumentList_2962 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 245)) ;
  var_errorMessageList_2998 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 246)) ;
  var_lexicalRoutineFormalArgumentList_2962.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 247)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 247)), GALGAS_string ("inHexDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 247)) ;
  var_lexicalRoutineFormalArgumentList_2962.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 248)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 248)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 248)) ;
  var_errorMessageList_2998.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 249)) ;
  var_errorMessageList_2998.addAssign_operation (GALGAS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 250)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterHexDigitIntoUInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 252))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 252)), var_lexicalRoutineFormalArgumentList_2962, var_errorMessageList_2998, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 251)) ;
  }
  var_lexicalRoutineFormalArgumentList_2962 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 258)) ;
  var_errorMessageList_2998 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 259)) ;
  var_lexicalRoutineFormalArgumentList_2962.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 260)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 260)), GALGAS_string ("inHexDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 260)) ;
  var_lexicalRoutineFormalArgumentList_2962.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 261)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 261)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 261)) ;
  var_errorMessageList_2998.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 262)) ;
  var_errorMessageList_2998.addAssign_operation (GALGAS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 263)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterHexDigitIntoUInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 265))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 265)), var_lexicalRoutineFormalArgumentList_2962, var_errorMessageList_2998, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 264)) ;
  }
  var_lexicalRoutineFormalArgumentList_2962 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 271)) ;
  var_errorMessageList_2998 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 272)) ;
  var_lexicalRoutineFormalArgumentList_2962.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 273)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 273)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 273)) ;
  var_lexicalRoutineFormalArgumentList_2962.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 274)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 274)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 274)) ;
  var_errorMessageList_2998.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 275)) ;
  var_errorMessageList_2998.addAssign_operation (GALGAS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 276)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertDecimalStringIntoUInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 278))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 278)), var_lexicalRoutineFormalArgumentList_2962, var_errorMessageList_2998, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 277)) ;
  }
  var_lexicalRoutineFormalArgumentList_2962 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 284)) ;
  var_errorMessageList_2998 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 285)) ;
  var_lexicalRoutineFormalArgumentList_2962.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 286)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 286)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 286)) ;
  var_lexicalRoutineFormalArgumentList_2962.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 287)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint (SOURCE_FILE ("predefinedLexicalActions.galgas", 287)), GALGAS_string ("ioSignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 287)) ;
  var_errorMessageList_2998.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 288)) ;
  var_errorMessageList_2998.addAssign_operation (GALGAS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 289)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertDecimalStringIntoSInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 291))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 291)), var_lexicalRoutineFormalArgumentList_2962, var_errorMessageList_2998, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 290)) ;
  }
  var_lexicalRoutineFormalArgumentList_2962 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 297)) ;
  var_lexicalRoutineFormalArgumentList_2962.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 298)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 298)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 298)) ;
  var_lexicalRoutineFormalArgumentList_2962.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 299)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 299)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 299)) ;
  {
  GALGAS_stringlist temp_7 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 303)) ;
  temp_7.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 303)) ;
  temp_7.addAssign_operation (GALGAS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 303)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertDecimalStringIntoUInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 301))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 301)), var_lexicalRoutineFormalArgumentList_2962, temp_7, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 300)) ;
  }
  var_lexicalRoutineFormalArgumentList_2962 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 307)) ;
  var_errorMessageList_2998 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 308)) ;
  var_lexicalRoutineFormalArgumentList_2962.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 309)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 309)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 309)) ;
  var_lexicalRoutineFormalArgumentList_2962.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 310)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 310)), GALGAS_string ("ioSignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 310)) ;
  var_errorMessageList_2998.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 311)) ;
  var_errorMessageList_2998.addAssign_operation (GALGAS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 312)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertDecimalStringIntoSInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 314))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 314)), var_lexicalRoutineFormalArgumentList_2962, var_errorMessageList_2998, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 313)) ;
  }
  var_lexicalRoutineFormalArgumentList_2962 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 320)) ;
  var_errorMessageList_2998 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 321)) ;
  var_lexicalRoutineFormalArgumentList_2962.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 322)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 322)), GALGAS_string ("inCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 322)) ;
  var_lexicalRoutineFormalArgumentList_2962.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 323)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 323)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 323)) ;
  var_errorMessageList_2998.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 324)) ;
  var_errorMessageList_2998.addAssign_operation (GALGAS_string ("inCharacterIsNotBinDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 325)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterBinDigitIntoUInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 327))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 327)), var_lexicalRoutineFormalArgumentList_2962, var_errorMessageList_2998, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 326)) ;
  }
  var_lexicalRoutineFormalArgumentList_2962 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 333)) ;
  var_errorMessageList_2998 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 334)) ;
  var_lexicalRoutineFormalArgumentList_2962.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 335)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 335)), GALGAS_string ("inCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 335)) ;
  var_lexicalRoutineFormalArgumentList_2962.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 336)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 336)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 336)) ;
  var_errorMessageList_2998.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 337)) ;
  var_errorMessageList_2998.addAssign_operation (GALGAS_string ("inCharacterIsNotBinDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 338)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterBinDigitIntoUInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 340))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 340)), var_lexicalRoutineFormalArgumentList_2962, var_errorMessageList_2998, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 339)) ;
  }
  var_lexicalRoutineFormalArgumentList_2962 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 346)) ;
  var_errorMessageList_2998 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 347)) ;
  var_lexicalRoutineFormalArgumentList_2962.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 348)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 348)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 348)) ;
  var_lexicalRoutineFormalArgumentList_2962.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 349)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 349)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 349)) ;
  var_errorMessageList_2998.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 350)) ;
  var_errorMessageList_2998.addAssign_operation (GALGAS_string ("inCharacterIsNotOctDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 351)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterOctDigitIntoUInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 353))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 353)), var_lexicalRoutineFormalArgumentList_2962, var_errorMessageList_2998, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 352)) ;
  }
  var_lexicalRoutineFormalArgumentList_2962 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 359)) ;
  var_errorMessageList_2998 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 360)) ;
  var_lexicalRoutineFormalArgumentList_2962.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 361)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 361)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 361)) ;
  var_lexicalRoutineFormalArgumentList_2962.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 362)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 362)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 362)) ;
  var_errorMessageList_2998.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 363)) ;
  var_errorMessageList_2998.addAssign_operation (GALGAS_string ("inCharacterIsNotOctDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 364)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterOctDigitIntoUInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 366))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 366)), var_lexicalRoutineFormalArgumentList_2962, var_errorMessageList_2998, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 365)) ;
  }
  var_lexicalRoutineFormalArgumentList_2962 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 372)) ;
  var_errorMessageList_2998 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 373)) ;
  var_lexicalRoutineFormalArgumentList_2962.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 374)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 374)), GALGAS_string ("inUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 374)) ;
  var_lexicalRoutineFormalArgumentList_2962.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 375)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 375)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 375)) ;
  var_errorMessageList_2998.addAssign_operation (GALGAS_string ("inResultTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 376)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("multiplyUInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 378))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 378)), var_lexicalRoutineFormalArgumentList_2962, var_errorMessageList_2998, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 377)) ;
  }
  var_lexicalRoutineFormalArgumentList_2962 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 384)) ;
  var_errorMessageList_2998 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 385)) ;
  var_lexicalRoutineFormalArgumentList_2962.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 386)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 386)), GALGAS_string ("inUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 386)) ;
  var_lexicalRoutineFormalArgumentList_2962.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 387)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 387)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 387)) ;
  var_errorMessageList_2998.addAssign_operation (GALGAS_string ("inResultTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 388)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("multiplyUInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 390))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 390)), var_lexicalRoutineFormalArgumentList_2962, var_errorMessageList_2998, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 389)) ;
  }
  var_lexicalRoutineFormalArgumentList_2962 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 396)) ;
  var_errorMessageList_2998 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 397)) ;
  var_lexicalRoutineFormalArgumentList_2962.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 398)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 398)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 398)) ;
  var_lexicalRoutineFormalArgumentList_2962.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 399)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 399)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 399)) ;
  var_errorMessageList_2998.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 400)) ;
  var_errorMessageList_2998.addAssign_operation (GALGAS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 401)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertHexStringIntoUInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 403))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 403)), var_lexicalRoutineFormalArgumentList_2962, var_errorMessageList_2998, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 402)) ;
  }
  var_lexicalRoutineFormalArgumentList_2962 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 409)) ;
  var_errorMessageList_2998 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 410)) ;
  var_lexicalRoutineFormalArgumentList_2962.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 411)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 411)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 411)) ;
  var_lexicalRoutineFormalArgumentList_2962.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 412)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 412)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 412)) ;
  var_errorMessageList_2998.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 413)) ;
  var_errorMessageList_2998.addAssign_operation (GALGAS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 414)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertHexStringIntoUInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 416))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 416)), var_lexicalRoutineFormalArgumentList_2962, var_errorMessageList_2998, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 415)) ;
  }
  var_lexicalRoutineFormalArgumentList_2962 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 422)) ;
  var_errorMessageList_2998 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 423)) ;
  var_lexicalRoutineFormalArgumentList_2962.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 424)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 424)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 424)) ;
  var_lexicalRoutineFormalArgumentList_2962.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 425)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint (SOURCE_FILE ("predefinedLexicalActions.galgas", 425)), GALGAS_string ("ioSignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 425)) ;
  var_errorMessageList_2998.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 426)) ;
  var_errorMessageList_2998.addAssign_operation (GALGAS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 427)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertHexStringIntoSInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 429))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 429)), var_lexicalRoutineFormalArgumentList_2962, var_errorMessageList_2998, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 428)) ;
  }
  var_lexicalRoutineFormalArgumentList_2962 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 435)) ;
  var_errorMessageList_2998 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 436)) ;
  var_lexicalRoutineFormalArgumentList_2962.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 437)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 437)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 437)) ;
  var_lexicalRoutineFormalArgumentList_2962.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 438)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 438)), GALGAS_string ("ioSignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 438)) ;
  var_errorMessageList_2998.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 439)) ;
  var_errorMessageList_2998.addAssign_operation (GALGAS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 440)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertHexStringIntoSInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 442))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 442)), var_lexicalRoutineFormalArgumentList_2962, var_errorMessageList_2998, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 441)) ;
  }
  var_lexicalRoutineFormalArgumentList_2962 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 448)) ;
  var_errorMessageList_2998 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 449)) ;
  var_lexicalRoutineFormalArgumentList_2962.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 450)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 450)), GALGAS_string ("inUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 450)) ;
  var_lexicalRoutineFormalArgumentList_2962.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 451)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 451)), GALGAS_string ("ioUnicodeCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 451)) ;
  var_errorMessageList_2998.addAssign_operation (GALGAS_string ("inUnassignedUnicodeValueError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 452)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertUnsignedNumberToUnicodeChar"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 454))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 454)), var_lexicalRoutineFormalArgumentList_2962, var_errorMessageList_2998, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 453)) ;
  }
  var_lexicalRoutineFormalArgumentList_2962 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 460)) ;
  var_errorMessageList_2998 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 461)) ;
  var_lexicalRoutineFormalArgumentList_2962.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 462)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 462)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 462)) ;
  var_lexicalRoutineFormalArgumentList_2962.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 463)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 463)), GALGAS_string ("ioUnicodeCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 463)) ;
  var_errorMessageList_2998.addAssign_operation (GALGAS_string ("inUnassignedHTMLSequenceError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 464)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertHTMLSequenceToUnicodeCharacter"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 466))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 466)), var_lexicalRoutineFormalArgumentList_2962, var_errorMessageList_2998, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 465)) ;
  }
  var_lexicalRoutineFormalArgumentList_2962 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 472)) ;
  var_errorMessageList_2998 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 473)) ;
  var_lexicalRoutineFormalArgumentList_2962.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 474)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 474)), GALGAS_string ("inCodePointString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 474)) ;
  var_lexicalRoutineFormalArgumentList_2962.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 475)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 475)), GALGAS_string ("ioString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 475)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("codePointToUnicode"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 477))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 477)), var_lexicalRoutineFormalArgumentList_2962, var_errorMessageList_2998, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 476)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'buildLexicalFunctionMap'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildLexicalFunctionMap (GALGAS_lexicalFunctionMap & outArgument_outLexicalFunctionMap,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outLexicalFunctionMap.drop () ; // Release 'out' argument
  outArgument_outLexicalFunctionMap = GALGAS_lexicalFunctionMap::constructor_emptyMap (SOURCE_FILE ("predefinedLexicalActions.galgas", 489)) ;
  GALGAS_lexicalFunctionFormalArgumentList var_lexicalTypeList_23046 = GALGAS_lexicalFunctionFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 491)) ;
  var_lexicalTypeList_23046.addAssign_operation (GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 492)), GALGAS_string ("inCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 492)) ;
  {
  outArgument_outLexicalFunctionMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("toLower"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 494))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 494)), var_lexicalTypeList_23046, GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 496)), GALGAS_string::makeEmptyString (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 493)) ;
  }
  var_lexicalTypeList_23046 = GALGAS_lexicalFunctionFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 501)) ;
  var_lexicalTypeList_23046.addAssign_operation (GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 502)), GALGAS_string ("inCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 502)) ;
  {
  outArgument_outLexicalFunctionMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("toUpper"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 504))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 504)), var_lexicalTypeList_23046, GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 506)), GALGAS_string::makeEmptyString (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 503)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'printPredefinedLexicalActions'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_printPredefinedLexicalActions (C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalRoutineMap var_lexicalRoutineMap_24117 ;
  {
  routine_buildLexicalRoutineMap (var_lexicalRoutineMap_24117, inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 519)) ;
  }
  GALGAS_string var_s_24243 = GALGAS_string::makeEmptyString () ;
  var_s_24243.plusAssign_operation(GALGAS_string ("**************** Prefined lexical routines  ****************\n"), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 522)) ;
  cEnumerator_lexicalRoutineMap enumerator_24350 (var_lexicalRoutineMap_24117, kENUMERATION_UP) ;
  while (enumerator_24350.hasCurrentObject ()) {
    var_s_24243.plusAssign_operation(enumerator_24350.current_lkey (HERE).getter_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 524)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 524)) ;
    cEnumerator_lexicalRoutineFormalArgumentList enumerator_24424 (enumerator_24350.current_mLexicalRoutineFormalArgumentList (HERE), kENUMERATION_UP) ;
    while (enumerator_24424.hasCurrentObject ()) {
      var_s_24243.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_lexicalFormalModeName (enumerator_24424.current_mLexicalFormalArgumentMode (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 526)), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 526)).add_operation (GALGAS_string ("@"), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 526)).add_operation (extensionGetter_lexicalTypeBaseName (enumerator_24424.current_mLexicalFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 526)), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 526)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 526)).add_operation (enumerator_24424.current_mArgumentNameForComment (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 526)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 526)) ;
      enumerator_24424.gotoNextObject () ;
    }
    cEnumerator_stringlist enumerator_24624 (enumerator_24350.current_mErrorMessageList (HERE), kENUMERATION_UP) ;
    const bool bool_0 = true ;
    if (enumerator_24624.hasCurrentObject () && bool_0) {
      var_s_24243.plusAssign_operation(GALGAS_string (" error"), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 529)) ;
      while (enumerator_24624.hasCurrentObject () && bool_0) {
        var_s_24243.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_24624.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 530)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 530)) ;
        enumerator_24624.gotoNextObject () ;
        if (enumerator_24624.hasCurrentObject () && bool_0) {
          var_s_24243.plusAssign_operation(GALGAS_string (","), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 531)) ;
        }
      }
    }
    var_s_24243.plusAssign_operation(GALGAS_string (" ;\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 533)) ;
    enumerator_24350.gotoNextObject () ;
  }
  GALGAS_lexicalFunctionMap var_lexicalFunctionMap_24836 ;
  {
  routine_buildLexicalFunctionMap (var_lexicalFunctionMap_24836, inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 537)) ;
  }
  var_s_24243.plusAssign_operation(GALGAS_string ("**************** Prefined lexical functions ****************\n"), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 539)) ;
  cEnumerator_lexicalFunctionMap enumerator_25055 (var_lexicalFunctionMap_24836, kENUMERATION_UP) ;
  while (enumerator_25055.hasCurrentObject ()) {
    var_s_24243.plusAssign_operation(enumerator_25055.current_lkey (HERE).getter_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 541)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 541)) ;
    cEnumerator_lexicalFunctionFormalArgumentList enumerator_25112 (enumerator_25055.current_mLexicalTypeList (HERE), kENUMERATION_UP) ;
    while (enumerator_25112.hasCurrentObject ()) {
      var_s_24243.plusAssign_operation(GALGAS_string (" \?@").add_operation (extensionGetter_lexicalTypeBaseName (enumerator_25112.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 543)), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 543)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 543)).add_operation (enumerator_25112.current_mArgumentNameForComment (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 543)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 543)) ;
      enumerator_25112.gotoNextObject () ;
    }
    var_s_24243.plusAssign_operation(GALGAS_string (" -> @").add_operation (extensionGetter_lexicalTypeBaseName (enumerator_25055.current_mReturnedLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 545)), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 545)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 545)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 545)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, enumerator_25055.current_mReplacementFunctionName (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_s_24243.plusAssign_operation(GALGAS_string ("Note: the '").add_operation (enumerator_25055.current_lkey (HERE).getter_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 547)), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 547)).add_operation (GALGAS_string ("' function is obsolete: use '"), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 547)).add_operation (enumerator_25055.current_mReplacementFunctionName (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 547)).add_operation (GALGAS_string ("' function.\n"), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 547)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 547)) ;
    }
    var_s_24243.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 549)) ;
    enumerator_25055.gotoNextObject () ;
  }
  var_s_24243.plusAssign_operation(GALGAS_string ("************************************************************\n"), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 552)) ;
  inCompiler->printMessage (var_s_24243  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 553)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension getter '@lexicalOrExpressionAST generateConditionCode'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalOrExpressionAST_generateConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                                   const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalOrExpressionAST * object = (const cPtr_lexicalOrExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalOrExpressionAST) ;
  result_outGeneratedCode = callExtensionGetter_generateConditionCode ((const cPtr_lexicalExpressionAST *) object->mProperty_mLeftOperand.ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 29)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (" || "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 30)) ;
  result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateConditionCode ((const cPtr_lexicalExpressionAST *) object->mProperty_mRightOperand.ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 31)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 31)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalOrExpressionAST_generateConditionCode (void) {
  enterExtensionGetter_generateConditionCode (kTypeDescriptor_GALGAS_lexicalOrExpressionAST.mSlotID,
                                              extensionGetter_lexicalOrExpressionAST_generateConditionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalOrExpressionAST_generateConditionCode (defineExtensionGetter_lexicalOrExpressionAST_generateConditionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension getter '@lexicalCharacterIntervalMatchAST generateConditionCode'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalCharacterIntervalMatchAST_generateConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                                             const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalCharacterIntervalMatchAST * object = (const cPtr_lexicalCharacterIntervalMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalCharacterIntervalMatchAST) ;
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  result_outGeneratedCode = GALGAS_string ("testForInputUTF32CharRange (") ;
  result_outGeneratedCode.plusAssign_operation(object->mProperty_mLowerBound.getter_char (SOURCE_FILE ("lexiqueGeneration.galgas", 41)).getter_utf_33__32_CharConstantRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 41)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 41)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 42)) ;
  result_outGeneratedCode.plusAssign_operation(object->mProperty_mUpperBound.getter_char (SOURCE_FILE ("lexiqueGeneration.galgas", 43)).getter_utf_33__32_CharConstantRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 43)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 43)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 44)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalCharacterIntervalMatchAST_generateConditionCode (void) {
  enterExtensionGetter_generateConditionCode (kTypeDescriptor_GALGAS_lexicalCharacterIntervalMatchAST.mSlotID,
                                              extensionGetter_lexicalCharacterIntervalMatchAST_generateConditionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalCharacterIntervalMatchAST_generateConditionCode (defineExtensionGetter_lexicalCharacterIntervalMatchAST_generateConditionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension getter '@lexicalStringMatchAST generateConditionCode'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalStringMatchAST_generateConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                                  const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalStringMatchAST * object = (const cPtr_lexicalStringMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalStringMatchAST) ;
  result_outGeneratedCode = GALGAS_string ("testForInputUTF32String (kUnicodeString_").add_operation (constinArgument_inLexiqueAnalysisContext.getter_mLexiqueName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 52)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 52)).add_operation (object->mProperty_mString.getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 52)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 53)) ;
  result_outGeneratedCode.plusAssign_operation(object->mProperty_mString.getter_string (HERE).getter_length (SOURCE_FILE ("lexiqueGeneration.galgas", 54)).getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 54)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 54)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (", true)"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 55)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalStringMatchAST_generateConditionCode (void) {
  enterExtensionGetter_generateConditionCode (kTypeDescriptor_GALGAS_lexicalStringMatchAST.mSlotID,
                                              extensionGetter_lexicalStringMatchAST_generateConditionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalStringMatchAST_generateConditionCode (defineExtensionGetter_lexicalStringMatchAST_generateConditionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension getter '@lexicalStringNotMatchAST generateConditionCode'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalStringNotMatchAST_generateConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                                     const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalStringNotMatchAST * object = (const cPtr_lexicalStringNotMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalStringNotMatchAST) ;
  result_outGeneratedCode = GALGAS_string ("notTestForInputUTF32String (kUnicodeString_").add_operation (constinArgument_inLexiqueAnalysisContext.getter_mLexiqueName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 63)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 63)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 63)) ;
  result_outGeneratedCode.plusAssign_operation(object->mProperty_mString.getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 64)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 64)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 65)) ;
  result_outGeneratedCode.plusAssign_operation(object->mProperty_mString.getter_string (HERE).getter_length (SOURCE_FILE ("lexiqueGeneration.galgas", 66)).getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 66)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 66)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (", gLexicalMessage_"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 67)) ;
  result_outGeneratedCode.plusAssign_operation(constinArgument_inLexiqueAnalysisContext.getter_mLexiqueName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 68)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 68)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 68)) ;
  result_outGeneratedCode.plusAssign_operation(object->mProperty_mErrorMessage.getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 69)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 69)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_LINE_AND_SOURCE_FILE)"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 70)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalStringNotMatchAST_generateConditionCode (void) {
  enterExtensionGetter_generateConditionCode (kTypeDescriptor_GALGAS_lexicalStringNotMatchAST.mSlotID,
                                              extensionGetter_lexicalStringNotMatchAST_generateConditionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalStringNotMatchAST_generateConditionCode (defineExtensionGetter_lexicalStringNotMatchAST_generateConditionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension getter '@lexicalCharacterMatchAST generateConditionCode'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalCharacterMatchAST_generateConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                                     const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalCharacterMatchAST * object = (const cPtr_lexicalCharacterMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalCharacterMatchAST) ;
  result_outGeneratedCode = GALGAS_string ("testForInputUTF32Char (") ;
  result_outGeneratedCode.plusAssign_operation(object->mProperty_mCharacter.getter_char (SOURCE_FILE ("lexiqueGeneration.galgas", 79)).getter_utf_33__32_CharConstantRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 79)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 79)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 80)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalCharacterMatchAST_generateConditionCode (void) {
  enterExtensionGetter_generateConditionCode (kTypeDescriptor_GALGAS_lexicalCharacterMatchAST.mSlotID,
                                              extensionGetter_lexicalCharacterMatchAST_generateConditionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalCharacterMatchAST_generateConditionCode (defineExtensionGetter_lexicalCharacterMatchAST_generateConditionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension getter '@lexicalCharacterSetMatchAST generateConditionCode'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalCharacterSetMatchAST_generateConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                                        const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalCharacterSetMatchAST * object = (const cPtr_lexicalCharacterSetMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalCharacterSetMatchAST) ;
  result_outGeneratedCode = GALGAS_string ("testForCharWithFunction (") ;
  result_outGeneratedCode.plusAssign_operation(object->mProperty_mCharacterSetName.getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 89)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 89)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 90)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalCharacterSetMatchAST_generateConditionCode (void) {
  enterExtensionGetter_generateConditionCode (kTypeDescriptor_GALGAS_lexicalCharacterSetMatchAST.mSlotID,
                                              extensionGetter_lexicalCharacterSetMatchAST_generateConditionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalCharacterSetMatchAST_generateConditionCode (defineExtensionGetter_lexicalCharacterSetMatchAST_generateConditionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension getter '@lexicalAttributeInputArgumentAST generateRoutineOrFunctionArgument'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalAttributeInputArgumentAST_generateRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalAttributeInputArgumentAST * object = (const cPtr_lexicalAttributeInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalAttributeInputArgumentAST) ;
  result_outGeneratedCode = GALGAS_string ("token.mLexicalAttribute_").add_operation (object->mProperty_mAttributeName.getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 104)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalAttributeInputArgumentAST_generateRoutineOrFunctionArgument (void) {
  enterExtensionGetter_generateRoutineOrFunctionArgument (kTypeDescriptor_GALGAS_lexicalAttributeInputArgumentAST.mSlotID,
                                                          extensionGetter_lexicalAttributeInputArgumentAST_generateRoutineOrFunctionArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalAttributeInputArgumentAST_generateRoutineOrFunctionArgument (defineExtensionGetter_lexicalAttributeInputArgumentAST_generateRoutineOrFunctionArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension getter '@lexicalCharacterInputArgumentAST generateRoutineOrFunctionArgument'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalCharacterInputArgumentAST_generateRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                                         C_Compiler * /* inCompiler */
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalCharacterInputArgumentAST * object = (const cPtr_lexicalCharacterInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalCharacterInputArgumentAST) ;
  result_outGeneratedCode = object->mProperty_mCharacter.getter_char (SOURCE_FILE ("lexiqueGeneration.galgas", 111)).getter_utf_33__32_CharConstantRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 111)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalCharacterInputArgumentAST_generateRoutineOrFunctionArgument (void) {
  enterExtensionGetter_generateRoutineOrFunctionArgument (kTypeDescriptor_GALGAS_lexicalCharacterInputArgumentAST.mSlotID,
                                                          extensionGetter_lexicalCharacterInputArgumentAST_generateRoutineOrFunctionArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalCharacterInputArgumentAST_generateRoutineOrFunctionArgument (defineExtensionGetter_lexicalCharacterInputArgumentAST_generateRoutineOrFunctionArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension getter '@lexicalUnsignedInputArgumentAST generateRoutineOrFunctionArgument'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalUnsignedInputArgumentAST_generateRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                                        C_Compiler * /* inCompiler */
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalUnsignedInputArgumentAST * object = (const cPtr_lexicalUnsignedInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalUnsignedInputArgumentAST) ;
  result_outGeneratedCode = object->mProperty_mUnsigned.getter_uint (SOURCE_FILE ("lexiqueGeneration.galgas", 118)).getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 118)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalUnsignedInputArgumentAST_generateRoutineOrFunctionArgument (void) {
  enterExtensionGetter_generateRoutineOrFunctionArgument (kTypeDescriptor_GALGAS_lexicalUnsignedInputArgumentAST.mSlotID,
                                                          extensionGetter_lexicalUnsignedInputArgumentAST_generateRoutineOrFunctionArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalUnsignedInputArgumentAST_generateRoutineOrFunctionArgument (defineExtensionGetter_lexicalUnsignedInputArgumentAST_generateRoutineOrFunctionArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//      Overriding extension getter '@lexicalCurrentCharacterInputArgumentAST generateRoutineOrFunctionArgument'       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalCurrentCharacterInputArgumentAST_generateRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * /* inObject */,
                                                                                                                C_Compiler * /* inCompiler */
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("previousChar ()") ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalCurrentCharacterInputArgumentAST_generateRoutineOrFunctionArgument (void) {
  enterExtensionGetter_generateRoutineOrFunctionArgument (kTypeDescriptor_GALGAS_lexicalCurrentCharacterInputArgumentAST.mSlotID,
                                                          extensionGetter_lexicalCurrentCharacterInputArgumentAST_generateRoutineOrFunctionArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalCurrentCharacterInputArgumentAST_generateRoutineOrFunctionArgument (defineExtensionGetter_lexicalCurrentCharacterInputArgumentAST_generateRoutineOrFunctionArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension getter '@lexicalFunctionInputArgumentAST generateRoutineOrFunctionArgument'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalFunctionInputArgumentAST_generateRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalFunctionInputArgumentAST * object = (const cPtr_lexicalFunctionInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalFunctionInputArgumentAST) ;
  result_outGeneratedCode = GALGAS_string ("::scanner_function_").add_operation (object->mProperty_mFunctionName.getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 132)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 132)).add_operation (GALGAS_string (" (*this"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 132)) ;
  cEnumerator_lexicalFunctionCallActualArgumentListAST enumerator_7656 (object->mProperty_mFunctionActualArgumentList, kENUMERATION_UP) ;
  while (enumerator_7656.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (callExtensionGetter_generateRoutineOrFunctionArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) enumerator_7656.current_mLexicalActualInputArgument (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 134)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 134)) ;
    enumerator_7656.gotoNextObject () ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 136)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalFunctionInputArgumentAST_generateRoutineOrFunctionArgument (void) {
  enterExtensionGetter_generateRoutineOrFunctionArgument (kTypeDescriptor_GALGAS_lexicalFunctionInputArgumentAST.mSlotID,
                                                          extensionGetter_lexicalFunctionInputArgumentAST_generateRoutineOrFunctionArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalFunctionInputArgumentAST_generateRoutineOrFunctionArgument (defineExtensionGetter_lexicalFunctionInputArgumentAST_generateRoutineOrFunctionArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension getter '@lexicalAttributeInputOutputArgumentAST generateRoutineArgument'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalAttributeInputOutputArgumentAST_generateRoutineArgument (const cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalAttributeInputOutputArgumentAST * object = (const cPtr_lexicalAttributeInputOutputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalAttributeInputOutputArgumentAST) ;
  result_outGeneratedCode = GALGAS_string ("token.mLexicalAttribute_").add_operation (object->mProperty_mAttributeName.getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 150)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 150)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalAttributeInputOutputArgumentAST_generateRoutineArgument (void) {
  enterExtensionGetter_generateRoutineArgument (kTypeDescriptor_GALGAS_lexicalAttributeInputOutputArgumentAST.mSlotID,
                                                extensionGetter_lexicalAttributeInputOutputArgumentAST_generateRoutineArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalAttributeInputOutputArgumentAST_generateRoutineArgument (defineExtensionGetter_lexicalAttributeInputOutputArgumentAST_generateRoutineArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension getter '@lexicalFormalInputArgumentAST generateRoutineArgument'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalFormalInputArgumentAST_generateRoutineArgument (const cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalFormalInputArgumentAST * object = (const cPtr_lexicalFormalInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalFormalInputArgumentAST) ;
  result_outGeneratedCode = callExtensionGetter_generateRoutineOrFunctionArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) object->mProperty_mRoutineOrFunctionFormalInputArgument.ptr (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 157)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalFormalInputArgumentAST_generateRoutineArgument (void) {
  enterExtensionGetter_generateRoutineArgument (kTypeDescriptor_GALGAS_lexicalFormalInputArgumentAST.mSlotID,
                                                extensionGetter_lexicalFormalInputArgumentAST_generateRoutineArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalFormalInputArgumentAST_generateRoutineArgument (defineExtensionGetter_lexicalFormalInputArgumentAST_generateRoutineArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension getter '@lexicalSendTerminalByDefaultAST generateDefaultSendCode'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalSendTerminalByDefaultAST_generateDefaultSendCode (const cPtr_lexicalSendDefaultActionAST * inObject,
                                                                                              const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalSendTerminalByDefaultAST * object = (const cPtr_lexicalSendTerminalByDefaultAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalSendTerminalByDefaultAST) ;
  result_outGeneratedCode = GALGAS_string ("token.mTokenCode = kToken_").add_operation (object->mProperty_mDefaultSentTerminal.getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 173)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 173)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalSendTerminalByDefaultAST_generateDefaultSendCode (void) {
  enterExtensionGetter_generateDefaultSendCode (kTypeDescriptor_GALGAS_lexicalSendTerminalByDefaultAST.mSlotID,
                                                extensionGetter_lexicalSendTerminalByDefaultAST_generateDefaultSendCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalSendTerminalByDefaultAST_generateDefaultSendCode (defineExtensionGetter_lexicalSendTerminalByDefaultAST_generateDefaultSendCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension getter '@lexicalErrorByDefaultAST generateDefaultSendCode'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalErrorByDefaultAST_generateDefaultSendCode (const cPtr_lexicalSendDefaultActionAST * inObject,
                                                                                       const GALGAS_string constinArgument_inScannerClassName,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalErrorByDefaultAST * object = (const cPtr_lexicalErrorByDefaultAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalErrorByDefaultAST) ;
  result_outGeneratedCode = GALGAS_string ("lexicalError (gLexicalMessage_").add_operation (constinArgument_inScannerClassName.getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 181)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 181)).add_operation (object->mProperty_mDefaultErrorMessageName.getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 182)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 182)).add_operation (GALGAS_string (" COMMA_LINE_AND_SOURCE_FILE) ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 182)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalErrorByDefaultAST_generateDefaultSendCode (void) {
  enterExtensionGetter_generateDefaultSendCode (kTypeDescriptor_GALGAS_lexicalErrorByDefaultAST.mSlotID,
                                                extensionGetter_lexicalErrorByDefaultAST_generateDefaultSendCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalErrorByDefaultAST_generateDefaultSendCode (defineExtensionGetter_lexicalErrorByDefaultAST_generateDefaultSendCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension getter '@lexicalStructuredSendInstructionAST generateInstructionCode'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalStructuredSendInstructionAST_generateInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                                  const GALGAS_string constinArgument_inScannerClassName,
                                                                                                  const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalStructuredSendInstructionAST * object = (const cPtr_lexicalStructuredSendInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalStructuredSendInstructionAST) ;
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  cEnumerator_lexicalSendSearchListAST enumerator_11087 (object->mProperty_mLexicalSendSearchList, kENUMERATION_UP) ;
  while (enumerator_11087.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if (token.mTokenCode == -1) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 202)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("  token.mTokenCode = search_into_").add_operation (enumerator_11087.current_mSearchListName (HERE).getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 203)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 203)).add_operation (GALGAS_string (" (token.mLexicalAttribute_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 203)).add_operation (enumerator_11087.current_mAttributeName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 203)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 203)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 203)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 203)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 204)) ;
    enumerator_11087.gotoNextObject () ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if (token.mTokenCode == -1) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 206)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (callExtensionGetter_generateDefaultSendCode ((const cPtr_lexicalSendDefaultActionAST *) object->mProperty_mLexicalSendDefaultAction.ptr (), constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 207)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 207)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 208)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("enterToken (token) ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 209)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalStructuredSendInstructionAST_generateInstructionCode (void) {
  enterExtensionGetter_generateInstructionCode (kTypeDescriptor_GALGAS_lexicalStructuredSendInstructionAST.mSlotID,
                                                extensionGetter_lexicalStructuredSendInstructionAST_generateInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalStructuredSendInstructionAST_generateInstructionCode (defineExtensionGetter_lexicalStructuredSendInstructionAST_generateInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension getter '@lexicalDropInstructionAST generateInstructionCode'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalDropInstructionAST_generateInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                        const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                        const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalDropInstructionAST * object = (const cPtr_lexicalDropInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalDropInstructionAST) ;
  result_outGeneratedCode = GALGAS_string ("enterDroppedTerminal (kToken_").add_operation (object->mProperty_mTerminalName.getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 219)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 219)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 219)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalDropInstructionAST_generateInstructionCode (void) {
  enterExtensionGetter_generateInstructionCode (kTypeDescriptor_GALGAS_lexicalDropInstructionAST.mSlotID,
                                                extensionGetter_lexicalDropInstructionAST_generateInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalDropInstructionAST_generateInstructionCode (defineExtensionGetter_lexicalDropInstructionAST_generateInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension getter '@lexicalSimpleSendInstructionAST generateInstructionCode'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalSimpleSendInstructionAST_generateInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                              const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                              const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalSimpleSendInstructionAST * object = (const cPtr_lexicalSimpleSendInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalSimpleSendInstructionAST) ;
  result_outGeneratedCode = GALGAS_string ("token.mTokenCode = kToken_").add_operation (object->mProperty_mSentTerminal.getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 229)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 229)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 229)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("enterToken (token) ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 230)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalSimpleSendInstructionAST_generateInstructionCode (void) {
  enterExtensionGetter_generateInstructionCode (kTypeDescriptor_GALGAS_lexicalSimpleSendInstructionAST.mSlotID,
                                                extensionGetter_lexicalSimpleSendInstructionAST_generateInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalSimpleSendInstructionAST_generateInstructionCode (defineExtensionGetter_lexicalSimpleSendInstructionAST_generateInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension getter '@lexicalRepeatInstructionAST generateInstructionCode'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalRepeatInstructionAST_generateInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                          const GALGAS_string constinArgument_inScannerClassName,
                                                                                          const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalRepeatInstructionAST * object = (const cPtr_lexicalRepeatInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalRepeatInstructionAST) ;
  result_outGeneratedCode = GALGAS_string ("do {\n") ;
  {
  result_outGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 240)) ;
  }
  cEnumerator_lexicalInstructionListAST enumerator_12947 (object->mProperty_mRepeatedInstructionList, kENUMERATION_UP) ;
  while (enumerator_12947.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_12947.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 243)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 243)) ;
    enumerator_12947.gotoNextObject () ;
  }
  cEnumerator_lexicalWhileBranchListAST enumerator_13106 (object->mProperty_mLexicalWhileBranchList, kENUMERATION_UP) ;
  while (enumerator_13106.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 248)) ;
    result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateConditionCode ((const cPtr_lexicalExpressionAST *) enumerator_13106.current_mWhileExpression (HERE).ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 249)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 249)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 250)) ;
    {
    result_outGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 251)) ;
    }
    cEnumerator_lexicalInstructionListAST enumerator_13352 (enumerator_13106.current_mWhileInstructionList (HERE), kENUMERATION_UP) ;
    while (enumerator_13352.hasCurrentObject ()) {
      result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_13352.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 253)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 253)) ;
      enumerator_13352.gotoNextObject () ;
    }
    {
    result_outGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 255)) ;
    }
    if (enumerator_13106.hasNextObject ()) {
      result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 257)) ;
    }
    enumerator_13106.gotoNextObject () ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"
    "  mLoop = false ;\n"
    "}\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 259)) ;
  {
  result_outGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 262)) ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}while (mLoop) ;\n"
    "mLoop = true ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 263)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalRepeatInstructionAST_generateInstructionCode (void) {
  enterExtensionGetter_generateInstructionCode (kTypeDescriptor_GALGAS_lexicalRepeatInstructionAST.mSlotID,
                                                extensionGetter_lexicalRepeatInstructionAST_generateInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalRepeatInstructionAST_generateInstructionCode (defineExtensionGetter_lexicalRepeatInstructionAST_generateInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension getter '@lexicalSelectInstructionAST generateInstructionCode'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalSelectInstructionAST_generateInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                          const GALGAS_string constinArgument_inScannerClassName,
                                                                                          const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalSelectInstructionAST * object = (const cPtr_lexicalSelectInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalSelectInstructionAST) ;
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  cEnumerator_lexicalSelectBranchListAST enumerator_14178 (object->mProperty_mLexicalSelectBranchList, kENUMERATION_UP) ;
  while (enumerator_14178.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 277)) ;
    result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateConditionCode ((const cPtr_lexicalExpressionAST *) enumerator_14178.current_mSelectExpression (HERE).ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 278)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 278)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 279)) ;
    {
    result_outGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 280)) ;
    }
    cEnumerator_lexicalInstructionListAST enumerator_14426 (enumerator_14178.current_mSelectInstructionList (HERE), kENUMERATION_UP) ;
    while (enumerator_14426.hasCurrentObject ()) {
      result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_14426.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 282)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 282)) ;
      enumerator_14426.gotoNextObject () ;
    }
    {
    result_outGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 284)) ;
    }
    if (enumerator_14178.hasNextObject ()) {
      result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 286)) ;
    }
    enumerator_14178.gotoNextObject () ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, object->mProperty_mDefaultInstructionList.getter_length (SOURCE_FILE ("lexiqueGeneration.galgas", 289)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 290)) ;
    {
    result_outGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 291)) ;
    }
    cEnumerator_lexicalInstructionListAST enumerator_14823 (object->mProperty_mDefaultInstructionList, kENUMERATION_UP) ;
    while (enumerator_14823.hasCurrentObject ()) {
      result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_14823.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 293)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 293)) ;
      enumerator_14823.gotoNextObject () ;
    }
    {
    result_outGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 295)) ;
    }
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 297)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalSelectInstructionAST_generateInstructionCode (void) {
  enterExtensionGetter_generateInstructionCode (kTypeDescriptor_GALGAS_lexicalSelectInstructionAST.mSlotID,
                                                extensionGetter_lexicalSelectInstructionAST_generateInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalSelectInstructionAST_generateInstructionCode (defineExtensionGetter_lexicalSelectInstructionAST_generateInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension getter '@lexicalRoutineInstructionAST generateInstructionCode'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalRoutineInstructionAST_generateInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                           const GALGAS_string constinArgument_inScannerClassName,
                                                                                           const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalRoutineInstructionAST * object = (const cPtr_lexicalRoutineInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalRoutineInstructionAST) ;
  result_outGeneratedCode = GALGAS_string ("::scanner_routine_").add_operation (object->mProperty_mRoutineName.getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 306)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 306)).add_operation (GALGAS_string (" (*this"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 306)) ;
  cEnumerator_lexicalRoutineCallActualArgumentListAST enumerator_15447 (object->mProperty_mActualArgumentList, kENUMERATION_UP) ;
  while (enumerator_15447.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (callExtensionGetter_generateRoutineArgument ((const cPtr_abstractLexicalRoutineActualArgumentAST *) enumerator_15447.current_mLexicalRoutineActualArgument (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 308)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 308)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 308)) ;
    enumerator_15447.gotoNextObject () ;
  }
  cEnumerator_lstringlist enumerator_15573 (object->mProperty_mErrorMessageList, kENUMERATION_UP) ;
  while (enumerator_15573.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (", gLexicalMessage_").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 311)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 311)).add_operation (enumerator_15573.current_mValue (HERE).getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 311)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 311)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 311)) ;
    enumerator_15573.gotoNextObject () ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (") ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 313)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalRoutineInstructionAST_generateInstructionCode (void) {
  enterExtensionGetter_generateInstructionCode (kTypeDescriptor_GALGAS_lexicalRoutineInstructionAST.mSlotID,
                                                extensionGetter_lexicalRoutineInstructionAST_generateInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalRoutineInstructionAST_generateInstructionCode (defineExtensionGetter_lexicalRoutineInstructionAST_generateInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension getter '@lexicalErrorInstructionAST generateInstructionCode'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalErrorInstructionAST_generateInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                         const GALGAS_string constinArgument_inScannerClassName,
                                                                                         const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalErrorInstructionAST * object = (const cPtr_lexicalErrorInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalErrorInstructionAST) ;
  result_outGeneratedCode = GALGAS_string ("lexicalError (gLexicalMessage_").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 322)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 322)).add_operation (object->mProperty_mErrorMessageName.getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 322)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 322)).add_operation (GALGAS_string (" COMMA_LINE_AND_SOURCE_FILE) ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 322)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalErrorInstructionAST_generateInstructionCode (void) {
  enterExtensionGetter_generateInstructionCode (kTypeDescriptor_GALGAS_lexicalErrorInstructionAST.mSlotID,
                                                extensionGetter_lexicalErrorInstructionAST_generateInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalErrorInstructionAST_generateInstructionCode (defineExtensionGetter_lexicalErrorInstructionAST_generateInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension getter '@lexicalWarningInstructionAST generateInstructionCode'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalWarningInstructionAST_generateInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                           const GALGAS_string constinArgument_inScannerClassName,
                                                                                           const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalWarningInstructionAST * object = (const cPtr_lexicalWarningInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalWarningInstructionAST) ;
  result_outGeneratedCode = GALGAS_string ("lexicalWarning (gLexicalMessage_").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 331)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 331)).add_operation (object->mProperty_mWarningMessageName.getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 331)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 331)).add_operation (GALGAS_string (" COMMA_LINE_AND_SOURCE_FILE) ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 331)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalWarningInstructionAST_generateInstructionCode (void) {
  enterExtensionGetter_generateInstructionCode (kTypeDescriptor_GALGAS_lexicalWarningInstructionAST.mSlotID,
                                                extensionGetter_lexicalWarningInstructionAST_generateInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalWarningInstructionAST_generateInstructionCode (defineExtensionGetter_lexicalWarningInstructionAST_generateInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension getter '@lexicalTagInstructionAST generateInstructionCode'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalTagInstructionAST_generateInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                       const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                       const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalTagInstructionAST * object = (const cPtr_lexicalTagInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalTagInstructionAST) ;
  result_outGeneratedCode = GALGAS_string ("const C_LocationInSource currentLocationForTag_").add_operation (object->mProperty_mLexicalTagName.getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 340)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 340)).add_operation (GALGAS_string (" = mCurrentLocation ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 340)).add_operation (GALGAS_string ("const C_LocationInSource endLocationForTag_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 340)).add_operation (object->mProperty_mLexicalTagName.getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 341)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 341)).add_operation (GALGAS_string (" = mTokenEndLocation ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 341)).add_operation (GALGAS_string ("const utf32 currentCharForTag_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 341)).add_operation (object->mProperty_mLexicalTagName.getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 342)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 342)).add_operation (GALGAS_string (" = mCurrentChar ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 342)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalTagInstructionAST_generateInstructionCode (void) {
  enterExtensionGetter_generateInstructionCode (kTypeDescriptor_GALGAS_lexicalTagInstructionAST.mSlotID,
                                                extensionGetter_lexicalTagInstructionAST_generateInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalTagInstructionAST_generateInstructionCode (defineExtensionGetter_lexicalTagInstructionAST_generateInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension getter '@lexicalRewindInstructionAST generateInstructionCode'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalRewindInstructionAST_generateInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                          const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                          const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalRewindInstructionAST * object = (const cPtr_lexicalRewindInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalRewindInstructionAST) ;
  result_outGeneratedCode = GALGAS_string ("mCurrentLocation = currentLocationForTag_").add_operation (object->mProperty_mLexicalTagName.getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 351)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 351)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 351)).add_operation (GALGAS_string ("mTokenEndLocation = endLocationForTag_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 351)).add_operation (object->mProperty_mLexicalTagName.getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 352)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 352)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 352)).add_operation (GALGAS_string ("mCurrentChar = currentCharForTag_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 352)).add_operation (object->mProperty_mLexicalTagName.getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 353)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 353)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 353)).add_operation (GALGAS_string ("token.mTokenCode = kToken_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 353)).add_operation (object->mProperty_mTerminalName.getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 354)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 354)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 354)).add_operation (GALGAS_string ("enterToken (token) ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 354)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalRewindInstructionAST_generateInstructionCode (void) {
  enterExtensionGetter_generateInstructionCode (kTypeDescriptor_GALGAS_lexicalRewindInstructionAST.mSlotID,
                                                extensionGetter_lexicalRewindInstructionAST_generateInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalRewindInstructionAST_generateInstructionCode (defineExtensionGetter_lexicalRewindInstructionAST_generateInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension getter '@lexicalLogInstructionAST generateInstructionCode'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalLogInstructionAST_generateInstructionCode (const cPtr_lexicalInstructionAST * /* inObject */,
                                                                                       const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                       const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("lexicalLog (LINE_AND_SOURCE_FILE) ;\n") ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalLogInstructionAST_generateInstructionCode (void) {
  enterExtensionGetter_generateInstructionCode (kTypeDescriptor_GALGAS_lexicalLogInstructionAST.mSlotID,
                                                extensionGetter_lexicalLogInstructionAST_generateInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalLogInstructionAST_generateInstructionCode (defineExtensionGetter_lexicalLogInstructionAST_generateInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension getter '@lexicalImplicitRuleAST generateCode'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalImplicitRuleAST_generateCode (const cPtr_abstractLexicalRuleAST * inObject,
                                                                          const GALGAS_string constinArgument_inScannerClassName,
                                                                          const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalImplicitRuleAST * object = (const cPtr_lexicalImplicitRuleAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalImplicitRuleAST) ;
  GALGAS_tokenSortedlist var_tokenSortedList_19274 ;
  GALGAS_lexicalExplicitTokenListMap joker_19348 ; // Joker input parameter
  GALGAS_bool joker_19368 ; // Joker input parameter
  constinArgument_inLexiqueAnalysisContext.getter_mLexicalTokenListMap (SOURCE_FILE ("lexiqueGeneration.galgas", 383)).method_searchKey (object->mProperty_mListName, joker_19348, var_tokenSortedList_19274, joker_19368, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 383)) ;
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  cEnumerator_tokenSortedlist enumerator_19424 (var_tokenSortedList_19274, kENUMERATION_DOWN) ;
  while (enumerator_19424.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if (testForInputUTF32String (kUnicodeString_").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 386)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 386)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 386)) ;
    result_outGeneratedCode.plusAssign_operation(enumerator_19424.current_mName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 387)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 387)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 388)) ;
    result_outGeneratedCode.plusAssign_operation(enumerator_19424.current_mName (HERE).getter_length (SOURCE_FILE ("lexiqueGeneration.galgas", 389)).getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 389)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 389)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (", true)) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 390)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("  token.mTokenCode = kToken_").add_operation (enumerator_19424.current_mTerminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 391)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 391)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 391)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 391)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("  enterToken (token) ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 392)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 393)) ;
    enumerator_19424.gotoNextObject () ;
  }
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalImplicitRuleAST_generateCode (void) {
  enterExtensionGetter_generateCode (kTypeDescriptor_GALGAS_lexicalImplicitRuleAST.mSlotID,
                                     extensionGetter_lexicalImplicitRuleAST_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalImplicitRuleAST_generateCode (defineExtensionGetter_lexicalImplicitRuleAST_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension getter '@lexicalExplicitRuleAST generateCode'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalExplicitRuleAST_generateCode (const cPtr_abstractLexicalRuleAST * inObject,
                                                                          const GALGAS_string constinArgument_inScannerClassName,
                                                                          const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalExplicitRuleAST * object = (const cPtr_lexicalExplicitRuleAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalExplicitRuleAST) ;
  result_outGeneratedCode = GALGAS_string ("if (") ;
  result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateConditionCode ((const cPtr_lexicalExpressionAST *) object->mProperty_mLexicalRuleExpression.ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 404)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 404)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 405)) ;
  {
  result_outGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 406)) ;
  }
  cEnumerator_lexicalInstructionListAST enumerator_20426 (object->mProperty_mInstructionList, kENUMERATION_UP) ;
  while (enumerator_20426.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_20426.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 408)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 408)) ;
    enumerator_20426.gotoNextObject () ;
  }
  {
  result_outGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 410)) ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 411)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalExplicitRuleAST_generateCode (void) {
  enterExtensionGetter_generateCode (kTypeDescriptor_GALGAS_lexicalExplicitRuleAST.mSlotID,
                                     extensionGetter_lexicalExplicitRuleAST_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalExplicitRuleAST_generateCode (defineExtensionGetter_lexicalExplicitRuleAST_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension getter '@lexicalOrExpressionAST generateCocoaConditionCode'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalOrExpressionAST_generateCocoaConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                                        const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalOrExpressionAST * object = (const cPtr_lexicalOrExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalOrExpressionAST) ;
  result_outGeneratedCode = callExtensionGetter_generateCocoaConditionCode ((const cPtr_lexicalExpressionAST *) object->mProperty_mLeftOperand.ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 29)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (" || "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 30)) ;
  result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateCocoaConditionCode ((const cPtr_lexicalExpressionAST *) object->mProperty_mRightOperand.ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 31)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 31)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalOrExpressionAST_generateCocoaConditionCode (void) {
  enterExtensionGetter_generateCocoaConditionCode (kTypeDescriptor_GALGAS_lexicalOrExpressionAST.mSlotID,
                                                   extensionGetter_lexicalOrExpressionAST_generateCocoaConditionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalOrExpressionAST_generateCocoaConditionCode (defineExtensionGetter_lexicalOrExpressionAST_generateCocoaConditionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension getter '@lexicalCharacterIntervalMatchAST generateCocoaConditionCode'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalCharacterIntervalMatchAST_generateCocoaConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                                                  const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalCharacterIntervalMatchAST * object = (const cPtr_lexicalCharacterIntervalMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalCharacterIntervalMatchAST) ;
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  result_outGeneratedCode = GALGAS_string ("[self testForInputFromChar:") ;
  result_outGeneratedCode.plusAssign_operation(object->mProperty_mLowerBound.getter_char (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 41)).getter_uint (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 41)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 41)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 41)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (" toChar:"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 42)) ;
  result_outGeneratedCode.plusAssign_operation(object->mProperty_mUpperBound.getter_char (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 43)).getter_uint (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 43)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 43)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 43)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("]"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 44)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalCharacterIntervalMatchAST_generateCocoaConditionCode (void) {
  enterExtensionGetter_generateCocoaConditionCode (kTypeDescriptor_GALGAS_lexicalCharacterIntervalMatchAST.mSlotID,
                                                   extensionGetter_lexicalCharacterIntervalMatchAST_generateCocoaConditionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalCharacterIntervalMatchAST_generateCocoaConditionCode (defineExtensionGetter_lexicalCharacterIntervalMatchAST_generateCocoaConditionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension getter '@lexicalStringMatchAST generateCocoaConditionCode'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalStringMatchAST_generateCocoaConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                                       const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalStringMatchAST * object = (const cPtr_lexicalStringMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalStringMatchAST) ;
  result_outGeneratedCode = GALGAS_string ("[self testForInputString:@").add_operation (object->mProperty_mString.getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 52)).getter_utf_38_Representation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 52)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (" advance:YES]"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 53)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalStringMatchAST_generateCocoaConditionCode (void) {
  enterExtensionGetter_generateCocoaConditionCode (kTypeDescriptor_GALGAS_lexicalStringMatchAST.mSlotID,
                                                   extensionGetter_lexicalStringMatchAST_generateCocoaConditionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalStringMatchAST_generateCocoaConditionCode (defineExtensionGetter_lexicalStringMatchAST_generateCocoaConditionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension getter '@lexicalStringNotMatchAST generateCocoaConditionCode'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalStringNotMatchAST_generateCocoaConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                                          const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalStringNotMatchAST * object = (const cPtr_lexicalStringNotMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalStringNotMatchAST) ;
  result_outGeneratedCode = GALGAS_string ("[self notTestForInputString:@") ;
  result_outGeneratedCode.plusAssign_operation(object->mProperty_mString.getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 62)).getter_utf_38_Representation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 62)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 62)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (" error:& scanningOk]"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 63)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalStringNotMatchAST_generateCocoaConditionCode (void) {
  enterExtensionGetter_generateCocoaConditionCode (kTypeDescriptor_GALGAS_lexicalStringNotMatchAST.mSlotID,
                                                   extensionGetter_lexicalStringNotMatchAST_generateCocoaConditionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalStringNotMatchAST_generateCocoaConditionCode (defineExtensionGetter_lexicalStringNotMatchAST_generateCocoaConditionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension getter '@lexicalCharacterMatchAST generateCocoaConditionCode'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalCharacterMatchAST_generateCocoaConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                                          const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalCharacterMatchAST * object = (const cPtr_lexicalCharacterMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalCharacterMatchAST) ;
  result_outGeneratedCode = GALGAS_string ("[self testForInputChar:") ;
  result_outGeneratedCode.plusAssign_operation(object->mProperty_mCharacter.getter_char (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 72)).getter_uint (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 72)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 72)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 72)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("]"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 73)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalCharacterMatchAST_generateCocoaConditionCode (void) {
  enterExtensionGetter_generateCocoaConditionCode (kTypeDescriptor_GALGAS_lexicalCharacterMatchAST.mSlotID,
                                                   extensionGetter_lexicalCharacterMatchAST_generateCocoaConditionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalCharacterMatchAST_generateCocoaConditionCode (defineExtensionGetter_lexicalCharacterMatchAST_generateCocoaConditionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension getter '@lexicalCharacterSetMatchAST generateCocoaConditionCode'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalCharacterSetMatchAST_generateCocoaConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                                             const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalCharacterSetMatchAST * object = (const cPtr_lexicalCharacterSetMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalCharacterSetMatchAST) ;
  result_outGeneratedCode = GALGAS_string ("[self testForCharWithFunction:") ;
  result_outGeneratedCode.plusAssign_operation(object->mProperty_mCharacterSetName.getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 82)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 82)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("]"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 83)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalCharacterSetMatchAST_generateCocoaConditionCode (void) {
  enterExtensionGetter_generateCocoaConditionCode (kTypeDescriptor_GALGAS_lexicalCharacterSetMatchAST.mSlotID,
                                                   extensionGetter_lexicalCharacterSetMatchAST_generateCocoaConditionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalCharacterSetMatchAST_generateCocoaConditionCode (defineExtensionGetter_lexicalCharacterSetMatchAST_generateCocoaConditionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//       Overriding extension getter '@lexicalAttributeInputArgumentAST generateCocoaRoutineOrFunctionArgument'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalAttributeInputArgumentAST_generateCocoaRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalAttributeInputArgumentAST * object = (const cPtr_lexicalAttributeInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalAttributeInputArgumentAST) ;
  result_outGeneratedCode = GALGAS_string ("mLexicalAttribute_").add_operation (object->mProperty_mAttributeName.getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 97)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 97)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalAttributeInputArgumentAST_generateCocoaRoutineOrFunctionArgument (void) {
  enterExtensionGetter_generateCocoaRoutineOrFunctionArgument (kTypeDescriptor_GALGAS_lexicalAttributeInputArgumentAST.mSlotID,
                                                               extensionGetter_lexicalAttributeInputArgumentAST_generateCocoaRoutineOrFunctionArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalAttributeInputArgumentAST_generateCocoaRoutineOrFunctionArgument (defineExtensionGetter_lexicalAttributeInputArgumentAST_generateCocoaRoutineOrFunctionArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//       Overriding extension getter '@lexicalCharacterInputArgumentAST generateCocoaRoutineOrFunctionArgument'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalCharacterInputArgumentAST_generateCocoaRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                                              C_Compiler * /* inCompiler */
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalCharacterInputArgumentAST * object = (const cPtr_lexicalCharacterInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalCharacterInputArgumentAST) ;
  result_outGeneratedCode = object->mProperty_mCharacter.getter_char (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 104)).getter_uint (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 104)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 104)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalCharacterInputArgumentAST_generateCocoaRoutineOrFunctionArgument (void) {
  enterExtensionGetter_generateCocoaRoutineOrFunctionArgument (kTypeDescriptor_GALGAS_lexicalCharacterInputArgumentAST.mSlotID,
                                                               extensionGetter_lexicalCharacterInputArgumentAST_generateCocoaRoutineOrFunctionArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalCharacterInputArgumentAST_generateCocoaRoutineOrFunctionArgument (defineExtensionGetter_lexicalCharacterInputArgumentAST_generateCocoaRoutineOrFunctionArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding extension getter '@lexicalUnsignedInputArgumentAST generateCocoaRoutineOrFunctionArgument'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalUnsignedInputArgumentAST_generateCocoaRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                                             C_Compiler * /* inCompiler */
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalUnsignedInputArgumentAST * object = (const cPtr_lexicalUnsignedInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalUnsignedInputArgumentAST) ;
  result_outGeneratedCode = object->mProperty_mUnsigned.getter_uint (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 111)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 111)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalUnsignedInputArgumentAST_generateCocoaRoutineOrFunctionArgument (void) {
  enterExtensionGetter_generateCocoaRoutineOrFunctionArgument (kTypeDescriptor_GALGAS_lexicalUnsignedInputArgumentAST.mSlotID,
                                                               extensionGetter_lexicalUnsignedInputArgumentAST_generateCocoaRoutineOrFunctionArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalUnsignedInputArgumentAST_generateCocoaRoutineOrFunctionArgument (defineExtensionGetter_lexicalUnsignedInputArgumentAST_generateCocoaRoutineOrFunctionArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    Overriding extension getter '@lexicalCurrentCharacterInputArgumentAST generateCocoaRoutineOrFunctionArgument'    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalCurrentCharacterInputArgumentAST_generateCocoaRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * /* inObject */,
                                                                                                                     C_Compiler * /* inCompiler */
                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("mPreviousChar") ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalCurrentCharacterInputArgumentAST_generateCocoaRoutineOrFunctionArgument (void) {
  enterExtensionGetter_generateCocoaRoutineOrFunctionArgument (kTypeDescriptor_GALGAS_lexicalCurrentCharacterInputArgumentAST.mSlotID,
                                                               extensionGetter_lexicalCurrentCharacterInputArgumentAST_generateCocoaRoutineOrFunctionArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalCurrentCharacterInputArgumentAST_generateCocoaRoutineOrFunctionArgument (defineExtensionGetter_lexicalCurrentCharacterInputArgumentAST_generateCocoaRoutineOrFunctionArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding extension getter '@lexicalFunctionInputArgumentAST generateCocoaRoutineOrFunctionArgument'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalFunctionInputArgumentAST_generateCocoaRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalFunctionInputArgumentAST * object = (const cPtr_lexicalFunctionInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalFunctionInputArgumentAST) ;
  result_outGeneratedCode = GALGAS_string ("scanner_cocoa_function_").add_operation (object->mProperty_mFunctionName.getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 125)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 125)) ;
  cEnumerator_lexicalFunctionCallActualArgumentListAST enumerator_7070 (object->mProperty_mFunctionActualArgumentList, kENUMERATION_UP) ;
  while (enumerator_7070.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateCocoaRoutineOrFunctionArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) enumerator_7070.current_mLexicalActualInputArgument (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 127)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 127)) ;
    if (enumerator_7070.hasNextObject ()) {
      result_outGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 128)) ;
    }
    enumerator_7070.gotoNextObject () ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 130)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalFunctionInputArgumentAST_generateCocoaRoutineOrFunctionArgument (void) {
  enterExtensionGetter_generateCocoaRoutineOrFunctionArgument (kTypeDescriptor_GALGAS_lexicalFunctionInputArgumentAST.mSlotID,
                                                               extensionGetter_lexicalFunctionInputArgumentAST_generateCocoaRoutineOrFunctionArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalFunctionInputArgumentAST_generateCocoaRoutineOrFunctionArgument (defineExtensionGetter_lexicalFunctionInputArgumentAST_generateCocoaRoutineOrFunctionArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding extension getter '@lexicalAttributeInputOutputArgumentAST generateCocoaRoutineArgument'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalAttributeInputOutputArgumentAST_generateCocoaRoutineArgument (const cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                                                                          const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalAttributeInputOutputArgumentAST * object = (const cPtr_lexicalAttributeInputOutputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalAttributeInputOutputArgumentAST) ;
  GALGAS_lexicalTypeEnum var_lexicalType_8081 ;
  constinArgument_inLexiqueAnalysisContext.getter_mLexicalAttributeMap (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 148)).method_searchKey (object->mProperty_mAttributeName, var_lexicalType_8081, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 148)) ;
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  const enumGalgasBool test_0 = extensionGetter_needsReferenceInInputOutputInCocoa (var_lexicalType_8081, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 150)).boolEnum () ;
  if (kBoolTrue == test_0) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("& "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 151)) ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("mLexicalAttribute_").add_operation (object->mProperty_mAttributeName.getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 153)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 153)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalAttributeInputOutputArgumentAST_generateCocoaRoutineArgument (void) {
  enterExtensionGetter_generateCocoaRoutineArgument (kTypeDescriptor_GALGAS_lexicalAttributeInputOutputArgumentAST.mSlotID,
                                                     extensionGetter_lexicalAttributeInputOutputArgumentAST_generateCocoaRoutineArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalAttributeInputOutputArgumentAST_generateCocoaRoutineArgument (defineExtensionGetter_lexicalAttributeInputOutputArgumentAST_generateCocoaRoutineArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension getter '@lexicalFormalInputArgumentAST generateCocoaRoutineArgument'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalFormalInputArgumentAST_generateCocoaRoutineArgument (const cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                                                                 const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalFormalInputArgumentAST * object = (const cPtr_lexicalFormalInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalFormalInputArgumentAST) ;
  result_outGeneratedCode = callExtensionGetter_generateCocoaRoutineOrFunctionArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) object->mProperty_mRoutineOrFunctionFormalInputArgument.ptr (), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 161)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalFormalInputArgumentAST_generateCocoaRoutineArgument (void) {
  enterExtensionGetter_generateCocoaRoutineArgument (kTypeDescriptor_GALGAS_lexicalFormalInputArgumentAST.mSlotID,
                                                     extensionGetter_lexicalFormalInputArgumentAST_generateCocoaRoutineArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalFormalInputArgumentAST_generateCocoaRoutineArgument (defineExtensionGetter_lexicalFormalInputArgumentAST_generateCocoaRoutineArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension getter '@lexicalSendTerminalByDefaultAST generateCocoaDefaultSendCode'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalSendTerminalByDefaultAST_generateCocoaDefaultSendCode (const cPtr_lexicalSendDefaultActionAST * inObject,
                                                                                                   const GALGAS_string constinArgument_inScannerClassName,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalSendTerminalByDefaultAST * object = (const cPtr_lexicalSendTerminalByDefaultAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalSendTerminalByDefaultAST) ;
  result_outGeneratedCode = GALGAS_string ("mTokenCode = ").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 177)).add_operation (GALGAS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 177)).add_operation (object->mProperty_mDefaultSentTerminal.getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 177)).getter_identifierRepresentation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 177)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 177)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 177)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalSendTerminalByDefaultAST_generateCocoaDefaultSendCode (void) {
  enterExtensionGetter_generateCocoaDefaultSendCode (kTypeDescriptor_GALGAS_lexicalSendTerminalByDefaultAST.mSlotID,
                                                     extensionGetter_lexicalSendTerminalByDefaultAST_generateCocoaDefaultSendCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalSendTerminalByDefaultAST_generateCocoaDefaultSendCode (defineExtensionGetter_lexicalSendTerminalByDefaultAST_generateCocoaDefaultSendCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension getter '@lexicalErrorByDefaultAST generateCocoaDefaultSendCode'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalErrorByDefaultAST_generateCocoaDefaultSendCode (const cPtr_lexicalSendDefaultActionAST * /* inObject */,
                                                                                            const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("scanningOk = NO ;\n") ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalErrorByDefaultAST_generateCocoaDefaultSendCode (void) {
  enterExtensionGetter_generateCocoaDefaultSendCode (kTypeDescriptor_GALGAS_lexicalErrorByDefaultAST.mSlotID,
                                                     extensionGetter_lexicalErrorByDefaultAST_generateCocoaDefaultSendCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalErrorByDefaultAST_generateCocoaDefaultSendCode (defineExtensionGetter_lexicalErrorByDefaultAST_generateCocoaDefaultSendCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension getter '@lexicalStructuredSendInstructionAST generateCocoaInstructionCode'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalStructuredSendInstructionAST_generateCocoaInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                                       const GALGAS_string constinArgument_inScannerClassName,
                                                                                                       const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalStructuredSendInstructionAST * object = (const cPtr_lexicalStructuredSendInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalStructuredSendInstructionAST) ;
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  cEnumerator_lexicalSendSearchListAST enumerator_10878 (object->mProperty_mLexicalSendSearchList, kENUMERATION_UP) ;
  while (enumerator_10878.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if (mTokenCode == 0) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 205)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("  mTokenCode = search_into_").add_operation (constinArgument_inScannerClassName.getter_identifierRepresentation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 206)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 206)).add_operation (enumerator_10878.current_mSearchListName (HERE).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 206)).add_operation (GALGAS_string (" (mLexicalAttribute_"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 206)).add_operation (enumerator_10878.current_mAttributeName (HERE).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 206)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 206)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 206)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 207)) ;
    enumerator_10878.gotoNextObject () ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if (mTokenCode == 0) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 209)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (callExtensionGetter_generateCocoaDefaultSendCode ((const cPtr_lexicalSendDefaultActionAST *) object->mProperty_mLexicalSendDefaultAction.ptr (), constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 210)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 210)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 211)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalStructuredSendInstructionAST_generateCocoaInstructionCode (void) {
  enterExtensionGetter_generateCocoaInstructionCode (kTypeDescriptor_GALGAS_lexicalStructuredSendInstructionAST.mSlotID,
                                                     extensionGetter_lexicalStructuredSendInstructionAST_generateCocoaInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalStructuredSendInstructionAST_generateCocoaInstructionCode (defineExtensionGetter_lexicalStructuredSendInstructionAST_generateCocoaInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension getter '@lexicalSimpleSendInstructionAST generateCocoaInstructionCode'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalSimpleSendInstructionAST_generateCocoaInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                                   const GALGAS_string constinArgument_inScannerClassName,
                                                                                                   const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalSimpleSendInstructionAST * object = (const cPtr_lexicalSimpleSendInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalSimpleSendInstructionAST) ;
  result_outGeneratedCode = GALGAS_string ("mTokenCode = ").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 220)).add_operation (GALGAS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 220)).add_operation (object->mProperty_mSentTerminal.getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 220)).getter_identifierRepresentation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 220)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 220)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalSimpleSendInstructionAST_generateCocoaInstructionCode (void) {
  enterExtensionGetter_generateCocoaInstructionCode (kTypeDescriptor_GALGAS_lexicalSimpleSendInstructionAST.mSlotID,
                                                     extensionGetter_lexicalSimpleSendInstructionAST_generateCocoaInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalSimpleSendInstructionAST_generateCocoaInstructionCode (defineExtensionGetter_lexicalSimpleSendInstructionAST_generateCocoaInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension getter '@lexicalRepeatInstructionAST generateCocoaInstructionCode'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalRepeatInstructionAST_generateCocoaInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                               const GALGAS_string constinArgument_inScannerClassName,
                                                                                               const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalRepeatInstructionAST * object = (const cPtr_lexicalRepeatInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalRepeatInstructionAST) ;
  result_outGeneratedCode = GALGAS_string ("do {\n") ;
  {
  result_outGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 230)) ;
  }
  cEnumerator_lexicalInstructionListAST enumerator_12243 (object->mProperty_mRepeatedInstructionList, kENUMERATION_UP) ;
  while (enumerator_12243.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_12243.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 233)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 233)) ;
    enumerator_12243.gotoNextObject () ;
  }
  cEnumerator_lexicalWhileBranchListAST enumerator_12407 (object->mProperty_mLexicalWhileBranchList, kENUMERATION_UP) ;
  while (enumerator_12407.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if (scanningOk && ("), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 238)) ;
    result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateCocoaConditionCode ((const cPtr_lexicalExpressionAST *) enumerator_12407.current_mWhileExpression (HERE).ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 239)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 239)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (")) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 240)) ;
    {
    result_outGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 241)) ;
    }
    cEnumerator_lexicalInstructionListAST enumerator_12666 (enumerator_12407.current_mWhileInstructionList (HERE), kENUMERATION_UP) ;
    while (enumerator_12666.hasCurrentObject ()) {
      result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_12666.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 243)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 243)) ;
      enumerator_12666.gotoNextObject () ;
    }
    {
    result_outGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 245)) ;
    }
    if (enumerator_12407.hasNextObject ()) {
      result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 247)) ;
    }
    enumerator_12407.gotoNextObject () ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"
    "  mLoop = NO ;\n"
    "}\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 249)) ;
  {
  result_outGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 252)) ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}while (mLoop && scanningOk) ;\n"
    "mLoop = YES ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 253)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalRepeatInstructionAST_generateCocoaInstructionCode (void) {
  enterExtensionGetter_generateCocoaInstructionCode (kTypeDescriptor_GALGAS_lexicalRepeatInstructionAST.mSlotID,
                                                     extensionGetter_lexicalRepeatInstructionAST_generateCocoaInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalRepeatInstructionAST_generateCocoaInstructionCode (defineExtensionGetter_lexicalRepeatInstructionAST_generateCocoaInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension getter '@lexicalSelectInstructionAST generateCocoaInstructionCode'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalSelectInstructionAST_generateCocoaInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                               const GALGAS_string constinArgument_inScannerClassName,
                                                                                               const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalSelectInstructionAST * object = (const cPtr_lexicalSelectInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalSelectInstructionAST) ;
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  cEnumerator_lexicalSelectBranchListAST enumerator_13512 (object->mProperty_mLexicalSelectBranchList, kENUMERATION_UP) ;
  while (enumerator_13512.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if (scanningOk && ("), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 267)) ;
    result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateCocoaConditionCode ((const cPtr_lexicalExpressionAST *) enumerator_13512.current_mSelectExpression (HERE).ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 268)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 268)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (")) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 269)) ;
    {
    result_outGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 270)) ;
    }
    cEnumerator_lexicalInstructionListAST enumerator_13773 (enumerator_13512.current_mSelectInstructionList (HERE), kENUMERATION_UP) ;
    while (enumerator_13773.hasCurrentObject ()) {
      result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_13773.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 272)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 272)) ;
      enumerator_13773.gotoNextObject () ;
    }
    {
    result_outGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 274)) ;
    }
    if (enumerator_13512.hasNextObject ()) {
      result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 276)) ;
    }
    enumerator_13512.gotoNextObject () ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, object->mProperty_mDefaultInstructionList.getter_length (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 279)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 280)) ;
    {
    result_outGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 281)) ;
    }
    cEnumerator_lexicalInstructionListAST enumerator_14175 (object->mProperty_mDefaultInstructionList, kENUMERATION_UP) ;
    while (enumerator_14175.hasCurrentObject ()) {
      result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_14175.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 283)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 283)) ;
      enumerator_14175.gotoNextObject () ;
    }
    {
    result_outGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 285)) ;
    }
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 287)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalSelectInstructionAST_generateCocoaInstructionCode (void) {
  enterExtensionGetter_generateCocoaInstructionCode (kTypeDescriptor_GALGAS_lexicalSelectInstructionAST.mSlotID,
                                                     extensionGetter_lexicalSelectInstructionAST_generateCocoaInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalSelectInstructionAST_generateCocoaInstructionCode (defineExtensionGetter_lexicalSelectInstructionAST_generateCocoaInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension getter '@lexicalRoutineInstructionAST generateCocoaInstructionCode'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalRoutineInstructionAST_generateCocoaInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                                const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                                const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalRoutineInstructionAST * object = (const cPtr_lexicalRoutineInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalRoutineInstructionAST) ;
  result_outGeneratedCode = GALGAS_string ("scanner_cocoa_routine_").add_operation (object->mProperty_mRoutineName.getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 296)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 296)).add_operation (GALGAS_string (" (& scanningOk"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 296)) ;
  cEnumerator_lexicalRoutineCallActualArgumentListAST enumerator_14820 (object->mProperty_mActualArgumentList, kENUMERATION_UP) ;
  while (enumerator_14820.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (callExtensionGetter_generateCocoaRoutineArgument ((const cPtr_abstractLexicalRoutineActualArgumentAST *) enumerator_14820.current_mLexicalRoutineActualArgument (HERE).ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 298)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 298)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 298)) ;
    enumerator_14820.gotoNextObject () ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (") ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 300)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalRoutineInstructionAST_generateCocoaInstructionCode (void) {
  enterExtensionGetter_generateCocoaInstructionCode (kTypeDescriptor_GALGAS_lexicalRoutineInstructionAST.mSlotID,
                                                     extensionGetter_lexicalRoutineInstructionAST_generateCocoaInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalRoutineInstructionAST_generateCocoaInstructionCode (defineExtensionGetter_lexicalRoutineInstructionAST_generateCocoaInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension getter '@lexicalDropInstructionAST generateCocoaInstructionCode'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalDropInstructionAST_generateCocoaInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                             const GALGAS_string constinArgument_inScannerClassName,
                                                                                             const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalDropInstructionAST * object = (const cPtr_lexicalDropInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalDropInstructionAST) ;
  result_outGeneratedCode = GALGAS_string ("mTokenCode = ").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 309)).add_operation (GALGAS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 309)).add_operation (object->mProperty_mTerminalName.getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 309)).getter_identifierRepresentation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 309)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 309)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 309)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalDropInstructionAST_generateCocoaInstructionCode (void) {
  enterExtensionGetter_generateCocoaInstructionCode (kTypeDescriptor_GALGAS_lexicalDropInstructionAST.mSlotID,
                                                     extensionGetter_lexicalDropInstructionAST_generateCocoaInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalDropInstructionAST_generateCocoaInstructionCode (defineExtensionGetter_lexicalDropInstructionAST_generateCocoaInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension getter '@lexicalErrorInstructionAST generateCocoaInstructionCode'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalErrorInstructionAST_generateCocoaInstructionCode (const cPtr_lexicalInstructionAST * /* inObject */,
                                                                                              const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                              const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                              C_Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("scanningOk = NO ;\n") ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalErrorInstructionAST_generateCocoaInstructionCode (void) {
  enterExtensionGetter_generateCocoaInstructionCode (kTypeDescriptor_GALGAS_lexicalErrorInstructionAST.mSlotID,
                                                     extensionGetter_lexicalErrorInstructionAST_generateCocoaInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalErrorInstructionAST_generateCocoaInstructionCode (defineExtensionGetter_lexicalErrorInstructionAST_generateCocoaInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension getter '@lexicalWarningInstructionAST generateCocoaInstructionCode'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalWarningInstructionAST_generateCocoaInstructionCode (const cPtr_lexicalInstructionAST * /* inObject */,
                                                                                                const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                                const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalWarningInstructionAST_generateCocoaInstructionCode (void) {
  enterExtensionGetter_generateCocoaInstructionCode (kTypeDescriptor_GALGAS_lexicalWarningInstructionAST.mSlotID,
                                                     extensionGetter_lexicalWarningInstructionAST_generateCocoaInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalWarningInstructionAST_generateCocoaInstructionCode (defineExtensionGetter_lexicalWarningInstructionAST_generateCocoaInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension getter '@lexicalTagInstructionAST generateCocoaInstructionCode'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalTagInstructionAST_generateCocoaInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                            const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                            const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalTagInstructionAST * object = (const cPtr_lexicalTagInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalTagInstructionAST) ;
  result_outGeneratedCode = GALGAS_string ("scanningPointStructForCocoa locationForTag_").add_operation (object->mProperty_mLexicalTagName.getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 336)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 336)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 336)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("[self saveScanningPoint: & locationForTag_").add_operation (object->mProperty_mLexicalTagName.getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 337)).add_operation (GALGAS_string ("] ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 337)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 337)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalTagInstructionAST_generateCocoaInstructionCode (void) {
  enterExtensionGetter_generateCocoaInstructionCode (kTypeDescriptor_GALGAS_lexicalTagInstructionAST.mSlotID,
                                                     extensionGetter_lexicalTagInstructionAST_generateCocoaInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalTagInstructionAST_generateCocoaInstructionCode (defineExtensionGetter_lexicalTagInstructionAST_generateCocoaInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension getter '@lexicalRewindInstructionAST generateCocoaInstructionCode'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalRewindInstructionAST_generateCocoaInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                               const GALGAS_string constinArgument_inScannerClassName,
                                                                                               const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalRewindInstructionAST * object = (const cPtr_lexicalRewindInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalRewindInstructionAST) ;
  result_outGeneratedCode = GALGAS_string ("[self restoreScanningPoint: & locationForTag_").add_operation (object->mProperty_mLexicalTagName.getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 346)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 346)).add_operation (GALGAS_string ("] ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 346)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("mTokenCode = ").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 347)).add_operation (GALGAS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 347)).add_operation (object->mProperty_mTerminalName.getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 347)).getter_identifierRepresentation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 347)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 347)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 347)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 347)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalRewindInstructionAST_generateCocoaInstructionCode (void) {
  enterExtensionGetter_generateCocoaInstructionCode (kTypeDescriptor_GALGAS_lexicalRewindInstructionAST.mSlotID,
                                                     extensionGetter_lexicalRewindInstructionAST_generateCocoaInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalRewindInstructionAST_generateCocoaInstructionCode (defineExtensionGetter_lexicalRewindInstructionAST_generateCocoaInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension getter '@lexicalLogInstructionAST generateCocoaInstructionCode'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalLogInstructionAST_generateCocoaInstructionCode (const cPtr_lexicalInstructionAST * /* inObject */,
                                                                                            const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                            const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("/* lexicalLog (LINE_AND_SOURCE_FILE) ; */\n") ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalLogInstructionAST_generateCocoaInstructionCode (void) {
  enterExtensionGetter_generateCocoaInstructionCode (kTypeDescriptor_GALGAS_lexicalLogInstructionAST.mSlotID,
                                                     extensionGetter_lexicalLogInstructionAST_generateCocoaInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalLogInstructionAST_generateCocoaInstructionCode (defineExtensionGetter_lexicalLogInstructionAST_generateCocoaInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension getter '@lexicalImplicitRuleAST generateCocoaCode'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalImplicitRuleAST_generateCocoaCode (const cPtr_abstractLexicalRuleAST * inObject,
                                                                               const GALGAS_string constinArgument_inScannerClassName,
                                                                               const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalImplicitRuleAST * object = (const cPtr_lexicalImplicitRuleAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalImplicitRuleAST) ;
  GALGAS_tokenSortedlist var_tokenSortedList_18533 ;
  GALGAS_lexicalExplicitTokenListMap joker_18607 ; // Joker input parameter
  GALGAS_bool joker_18627 ; // Joker input parameter
  constinArgument_inLexiqueAnalysisContext.getter_mLexicalTokenListMap (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 375)).method_searchKey (object->mProperty_mListName, joker_18607, var_tokenSortedList_18533, joker_18627, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 375)) ;
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  cEnumerator_tokenSortedlist enumerator_18683 (var_tokenSortedList_18533, kENUMERATION_DOWN) ;
  while (enumerator_18683.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if (scanningOk && [self testForInputString:@"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 378)) ;
    result_outGeneratedCode.plusAssign_operation(enumerator_18683.current_mName (HERE).getter_utf_38_Representation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 379)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 379)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (" advance:YES]) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 380)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("  mTokenCode = ").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 381)).add_operation (GALGAS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 381)).add_operation (enumerator_18683.current_mTerminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 381)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 381)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 381)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 381)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 382)) ;
    enumerator_18683.gotoNextObject () ;
  }
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalImplicitRuleAST_generateCocoaCode (void) {
  enterExtensionGetter_generateCocoaCode (kTypeDescriptor_GALGAS_lexicalImplicitRuleAST.mSlotID,
                                          extensionGetter_lexicalImplicitRuleAST_generateCocoaCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalImplicitRuleAST_generateCocoaCode (defineExtensionGetter_lexicalImplicitRuleAST_generateCocoaCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension getter '@lexicalExplicitRuleAST generateCocoaCode'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalExplicitRuleAST_generateCocoaCode (const cPtr_abstractLexicalRuleAST * inObject,
                                                                               const GALGAS_string constinArgument_inScannerClassName,
                                                                               const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalExplicitRuleAST * object = (const cPtr_lexicalExplicitRuleAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalExplicitRuleAST) ;
  result_outGeneratedCode = GALGAS_string ("if (scanningOk && (") ;
  result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateCocoaConditionCode ((const cPtr_lexicalExpressionAST *) object->mProperty_mLexicalRuleExpression.ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 393)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 393)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (")) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 394)) ;
  {
  result_outGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 395)) ;
  }
  cEnumerator_lexicalInstructionListAST enumerator_19564 (object->mProperty_mInstructionList, kENUMERATION_UP) ;
  while (enumerator_19564.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_19564.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 397)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 397)) ;
    enumerator_19564.gotoNextObject () ;
  }
  {
  result_outGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 399)) ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 400)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexicalExplicitRuleAST_generateCocoaCode (void) {
  enterExtensionGetter_generateCocoaCode (kTypeDescriptor_GALGAS_lexicalExplicitRuleAST.mSlotID,
                                          extensionGetter_lexicalExplicitRuleAST_generateCocoaCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalExplicitRuleAST_generateCocoaCode (defineExtensionGetter_lexicalExplicitRuleAST_generateCocoaCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@lexicalSendTerminalByDefaultAST checkLexicalDefaultAction'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexicalSendTerminalByDefaultAST_checkLexicalDefaultAction (const cPtr_lexicalSendDefaultActionAST * inObject,
                                                                                       GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalSendTerminalByDefaultAST * object = (const cPtr_lexicalSendTerminalByDefaultAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalSendTerminalByDefaultAST) ;
  GALGAS_lexicalSentValueList joker_7983 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.getter_mTerminalMap (SOURCE_FILE ("lexiqueCompilation.galgas", 163)).method_searchKey (object->mProperty_mDefaultSentTerminal, joker_7983, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 163)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexicalSendTerminalByDefaultAST_checkLexicalDefaultAction (void) {
  enterExtensionMethod_checkLexicalDefaultAction (kTypeDescriptor_GALGAS_lexicalSendTerminalByDefaultAST.mSlotID,
                                                  extensionMethod_lexicalSendTerminalByDefaultAST_checkLexicalDefaultAction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalSendTerminalByDefaultAST_checkLexicalDefaultAction (defineExtensionMethod_lexicalSendTerminalByDefaultAST_checkLexicalDefaultAction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@lexicalErrorByDefaultAST checkLexicalDefaultAction'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexicalErrorByDefaultAST_checkLexicalDefaultAction (const cPtr_lexicalSendDefaultActionAST * inObject,
                                                                                GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalErrorByDefaultAST * object = (const cPtr_lexicalErrorByDefaultAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalErrorByDefaultAST) ;
  {
  ioArgument_ioLexiqueAnalysisContext.mProperty_mLexicalMessageMap.setter_setMMessageIsUsedForKey (GALGAS_bool (true), object->mProperty_mDefaultErrorMessageName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 170)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexicalErrorByDefaultAST_checkLexicalDefaultAction (void) {
  enterExtensionMethod_checkLexicalDefaultAction (kTypeDescriptor_GALGAS_lexicalErrorByDefaultAST.mSlotID,
                                                  extensionMethod_lexicalErrorByDefaultAST_checkLexicalDefaultAction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalErrorByDefaultAST_checkLexicalDefaultAction (defineExtensionMethod_lexicalErrorByDefaultAST_checkLexicalDefaultAction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@lexicalOrExpressionAST checkLexicalExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexicalOrExpressionAST_checkLexicalExpression (const cPtr_lexicalExpressionAST * inObject,
                                                                           GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalOrExpressionAST * object = (const cPtr_lexicalOrExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalOrExpressionAST) ;
  callExtensionMethod_checkLexicalExpression ((const cPtr_lexicalExpressionAST *) object->mProperty_mLeftOperand.ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 184)) ;
  callExtensionMethod_checkLexicalExpression ((const cPtr_lexicalExpressionAST *) object->mProperty_mRightOperand.ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 185)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexicalOrExpressionAST_checkLexicalExpression (void) {
  enterExtensionMethod_checkLexicalExpression (kTypeDescriptor_GALGAS_lexicalOrExpressionAST.mSlotID,
                                               extensionMethod_lexicalOrExpressionAST_checkLexicalExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalOrExpressionAST_checkLexicalExpression (defineExtensionMethod_lexicalOrExpressionAST_checkLexicalExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@lexicalCharacterMatchAST checkLexicalExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexicalCharacterMatchAST_checkLexicalExpression (const cPtr_lexicalExpressionAST * /* inObject */,
                                                                             GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexicalCharacterMatchAST_checkLexicalExpression (void) {
  enterExtensionMethod_checkLexicalExpression (kTypeDescriptor_GALGAS_lexicalCharacterMatchAST.mSlotID,
                                               extensionMethod_lexicalCharacterMatchAST_checkLexicalExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalCharacterMatchAST_checkLexicalExpression (defineExtensionMethod_lexicalCharacterMatchAST_checkLexicalExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@lexicalCharacterSetMatchAST checkLexicalExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexicalCharacterSetMatchAST_checkLexicalExpression (const cPtr_lexicalExpressionAST * inObject,
                                                                                GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalCharacterSetMatchAST * object = (const cPtr_lexicalCharacterSetMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalCharacterSetMatchAST) ;
  const enumGalgasBool test_0 = ioArgument_ioLexiqueAnalysisContext.getter_mExternUnicodeTestFunctions (HERE).getter_hasKey (object->mProperty_mCharacterSetName.getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 199)) COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 199)).operator_not (SOURCE_FILE ("lexiqueCompilation.galgas", 199)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    appendFixItActions (fixItArray1, kFixItReplace, ioArgument_ioLexiqueAnalysisContext.getter_mExternUnicodeTestFunctions (HERE)) ;
    inCompiler->emitSemanticError (object->mProperty_mCharacterSetName.getter_location (SOURCE_FILE ("lexiqueCompilation.galgas", 200)), GALGAS_string ("undefined test function"), fixItArray1  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 200)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexicalCharacterSetMatchAST_checkLexicalExpression (void) {
  enterExtensionMethod_checkLexicalExpression (kTypeDescriptor_GALGAS_lexicalCharacterSetMatchAST.mSlotID,
                                               extensionMethod_lexicalCharacterSetMatchAST_checkLexicalExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalCharacterSetMatchAST_checkLexicalExpression (defineExtensionMethod_lexicalCharacterSetMatchAST_checkLexicalExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@lexicalCharacterIntervalMatchAST checkLexicalExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexicalCharacterIntervalMatchAST_checkLexicalExpression (const cPtr_lexicalExpressionAST * /* inObject */,
                                                                                     GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                                     C_Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexicalCharacterIntervalMatchAST_checkLexicalExpression (void) {
  enterExtensionMethod_checkLexicalExpression (kTypeDescriptor_GALGAS_lexicalCharacterIntervalMatchAST.mSlotID,
                                               extensionMethod_lexicalCharacterIntervalMatchAST_checkLexicalExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalCharacterIntervalMatchAST_checkLexicalExpression (defineExtensionMethod_lexicalCharacterIntervalMatchAST_checkLexicalExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@lexicalStringMatchAST checkLexicalExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexicalStringMatchAST_checkLexicalExpression (const cPtr_lexicalExpressionAST * inObject,
                                                                          GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalStringMatchAST * object = (const cPtr_lexicalStringMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalStringMatchAST) ;
  ioArgument_ioLexiqueAnalysisContext.mProperty_mUnicodeStringToGenerate.addAssign_operation (object->mProperty_mString.getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 214))  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 214)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexicalStringMatchAST_checkLexicalExpression (void) {
  enterExtensionMethod_checkLexicalExpression (kTypeDescriptor_GALGAS_lexicalStringMatchAST.mSlotID,
                                               extensionMethod_lexicalStringMatchAST_checkLexicalExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalStringMatchAST_checkLexicalExpression (defineExtensionMethod_lexicalStringMatchAST_checkLexicalExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@lexicalStringNotMatchAST checkLexicalExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexicalStringNotMatchAST_checkLexicalExpression (const cPtr_lexicalExpressionAST * inObject,
                                                                             GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalStringNotMatchAST * object = (const cPtr_lexicalStringNotMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalStringNotMatchAST) ;
  ioArgument_ioLexiqueAnalysisContext.mProperty_mUnicodeStringToGenerate.addAssign_operation (object->mProperty_mString.getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 221))  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 221)) ;
  {
  ioArgument_ioLexiqueAnalysisContext.mProperty_mLexicalMessageMap.setter_setMMessageIsUsedForKey (GALGAS_bool (true), object->mProperty_mErrorMessage.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 222)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexicalStringNotMatchAST_checkLexicalExpression (void) {
  enterExtensionMethod_checkLexicalExpression (kTypeDescriptor_GALGAS_lexicalStringNotMatchAST.mSlotID,
                                               extensionMethod_lexicalStringNotMatchAST_checkLexicalExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalStringNotMatchAST_checkLexicalExpression (defineExtensionMethod_lexicalStringNotMatchAST_checkLexicalExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@lexicalAttributeInputArgumentAST checkLexicalFunctionCallArgument'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexicalAttributeInputArgumentAST_checkLexicalFunctionCallArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                               GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                               GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalAttributeInputArgumentAST * object = (const cPtr_lexicalAttributeInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalAttributeInputArgumentAST) ;
  GALGAS_lexicalTypeEnum var_attributeLexicalType_11918 ;
  ioArgument_ioLexiqueAnalysisContext.getter_mLexicalAttributeMap (SOURCE_FILE ("lexiqueCompilation.galgas", 240)).method_searchKey (object->mProperty_mAttributeName, var_attributeLexicalType_11918, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 240)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_attributeLexicalType_11918.objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mAttributeName.getter_location (SOURCE_FILE ("lexiqueCompilation.galgas", 246)), GALGAS_string ("type error, attribute type is @").add_operation (extensionGetter_lexicalTypeBaseName (var_attributeLexicalType_11918, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 246)).add_operation (GALGAS_string (" type, but lexical routine prototype requires @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 247)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 248)).add_operation (GALGAS_string (" type"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 249)), fixItArray1  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 246)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexicalAttributeInputArgumentAST_checkLexicalFunctionCallArgument (void) {
  enterExtensionMethod_checkLexicalFunctionCallArgument (kTypeDescriptor_GALGAS_lexicalAttributeInputArgumentAST.mSlotID,
                                                         extensionMethod_lexicalAttributeInputArgumentAST_checkLexicalFunctionCallArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalAttributeInputArgumentAST_checkLexicalFunctionCallArgument (defineExtensionMethod_lexicalAttributeInputArgumentAST_checkLexicalFunctionCallArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@lexicalCharacterInputArgumentAST checkLexicalFunctionCallArgument'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexicalCharacterInputArgumentAST_checkLexicalFunctionCallArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                               GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                                               GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalCharacterInputArgumentAST * object = (const cPtr_lexicalCharacterInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalCharacterInputArgumentAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("lexiqueCompilation.galgas", 260)).objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mCharacter.getter_location (SOURCE_FILE ("lexiqueCompilation.galgas", 261)), GALGAS_string ("type error, a literal character has @char").add_operation (GALGAS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 261)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 262)).add_operation (GALGAS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 263)), fixItArray1  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 261)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexicalCharacterInputArgumentAST_checkLexicalFunctionCallArgument (void) {
  enterExtensionMethod_checkLexicalFunctionCallArgument (kTypeDescriptor_GALGAS_lexicalCharacterInputArgumentAST.mSlotID,
                                                         extensionMethod_lexicalCharacterInputArgumentAST_checkLexicalFunctionCallArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalCharacterInputArgumentAST_checkLexicalFunctionCallArgument (defineExtensionMethod_lexicalCharacterInputArgumentAST_checkLexicalFunctionCallArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@lexicalUnsignedInputArgumentAST checkLexicalFunctionCallArgument'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexicalUnsignedInputArgumentAST_checkLexicalFunctionCallArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                              GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                                              GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalUnsignedInputArgumentAST * object = (const cPtr_lexicalUnsignedInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalUnsignedInputArgumentAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("lexiqueCompilation.galgas", 274)).objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mUnsigned.getter_location (SOURCE_FILE ("lexiqueCompilation.galgas", 275)), GALGAS_string ("type error, a literal character has @uint").add_operation (GALGAS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 275)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 277)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 276)).add_operation (GALGAS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 277)), fixItArray1  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 275)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexicalUnsignedInputArgumentAST_checkLexicalFunctionCallArgument (void) {
  enterExtensionMethod_checkLexicalFunctionCallArgument (kTypeDescriptor_GALGAS_lexicalUnsignedInputArgumentAST.mSlotID,
                                                         extensionMethod_lexicalUnsignedInputArgumentAST_checkLexicalFunctionCallArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalUnsignedInputArgumentAST_checkLexicalFunctionCallArgument (defineExtensionMethod_lexicalUnsignedInputArgumentAST_checkLexicalFunctionCallArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//       Overriding extension method '@lexicalCurrentCharacterInputArgumentAST checkLexicalFunctionCallArgument'       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexicalCurrentCharacterInputArgumentAST_checkLexicalFunctionCallArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                                      GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                                                      GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalCurrentCharacterInputArgumentAST * object = (const cPtr_lexicalCurrentCharacterInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalCurrentCharacterInputArgumentAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("lexiqueCompilation.galgas", 288)).objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mLocation, GALGAS_string ("type error, current character value has @char").add_operation (GALGAS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 289)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 291)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 290)).add_operation (GALGAS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 291)), fixItArray1  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 289)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexicalCurrentCharacterInputArgumentAST_checkLexicalFunctionCallArgument (void) {
  enterExtensionMethod_checkLexicalFunctionCallArgument (kTypeDescriptor_GALGAS_lexicalCurrentCharacterInputArgumentAST.mSlotID,
                                                         extensionMethod_lexicalCurrentCharacterInputArgumentAST_checkLexicalFunctionCallArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalCurrentCharacterInputArgumentAST_checkLexicalFunctionCallArgument (defineExtensionMethod_lexicalCurrentCharacterInputArgumentAST_checkLexicalFunctionCallArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@lexicalFunctionInputArgumentAST checkLexicalFunctionCallArgument'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexicalFunctionInputArgumentAST_checkLexicalFunctionCallArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                              GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                              GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalFunctionInputArgumentAST * object = (const cPtr_lexicalFunctionInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalFunctionInputArgumentAST) ;
  GALGAS_lexicalFunctionFormalArgumentList var_lexicalFormalTypeList_14687 ;
  GALGAS_lexicalTypeEnum var_returnedLexicalFormalType_14732 ;
  GALGAS_string var_replacementFunctionName_14766 ;
  GALGAS_bool joker_14938 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.getter_mLexicalFunctionMap (SOURCE_FILE ("lexiqueCompilation.galgas", 305)).method_searchKey (object->mProperty_mFunctionName, var_lexicalFormalTypeList_14687, var_returnedLexicalFormalType_14732, var_replacementFunctionName_14766, joker_14938, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 305)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_replacementFunctionName_14766.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticWarning (object->mProperty_mFunctionName.getter_location (SOURCE_FILE ("lexiqueCompilation.galgas", 314)), GALGAS_string ("obsolete lexical function, replaced by '").add_operation (var_replacementFunctionName_14766, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 314)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 314)), fixItArray1  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 314)) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_returnedLexicalFormalType_14732.objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mFunctionName.getter_location (SOURCE_FILE ("lexiqueCompilation.galgas", 318)), GALGAS_string ("type error, the function returns an @").add_operation (extensionGetter_lexicalTypeBaseName (var_returnedLexicalFormalType_14732, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 319)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 318)).add_operation (GALGAS_string (" value, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 319)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 321)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 320)).add_operation (GALGAS_string (" value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 321)), fixItArray3  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 318)) ;
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_lexicalFormalTypeList_14687.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 325)).objectCompare (object->mProperty_mFunctionActualArgumentList.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 325)))).boolEnum () ;
  if (kBoolTrue == test_4) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (object->mProperty_mFunctionName.getter_location (SOURCE_FILE ("lexiqueCompilation.galgas", 326)), GALGAS_string ("this lexical function names ").add_operation (object->mProperty_mFunctionActualArgumentList.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 327)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 327)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 326)).add_operation (GALGAS_string (" actual argument(s), but the prototype requires "), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 327)).add_operation (var_lexicalFormalTypeList_14687.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 329)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 329)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 328)).add_operation (GALGAS_string (" actual argument(s)"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 329)), fixItArray5  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 326)) ;
  }
  cEnumerator_lexicalFunctionFormalArgumentList enumerator_15918 (var_lexicalFormalTypeList_14687, kENUMERATION_UP) ;
  cEnumerator_lexicalFunctionCallActualArgumentListAST enumerator_15953 (object->mProperty_mFunctionActualArgumentList, kENUMERATION_UP) ;
  while (enumerator_15918.hasCurrentObject () && enumerator_15953.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalFunctionCallArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) enumerator_15953.current_mLexicalActualInputArgument (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, enumerator_15918.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 333)) ;
    enumerator_15918.gotoNextObject () ;
    enumerator_15953.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexicalFunctionInputArgumentAST_checkLexicalFunctionCallArgument (void) {
  enterExtensionMethod_checkLexicalFunctionCallArgument (kTypeDescriptor_GALGAS_lexicalFunctionInputArgumentAST.mSlotID,
                                                         extensionMethod_lexicalFunctionInputArgumentAST_checkLexicalFunctionCallArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalFunctionInputArgumentAST_checkLexicalFunctionCallArgument (defineExtensionMethod_lexicalFunctionInputArgumentAST_checkLexicalFunctionCallArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@lexicalAttributeInputArgumentAST checkLexicalRoutineCallArgument'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexicalAttributeInputArgumentAST_checkLexicalRoutineCallArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                              GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                              GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalAttributeInputArgumentAST * object = (const cPtr_lexicalAttributeInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalAttributeInputArgumentAST) ;
  GALGAS_lexicalTypeEnum var_attributeLexicalType_17059 ;
  ioArgument_ioLexiqueAnalysisContext.getter_mLexicalAttributeMap (SOURCE_FILE ("lexiqueCompilation.galgas", 355)).method_searchKey (object->mProperty_mAttributeName, var_attributeLexicalType_17059, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 355)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_attributeLexicalType_17059.objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mAttributeName.getter_location (SOURCE_FILE ("lexiqueCompilation.galgas", 361)), GALGAS_string ("type error, attribute type is @").add_operation (extensionGetter_lexicalTypeBaseName (var_attributeLexicalType_17059, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 362)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 361)).add_operation (GALGAS_string (" type, but lexical routine prototype requires @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 362)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 364)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 363)).add_operation (GALGAS_string (" type"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 364)), fixItArray1  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 361)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexicalAttributeInputArgumentAST_checkLexicalRoutineCallArgument (void) {
  enterExtensionMethod_checkLexicalRoutineCallArgument (kTypeDescriptor_GALGAS_lexicalAttributeInputArgumentAST.mSlotID,
                                                        extensionMethod_lexicalAttributeInputArgumentAST_checkLexicalRoutineCallArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalAttributeInputArgumentAST_checkLexicalRoutineCallArgument (defineExtensionMethod_lexicalAttributeInputArgumentAST_checkLexicalRoutineCallArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@lexicalCharacterInputArgumentAST checkLexicalRoutineCallArgument'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexicalCharacterInputArgumentAST_checkLexicalRoutineCallArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                              GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                                              GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalCharacterInputArgumentAST * object = (const cPtr_lexicalCharacterInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalCharacterInputArgumentAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("lexiqueCompilation.galgas", 375)).objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mCharacter.getter_location (SOURCE_FILE ("lexiqueCompilation.galgas", 376)), GALGAS_string ("type error, a literal character has @char").add_operation (GALGAS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 376)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 378)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 377)).add_operation (GALGAS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 378)), fixItArray1  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 376)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexicalCharacterInputArgumentAST_checkLexicalRoutineCallArgument (void) {
  enterExtensionMethod_checkLexicalRoutineCallArgument (kTypeDescriptor_GALGAS_lexicalCharacterInputArgumentAST.mSlotID,
                                                        extensionMethod_lexicalCharacterInputArgumentAST_checkLexicalRoutineCallArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalCharacterInputArgumentAST_checkLexicalRoutineCallArgument (defineExtensionMethod_lexicalCharacterInputArgumentAST_checkLexicalRoutineCallArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@lexicalUnsignedInputArgumentAST checkLexicalRoutineCallArgument'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexicalUnsignedInputArgumentAST_checkLexicalRoutineCallArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                             GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                                             GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalUnsignedInputArgumentAST * object = (const cPtr_lexicalUnsignedInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalUnsignedInputArgumentAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("lexiqueCompilation.galgas", 389)).objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mUnsigned.getter_location (SOURCE_FILE ("lexiqueCompilation.galgas", 390)), GALGAS_string ("type error, a literal unsigned value has @uint").add_operation (GALGAS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 390)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 392)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 391)).add_operation (GALGAS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 392)), fixItArray1  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 390)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexicalUnsignedInputArgumentAST_checkLexicalRoutineCallArgument (void) {
  enterExtensionMethod_checkLexicalRoutineCallArgument (kTypeDescriptor_GALGAS_lexicalUnsignedInputArgumentAST.mSlotID,
                                                        extensionMethod_lexicalUnsignedInputArgumentAST_checkLexicalRoutineCallArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalUnsignedInputArgumentAST_checkLexicalRoutineCallArgument (defineExtensionMethod_lexicalUnsignedInputArgumentAST_checkLexicalRoutineCallArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//       Overriding extension method '@lexicalCurrentCharacterInputArgumentAST checkLexicalRoutineCallArgument'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexicalCurrentCharacterInputArgumentAST_checkLexicalRoutineCallArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                                     GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                                                     GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalCurrentCharacterInputArgumentAST * object = (const cPtr_lexicalCurrentCharacterInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalCurrentCharacterInputArgumentAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("lexiqueCompilation.galgas", 403)).objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mLocation, GALGAS_string ("type error, current character value has @char").add_operation (GALGAS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 404)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 406)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 405)).add_operation (GALGAS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 406)), fixItArray1  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 404)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexicalCurrentCharacterInputArgumentAST_checkLexicalRoutineCallArgument (void) {
  enterExtensionMethod_checkLexicalRoutineCallArgument (kTypeDescriptor_GALGAS_lexicalCurrentCharacterInputArgumentAST.mSlotID,
                                                        extensionMethod_lexicalCurrentCharacterInputArgumentAST_checkLexicalRoutineCallArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalCurrentCharacterInputArgumentAST_checkLexicalRoutineCallArgument (defineExtensionMethod_lexicalCurrentCharacterInputArgumentAST_checkLexicalRoutineCallArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@lexicalFunctionInputArgumentAST checkLexicalRoutineCallArgument'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexicalFunctionInputArgumentAST_checkLexicalRoutineCallArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                             GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                             GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalFunctionInputArgumentAST * object = (const cPtr_lexicalFunctionInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalFunctionInputArgumentAST) ;
  GALGAS_lexicalFunctionFormalArgumentList var_lexicalFormalTypeList_19830 ;
  GALGAS_lexicalTypeEnum var_returnedLexicalFormalType_19875 ;
  GALGAS_string var_replacementFunctionName_19909 ;
  GALGAS_bool joker_20081 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.getter_mLexicalFunctionMap (SOURCE_FILE ("lexiqueCompilation.galgas", 420)).method_searchKey (object->mProperty_mFunctionName, var_lexicalFormalTypeList_19830, var_returnedLexicalFormalType_19875, var_replacementFunctionName_19909, joker_20081, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 420)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_replacementFunctionName_19909.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticWarning (object->mProperty_mFunctionName.getter_location (SOURCE_FILE ("lexiqueCompilation.galgas", 429)), GALGAS_string ("obsolete lexical function, replaced by '").add_operation (var_replacementFunctionName_19909, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 429)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 429)), fixItArray1  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 429)) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_returnedLexicalFormalType_19875.objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mFunctionName.getter_location (SOURCE_FILE ("lexiqueCompilation.galgas", 433)), GALGAS_string ("type error, the function returns an @").add_operation (extensionGetter_lexicalTypeBaseName (var_returnedLexicalFormalType_19875, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 434)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 433)).add_operation (GALGAS_string (" value, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 434)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 436)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 435)).add_operation (GALGAS_string (" value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 436)), fixItArray3  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 433)) ;
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_lexicalFormalTypeList_19830.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 440)).objectCompare (object->mProperty_mFunctionActualArgumentList.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 440)))).boolEnum () ;
  if (kBoolTrue == test_4) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (object->mProperty_mFunctionName.getter_location (SOURCE_FILE ("lexiqueCompilation.galgas", 441)), GALGAS_string ("this lexical function names ").add_operation (object->mProperty_mFunctionActualArgumentList.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 442)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 442)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 441)).add_operation (GALGAS_string (" actual argument(s), but the prototype requires "), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 442)).add_operation (var_lexicalFormalTypeList_19830.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 444)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 444)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 443)).add_operation (GALGAS_string (" actual argument(s)"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 444)), fixItArray5  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 441)) ;
  }
  cEnumerator_lexicalFunctionFormalArgumentList enumerator_21061 (var_lexicalFormalTypeList_19830, kENUMERATION_UP) ;
  cEnumerator_lexicalFunctionCallActualArgumentListAST enumerator_21096 (object->mProperty_mFunctionActualArgumentList, kENUMERATION_UP) ;
  while (enumerator_21061.hasCurrentObject () && enumerator_21096.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalFunctionCallArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) enumerator_21096.current_mLexicalActualInputArgument (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, enumerator_21061.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 448)) ;
    enumerator_21061.gotoNextObject () ;
    enumerator_21096.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexicalFunctionInputArgumentAST_checkLexicalRoutineCallArgument (void) {
  enterExtensionMethod_checkLexicalRoutineCallArgument (kTypeDescriptor_GALGAS_lexicalFunctionInputArgumentAST.mSlotID,
                                                        extensionMethod_lexicalFunctionInputArgumentAST_checkLexicalRoutineCallArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalFunctionInputArgumentAST_checkLexicalRoutineCallArgument (defineExtensionMethod_lexicalFunctionInputArgumentAST_checkLexicalRoutineCallArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding extension method '@lexicalAttributeInputOutputArgumentAST checkLexicalRoutineCallArgument'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexicalAttributeInputOutputArgumentAST_checkLexicalRoutineCallArgument (const cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                                                                    GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                                    GALGAS_lexicalArgumentModeAST inArgument_inLexicalRoutineFormalArgumentMode,
                                                                                                    GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalAttributeInputOutputArgumentAST * object = (const cPtr_lexicalAttributeInputOutputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalAttributeInputOutputArgumentAST) ;
  GALGAS_lexicalTypeEnum var_attributeLexicalType_22332 ;
  ioArgument_ioLexiqueAnalysisContext.getter_mLexicalAttributeMap (SOURCE_FILE ("lexiqueCompilation.galgas", 472)).method_searchKey (object->mProperty_mAttributeName, var_attributeLexicalType_22332, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 472)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_attributeLexicalType_22332.objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mAttributeName.getter_location (SOURCE_FILE ("lexiqueCompilation.galgas", 478)), GALGAS_string ("type error, attribute type is @").add_operation (extensionGetter_lexicalTypeBaseName (var_attributeLexicalType_22332, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 479)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 478)).add_operation (GALGAS_string (" type, but lexical routine prototype requires @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 479)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 481)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 480)).add_operation (GALGAS_string (" type"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 481)), fixItArray1  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 478)) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, inArgument_inLexicalRoutineFormalArgumentMode.objectCompare (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("lexiqueCompilation.galgas", 485)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mActualPassingModeLocation, GALGAS_string ("the output mode (!) is required here, not an output/input mode"), fixItArray3  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 486)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexicalAttributeInputOutputArgumentAST_checkLexicalRoutineCallArgument (void) {
  enterExtensionMethod_checkLexicalRoutineCallArgument (kTypeDescriptor_GALGAS_lexicalAttributeInputOutputArgumentAST.mSlotID,
                                                        extensionMethod_lexicalAttributeInputOutputArgumentAST_checkLexicalRoutineCallArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalAttributeInputOutputArgumentAST_checkLexicalRoutineCallArgument (defineExtensionMethod_lexicalAttributeInputOutputArgumentAST_checkLexicalRoutineCallArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@lexicalFormalInputArgumentAST checkLexicalRoutineCallArgument'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexicalFormalInputArgumentAST_checkLexicalRoutineCallArgument (const cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                                                           GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                           GALGAS_lexicalArgumentModeAST inArgument_inLexicalRoutineFormalArgumentMode,
                                                                                           GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalFormalInputArgumentAST * object = (const cPtr_lexicalFormalInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalFormalInputArgumentAST) ;
  callExtensionMethod_checkLexicalRoutineCallArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) object->mProperty_mRoutineOrFunctionFormalInputArgument.ptr (), ioArgument_ioLexiqueAnalysisContext, inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 497)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, inArgument_inLexicalRoutineFormalArgumentMode.objectCompare (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("lexiqueCompilation.galgas", 502)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mActualPassingModeLocation, GALGAS_string ("the output/input mode (!\?) is required here, not an input mode"), fixItArray1  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 503)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexicalFormalInputArgumentAST_checkLexicalRoutineCallArgument (void) {
  enterExtensionMethod_checkLexicalRoutineCallArgument (kTypeDescriptor_GALGAS_lexicalFormalInputArgumentAST.mSlotID,
                                                        extensionMethod_lexicalFormalInputArgumentAST_checkLexicalRoutineCallArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalFormalInputArgumentAST_checkLexicalRoutineCallArgument (defineExtensionMethod_lexicalFormalInputArgumentAST_checkLexicalRoutineCallArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@lexicalStructuredSendInstructionAST checkLexicalInstruction'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexicalStructuredSendInstructionAST_checkLexicalInstruction (const cPtr_lexicalInstructionAST * inObject,
                                                                                         GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                         GALGAS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalStructuredSendInstructionAST * object = (const cPtr_lexicalStructuredSendInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalStructuredSendInstructionAST) ;
  cEnumerator_lexicalSendSearchListAST enumerator_24631 (object->mProperty_mLexicalSendSearchList, kENUMERATION_UP) ;
  while (enumerator_24631.hasCurrentObject ()) {
    {
    ioArgument_ioLexiqueAnalysisContext.mProperty_mLexicalTokenListMap.setter_setMShouldBeGeneratedForKey (GALGAS_bool (true), enumerator_24631.current_mSearchListName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 521)) ;
    }
    GALGAS_lexicalTypeEnum joker_24827 ; // Joker input parameter
    ioArgument_ioLexiqueAnalysisContext.getter_mLexicalAttributeMap (SOURCE_FILE ("lexiqueCompilation.galgas", 522)).method_searchKey (enumerator_24631.current_mAttributeName (HERE), joker_24827, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 522)) ;
    enumerator_24631.gotoNextObject () ;
  }
  callExtensionMethod_checkLexicalDefaultAction ((const cPtr_lexicalSendDefaultActionAST *) object->mProperty_mLexicalSendDefaultAction.ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 524)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexicalStructuredSendInstructionAST_checkLexicalInstruction (void) {
  enterExtensionMethod_checkLexicalInstruction (kTypeDescriptor_GALGAS_lexicalStructuredSendInstructionAST.mSlotID,
                                                extensionMethod_lexicalStructuredSendInstructionAST_checkLexicalInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalStructuredSendInstructionAST_checkLexicalInstruction (defineExtensionMethod_lexicalStructuredSendInstructionAST_checkLexicalInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@lexicalSimpleSendInstructionAST checkLexicalInstruction'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexicalSimpleSendInstructionAST_checkLexicalInstruction (const cPtr_lexicalInstructionAST * inObject,
                                                                                     GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                     GALGAS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalSimpleSendInstructionAST * object = (const cPtr_lexicalSimpleSendInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalSimpleSendInstructionAST) ;
  GALGAS_lexicalSentValueList joker_25276 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.getter_mTerminalMap (SOURCE_FILE ("lexiqueCompilation.galgas", 532)).method_searchKey (object->mProperty_mSentTerminal, joker_25276, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 532)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexicalSimpleSendInstructionAST_checkLexicalInstruction (void) {
  enterExtensionMethod_checkLexicalInstruction (kTypeDescriptor_GALGAS_lexicalSimpleSendInstructionAST.mSlotID,
                                                extensionMethod_lexicalSimpleSendInstructionAST_checkLexicalInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalSimpleSendInstructionAST_checkLexicalInstruction (defineExtensionMethod_lexicalSimpleSendInstructionAST_checkLexicalInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@lexicalRepeatInstructionAST checkLexicalInstruction'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexicalRepeatInstructionAST_checkLexicalInstruction (const cPtr_lexicalInstructionAST * inObject,
                                                                                 GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                 GALGAS_lexicalTagMap & ioArgument_ioTagMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalRepeatInstructionAST * object = (const cPtr_lexicalRepeatInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalRepeatInstructionAST) ;
  cEnumerator_lexicalWhileBranchListAST enumerator_25591 (object->mProperty_mLexicalWhileBranchList, kENUMERATION_UP) ;
  while (enumerator_25591.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalExpression ((const cPtr_lexicalExpressionAST *) enumerator_25591.current_mWhileExpression (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 541)) ;
    GALGAS_lexicalTagMap var_tagMap_25682 = GALGAS_lexicalTagMap::constructor_mapWithMapToOverride (ioArgument_ioTagMap  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 542)) ;
    cEnumerator_lexicalInstructionListAST enumerator_25766 (enumerator_25591.current_mWhileInstructionList (HERE), kENUMERATION_UP) ;
    while (enumerator_25766.hasCurrentObject ()) {
      callExtensionMethod_checkLexicalInstruction ((const cPtr_lexicalInstructionAST *) enumerator_25766.current_mInstruction (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap_25682, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 544)) ;
      enumerator_25766.gotoNextObject () ;
    }
    enumerator_25591.gotoNextObject () ;
  }
  GALGAS_lexicalTagMap var_tagMap_25877 = GALGAS_lexicalTagMap::constructor_mapWithMapToOverride (ioArgument_ioTagMap  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 547)) ;
  cEnumerator_lexicalInstructionListAST enumerator_25962 (object->mProperty_mRepeatedInstructionList, kENUMERATION_UP) ;
  while (enumerator_25962.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalInstruction ((const cPtr_lexicalInstructionAST *) enumerator_25962.current_mInstruction (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap_25877, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 549)) ;
    enumerator_25962.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexicalRepeatInstructionAST_checkLexicalInstruction (void) {
  enterExtensionMethod_checkLexicalInstruction (kTypeDescriptor_GALGAS_lexicalRepeatInstructionAST.mSlotID,
                                                extensionMethod_lexicalRepeatInstructionAST_checkLexicalInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalRepeatInstructionAST_checkLexicalInstruction (defineExtensionMethod_lexicalRepeatInstructionAST_checkLexicalInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@lexicalSelectInstructionAST checkLexicalInstruction'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexicalSelectInstructionAST_checkLexicalInstruction (const cPtr_lexicalInstructionAST * inObject,
                                                                                 GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                 GALGAS_lexicalTagMap & ioArgument_ioTagMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalSelectInstructionAST * object = (const cPtr_lexicalSelectInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalSelectInstructionAST) ;
  cEnumerator_lexicalSelectBranchListAST enumerator_26365 (object->mProperty_mLexicalSelectBranchList, kENUMERATION_UP) ;
  while (enumerator_26365.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalExpression ((const cPtr_lexicalExpressionAST *) enumerator_26365.current_mSelectExpression (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 559)) ;
    GALGAS_lexicalTagMap var_tagMap_26457 = GALGAS_lexicalTagMap::constructor_mapWithMapToOverride (ioArgument_ioTagMap  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 560)) ;
    cEnumerator_lexicalInstructionListAST enumerator_26542 (enumerator_26365.current_mSelectInstructionList (HERE), kENUMERATION_UP) ;
    while (enumerator_26542.hasCurrentObject ()) {
      callExtensionMethod_checkLexicalInstruction ((const cPtr_lexicalInstructionAST *) enumerator_26542.current_mInstruction (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap_26457, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 562)) ;
      enumerator_26542.gotoNextObject () ;
    }
    enumerator_26365.gotoNextObject () ;
  }
  GALGAS_lexicalTagMap var_tagMap_26653 = GALGAS_lexicalTagMap::constructor_mapWithMapToOverride (ioArgument_ioTagMap  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 565)) ;
  cEnumerator_lexicalInstructionListAST enumerator_26737 (object->mProperty_mDefaultInstructionList, kENUMERATION_UP) ;
  while (enumerator_26737.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalInstruction ((const cPtr_lexicalInstructionAST *) enumerator_26737.current_mInstruction (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap_26653, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 567)) ;
    enumerator_26737.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexicalSelectInstructionAST_checkLexicalInstruction (void) {
  enterExtensionMethod_checkLexicalInstruction (kTypeDescriptor_GALGAS_lexicalSelectInstructionAST.mSlotID,
                                                extensionMethod_lexicalSelectInstructionAST_checkLexicalInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalSelectInstructionAST_checkLexicalInstruction (defineExtensionMethod_lexicalSelectInstructionAST_checkLexicalInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@lexicalRoutineInstructionAST checkLexicalInstruction'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexicalRoutineInstructionAST_checkLexicalInstruction (const cPtr_lexicalInstructionAST * inObject,
                                                                                  GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                  GALGAS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalRoutineInstructionAST * object = (const cPtr_lexicalRoutineInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalRoutineInstructionAST) ;
  GALGAS_lexicalRoutineFormalArgumentList var_lexicalRoutineFormalArgumentList_27179 ;
  GALGAS_stringlist var_routineErrorMessageList_27217 ;
  GALGAS_bool joker_27374 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.getter_mLexicalRoutineMessageMap (SOURCE_FILE ("lexiqueCompilation.galgas", 578)).method_searchKey (object->mProperty_mRoutineName, var_lexicalRoutineFormalArgumentList_27179, var_routineErrorMessageList_27217, joker_27374, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 578)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_lexicalRoutineFormalArgumentList_27179.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 585)).objectCompare (object->mProperty_mActualArgumentList.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 585)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mRoutineName.getter_location (SOURCE_FILE ("lexiqueCompilation.galgas", 586)), GALGAS_string ("this lexical routine call names ").add_operation (object->mProperty_mActualArgumentList.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 587)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 587)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 586)).add_operation (GALGAS_string (" actual argument(s), but the lexical routine prototype requires "), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 587)).add_operation (var_lexicalRoutineFormalArgumentList_27179.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 589)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 589)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 588)).add_operation (GALGAS_string (" actual argument(s)"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 589)), fixItArray1  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 586)) ;
  }
  cEnumerator_lexicalRoutineFormalArgumentList enumerator_27857 (var_lexicalRoutineFormalArgumentList_27179, kENUMERATION_UP) ;
  cEnumerator_lexicalRoutineCallActualArgumentListAST enumerator_27884 (object->mProperty_mActualArgumentList, kENUMERATION_UP) ;
  while (enumerator_27857.hasCurrentObject () && enumerator_27884.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalRoutineCallArgument ((const cPtr_abstractLexicalRoutineActualArgumentAST *) enumerator_27884.current_mLexicalRoutineActualArgument (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, enumerator_27857.current_mLexicalFormalArgumentMode (HERE), enumerator_27857.current_mLexicalFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 593)) ;
    enumerator_27857.gotoNextObject () ;
    enumerator_27884.gotoNextObject () ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_routineErrorMessageList_27217.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 600)).objectCompare (object->mProperty_mErrorMessageList.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 600)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mRoutineName.getter_location (SOURCE_FILE ("lexiqueCompilation.galgas", 601)), GALGAS_string ("this lexical routine call names ").add_operation (object->mProperty_mErrorMessageList.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 602)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 602)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 601)).add_operation (GALGAS_string (" error message(s), but the lexical routine prototype requires "), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 602)).add_operation (var_routineErrorMessageList_27217.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 604)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 604)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 603)).add_operation (GALGAS_string (" error message(s)"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 604)), fixItArray3  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 601)) ;
  }
  cEnumerator_lstringlist enumerator_28496 (object->mProperty_mErrorMessageList, kENUMERATION_UP) ;
  while (enumerator_28496.hasCurrentObject ()) {
    cMapElement_lexicalMessageMap * objectArray_28508 = (cMapElement_lexicalMessageMap *) ioArgument_ioLexiqueAnalysisContext.mProperty_mLexicalMessageMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, enumerator_28496.current_mValue (HERE), kSearchErrorMessage_lexicalMessageMap_searchKey  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 608)) ;
    if (NULL != objectArray_28508) {
        macroValidSharedObject (objectArray_28508, cMapElement_lexicalMessageMap) ;
      objectArray_28508->mProperty_mMessageIsUsed = GALGAS_bool (true) ;
    }
    enumerator_28496.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexicalRoutineInstructionAST_checkLexicalInstruction (void) {
  enterExtensionMethod_checkLexicalInstruction (kTypeDescriptor_GALGAS_lexicalRoutineInstructionAST.mSlotID,
                                                extensionMethod_lexicalRoutineInstructionAST_checkLexicalInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalRoutineInstructionAST_checkLexicalInstruction (defineExtensionMethod_lexicalRoutineInstructionAST_checkLexicalInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@lexicalLogInstructionAST checkLexicalInstruction'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexicalLogInstructionAST_checkLexicalInstruction (const cPtr_lexicalInstructionAST * /* inObject */,
                                                                              GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                              GALGAS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexicalLogInstructionAST_checkLexicalInstruction (void) {
  enterExtensionMethod_checkLexicalInstruction (kTypeDescriptor_GALGAS_lexicalLogInstructionAST.mSlotID,
                                                extensionMethod_lexicalLogInstructionAST_checkLexicalInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalLogInstructionAST_checkLexicalInstruction (defineExtensionMethod_lexicalLogInstructionAST_checkLexicalInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@lexicalRewindInstructionAST checkLexicalInstruction'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexicalRewindInstructionAST_checkLexicalInstruction (const cPtr_lexicalInstructionAST * inObject,
                                                                                 GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                 GALGAS_lexicalTagMap & ioArgument_ioTagMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalRewindInstructionAST * object = (const cPtr_lexicalRewindInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalRewindInstructionAST) ;
  ioArgument_ioTagMap.method_searchKey (object->mProperty_mLexicalTagName, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 626)) ;
  GALGAS_lexicalSentValueList joker_29309 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.getter_mTerminalMap (SOURCE_FILE ("lexiqueCompilation.galgas", 627)).method_searchKey (object->mProperty_mTerminalName, joker_29309, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 627)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexicalRewindInstructionAST_checkLexicalInstruction (void) {
  enterExtensionMethod_checkLexicalInstruction (kTypeDescriptor_GALGAS_lexicalRewindInstructionAST.mSlotID,
                                                extensionMethod_lexicalRewindInstructionAST_checkLexicalInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalRewindInstructionAST_checkLexicalInstruction (defineExtensionMethod_lexicalRewindInstructionAST_checkLexicalInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@lexicalDropInstructionAST checkLexicalInstruction'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexicalDropInstructionAST_checkLexicalInstruction (const cPtr_lexicalInstructionAST * inObject,
                                                                               GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                               GALGAS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalDropInstructionAST * object = (const cPtr_lexicalDropInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalDropInstructionAST) ;
  GALGAS_lexicalSentValueList joker_29664 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.getter_mTerminalMap (SOURCE_FILE ("lexiqueCompilation.galgas", 635)).method_searchKey (object->mProperty_mTerminalName, joker_29664, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 635)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexicalDropInstructionAST_checkLexicalInstruction (void) {
  enterExtensionMethod_checkLexicalInstruction (kTypeDescriptor_GALGAS_lexicalDropInstructionAST.mSlotID,
                                                extensionMethod_lexicalDropInstructionAST_checkLexicalInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalDropInstructionAST_checkLexicalInstruction (defineExtensionMethod_lexicalDropInstructionAST_checkLexicalInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@lexicalTagInstructionAST checkLexicalInstruction'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexicalTagInstructionAST_checkLexicalInstruction (const cPtr_lexicalInstructionAST * inObject,
                                                                              GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                              GALGAS_lexicalTagMap & ioArgument_ioTagMap,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalTagInstructionAST * object = (const cPtr_lexicalTagInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalTagInstructionAST) ;
  {
  ioArgument_ioTagMap.setter_insertKey (object->mProperty_mLexicalTagName, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 643)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexicalTagInstructionAST_checkLexicalInstruction (void) {
  enterExtensionMethod_checkLexicalInstruction (kTypeDescriptor_GALGAS_lexicalTagInstructionAST.mSlotID,
                                                extensionMethod_lexicalTagInstructionAST_checkLexicalInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalTagInstructionAST_checkLexicalInstruction (defineExtensionMethod_lexicalTagInstructionAST_checkLexicalInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@lexicalErrorInstructionAST checkLexicalInstruction'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexicalErrorInstructionAST_checkLexicalInstruction (const cPtr_lexicalInstructionAST * inObject,
                                                                                GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                GALGAS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalErrorInstructionAST * object = (const cPtr_lexicalErrorInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalErrorInstructionAST) ;
  {
  ioArgument_ioLexiqueAnalysisContext.mProperty_mLexicalMessageMap.setter_setMMessageIsUsedForKey (GALGAS_bool (true), object->mProperty_mErrorMessageName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 652)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexicalErrorInstructionAST_checkLexicalInstruction (void) {
  enterExtensionMethod_checkLexicalInstruction (kTypeDescriptor_GALGAS_lexicalErrorInstructionAST.mSlotID,
                                                extensionMethod_lexicalErrorInstructionAST_checkLexicalInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalErrorInstructionAST_checkLexicalInstruction (defineExtensionMethod_lexicalErrorInstructionAST_checkLexicalInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@lexicalWarningInstructionAST checkLexicalInstruction'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexicalWarningInstructionAST_checkLexicalInstruction (const cPtr_lexicalInstructionAST * inObject,
                                                                                  GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                  GALGAS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalWarningInstructionAST * object = (const cPtr_lexicalWarningInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalWarningInstructionAST) ;
  {
  ioArgument_ioLexiqueAnalysisContext.mProperty_mLexicalMessageMap.setter_setMMessageIsUsedForKey (GALGAS_bool (true), object->mProperty_mWarningMessageName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 660)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexicalWarningInstructionAST_checkLexicalInstruction (void) {
  enterExtensionMethod_checkLexicalInstruction (kTypeDescriptor_GALGAS_lexicalWarningInstructionAST.mSlotID,
                                                extensionMethod_lexicalWarningInstructionAST_checkLexicalInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalWarningInstructionAST_checkLexicalInstruction (defineExtensionMethod_lexicalWarningInstructionAST_checkLexicalInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@lexicalImplicitRuleAST checkLexicalRule'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexicalImplicitRuleAST_checkLexicalRule (const cPtr_abstractLexicalRuleAST * inObject,
                                                                     GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalImplicitRuleAST * object = (const cPtr_lexicalImplicitRuleAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalImplicitRuleAST) ;
  GALGAS_lexicalExplicitTokenListMap joker_31557 ; // Joker input parameter
  GALGAS_tokenSortedlist joker_31560 ; // Joker input parameter
  GALGAS_bool joker_31563 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.getter_mLexicalTokenListMap (SOURCE_FILE ("lexiqueCompilation.galgas", 674)).method_searchKey (object->mProperty_mListName, joker_31557, joker_31560, joker_31563, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 674)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexicalImplicitRuleAST_checkLexicalRule (void) {
  enterExtensionMethod_checkLexicalRule (kTypeDescriptor_GALGAS_lexicalImplicitRuleAST.mSlotID,
                                         extensionMethod_lexicalImplicitRuleAST_checkLexicalRule) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalImplicitRuleAST_checkLexicalRule (defineExtensionMethod_lexicalImplicitRuleAST_checkLexicalRule, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@lexicalExplicitRuleAST checkLexicalRule'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexicalExplicitRuleAST_checkLexicalRule (const cPtr_abstractLexicalRuleAST * inObject,
                                                                     GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalExplicitRuleAST * object = (const cPtr_lexicalExplicitRuleAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalExplicitRuleAST) ;
  callExtensionMethod_checkLexicalExpression ((const cPtr_lexicalExpressionAST *) object->mProperty_mLexicalRuleExpression.ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 681)) ;
  GALGAS_lexicalTagMap var_tagMap_31892 = GALGAS_lexicalTagMap::constructor_emptyMap (SOURCE_FILE ("lexiqueCompilation.galgas", 682)) ;
  cEnumerator_lexicalInstructionListAST enumerator_31948 (object->mProperty_mInstructionList, kENUMERATION_UP) ;
  while (enumerator_31948.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalInstruction ((const cPtr_lexicalInstructionAST *) enumerator_31948.current_mInstruction (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap_31892, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 684)) ;
    enumerator_31948.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexicalExplicitRuleAST_checkLexicalRule (void) {
  enterExtensionMethod_checkLexicalRule (kTypeDescriptor_GALGAS_lexicalExplicitRuleAST.mSlotID,
                                         extensionMethod_lexicalExplicitRuleAST_checkLexicalRule) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalExplicitRuleAST_checkLexicalRule (defineExtensionMethod_lexicalExplicitRuleAST_checkLexicalRule, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Filewrapper 'lexiqueGenerationTemplates'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_lexiqueGenerationTemplates_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_lexiqueGenerationTemplates_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_lexiqueGenerationTemplates (
  "",
  0,
  gWrapperAllFiles_lexiqueGenerationTemplates_0,
  0,
  gWrapperAllDirectories_lexiqueGenerationTemplates_0
) ;


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Filewrapper template 'lexiqueGenerationTemplates newHeaderZone2'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_lexiqueGenerationTemplates_newHeaderZone_32_ (C_Compiler * inCompiler,
                                                                                const GALGAS_string & in_LEXIQUE_5F_IDENTIFIER,
                                                                                const GALGAS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT,
                                                                                const GALGAS_metamodelTemplateDelimitorListAST & in_TEMPLATE_5F_DELIMITOR_5F_LIST
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("LEXIQUE ").add_operation (in_LEXIQUE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 3)).getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "#include \"galgas2/C_Lexique.h\"\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                    E X T E R N    R O U T I N E S                                                                   *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n" ;
  GALGAS_uint index_1026_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mLexicalRoutineMessageMap (SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 13)).isValid ()) {
    cEnumerator_lexicalRoutineMap enumerator_1026 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mLexicalRoutineMessageMap (SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 13)), kENUMERATION_UP) ;
    while (enumerator_1026.hasCurrentObject ()) {
      const enumGalgasBool test_0 = enumerator_1026.current_mIsExtern (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "\n"
          "void scanner_routine_" ;
        result << enumerator_1026.current_lkey (HERE).getter_string (SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 15)).stringValue () ;
        result << " (C_Lexique & inLexique" ;
        GALGAS_uint index_1172_ (0) ;
        if (enumerator_1026.current_mLexicalRoutineFormalArgumentList (HERE).isValid ()) {
          cEnumerator_lexicalRoutineFormalArgumentList enumerator_1172 (enumerator_1026.current_mLexicalRoutineFormalArgumentList (HERE), kENUMERATION_UP) ;
          while (enumerator_1172.hasCurrentObject ()) {
            result << ",\n"
              "                " ;
            result << extensionGetter_cppConstInFormalArgument (enumerator_1172.current_mLexicalFormalArgumentMode (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 17)).stringValue () ;
            result << extensionGetter_cppTypeName (enumerator_1172.current_mLexicalFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 18)).stringValue () ;
            result << extensionGetter_cppReferenceInFormalArgument (enumerator_1172.current_mLexicalFormalArgumentMode (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 19)).stringValue () ;
            result << " " ;
            result << enumerator_1172.current_mArgumentNameForComment (HERE).stringValue () ;
            index_1172_.increment () ;
            enumerator_1172.gotoNextObject () ;
          }
        }
        GALGAS_uint index_1519_ (0) ;
        if (enumerator_1026.current_mErrorMessageList (HERE).isValid ()) {
          cEnumerator_stringlist enumerator_1519 (enumerator_1026.current_mErrorMessageList (HERE), kENUMERATION_UP) ;
          while (enumerator_1519.hasCurrentObject ()) {
            result << ",\n"
              "                const char * " ;
            result << enumerator_1519.current_mValue (HERE).stringValue () ;
            index_1519_.increment () ;
            enumerator_1519.gotoNextObject () ;
          }
        }
        result << ") ;\n" ;
      }else if (kBoolFalse == test_0) {
      }
      index_1026_.increment () ;
      enumerator_1026.gotoNextObject () ;
    }
  }
  result << "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                    E X T E R N    F U N C T I O N S                                                                 *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n" ;
  GALGAS_uint index_2036_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mLexicalFunctionMap (SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 33)).isValid ()) {
    cEnumerator_lexicalFunctionMap enumerator_2036 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mLexicalFunctionMap (SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 33)), kENUMERATION_UP) ;
    while (enumerator_2036.hasCurrentObject ()) {
      const enumGalgasBool test_1 = enumerator_2036.current_mIsExtern (HERE).boolEnum () ;
      if (kBoolTrue == test_1) {
        result << "\n" ;
        result << extensionGetter_cppTypeName (enumerator_2036.current_mReturnedLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 35)).stringValue () ;
        result << " scanner_function_" ;
        result << enumerator_2036.current_lkey (HERE).getter_string (SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 35)).stringValue () ;
        result << " (C_Lexique & inLexique" ;
        GALGAS_uint index_2199_ (0) ;
        if (enumerator_2036.current_mLexicalTypeList (HERE).isValid ()) {
          cEnumerator_lexicalFunctionFormalArgumentList enumerator_2199 (enumerator_2036.current_mLexicalTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_2199.hasCurrentObject ()) {
            result << ",\n"
              "                const " ;
            result << extensionGetter_cppTypeName (enumerator_2199.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 37)).stringValue () ;
            result << " " ;
            result << enumerator_2199.current_mArgumentNameForComment (HERE).stringValue () ;
            index_2199_.increment () ;
            enumerator_2199.gotoNextObject () ;
          }
        }
        result << ") ;\n" ;
      }else if (kBoolFalse == test_1) {
      }
      index_2036_.increment () ;
      enumerator_2036.gotoNextObject () ;
    }
  }
  result << "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                       T O K E N    C L A S S                                                                        *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class cTokenFor_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " : public cToken {\n" ;
  GALGAS_uint index_2814_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mLexicalAttributeMap (SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 49)).isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_2814 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mLexicalAttributeMap (SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 49)), kENUMERATION_UP) ;
    while (enumerator_2814.hasCurrentObject ()) {
      result << "  public : " ;
      result << extensionGetter_cppTypeName (enumerator_2814.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 50)).stringValue () ;
      result << " mLexicalAttribute_" ;
      result << enumerator_2814.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 50)).stringValue () ;
      result << " ;\n" ;
      index_2814_.increment () ;
      enumerator_2814.gotoNextObject () ;
    }
  }
  result << "\n"
    "  public : cTokenFor_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "} ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                     S C A N N E R    C L A S S                                                                      *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " : public C_Lexique {\n"
    "//--- Constructors\n"
    "  public : C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " (C_Compiler * inCallerCompiler,\n"
    "                       const C_String & inSourceFileName\n"
    "                       COMMA_LOCATION_ARGS) ;\n"
    "\n"
    "  public : C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " (C_Compiler * inCallerCompiler,\n"
    "                       const C_String & inSourceString,\n"
    "                       const C_String & inStringForError\n"
    "                       COMMA_LOCATION_ARGS) ;\n"
    "\n"
    "//--- Instrospection\n"
    "  public : static GALGAS_stringlist symbols (LOCATION_ARGS) ;\n"
    "\n"
    "//--- Declaring a protected virtual destructor enables the compiler to raise\n"
    "//    an error if a direct delete is performed; only the static method\n"
    "//    C_SharedObject::detachPointer may invoke delete.\n"
    "  #ifndef DO_NOT_GENERATE_CHECKINGS\n"
    "    protected : virtual ~ C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " (void) {}\n"
    "  #endif\n" ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_length (SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 80)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_2) {
    result << "\n"
      "//--- Scanner mode for template scanner\n"
      "  private : int32_t mMatchedTemplateDelimiterIndex ;\n" ;
  }else if (kBoolFalse == test_2) {
  }
  result << "\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Filewrapper template 'lexiqueGenerationTemplates newHeaderZone3'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_lexiqueGenerationTemplates_newHeaderZone_33_ (C_Compiler * inCompiler,
                                                                                const GALGAS_string & in_LEXIQUE_5F_IDENTIFIER,
                                                                                const GALGAS_lexicalListDeclarationListAST & in_DELIMITOR_5F_LIST_5F_LIST,
                                                                                const GALGAS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT,
                                                                                const GALGAS_indexingListAST & in_INDEXING_5F_LIST,
                                                                                const GALGAS_lexicalFunctionListAST & in_UNICODE_5F_TEST_5F_FUNCTIONS
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "\n"
    "//--- Terminal symbols enumeration\n"
    "  public : enum {kToken_" ;
  GALGAS_uint index_118_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 4)).isValid ()) {
    cEnumerator_terminalList enumerator_118 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 4)), kENUMERATION_UP) ;
    while (enumerator_118.hasCurrentObject ()) {
      result << ",\n"
        "   kToken_" ;
      result << enumerator_118.current_mTerminalName (HERE).getter_string (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 5)).getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 5)).stringValue () ;
      index_118_.increment () ;
      enumerator_118.gotoNextObject () ;
    }
  }
  result << "} ;\n" ;
  GALGAS_uint index_243_ (0) ;
  if (in_DELIMITOR_5F_LIST_5F_LIST.isValid ()) {
    cEnumerator_lexicalListDeclarationListAST enumerator_243 (in_DELIMITOR_5F_LIST_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_243.hasCurrentObject ()) {
      result << "\n"
        "//--- Key words table '" ;
      result << enumerator_243.current_mName (HERE).getter_string (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 10)).stringValue () ;
      result << "'\n"
        "  public : static int16_t search_into_" ;
      result << enumerator_243.current_mName (HERE).getter_string (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 11)).stringValue () ;
      result << " (const C_String & inSearchedString) ;\n" ;
      index_243_.increment () ;
      enumerator_243.gotoNextObject () ;
    }
  }
  result << "  \n"
    "\n"
    "//--- Assign from attribute\n" ;
  GALGAS_uint index_501_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mLexicalAttributeMap (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 17)).isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_501 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mLexicalAttributeMap (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 17)), kENUMERATION_UP) ;
    while (enumerator_501.hasCurrentObject ()) {
      result << "  public : GALGAS_l" ;
      result << extensionGetter_lexicalTypeBaseName (enumerator_501.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 18)).getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 18)).stringValue () ;
      result << " synthetizedAttribute_" ;
      result << enumerator_501.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 18)).stringValue () ;
      result << " (void) const ;\n" ;
      index_501_.increment () ;
      enumerator_501.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n"
    "//--- Attribute access\n" ;
  GALGAS_uint index_761_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mLexicalAttributeMap (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 24)).isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_761 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mLexicalAttributeMap (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 24)), kENUMERATION_UP) ;
    while (enumerator_761.hasCurrentObject ()) {
      result << "  public : " ;
      result << extensionGetter_cppTypeName (enumerator_761.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 25)).stringValue () ;
      result << " attributeValue_" ;
      result << enumerator_761.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 25)).stringValue () ;
      result << " (void) const ;\n" ;
      index_761_.increment () ;
      enumerator_761.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n"
    "//--- Indexing keys\n" ;
  GALGAS_uint index_966_ (0) ;
  if (in_INDEXING_5F_LIST.isValid ()) {
    cEnumerator_indexingListAST enumerator_966 (in_INDEXING_5F_LIST, kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_966 = enumerator_966.hasCurrentObject () ;
    if (nonEmpty_enumerator_966) {
      result << "  public : enum {" ;
    }
    while (enumerator_966.hasCurrentObject ()) {
      result << "\n"
        "    kIndexing_" ;
      result << enumerator_966.current_mIndexName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 33)).stringValue () ;
      if (enumerator_966.hasNextObject ()) {
        result << "," ;
      }
      index_966_.increment () ;
      enumerator_966.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_966) {
      result << "\n"
        "  } ;\n" ;
    }
  }
  result << "\n"
    "//--- Unicode test functions\n" ;
  GALGAS_uint index_1136_ (0) ;
  if (in_UNICODE_5F_TEST_5F_FUNCTIONS.isValid ()) {
    cEnumerator_lexicalFunctionListAST enumerator_1136 (in_UNICODE_5F_TEST_5F_FUNCTIONS, kENUMERATION_UP) ;
    while (enumerator_1136.hasCurrentObject ()) {
      result << "  public : static bool " ;
      result << enumerator_1136.current_mFunctionName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 41)).stringValue () ;
      result << " (const utf32 inUnicodeCharacter) ;\n" ;
      index_1136_.increment () ;
      enumerator_1136.gotoNextObject () ;
    }
  }
  result << "\n"
    "//--- Indexing directory\n"
    "  protected : virtual C_String indexingDirectory (void) const ;\n"
    "\n"
    "//--- Parse lexical token\n"
    "  protected : virtual bool parseLexicalToken (void) ;\n"
    "\n"
    "//--- Get terminal message\n"
    "  protected : virtual C_String getMessageForTerminal (const int16_t inTerminalSymbol) const ;\n"
    "\n"
    "//--- Get terminal count\n"
    "  public : virtual int16_t terminalVocabularyCount (void) const { return " ;
  result << in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 54)).getter_length (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 54)).getter_string (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 54)).stringValue () ;
  result << " ; }\n"
    "\n"
    "//--- Get Token String\n"
    "  public : virtual C_String getCurrentTokenString (const cToken * inTokenPtr) const ;\n"
    "\n"
    "//--- Enter Token\n"
    "  protected : void enterToken (cTokenFor_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " & ioToken) ;\n"
    "\n"
    "//--- Style name for Latex\n"
    "  protected : virtual C_String styleNameForIndex (const uint32_t inStyleIndex) const ;\n"
    "  protected : virtual uint32_t styleIndexForTerminal (const int32_t inTerminalIndex) const ;\n"
    "} ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Filewrapper template 'lexiqueGenerationTemplates newImplementationZone2Galgas3'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_lexiqueGenerationTemplates_newImplementationZone_32_Galgas_33_ (C_Compiler * inCompiler,
                                                                                                  const GALGAS_string & in_LEXIQUE_5F_IDENTIFIER,
                                                                                                  const GALGAS_lexicalAttributeMap & in_LEXICAL_5F_ATTRIBUTE_5F_MAP,
                                                                                                  const GALGAS_lexicalMessageMap & in_LEXICAL_5F_MESSAGE_5F_MAP,
                                                                                                  const GALGAS_terminalList & in_TERMINAL_5F_LIST,
                                                                                                  const GALGAS_lexicalExplicitTokenListMapMap & in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP,
                                                                                                  const GALGAS_stringset & in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES,
                                                                                                  const GALGAS_lexicalRuleListAST & in_LEXICAL_5F_RULE_5F_LIST,
                                                                                                  const GALGAS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT,
                                                                                                  const GALGAS_string & in_INDEXING_5F_DIRECTORY,
                                                                                                  const GALGAS_metamodelTemplateDelimitorListAST & in_TEMPLATE_5F_DELIMITOR_5F_LIST,
                                                                                                  const GALGAS_string & in_LEXIQUE_5F_COMPONENT_5F_NAME,
                                                                                                  const GALGAS_templateReplacementListAST & in_TEMPLATE_5F_REPLACEMENT_5F_LIST,
                                                                                                  const GALGAS_lexicalStyleListAST & in_LEXICAL_5F_STYLE_5F_LIST,
                                                                                                  const GALGAS_lexicalFunctionListAST & in_UNICODE_5F_TEST_5F_FUNCTIONS
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//     L E X I Q U E                                                                                                   *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "#include \"strings/unicode_character_cpp.h\"\n"
    "#include \"galgas2/scanner_actions.h\"\n"
    "#include \"galgas2/cLexiqueIntrospection.h\"\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "cTokenFor_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << "::cTokenFor_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " (void)" ;
  GALGAS_uint index_978_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_978 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_978 = enumerator_978.hasCurrentObject () ;
    if (nonEmpty_enumerator_978) {
      result << " :\n" ;
    }
    while (enumerator_978.hasCurrentObject ()) {
      result << "mLexicalAttribute_" ;
      result << enumerator_978.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 16)).stringValue () ;
      result << " ()" ;
      if (enumerator_978.hasNextObject ()) {
        result << ",\n" ;
      }
      index_978_.increment () ;
      enumerator_978.gotoNextObject () ;
    }
  }
  result << " {\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << "::C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "C_Compiler * inCallerCompiler,\n"
    "                " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "const C_String & inSourceFileName\n"
    "                " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) :\n"
    "C_Lexique (inCallerCompiler, inSourceFileName COMMA_THERE)" ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 28)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << ",\n"
      "mMatchedTemplateDelimiterIndex (-1)" ;
  }else if (kBoolFalse == test_0) {
  }
  result << " {\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << "::C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "C_Compiler * inCallerCompiler,\n"
    "                " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "const C_String & inSourceString,\n"
    "                " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "const C_String & inStringForError\n"
    "                " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) :\n"
    "C_Lexique (inCallerCompiler, inSourceString, inStringForError COMMA_THERE)" ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 41)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    result << ",\n"
      "mMatchedTemplateDelimiterIndex (-1)" ;
  }else if (kBoolFalse == test_1) {
  }
  result << " {\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                 I N D E X I N G    D I R E C T O R Y                                                                *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "C_String C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << "::indexingDirectory (void) const {\n"
    "  return " ;
  result << in_INDEXING_5F_DIRECTORY.getter_utf_38_Representation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 52)).stringValue () ;
  result << " ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                        Lexical error message list                                                                   *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n" ;
  GALGAS_uint index_3000_ (0) ;
  if (in_LEXICAL_5F_MESSAGE_5F_MAP.isValid ()) {
    cEnumerator_lexicalMessageMap enumerator_3000 (in_LEXICAL_5F_MESSAGE_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_3000.hasCurrentObject ()) {
      result << "\n"
        "static const char * gLexicalMessage_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_3000.current_lkey (HERE).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 60)).stringValue () ;
      result << " = " ;
      result << enumerator_3000.current_mLexicalMessage (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 60)).stringValue () ;
      result << " ;\n" ;
      index_3000_.increment () ;
      enumerator_3000.gotoNextObject () ;
    }
  }
  result << "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//          Syntax error messages, for every terminal symbol                                                           *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n" ;
  GALGAS_uint index_3531_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    cEnumerator_terminalList enumerator_3531 (in_TERMINAL_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3531.hasCurrentObject ()) {
      result << "\n"
        "//--- Syntax error message for terminal '$" ;
      result << enumerator_3531.current_mTerminalName (HERE).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 68)).stringValue () ;
      result << "$' :\n"
        "static const char * gSyntaxErrorMessage_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_3531.current_mTerminalName (HERE).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 69)).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 69)).stringValue () ;
      result << " = " ;
      result << enumerator_3531.current_mSyntaxErrorMessage (HERE).getter_utf_38_Representation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 69)).stringValue () ;
      result << " ;\n" ;
      index_3531_.increment () ;
      enumerator_3531.gotoNextObject () ;
    }
  }
  result << "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                getMessageForTerminal                                                                                *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "C_String C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << "::getMessageForTerminal (const int16_t inTerminalIndex) const {\n"
    "  static const char * syntaxErrorMessageArray [" ;
  result << in_TERMINAL_5F_LIST.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 77)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 77)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 77)).stringValue () ;
  result << "] = {kEndOfSourceLexicalErrorMessage" ;
  GALGAS_uint index_4410_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    cEnumerator_terminalList enumerator_4410 (in_TERMINAL_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4410.hasCurrentObject ()) {
      result << ",\n"
        "    gSyntaxErrorMessage_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_4410.current_mTerminalName (HERE).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 79)).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 79)).stringValue () ;
      index_4410_.increment () ;
      enumerator_4410.gotoNextObject () ;
    }
  }
  result << "} ;\n"
    "  return syntaxErrorMessageArray [inTerminalIndex] ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                      U N I C O D E    S T R I N G S                                                                 *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n" ;
  GALGAS_uint index_4988_ (0) ;
  if (in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES.isValid ()) {
    cEnumerator_stringset enumerator_4988 (in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES, kENUMERATION_UP) ;
    while (enumerator_4988.hasCurrentObject ()) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, enumerator_4988.current_key (HERE).getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 90)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_2) {
        result << "\n"
          "//--- Unicode string for '$" ;
        result << enumerator_4988.current_key (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 91)).stringValue () ;
        result << "$'\n"
          "static const utf32 kUnicodeString_" ;
        result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_4988.current_key (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 92)).stringValue () ;
        result << " [] = " ;
        result << enumerator_4988.current_key (HERE).getter_utf_33__32_Representation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 92)).stringValue () ;
        result << " ;\n" ;
      }else if (kBoolFalse == test_2) {
      }
      index_4988_.increment () ;
      enumerator_4988.gotoNextObject () ;
    }
  }
  result << "\n" ;
  GALGAS_uint index_5290_ (0) ;
  if (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.isValid ()) {
    cEnumerator_lexicalExplicitTokenListMapMap enumerator_5290 (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_5290.hasCurrentObject ()) {
      result << "//---------------------------------------------------------------------------------------------------------------------*\n"
        "//             Key words table '" ;
      result << enumerator_5290.current_lkey (HERE).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 99)).stringValue () ;
      result << "'                            *\n"
        "//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n"
        "static const int32_t ktable_size_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_5290.current_lkey (HERE).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 101)).stringValue () ;
      result << " = " ;
      result << enumerator_5290.current_mExplicitTokenListMap (HERE).getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 101)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 101)).stringValue () ;
      result << " ;\n"
        "\n"
        "static const C_unicode_lexique_table_entry ktable_for_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_5290.current_lkey (HERE).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 102)).stringValue () ;
      result << " [ktable_size_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_5290.current_lkey (HERE).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 102)).stringValue () ;
      result << "] = {\n" ;
      GALGAS_uint index_6025_ (0) ;
      if (enumerator_5290.current_mTokenSortedList (HERE).isValid ()) {
        cEnumerator_tokenSortedlist enumerator_6025 (enumerator_5290.current_mTokenSortedList (HERE), kENUMERATION_UP) ;
        while (enumerator_6025.hasCurrentObject ()) {
          result << "  C_unicode_lexique_table_entry (kUnicodeString_" ;
          result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
          result << "_" ;
          result << enumerator_6025.current_mName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 104)).stringValue () ;
          result << ", " ;
          result << enumerator_6025.current_mLength (HERE).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 104)).stringValue () ;
          result << ", C_Lexique_" ;
          result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
          result << "::kToken_" ;
          result << enumerator_6025.current_mTerminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 104)).stringValue () ;
          result << ")" ;
          if (enumerator_6025.hasNextObject ()) {
            result << ",\n" ;
          }
          index_6025_.increment () ;
          enumerator_6025.gotoNextObject () ;
        }
      }
      result << "\n"
        "} ;\n"
        "\n"
        "int16_t C_Lexique_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "::search_into_" ;
      result << enumerator_5290.current_lkey (HERE).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 108)).stringValue () ;
      result << " (const C_String & inSearchedString) {\n"
        "  return searchInList (inSearchedString, ktable_for_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_5290.current_lkey (HERE).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 109)).stringValue () ;
      result << ", ktable_size_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_5290.current_lkey (HERE).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 109)).stringValue () ;
      result << ") ;\n"
        "}\n"
        "\n" ;
      index_5290_.increment () ;
      enumerator_5290.gotoNextObject () ;
    }
  }
  result << "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                          getCurrentTokenString                                                                      *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "C_String C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << "::getCurrentTokenString (const cToken * inTokenPtr) const {\n"
    "  const cTokenFor_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " * ptr = (const cTokenFor_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " *) inTokenPtr ;\n"
    "  C_String s ;\n"
    "  if (ptr == NULL) {\n"
    "    s.appendCString(\"$$\") ;\n"
    "  }else{\n"
    "    switch (ptr->mTokenCode) {\n"
    "    case kToken_:\n"
    "      s.appendCString(\"$$\") ;\n"
    "      break ;\n" ;
  GALGAS_uint index_7367_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    cEnumerator_terminalList enumerator_7367 (in_TERMINAL_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7367.hasCurrentObject ()) {
      result << "    case kToken_" ;
      result << enumerator_7367.current_mTerminalName (HERE).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 128)).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 128)).stringValue () ;
      result << ":\n"
        "      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;\n"
        "      s.appendCString (" ;
      result << enumerator_7367.current_mTerminalName (HERE).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 130)).getter_utf_38_Representation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 130)).stringValue () ;
      result << ") ;\n"
        "      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;\n" ;
      GALGAS_uint index_7699_ (0) ;
      if (enumerator_7367.current_mSentAttributeList (HERE).isValid ()) {
        cEnumerator_lexicalSentValueList enumerator_7699 (enumerator_7367.current_mSentAttributeList (HERE), kENUMERATION_UP) ;
        while (enumerator_7699.hasCurrentObject ()) {
          result << "      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;\n"
            "      s." ;
          result << extensionGetter_appendMethodName (enumerator_7699.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 134)).stringValue () ;
          result << " (ptr->mLexicalAttribute_" ;
          result << enumerator_7699.current_mLexicalAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 134)).stringValue () ;
          result << extensionGetter_appendArgumentOfMethod (enumerator_7699.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 134)).stringValue () ;
          result << ") ;\n" ;
          index_7699_.increment () ;
          enumerator_7699.gotoNextObject () ;
        }
      }
      result << "      break ;\n" ;
      index_7367_.increment () ;
      enumerator_7367.gotoNextObject () ;
    }
  }
  result << "    default:\n"
    "      break ;\n"
    "    }\n"
    "  }\n"
    "  return s ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                           Template Delimiters                                                                       *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  GALGAS_uint index_8605_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTemplateDelimitorList (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 149)).isValid ()) {
    cEnumerator_templateDelimitorList enumerator_8605 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTemplateDelimitorList (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 149)), kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_8605 = enumerator_8605.hasCurrentObject () ;
    if (nonEmpty_enumerator_8605) {
      result << "static const cTemplateDelimiter " ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_kTemplateDefinitionArray [" ;
      result << in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 150)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 150)).stringValue () ;
      result << "] = {\n" ;
    }
    while (enumerator_8605.hasCurrentObject ()) {
      result << "  cTemplateDelimiter (kUnicodeString_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_8605.current_mStartString (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 151)).stringValue () ;
      result << ", " ;
      result << enumerator_8605.current_mStartString (HERE).getter_string (HERE).getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 151)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 151)).stringValue () ;
      result << ", " ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_8605.current_mEndString (HERE).getter_string (HERE).getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 152)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_3) {
        result << "NULL, 0," ;
      }else if (kBoolFalse == test_3) {
        result << "kUnicodeString_" ;
        result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_8605.current_mEndString (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 155)).stringValue () ;
        result << ", " ;
        result << enumerator_8605.current_mEndString (HERE).getter_string (HERE).getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 155)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 155)).stringValue () ;
        result << "," ;
      }
      result << " NULL, " ;
      result << enumerator_8605.current_mPreservesStartDelimiter (HERE).operator_not (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 158)).getter_cString (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 158)).stringValue () ;
      result << ")" ;
      if (enumerator_8605.hasNextObject ()) {
        result << ",\n" ;
      }
      index_8605_.increment () ;
      enumerator_8605.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_8605) {
      result << "\n"
        "} ;\n" ;
    }
  }
  result << "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                           Template Replacements                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  GALGAS_uint index_9622_ (0) ;
  if (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.isValid ()) {
    cEnumerator_templateReplacementListAST enumerator_9622 (in_TEMPLATE_5F_REPLACEMENT_5F_LIST, kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_9622 = enumerator_9622.hasCurrentObject () ;
    if (nonEmpty_enumerator_9622) {
      result << "static const cTemplateDelimiter " ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_kTemplateReplacementArray [" ;
      result << in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 169)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 169)).stringValue () ;
      result << "] = {\n" ;
    }
    while (enumerator_9622.hasCurrentObject ()) {
      result << "  cTemplateDelimiter (kUnicodeString_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_9622.current_mMatchString (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 171)).stringValue () ;
      result << ", " ;
      result << enumerator_9622.current_mMatchString (HERE).getter_string (HERE).getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 171)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 171)).stringValue () ;
      result << ", kUnicodeString_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_9622.current_mReplacementString (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 172)).stringValue () ;
      result << ", " ;
      result << enumerator_9622.current_mReplacementString (HERE).getter_string (HERE).getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 172)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 172)).stringValue () ;
      result << ", " ;
      const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_9622.current_mReplacementFunction (HERE).getter_string (HERE).getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 173)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_4) {
        result << "NULL" ;
      }else if (kBoolFalse == test_4) {
        result << "scanner_routine_" ;
        result << enumerator_9622.current_mReplacementFunction (HERE).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 176)).stringValue () ;
      }
      result << ", true)" ;
      if (enumerator_9622.hasNextObject ()) {
        result << ",\n" ;
      }
      index_9622_.increment () ;
      enumerator_9622.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_9622) {
      result << "\n"
        "} ;\n" ;
    }
  }
  result << "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//            Terminal Symbols as end of script in template mark                                                       *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 187)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_5) {
    GALGAS_uint index_10738_ (0) ;
    if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 188)).isValid ()) {
      cEnumerator_terminalList enumerator_10738 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 188)), kENUMERATION_UP) ;
      const bool nonEmpty_enumerator_10738 = enumerator_10738.hasCurrentObject () ;
      if (nonEmpty_enumerator_10738) {
        result << "static const bool " ;
        result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
        result << "_kEndOfScriptInTemplateArray [" ;
        result << in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 189)).getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 189)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 189)).stringValue () ;
        result << "] = {\n" ;
      }
      while (enumerator_10738.hasCurrentObject ()) {
        result << "  " ;
        result << enumerator_10738.current_mIsEndOfTemplateMark (HERE).getter_cString (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 190)).stringValue () ;
        result << " /* " ;
        result << enumerator_10738.current_mTerminalName (HERE).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 190)).stringValue () ;
        result << " */" ;
        if (enumerator_10738.hasNextObject ()) {
          result << ",\n" ;
        }
        index_10738_.increment () ;
        enumerator_10738.gotoNextObject () ;
      }
      if (nonEmpty_enumerator_10738) {
        result << "\n"
          "} ;\n" ;
      }
    }
  }else if (kBoolFalse == test_5) {
  }
  result << "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//            Unicode test functions                                                                                   *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    " \n" ;
  GALGAS_uint index_11271_ (0) ;
  if (in_UNICODE_5F_TEST_5F_FUNCTIONS.isValid ()) {
    cEnumerator_lexicalFunctionListAST enumerator_11271 (in_UNICODE_5F_TEST_5F_FUNCTIONS, kENUMERATION_UP) ;
    while (enumerator_11271.hasCurrentObject ()) {
      result << "bool C_Lexique_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "::" ;
      result << enumerator_11271.current_mFunctionName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 202)).stringValue () ;
      result << " (const utf32 inUnicodeCharacter) {\n"
        "  return " ;
      result << callExtensionGetter_generateForUnicodeTestFunctions ((const cPtr_lexicalFunctionExpressionAST *) enumerator_11271.current_mLexicalExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 203)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n" ;
      index_11271_.increment () ;
      enumerator_11271.gotoNextObject () ;
    }
  }
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//               P A R S E    L E X I C A L    T O K E N                                                               *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "bool C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << "::parseLexicalToken (void) {\n"
    "  cTokenFor_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " token ;\n"
    "  mLoop = true ;\n"
    "  token.mTokenCode = -1 ;\n"
    "  while ((token.mTokenCode < 0) && (UNICODE_VALUE (mCurrentChar) != '\\0')) {\n" ;
  const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 216)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_6) {
    result << "    if ((mMatchedTemplateDelimiterIndex >= 0)\n"
      "     && (" ;
    result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
    result << "_kTemplateDefinitionArray [mMatchedTemplateDelimiterIndex].mEndStringLength > 0)\n"
      "     && (UNICODE_VALUE (mCurrentChar) != '\\0')) {\n"
      "      const bool foundEndDelimitor = testForInputUTF32String (" ;
    result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
    result << "_kTemplateDefinitionArray [mMatchedTemplateDelimiterIndex].mEndString,\n"
      "                                                              " ;
    result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
    result << "_kTemplateDefinitionArray [mMatchedTemplateDelimiterIndex].mEndStringLength,\n"
      "                                                              true) ;\n"
      "      if (foundEndDelimitor) {\n"
      "        mMatchedTemplateDelimiterIndex = -1 ;\n"
      "      }\n"
      "    }\n"
      "    while ((mMatchedTemplateDelimiterIndex < 0) && (UNICODE_VALUE (mCurrentChar) != '\\0')) {\n"
      "      int32_t replacementIndex = 0 ;\n"
      "      while (replacementIndex >= 0) {\n"
      "        replacementIndex = findTemplateDelimiterIndex (" ;
    result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
    result << "_kTemplateReplacementArray, " ;
    result << in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 230)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 230)).stringValue () ;
    result << ") ;\n"
      "        if (replacementIndex >= 0) {\n"
      "          if (" ;
    result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
    result << "_kTemplateReplacementArray [replacementIndex].mReplacementFunction == NULL) {\n"
      "            token.mTemplateStringBeforeToken << " ;
    result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
    result << "_kTemplateReplacementArray [replacementIndex].mEndString ;\n"
      "          }else{\n"
      "            C_String s ;\n"
      "            while (notTestForInputUTF32String (" ;
    result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
    result << "_kTemplateReplacementArray [replacementIndex].mEndString,\n"
      "                                               " ;
    result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
    result << "_kTemplateReplacementArray [replacementIndex].mEndStringLength,\n"
      "                                               kEndOfSourceLexicalErrorMessage\n"
      "                                               COMMA_HERE)) {\n"
      "              s.appendUnicodeCharacter (previousChar () COMMA_HERE) ;\n"
      "            }\n"
      "            " ;
    result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
    result << "_kTemplateReplacementArray [replacementIndex].mReplacementFunction (*this, s, token.mTemplateStringBeforeToken) ;\n"
      "          }\n"
      "        }\n"
      "      }\n"
      "      mMatchedTemplateDelimiterIndex = findTemplateDelimiterIndex (" ;
    result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
    result << "_kTemplateDefinitionArray, " ;
    result << in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 246)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 246)).stringValue () ;
    result << ") ;\n"
      "      if (mMatchedTemplateDelimiterIndex < 0) {\n"
      "        token.mTemplateStringBeforeToken.appendUnicodeCharacter (mCurrentChar COMMA_HERE) ;\n"
      "        advance () ;\n"
      "      }\n"
      "    }\n"
      "    if ((mMatchedTemplateDelimiterIndex >= 0) && (UNICODE_VALUE (mCurrentChar) != '\\0')) {\n" ;
    GALGAS_uint index_14582_ (0) ;
    if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
      cEnumerator_lexicalAttributeMap enumerator_14582 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kENUMERATION_UP) ;
      while (enumerator_14582.hasCurrentObject ()) {
        result << "    token.mLexicalAttribute_" ;
        result << enumerator_14582.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 254)).stringValue () ;
        result << extensionGetter_initialization (enumerator_14582.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 254)).stringValue () ;
        result << " ;\n" ;
        index_14582_.increment () ;
        enumerator_14582.gotoNextObject () ;
      }
    }
    result << "    mTokenStartLocation = mCurrentLocation ;\n"
      "    try{\n" ;
    if (GALGAS_uint ((uint32_t) 6U).isValid ()) {
      result.incIndentation ((int32_t) GALGAS_uint ((uint32_t) 6U).uintValue ()) ;
    }
    GALGAS_uint index_14797_ (0) ;
    if (in_LEXICAL_5F_RULE_5F_LIST.isValid ()) {
      cEnumerator_lexicalRuleListAST enumerator_14797 (in_LEXICAL_5F_RULE_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_14797.hasCurrentObject ()) {
        result << callExtensionGetter_generateCode ((const cPtr_abstractLexicalRuleAST *) enumerator_14797.current_mLexicalRule (HERE).ptr (), in_LEXIQUE_5F_IDENTIFIER, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT, inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 261)).stringValue () ;
        index_14797_.increment () ;
        enumerator_14797.gotoNextObject () ;
      }
    }
    if (GALGAS_uint ((uint32_t) 6U).isValid ()) {
      result.incIndentation (- ((int32_t) GALGAS_uint ((uint32_t) 6U).uintValue ())) ;
    }
    result << "if (testForInputUTF32Char (TO_UNICODE ('\\0'))) { // End of source text \? \n"
      "      token.mTokenCode = kToken_ ; // Empty string code\n"
      "    }else{ // Unknown input character\n"
      "      unknownCharacterLexicalError (LINE_AND_SOURCE_FILE) ;\n"
      "      token.mTokenCode = -1 ; // No token\n"
      "      advance () ; // ... go throught unknown character\n"
      "    }\n"
      "    }catch (const C_lexicalErrorException &) {\n"
      "      token.mTokenCode = -1 ; // No token\n"
      "      advance () ; // ... go throught unknown character\n"
      "    }\n"
      "    }\n"
      "    if ((token.mTokenCode > 0) && " ;
    result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
    result << "_kEndOfScriptInTemplateArray [token.mTokenCode - 1]) {\n"
      "      mMatchedTemplateDelimiterIndex = -1 ;\n"
      "    }\n"
      "  " ;
  }else if (kBoolFalse == test_6) {
    GALGAS_uint index_15587_ (0) ;
    if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
      cEnumerator_lexicalAttributeMap enumerator_15587 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kENUMERATION_UP) ;
      while (enumerator_15587.hasCurrentObject ()) {
        result << "    token.mLexicalAttribute_" ;
        result << enumerator_15587.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 281)).stringValue () ;
        result << extensionGetter_initialization (enumerator_15587.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 281)).stringValue () ;
        result << " ;\n" ;
        index_15587_.increment () ;
        enumerator_15587.gotoNextObject () ;
      }
    }
    result << "    mTokenStartLocation = mCurrentLocation ;\n"
      "    try{\n" ;
    if (GALGAS_uint ((uint32_t) 6U).isValid ()) {
      result.incIndentation ((int32_t) GALGAS_uint ((uint32_t) 6U).uintValue ()) ;
    }
    GALGAS_uint index_15802_ (0) ;
    if (in_LEXICAL_5F_RULE_5F_LIST.isValid ()) {
      cEnumerator_lexicalRuleListAST enumerator_15802 (in_LEXICAL_5F_RULE_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_15802.hasCurrentObject ()) {
        result << callExtensionGetter_generateCode ((const cPtr_abstractLexicalRuleAST *) enumerator_15802.current_mLexicalRule (HERE).ptr (), in_LEXIQUE_5F_IDENTIFIER, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT, inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 288)).stringValue () ;
        index_15802_.increment () ;
        enumerator_15802.gotoNextObject () ;
      }
    }
    if (GALGAS_uint ((uint32_t) 6U).isValid ()) {
      result.incIndentation (- ((int32_t) GALGAS_uint ((uint32_t) 6U).uintValue ())) ;
    }
    result << "if (testForInputUTF32Char (TO_UNICODE ('\\0'))) { // End of source text \? \n"
      "        token.mTokenCode = kToken_ ; // Empty string code\n"
      "      }else{ // Unknown input character\n"
      "        unknownCharacterLexicalError (LINE_AND_SOURCE_FILE) ;\n"
      "        token.mTokenCode = -1 ; // No token\n"
      "        advance () ; // ... go throught unknown character\n"
      "      }\n"
      "    }catch (const C_lexicalErrorException &) {\n"
      "      token.mTokenCode = -1 ; // No token\n"
      "      advance () ; // ... go throught unknown character\n"
      "    }" ;
  }
  result << "\n"
    "  }\n"
    "  if (UNICODE_VALUE (mCurrentChar) == '\\0') {\n"
    "    token.mTokenCode = 0 ;\n"
    "    enterToken (token) ;\n"
    "  }\n"
    "  return token.mTokenCode > 0 ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                         E N T E R    T O K E N                                                                      *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << "::enterToken (cTokenFor_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " & ioToken) {\n"
    "  cTokenFor_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " * ptr = NULL ;\n"
    "  macroMyNew (ptr, cTokenFor_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " ()) ;\n"
    "  ptr->mTokenCode = ioToken.mTokenCode ;\n"
    "  ptr->mStartLocation = mTokenStartLocation ;\n"
    "  ptr->mEndLocation = mTokenEndLocation ;\n"
    "  ptr->mTemplateStringBeforeToken = ioToken.mTemplateStringBeforeToken ;\n"
    "  ioToken.mTemplateStringBeforeToken = \"\" ;\n" ;
  GALGAS_uint index_17389_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_17389 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_17389.hasCurrentObject ()) {
      result << "  ptr->mLexicalAttribute_" ;
      result << enumerator_17389.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 324)).stringValue () ;
      result << " = ioToken.mLexicalAttribute_" ;
      result << enumerator_17389.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 324)).stringValue () ;
      result << " ;\n" ;
      index_17389_.increment () ;
      enumerator_17389.gotoNextObject () ;
    }
  }
  result << "  enterTokenFromPointer (ptr) ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//               A T T R I B U T E   A C C E S S                                                                       *\n" ;
  GALGAS_uint index_17845_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_17845 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_17845.hasCurrentObject ()) {
      result << "//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n" ;
      result << extensionGetter_cppTypeName (enumerator_17845.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 334)).stringValue () ;
      result << " C_Lexique_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "::attributeValue_" ;
      result << enumerator_17845.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 334)).stringValue () ;
      result << " (void) const {\n"
        "  cTokenFor_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << " * ptr = (cTokenFor_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << " *) mCurrentTokenPtr ;\n"
        "  return ptr->mLexicalAttribute_" ;
      result << enumerator_17845.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 336)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n" ;
      index_17845_.increment () ;
      enumerator_17845.gotoNextObject () ;
    }
  }
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//         A S S I G N    F R O M    A T T R I B U T E                                                                 *\n" ;
  GALGAS_uint index_18592_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_18592 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_18592.hasCurrentObject ()) {
      result << "//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n"
        "GALGAS_l" ;
      result << extensionGetter_lexicalTypeBaseName (enumerator_18592.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 344)).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 344)).stringValue () ;
      result << " C_Lexique_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "::synthetizedAttribute_" ;
      result << enumerator_18592.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 344)).stringValue () ;
      result << " (void) const {\n"
        "  cTokenFor_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << " * ptr = (cTokenFor_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << " *) mCurrentTokenPtr ;\n"
        "  macroValidSharedObject (ptr, cTokenFor_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n"
        "  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;\n"
        "  GALGAS_" ;
      result << extensionGetter_lexicalTypeBaseName (enumerator_18592.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 348)).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 348)).stringValue () ;
      result << " value (ptr->mLexicalAttribute_" ;
      result << enumerator_18592.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 348)).stringValue () ;
      result << ") ;\n"
        "  GALGAS_l" ;
      result << extensionGetter_lexicalTypeBaseName (enumerator_18592.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 349)).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 349)).stringValue () ;
      result << " result (value, currentLocation) ;\n"
        "  return result ;\n"
        "}\n"
        "\n" ;
      index_18592_.increment () ;
      enumerator_18592.gotoNextObject () ;
    }
  }
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                         I N T R O S P E C T I O N                                                                   *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "GALGAS_stringlist C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << "::symbols (LOCATION_ARGS) {\n"
    "  GALGAS_stringlist result = GALGAS_stringlist::constructor_emptyList (THERE) ;\n" ;
  GALGAS_uint index_20077_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 359)).isValid ()) {
    cEnumerator_terminalList enumerator_20077 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 359)), kENUMERATION_UP) ;
    while (enumerator_20077.hasCurrentObject ()) {
      result << "  result.addAssign_operation (GALGAS_string (" ;
      result << enumerator_20077.current_mTerminalName (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 360)).stringValue () ;
      result << ") COMMA_THERE) ;\n" ;
      index_20077_.increment () ;
      enumerator_20077.gotoNextObject () ;
    }
  }
  result << "  return result ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "static void getKeywordLists_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " (TC_UniqueArray <C_String> & " ;
  const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 368)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_7) {
    result << "/* ioList */" ;
  }else if (kBoolFalse == test_7) {
    result << "ioList" ;
  }
  result << ") {\n" ;
  GALGAS_uint index_20531_ (0) ;
  if (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.isValid ()) {
    cEnumerator_lexicalExplicitTokenListMapMap enumerator_20531 (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_20531.hasCurrentObject ()) {
      result << "  ioList.appendObject (" ;
      result << in_LEXIQUE_5F_COMPONENT_5F_NAME.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 372)).add_operation (enumerator_20531.current_lkey (HERE).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 372)), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 372)).getter_utf_38_Representation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 372)).stringValue () ;
      result << ") ;\n" ;
      index_20531_.increment () ;
      enumerator_20531.gotoNextObject () ;
    }
  }
  result << "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "static void getKeywordsForIdentifier_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const C_String & " ;
  const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 378)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_8) {
    result << "/* inIdentifier */" ;
  }else if (kBoolFalse == test_8) {
    result << "inIdentifier" ;
  }
  result << ",\n"
    "     " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "bool & " ;
  const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 379)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_9) {
    result << "/* ioFound */" ;
  }else if (kBoolFalse == test_9) {
    result << "ioFound" ;
  }
  result << ",\n"
    "     " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "TC_UniqueArray <C_String> & " ;
  const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 380)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_10) {
    result << "/* ioList */" ;
  }else if (kBoolFalse == test_10) {
    result << "ioList" ;
  }
  result << ") {\n" ;
  GALGAS_uint index_21182_ (0) ;
  if (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.isValid ()) {
    cEnumerator_lexicalExplicitTokenListMapMap enumerator_21182 (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_21182.hasCurrentObject ()) {
      result << "  if (inIdentifier == " ;
      result << in_LEXIQUE_5F_COMPONENT_5F_NAME.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 384)).add_operation (enumerator_21182.current_lkey (HERE).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 384)), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 384)).getter_utf_38_Representation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 384)).stringValue () ;
      result << ") {\n"
        "    ioFound = true ;\n" ;
      GALGAS_uint index_21332_ (0) ;
      if (enumerator_21182.current_mTokenSortedList (HERE).isValid ()) {
        cEnumerator_tokenSortedlist enumerator_21332 (enumerator_21182.current_mTokenSortedList (HERE), kENUMERATION_UP) ;
        while (enumerator_21332.hasCurrentObject ()) {
          result << "    ioList.appendObject (" ;
          result << enumerator_21332.current_mName (HERE).getter_utf_38_Representation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 387)).stringValue () ;
          result << ") ;\n" ;
          index_21332_.increment () ;
          enumerator_21332.gotoNextObject () ;
        }
      }
      result << "    ioList.sortArrayUsingCompareMethod() ;\n"
        "  }\n" ;
      index_21182_.increment () ;
      enumerator_21182.gotoNextObject () ;
    }
  }
  result << "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "static cLexiqueIntrospection lexiqueIntrospection_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << "\n"
    "__attribute__ ((used))\n"
    "__attribute__ ((unused)) (getKeywordLists_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << ", getKeywordsForIdentifier_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//   S T Y L E   I N D E X    F O R    T E R M I N A L                                                                 *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "uint32_t C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << "::styleIndexForTerminal (const int32_t inTerminalIndex) const {\n"
    "  static const uint32_t kTerminalSymbolStyles [" ;
  result << in_TERMINAL_5F_LIST.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 405)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 405)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 405)).stringValue () ;
  result << "] = {0" ;
  GALGAS_uint index_22392_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    cEnumerator_terminalList enumerator_22392 (in_TERMINAL_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_22392.hasCurrentObject ()) {
      result << ",\n"
        "    " ;
      result << enumerator_22392.current_mStyleIndex (HERE).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 407)).stringValue () ;
      result << " /* " ;
      result << in_LEXIQUE_5F_COMPONENT_5F_NAME.stringValue () ;
      result << "_1_" ;
      result << enumerator_22392.current_mTerminalName (HERE).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 407)).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 407)).stringValue () ;
      result << " */" ;
      index_22392_.increment () ;
      enumerator_22392.gotoNextObject () ;
    }
  }
  result << "\n"
    "  } ;\n"
    "  return (inTerminalIndex >= 0) \? kTerminalSymbolStyles [inTerminalIndex] : 0 ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//   S T Y L E   N A M E    F O R    S T Y L E    I N D E X                                                            *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "C_String C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << "::styleNameForIndex (const uint32_t inStyleIndex) const {\n"
    "  C_String result ;\n"
    "  if (inStyleIndex < " ;
  result << in_LEXICAL_5F_STYLE_5F_LIST.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 418)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 418)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 418)).stringValue () ;
  result << ") {\n"
    "    static const char * kStyleArray [" ;
  result << in_LEXICAL_5F_STYLE_5F_LIST.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 419)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 419)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 419)).stringValue () ;
  result << "] = {\n"
    "      \"\"" ;
  GALGAS_uint index_23287_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    cEnumerator_lexicalStyleListAST enumerator_23287 (in_LEXICAL_5F_STYLE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_23287.hasCurrentObject ()) {
      result << ",\n"
        "      " ;
      result << enumerator_23287.current_mName (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 422)).stringValue () ;
      index_23287_.increment () ;
      enumerator_23287.gotoNextObject () ;
    }
  }
  result << "\n"
    "    } ;\n"
    "    result = kStyleArray [inStyleIndex] ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Filewrapper template 'lexiqueGenerationTemplates cocoaHeaderZone2'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_lexiqueGenerationTemplates_cocoaHeaderZone_32_ (C_Compiler * inCompiler,
                                                                                  const GALGAS_string & in_LEXIQUE_5F_CLASS_5F_NAME,
                                                                                  const GALGAS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT,
                                                                                  const GALGAS_lexicalFunctionListAST & in_UNICODE_5F_TEST_5F_FUNCTIONS
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "\n"
    "#import \"OC_Lexique.h\"\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//                    E X T E R N    R O U T I N E S                                                                   *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n" ;
  GALGAS_uint index_698_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mLexicalRoutineMessageMap (SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 10)).isValid ()) {
    cEnumerator_lexicalRoutineMap enumerator_698 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mLexicalRoutineMessageMap (SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 10)), kENUMERATION_UP) ;
    while (enumerator_698.hasCurrentObject ()) {
      const enumGalgasBool test_0 = enumerator_698.current_mIsExtern (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "\n"
          "void scanner_cocoa_routine_" ;
        result << enumerator_698.current_lkey (HERE).getter_string (SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 12)).stringValue () ;
        result << " (" ;
        columnMarker = result.currentColumn () ;
        result << "BOOL * ioScanningOk" ;
        GALGAS_uint index_852_ (0) ;
        if (enumerator_698.current_mLexicalRoutineFormalArgumentList (HERE).isValid ()) {
          cEnumerator_lexicalRoutineFormalArgumentList enumerator_852 (enumerator_698.current_mLexicalRoutineFormalArgumentList (HERE), kENUMERATION_UP) ;
          while (enumerator_852.hasCurrentObject ()) {
            result << ",\n"
              "                " ;
            result.appendSpacesUntilColumn (columnMarker) ;
            result << extensionGetter_cppConstInFormalArgument (enumerator_852.current_mLexicalFormalArgumentMode (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 14)).stringValue () ;
            result << extensionGetter_cocoaTypeName (enumerator_852.current_mLexicalFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 15)).stringValue () ;
            result << extensionGetter_cocoaPointerInFormalArgument (enumerator_852.current_mLexicalFormalArgumentMode (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 16)).stringValue () ;
            result << " " ;
            result << enumerator_852.current_mArgumentNameForComment (HERE).stringValue () ;
            index_852_.increment () ;
            enumerator_852.gotoNextObject () ;
          }
        }
        result << ") ;\n" ;
      }else if (kBoolFalse == test_0) {
      }
      index_698_.increment () ;
      enumerator_698.gotoNextObject () ;
    }
  }
  result << "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//                    E X T E R N    F U N C T I O N S                                                                 *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n" ;
  GALGAS_uint index_1865_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mLexicalFunctionMap (SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 29)).isValid ()) {
    cEnumerator_lexicalFunctionMap enumerator_1865 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mLexicalFunctionMap (SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 29)), kENUMERATION_UP) ;
    while (enumerator_1865.hasCurrentObject ()) {
      const enumGalgasBool test_1 = enumerator_1865.current_mIsExtern (HERE).boolEnum () ;
      if (kBoolTrue == test_1) {
        result << "\n" ;
        result << extensionGetter_cppTypeName (enumerator_1865.current_mReturnedLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 31)).stringValue () ;
        result << " scanner_cocoa_function_" ;
        result << enumerator_1865.current_lkey (HERE).getter_string (SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 31)).stringValue () ;
        result << " (" ;
        columnMarker = result.currentColumn () ;
        result << "BOOL * ioScanningOk" ;
        GALGAS_uint index_2036_ (0) ;
        if (enumerator_1865.current_mLexicalTypeList (HERE).isValid ()) {
          cEnumerator_lexicalFunctionFormalArgumentList enumerator_2036 (enumerator_1865.current_mLexicalTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_2036.hasCurrentObject ()) {
            result << ",\n"
              "                " ;
            result.appendSpacesUntilColumn (columnMarker) ;
            result << "const " ;
            result << extensionGetter_cppTypeName (enumerator_2036.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 33)).stringValue () ;
            result << " " ;
            result << enumerator_2036.current_mArgumentNameForComment (HERE).stringValue () ;
            index_2036_.increment () ;
            enumerator_2036.gotoNextObject () ;
          }
        }
        result << ") ;\n" ;
      }else if (kBoolFalse == test_1) {
      }
      index_1865_.increment () ;
      enumerator_1865.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//         T E R M I N A L    S Y M B O L    E N U M E R A T I O N                                                     *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "enum {" ;
  result << in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
  result << "_1_" ;
  GALGAS_uint index_2867_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 47)).isValid ()) {
    cEnumerator_terminalList enumerator_2867 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 47)), kENUMERATION_UP) ;
    while (enumerator_2867.hasCurrentObject ()) {
      result << ",\n"
        "  " ;
      result << in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
      result << "_1_" ;
      result << enumerator_2867.current_mTerminalName (HERE).getter_string (SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 48)).getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 48)).stringValue () ;
      index_2867_.increment () ;
      enumerator_2867.gotoNextObject () ;
    }
  }
  result << "\n"
    "} ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//        U N I C O D E    T E S T    F U N C T I O N S                                                                *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  GALGAS_uint index_3623_ (0) ;
  if (in_UNICODE_5F_TEST_5F_FUNCTIONS.isValid ()) {
    cEnumerator_lexicalFunctionListAST enumerator_3623 (in_UNICODE_5F_TEST_5F_FUNCTIONS, kENUMERATION_UP) ;
    while (enumerator_3623.hasCurrentObject ()) {
      result << "bool " ;
      result << enumerator_3623.current_mFunctionName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 60)).stringValue () ;
      result << " (const utf32 inUnicodeCharacter) ;\n"
        "\n" ;
      index_3623_.increment () ;
      enumerator_3623.gotoNextObject () ;
    }
  }
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//                     S C A N N E R    C L A S S                                                                      *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "@interface OC_Lexique_" ;
  result << in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
  result << " : OC_Lexique {\n"
    "//--- Attributes\n" ;
  GALGAS_uint index_4467_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mLexicalAttributeMap (SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 71)).isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_4467 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mLexicalAttributeMap (SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 71)), kENUMERATION_UP) ;
    while (enumerator_4467.hasCurrentObject ()) {
      result << "  @private " ;
      result << extensionGetter_cocoaTypeName (enumerator_4467.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 72)).stringValue () ;
      result << " mLexicalAttribute_" ;
      result << enumerator_4467.current_lkey (HERE).getter_string (SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 72)).stringValue () ;
      result << " ;\n" ;
      index_4467_.increment () ;
      enumerator_4467.gotoNextObject () ;
    }
  }
  result << "\n"
    "}\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Filewrapper template 'lexiqueGenerationTemplates cocoaHeaderZone3'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_lexiqueGenerationTemplates_cocoaHeaderZone_33_ (C_Compiler * /* inCompiler */,
                                                                                  const GALGAS_string & /* in_LEXIQUE_5F_CLASS_5F_NAME */,
                                                                                  const GALGAS_lexiqueAnalysisContext & /* in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "\n"
    "- (NSUInteger) terminalVocabularyCount ;\n"
    "\n"
    "- (NSUInteger) styleIndexForTerminal: (NSInteger) inTerminal ;\n"
    "\n"
    "- (void) parseLexicalTokenForLexicalColoring ;\n"
    "\n"
    "- (NSUInteger) styleCount ;\n"
    "\n"
    "- (NSString *) styleNameForStyleIndex: (NSInteger) inIndex ;\n"
    "\n"
    "- (NSString *) styleIdentifierForStyleIndex: (NSInteger) inIndex ;\n"
    "\n"
    "- (NSString *) indexingDirectory ;\n"
    "\n"
    "- (NSArray *) indexingTitles ; // Array of NSString\n"
    "\n"
    "- (BOOL) isTemplateLexique ;\n"
    "\n"
    "- (BOOL) atomicSelectionForToken: (NSUInteger) inTokenIndex ;\n"
    "\n"
    "@end\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Filewrapper template 'lexiqueGenerationTemplates cocoaImplementationZone2'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_lexiqueGenerationTemplates_cocoaImplementationZone_32_ (C_Compiler * inCompiler,
                                                                                          const GALGAS_string & in_LEXIQUE_5F_HEADER_5F_FILE_5F_NAME,
                                                                                          const GALGAS_string & in_LEXIQUE_5F_CLASS_5F_NAME,
                                                                                          const GALGAS_lexicalAttributeMap & in_LEXICAL_5F_ATTRIBUTE_5F_MAP,
                                                                                          const GALGAS_lexicalMessageMap & /* in_LEXICAL_5F_MESSAGE_5F_MAP */,
                                                                                          const GALGAS_terminalList & /* in_TERMINAL_5F_LIST */,
                                                                                          const GALGAS_stringset & /* in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES */,
                                                                                          const GALGAS_lexicalRuleListAST & in_LEXICAL_5F_RULE_5F_LIST,
                                                                                          const GALGAS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT,
                                                                                          const GALGAS_templateReplacementListAST & in_TEMPLATE_5F_REPLACEMENT_5F_LIST,
                                                                                          const GALGAS_string & in_INDEXING_5F_DIRECTORY,
                                                                                          const GALGAS_indexingListAST & in_INDEXING_5F_LIST,
                                                                                          const GALGAS_lexicalStyleListAST & in_LEXICAL_5F_STYLE_5F_LIST,
                                                                                          const GALGAS_metamodelTemplateDelimitorListAST & in_TEMPLATE_5F_DELIMITOR_5F_LIST,
                                                                                          const GALGAS_lexicalFunctionListAST & in_UNICODE_5F_TEST_5F_FUNCTIONS
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "\n"
    "#import \"" ;
  result << in_LEXIQUE_5F_HEADER_5F_FILE_5F_NAME.stringValue () ;
  result << ".h\"\n"
    "#import \"PMDebug.h\"\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//            Unicode test functions                                                                                   *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    " \n" ;
  GALGAS_uint index_463_ (0) ;
  if (in_UNICODE_5F_TEST_5F_FUNCTIONS.isValid ()) {
    cEnumerator_lexicalFunctionListAST enumerator_463 (in_UNICODE_5F_TEST_5F_FUNCTIONS, kENUMERATION_UP) ;
    while (enumerator_463.hasCurrentObject ()) {
      result << "bool " ;
      result << enumerator_463.current_mFunctionName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 10)).stringValue () ;
      result << " (const utf32 inUnicodeCharacter) {\n"
        "  return " ;
      result << callExtensionGetter_generateForUnicodeTestFunctions ((const cPtr_lexicalFunctionExpressionAST *) enumerator_463.current_mLexicalExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 11)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n" ;
      index_463_.increment () ;
      enumerator_463.gotoNextObject () ;
    }
  }
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "@implementation OC_Lexique_" ;
  result << in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
  result << "\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//                           Template Replacements                                                                     *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 24)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "static NSArray * kTemplateReplacementArray_" ;
    result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 25)).stringValue () ;
    result << " ; // Of NSString \n" ;
  }else if (kBoolFalse == test_0) {
  }
  result << "\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//                           Template Delimiters                                                                       *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTemplateDelimitorList (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 34)).getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 34)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    result << "static NSArray * kTemplateDefinitionArray_" ;
    result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 35)).stringValue () ;
    result << " ;\n" ;
  }else if (kBoolFalse == test_1) {
  }
  result << "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "- (instancetype) init {\n"
    "  self = [super init] ;\n"
    "  if (self) {\n"
    "    noteObjectAllocation (self) ;\n" ;
  GALGAS_uint index_2632_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_2632 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_2632.hasCurrentObject ()) {
      result << "    mLexicalAttribute_" ;
      result << enumerator_2632.current_lkey (HERE).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 45)).stringValue () ;
      result << " = " ;
      result << extensionGetter_cocoaInitializationCode (enumerator_2632.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 45)).stringValue () ;
      result << " ;\n" ;
      index_2632_.increment () ;
      enumerator_2632.gotoNextObject () ;
    }
  }
  result << "  }\n" ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTemplateDelimitorList (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 48)).getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 48)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_2) {
    result << "  if (nil == kTemplateDefinitionArray_" ;
    result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 49)).stringValue () ;
    result << ") {\n"
      "    kTemplateDefinitionArray_" ;
    result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 50)).stringValue () ;
    result << " = [NSArray arrayWithObjects:\n" ;
    GALGAS_uint index_3081_ (0) ;
    if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTemplateDelimitorList (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 51)).isValid ()) {
      cEnumerator_templateDelimitorList enumerator_3081 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTemplateDelimitorList (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 51)), kENUMERATION_UP) ;
      while (enumerator_3081.hasCurrentObject ()) {
        result << "      [[OC_GGS_TemplateDelimiter alloc] initWithStartString:@" ;
        result << enumerator_3081.current_mStartString (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 52)).stringValue () ;
        result << " endString:" ;
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_3081.current_mEndString (HERE).getter_string (HERE).getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 53)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_3) {
          result << "nil" ;
        }else if (kBoolFalse == test_3) {
          result << "@" ;
          result << enumerator_3081.current_mEndString (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 56)).stringValue () ;
        }
        result << " discardStartString:" ;
        result << enumerator_3081.current_mPreservesStartDelimiter (HERE).operator_not (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 59)).getter_ocString (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 59)).stringValue () ;
        result << "],\n" ;
        index_3081_.increment () ;
        enumerator_3081.gotoNextObject () ;
      }
    }
    result << "      nil\n"
      "    ] ;\n"
      "  }\n" ;
  }else if (kBoolFalse == test_2) {
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 66)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_4) {
    result << "  if (nil == kTemplateReplacementArray_" ;
    result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 67)).stringValue () ;
    result << ") {\n"
      "\n"
      "    kTemplateReplacementArray_" ;
    result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 68)).stringValue () ;
    result << " = [NSArray arrayWithObjects:\n" ;
    GALGAS_uint index_3756_ (0) ;
    if (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.isValid ()) {
      cEnumerator_templateReplacementListAST enumerator_3756 (in_TEMPLATE_5F_REPLACEMENT_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_3756.hasCurrentObject ()) {
        result << "      @" ;
        result << enumerator_3756.current_mMatchString (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 70)).stringValue () ;
        result << ", " ;
        index_3756_.increment () ;
        enumerator_3756.gotoNextObject () ;
      }
    }
    result << "      nil\n"
      "    ] ;\n"
      "  }\n" ;
  }else if (kBoolFalse == test_4) {
  }
  result << "  return self ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "- (void) FINALIZE_OR_DEALLOC {\n"
    "  noteObjectDeallocation (self) ;\n"
    "  macroSuperFinalize ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//                 I N D E X I N G    D I R E C T O R Y                                                                *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "- (NSString *) indexingDirectory {\n"
    "  return @" ;
  result << in_INDEXING_5F_DIRECTORY.getter_utf_38_Representation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 93)).stringValue () ;
  result << " ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//                 I N D E X I N G    T I T L E S                                                                      *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "- (NSArray *) indexingTitles { // Array of NSString\n" ;
  const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, in_INDEXING_5F_LIST.getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 104)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_5) {
    result << "  return [NSArray arrayWithObjects:\n" ;
    GALGAS_uint index_5555_ (0) ;
    if (in_INDEXING_5F_LIST.isValid ()) {
      cEnumerator_indexingListAST enumerator_5555 (in_INDEXING_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_5555.hasCurrentObject ()) {
        result << "    @" ;
        result << enumerator_5555.current_mIndexComment (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 108)).stringValue () ;
        result << ",\n" ;
        index_5555_.increment () ;
        enumerator_5555.gotoNextObject () ;
      }
    }
    result << "    NULL\n"
      "  ] ;\n" ;
  }else if (kBoolFalse == test_5) {
    result << "\n"
      "  return [NSArray array] ;\n" ;
  }
  result << "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//            Terminal Symbols as end of script in template mark                                                       *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 125)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_6) {
    GALGAS_uint index_6570_ (0) ;
    if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 126)).isValid ()) {
      cEnumerator_terminalList enumerator_6570 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 126)), kENUMERATION_UP) ;
      const bool nonEmpty_enumerator_6570 = enumerator_6570.hasCurrentObject () ;
      if (nonEmpty_enumerator_6570) {
        result << "static const BOOL kEndOfScriptInTemplateArray_" ;
        result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 127)).stringValue () ;
        result << " [" ;
        result << in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 127)).getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 127)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 127)).stringValue () ;
        result << "] = {\n" ;
      }
      while (enumerator_6570.hasCurrentObject ()) {
        result << "  " ;
        result << enumerator_6570.current_mIsEndOfTemplateMark (HERE).getter_ocString (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 128)).stringValue () ;
        result << " /* " ;
        result << enumerator_6570.current_mTerminalName (HERE).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 128)).stringValue () ;
        result << " */" ;
        if (enumerator_6570.hasNextObject ()) {
          result << ",\n" ;
        }
        index_6570_.increment () ;
        enumerator_6570.gotoNextObject () ;
      }
      if (nonEmpty_enumerator_6570) {
        result << "\n"
          "} ;\n" ;
      }
    }
  }else if (kBoolFalse == test_6) {
  }
  result << "\n"
    "\n" ;
  GALGAS_uint index_6778_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mLexicalTokenListMap (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 136)).isValid ()) {
    cEnumerator_lexicalExplicitTokenListMapMap enumerator_6778 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mLexicalTokenListMap (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 136)), kENUMERATION_UP) ;
    while (enumerator_6778.hasCurrentObject ()) {
      const enumGalgasBool test_7 = enumerator_6778.current_mShouldBeGenerated (HERE).boolEnum () ;
      if (kBoolTrue == test_7) {
        result << "//---------------------------------------------------------------------------------------------------------------------*\n"
          "//                                                                                                                     *\n"
          "//             Key words table '" ;
        result << enumerator_6778.current_lkey (HERE).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 140)).stringValue () ;
        result << "'                            *\n"
          "//                                                                                                                     *\n"
          "//---------------------------------------------------------------------------------------------------------------------*\n"
          "\n"
          "static const C_cocoa_lexique_table_entry ktable_for_" ;
        result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 143)).stringValue () ;
        result << "_" ;
        result << enumerator_6778.current_lkey (HERE).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 143)).stringValue () ;
        result << " [" ;
        result << enumerator_6778.current_mExplicitTokenListMap (HERE).getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 143)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 143)).stringValue () ;
        result << "] = {\n" ;
        GALGAS_uint index_7696_ (0) ;
        if (enumerator_6778.current_mTokenSortedList (HERE).isValid ()) {
          cEnumerator_tokenSortedlist enumerator_7696 (enumerator_6778.current_mTokenSortedList (HERE), kENUMERATION_UP) ;
          while (enumerator_7696.hasCurrentObject ()) {
            result << "  {" ;
            result << enumerator_7696.current_mName (HERE).getter_utf_38_Representation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 145)).stringValue () ;
            result << ", " ;
            result << in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
            result << "_1_" ;
            result << enumerator_7696.current_mTerminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 145)).stringValue () ;
            result << "}" ;
            if (enumerator_7696.hasNextObject ()) {
              result << ",\n" ;
            }
            index_7696_.increment () ;
            enumerator_7696.gotoNextObject () ;
          }
        }
        result << "\n"
          "} ;\n"
          "\n"
          "static NSInteger search_into_" ;
        result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 149)).stringValue () ;
        result << "_" ;
        result << enumerator_6778.current_lkey (HERE).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 149)).stringValue () ;
        result << " (NSString * inSearchedString) {\n"
          "  return searchStringInTable (inSearchedString, ktable_for_" ;
        result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 150)).stringValue () ;
        result << "_" ;
        result << enumerator_6778.current_lkey (HERE).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 150)).stringValue () ;
        result << ", " ;
        result << enumerator_6778.current_mExplicitTokenListMap (HERE).getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 150)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 150)).stringValue () ;
        result << ") ;\n"
          "}\n"
          "\n" ;
      }else if (kBoolFalse == test_7) {
      }
      index_6778_.increment () ;
      enumerator_6778.gotoNextObject () ;
    }
  }
  result << "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//               P A R S E    L E X I C A L    T O K E N                                                               *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "- (void) parseLexicalTokenForLexicalColoring {\n"
    "  mLoop = YES ;\n"
    "  BOOL scanningOk = YES ;\n"
    "  mTokenCode = 0 ;\n"
    "  while ((mTokenCode == 0) && (mCurrentChar != '\\0')) {\n"
    "    mTokenStartLocation = mCurrentLocation ;\n" ;
  const enumGalgasBool test_8 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 168)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_8) {
    result << "    if ((mMatchedTemplateDelimiterIndex >= 0) && ([[kTemplateDefinitionArray_" ;
    result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 169)).stringValue () ;
    result << " objectAtIndex:(NSUInteger) mMatchedTemplateDelimiterIndex] startString].length > 0)) {\n"
      "      const BOOL foundEndDelimitor = [self testForInputString:[[kTemplateDefinitionArray_" ;
    result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 170)).stringValue () ;
    result << " objectAtIndex:(NSUInteger) mMatchedTemplateDelimiterIndex] endString] advance:YES] ;\n"
      "      if (foundEndDelimitor) {\n"
      "        mMatchedTemplateDelimiterIndex = -1 ;\n"
      "      }\n"
      "    }\n"
      "    while ((mMatchedTemplateDelimiterIndex < 0) && (mCurrentChar != '\\0')) {\n"
      "      " ;
    const enumGalgasBool test_9 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 176)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_9) {
      result << "\n"
        "      [self searchForReplacementPattern:kTemplateReplacementArray_" ;
      result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 177)).stringValue () ;
      result << "] ;\n"
        "      " ;
    }else if (kBoolFalse == test_9) {
    }
    result << "\n"
      "      mMatchedTemplateDelimiterIndex = [self findTemplateDelimiterIndex:kTemplateDefinitionArray_" ;
    result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 179)).stringValue () ;
    result << "] ;\n"
      "      if (mMatchedTemplateDelimiterIndex < 0) {\n"
      "        [self advance] ;\n"
      "        mTokenCode = -2 ;\n"
      "      }\n"
      "    }\n"
      "    if ((mMatchedTemplateDelimiterIndex >= 0) && (mTokenCode == 0) && (mCurrentChar != '\\0') && scanningOk) {\n" ;
    GALGAS_uint index_10295_ (0) ;
    if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
      cEnumerator_lexicalAttributeMap enumerator_10295 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kENUMERATION_UP) ;
      while (enumerator_10295.hasCurrentObject ()) {
        result << "      " ;
        result << extensionGetter_cocoaResetPrefix (enumerator_10295.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 187)).stringValue () ;
        result << "mLexicalAttribute_" ;
        result << enumerator_10295.current_lkey (HERE).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 187)).stringValue () ;
        result << extensionGetter_cocoaReset (enumerator_10295.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 187)).stringValue () ;
        result << " ;\n" ;
        index_10295_.increment () ;
        enumerator_10295.gotoNextObject () ;
      }
    }
    result << "      mTokenStartLocation = mCurrentLocation ;\n" ;
    if (GALGAS_uint ((uint32_t) 6U).isValid ()) {
      result.incIndentation ((int32_t) GALGAS_uint ((uint32_t) 6U).uintValue ()) ;
    }
    GALGAS_uint index_10511_ (0) ;
    if (in_LEXICAL_5F_RULE_5F_LIST.isValid ()) {
      cEnumerator_lexicalRuleListAST enumerator_10511 (in_LEXICAL_5F_RULE_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_10511.hasCurrentObject ()) {
        result << callExtensionGetter_generateCocoaCode ((const cPtr_abstractLexicalRuleAST *) enumerator_10511.current_mLexicalRule (HERE).ptr (), in_LEXIQUE_5F_CLASS_5F_NAME, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT, inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 193)).stringValue () ;
        index_10511_.increment () ;
        enumerator_10511.gotoNextObject () ;
      }
    }
    if (GALGAS_uint ((uint32_t) 6U).isValid ()) {
      result.incIndentation (- ((int32_t) GALGAS_uint ((uint32_t) 6U).uintValue ())) ;
    }
    result << "if ([self testForInputChar:'\\0']) { // End of source text \? \n"
      "        mTokenCode = " ;
    result << in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
    result << "_1_ ; // Empty string code\n"
      "      }else{ // Unknown input character\n"
      "        scanningOk = NO ;\n"
      "      }\n"
      "    }\n"
      "    if ((mTokenCode > 0) && kEndOfScriptInTemplateArray_" ;
    result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 202)).stringValue () ;
    result << " [mTokenCode - 1]) {\n"
      "      mMatchedTemplateDelimiterIndex = -1 ;\n"
      "    }\n"
      "  //--- Error \?\n"
      "    if (! scanningOk) {\n"
      "      mTokenCode = -1 ;\n"
      "      [self advance] ;\n"
      "    }" ;
  }else if (kBoolFalse == test_8) {
    GALGAS_uint index_11132_ (0) ;
    if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
      cEnumerator_lexicalAttributeMap enumerator_11132 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kENUMERATION_UP) ;
      while (enumerator_11132.hasCurrentObject ()) {
        result << "    " ;
        result << extensionGetter_cocoaResetPrefix (enumerator_11132.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 211)).stringValue () ;
        result << "mLexicalAttribute_" ;
        result << enumerator_11132.current_lkey (HERE).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 211)).stringValue () ;
        result << extensionGetter_cocoaReset (enumerator_11132.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 211)).stringValue () ;
        result << " ;\n" ;
        index_11132_.increment () ;
        enumerator_11132.gotoNextObject () ;
      }
    }
    result << "    mTokenStartLocation = mCurrentLocation ;\n" ;
    if (GALGAS_uint ((uint32_t) 4U).isValid ()) {
      result.incIndentation ((int32_t) GALGAS_uint ((uint32_t) 4U).uintValue ()) ;
    }
    GALGAS_uint index_11344_ (0) ;
    if (in_LEXICAL_5F_RULE_5F_LIST.isValid ()) {
      cEnumerator_lexicalRuleListAST enumerator_11344 (in_LEXICAL_5F_RULE_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_11344.hasCurrentObject ()) {
        result << callExtensionGetter_generateCocoaCode ((const cPtr_abstractLexicalRuleAST *) enumerator_11344.current_mLexicalRule (HERE).ptr (), in_LEXIQUE_5F_CLASS_5F_NAME, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT, inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 217)).stringValue () ;
        index_11344_.increment () ;
        enumerator_11344.gotoNextObject () ;
      }
    }
    if (GALGAS_uint ((uint32_t) 4U).isValid ()) {
      result.incIndentation (- ((int32_t) GALGAS_uint ((uint32_t) 4U).uintValue ())) ;
    }
    result << "if ([self testForInputChar:'\\0']) { // End of source text \? \n"
      "      mTokenCode = " ;
    result << in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
    result << "_1_ ; // Empty string code\n"
      "    }else{ // Unknown input character\n"
      "      scanningOk = NO ;\n"
      "      [self advance] ;\n"
      "    }\n"
      "  //--- Error \?\n"
      "    if (! scanningOk) {\n"
      "      mTokenCode = -1 ;\n"
      "    }" ;
  }
  result << "\n"
    "  }\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//                   T E R M I N A L    C O U N T                                                                      *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "- (NSUInteger) terminalVocabularyCount {\n"
    "  return " ;
  result << in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 240)).getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 240)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 240)).stringValue () ;
  result << " ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//                     S T Y L E   C O U N T                                                                           *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "- (NSUInteger) styleCount {\n"
    "  return " ;
  result << in_LEXICAL_5F_STYLE_5F_LIST.getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 250)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 250)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 250)).stringValue () ;
  result << " ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//                I S    T E M P L A T E    L E X I Q U E                                                              *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "- (BOOL) isTemplateLexique {\n"
    "  return " ;
  result << GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 260)).objectCompare (GALGAS_uint ((uint32_t) 0U))).getter_ocString (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 260)).stringValue () ;
  result << " ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//   S T Y L E   I N D E X    F O R    T E R M I N A L                                                                 *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "- (NSUInteger) styleIndexForTerminal: (NSInteger) inTerminal {\n"
    "  static const NSUInteger kTerminalSymbolStyles [" ;
  result << in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 270)).getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 270)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 270)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 270)).stringValue () ;
  result << "] = {0" ;
  GALGAS_uint index_14706_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 271)).isValid ()) {
    cEnumerator_terminalList enumerator_14706 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 271)), kENUMERATION_UP) ;
    while (enumerator_14706.hasCurrentObject ()) {
      result << ",\n"
        "    " ;
      result << enumerator_14706.current_mStyleIndex (HERE).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 272)).stringValue () ;
      result << " /* " ;
      result << in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
      result << "_1_" ;
      result << enumerator_14706.current_mTerminalName (HERE).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 272)).getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 272)).stringValue () ;
      result << " */" ;
      index_14706_.increment () ;
      enumerator_14706.gotoNextObject () ;
    }
  }
  result << "\n"
    "  } ;\n"
    "  return kTerminalSymbolStyles [inTerminal] ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//    A T O M I C    S E L E C T I O N   F O R    T E R M I N A L                                                      *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "- (BOOL) atomicSelectionForToken: (NSUInteger) inTokenIndex {\n"
    "  static const BOOL kTerminalAtomicSelection [" ;
  result << in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 284)).getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 284)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 284)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 284)).stringValue () ;
  result << "] = {NO" ;
  GALGAS_uint index_15727_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 285)).isValid ()) {
    cEnumerator_terminalList enumerator_15727 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 285)), kENUMERATION_UP) ;
    while (enumerator_15727.hasCurrentObject ()) {
      result << ",\n"
        "    " ;
      result << enumerator_15727.current_mAtomicSelection (HERE).getter_ocString (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 286)).stringValue () ;
      result << " /* " ;
      result << in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
      result << "_1_" ;
      result << enumerator_15727.current_mTerminalName (HERE).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 286)).getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 286)).stringValue () ;
      result << " */" ;
      index_15727_.increment () ;
      enumerator_15727.gotoNextObject () ;
    }
  }
  result << "\n"
    "  } ;\n"
    "  return kTerminalAtomicSelection [inTokenIndex] ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//             S T Y L E   N A M E    F O R    I N D E X                                                               *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "- (NSString *) styleNameForStyleIndex: (NSInteger) inIndex {\n"
    "  NSString * result = nil ;\n"
    "  if ((inIndex >= 0) && (inIndex < " ;
  result << in_LEXICAL_5F_STYLE_5F_LIST.getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 299)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 299)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 299)).stringValue () ;
  result << ")) {\n"
    "    NSString * kStyleArray [" ;
  result << in_LEXICAL_5F_STYLE_5F_LIST.getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 300)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 300)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 300)).stringValue () ;
  result << "] = {\n"
    "      @\"Default Style\"" ;
  GALGAS_uint index_16829_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    cEnumerator_lexicalStyleListAST enumerator_16829 (in_LEXICAL_5F_STYLE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_16829.hasCurrentObject ()) {
      result << ",\n"
        "      @" ;
      result << enumerator_16829.current_mComment (HERE).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 303)).getter_utf_38_Representation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 303)).stringValue () ;
      index_16829_.increment () ;
      enumerator_16829.gotoNextObject () ;
    }
  }
  result << "\n"
    "    } ;\n"
    "    result = kStyleArray [inIndex] ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//         S T Y L E   I D E N T I F I E R    F O R    I N D E X                                                       *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "- (NSString *) styleIdentifierForStyleIndex: (NSInteger) inIndex {\n"
    "  NSString * result = nil ;\n"
    "  if ((inIndex >= 0) && (inIndex < " ;
  result << in_LEXICAL_5F_STYLE_5F_LIST.getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 318)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 318)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 318)).stringValue () ;
  result << ")) {\n"
    "    NSString * kStyleArray [" ;
  result << in_LEXICAL_5F_STYLE_5F_LIST.getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 319)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 319)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 319)).stringValue () ;
  result << "] = {\n"
    "      @\"" ;
  result << in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
  result << "\"" ;
  GALGAS_uint index_17884_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    cEnumerator_lexicalStyleListAST enumerator_17884 (in_LEXICAL_5F_STYLE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_17884.hasCurrentObject ()) {
      result << ",\n"
        "      @\"" ;
      result << in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
      result << "-" ;
      result << enumerator_17884.current_mName (HERE).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 322)).stringValue () ;
      result << "\"" ;
      index_17884_.increment () ;
      enumerator_17884.gotoNextObject () ;
    }
  }
  result << "\n"
    "    } ;\n"
    "    result = kStyleArray [inIndex] ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//         L E X I Q U E   I D E N T I F I E R                                                                         *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "- (NSString *) lexiqueIdentifier {\n"
    "  return @\"" ;
  result << in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
  result << "\" ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "@end\n"
    "\n" ;
  return GALGAS_string (result) ;
}

